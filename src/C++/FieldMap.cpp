/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FieldMap.h"
#include <algorithm>
#include <deque>
#include <iterator>

namespace FIX {

FieldMap::FieldMap(const message_order &order, int size)
    : m_order(order) {
  m_fields.reserve(size);
}

FieldMap::FieldMap(const message_order &order /*= message_order(message_order::normal)*/)
    : m_order(order) {
  m_fields.reserve(DEFAULT_SIZE);
}

FieldMap::FieldMap(const int order[])
    : m_order(message_order(order)) {
  m_fields.reserve(DEFAULT_SIZE);
}

FieldMap::FieldMap(const FieldMap &copy) { *this = copy; }

FieldMap::FieldMap(FieldMap &&rhs)
    : m_fields(std::move(rhs.m_fields)),
      m_groups(std::move(rhs.m_groups)),
      m_order(std::move(rhs.m_order)) {}

FieldMap::~FieldMap() { clear(); }

FieldMap &FieldMap::operator=(const FieldMap &rhs) {
  clear();

  m_fields = rhs.m_fields;
  m_order = rhs.m_order;

  for (auto const &tagWithGroups : rhs.m_groups) {
    for (auto const &group : tagWithGroups.second) {
      m_groups[tagWithGroups.first].push_back(new FieldMap(*group));
    }
  }

  return *this;
}

FieldMap &FieldMap::operator=(FieldMap &&rhs) {
  m_fields = std::move(rhs.m_fields);
  m_groups = std::move(rhs.m_groups);
  m_order = std::move(rhs.m_order);
  return *this;
}

void FieldMap::addGroup(int field, const FieldMap &group, bool setCount) {
  FieldMap *pGroup = new FieldMap(group);

  addGroupPtr(field, pGroup, setCount);
}

void FieldMap::addGroupPtr(int tag, FieldMap *group, bool setCount) {
  if (group == 0) {
    return;
  }

  std::vector<FieldMap *> &groups = m_groups[tag];
  groups.push_back(group);

  if (setCount) {
    setField(IntField(tag, (int)groups.size()));
  }
}

void FieldMap::replaceGroup(int num, int tag, const FieldMap &group) {
  Groups::const_iterator tagWithGroups = m_groups.find(tag);
  if (tagWithGroups == m_groups.end()) {
    return;
  }
  if (num <= 0) {
    return;
  }
  if (tagWithGroups->second.size() < static_cast<unsigned>(num)) {
    return;
  }
  *(*(tagWithGroups->second.begin() + (num - 1))) = group;
}

void FieldMap::removeGroup(int num, int tag) {
  Groups::iterator tagWithGroups = m_groups.find(tag);
  if (tagWithGroups == m_groups.end()) {
    return;
  }
  if (num <= 0) {
    return;
  }
  std::vector<FieldMap *> &groups = tagWithGroups->second;
  if (groups.size() < static_cast<unsigned>(num)) {
    return;
  }

  std::vector<FieldMap *>::iterator group = groups.begin();
  std::advance(group, (num - 1));

  delete (*group);
  groups.erase(group);

  if (groups.size() == 0) {
    m_groups.erase(tagWithGroups);
    removeField(tag);
  } else {
    IntField groupCount(tag, (int)groups.size());
    setField(groupCount);
  }
}

void FieldMap::removeGroup(int tag) {
  Groups::iterator tagWithGroups = m_groups.find(tag);
  if (tagWithGroups == m_groups.end()) {
    return;
  }

  std::vector<FieldMap *> toDelete;
  toDelete.swap(tagWithGroups->second);

  m_groups.erase(tagWithGroups);

  std::for_each(toDelete.begin(), toDelete.end(), [](FieldMap *group) { delete group; });

  removeField(tag);
}

void FieldMap::removeField(int tag) {
  Fields::iterator field = findTag(tag);
  if (field != m_fields.end()) {
    m_fields.erase(field);
    removeGroup(tag);
  }
}

bool FieldMap::hasGroup(int num, int tag) const { return (int)groupCount(tag) >= num; }

bool FieldMap::hasGroup(int tag) const { return m_groups.find(tag) != m_groups.end(); }

size_t FieldMap::groupCount(int tag) const {
  Groups::const_iterator tagWithGroups = m_groups.find(tag);
  return tagWithGroups == m_groups.end() ? 0 : tagWithGroups->second.size();
}

void FieldMap::clear() {
  m_fields.clear();

  for (auto const &tagWithGroups : m_groups) {
    for (auto const &group : tagWithGroups.second) {
      delete group;
    }
  }

  m_groups.clear();
}

bool FieldMap::isEmpty() { return m_fields.empty(); }

size_t FieldMap::totalFields() const {
  size_t result = m_fields.size();

  for (auto const &tagWithGroups : m_groups) {
    for (auto const &group : tagWithGroups.second) {
      result += group->totalFields();
    }
  }
  return result;
}

std::string &FieldMap::calculateString(std::string &result) const {
  for (auto const &field : m_fields) {
    result += field.getFixString();

    // add groups if they exist
    if (!m_groups.size()) {
      continue;
    }

    Groups::const_iterator tagWithGroups = m_groups.find(field.getTag());
    if (tagWithGroups == m_groups.end()) {
      continue;
    }

    for (auto const &group : tagWithGroups->second) {
      group->calculateString(result);
    }
  }
  return result;
}

int FieldMap::calculateLength(int beginStringField, int bodyLengthField, int checkSumField) const {
  int result = 0;

  for (auto const &field : m_fields) {
    const int tag = field.getTag();
    if (tag != beginStringField && tag != bodyLengthField && tag != checkSumField) {
      result += field.getLength();
    }
  }

  for (auto const &tagWithGroups : m_groups) {
    for (auto const &group : tagWithGroups.second) {
      result += group->calculateLength();
    }
  }
  return result;
}

int FieldMap::calculateTotal(int checkSumField) const {
  int result = 0;

  for (auto const &field : m_fields) {
    if (field.getTag() != checkSumField) {
      result += field.getTotal();
    }
  }

  for (auto const &tagWithGroups : m_groups) {
    for (auto const &group : tagWithGroups.second) {
      result += group->calculateTotal();
    }
  }
  return result;
}

} // namespace FIX
