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

#include "SessionSettings.h"
#include "Settings.h"
#include "Values.h"
#include <fstream>

namespace FIX {
SessionSettings::SessionSettings(std::istream &stream, bool resolveEnvVars) EXCEPT(ConfigError)
    : m_resolveEnvVars(resolveEnvVars) {
  stream >> *this;
}

SessionSettings::SessionSettings(const std::string &file, bool resolveEnvVars) EXCEPT(ConfigError)
    : m_resolveEnvVars(resolveEnvVars) {
  std::ifstream fstream(file.c_str());
  if (!fstream.is_open()) {
    throw ConfigError(("File " + file + " not found").c_str());
  }
  fstream >> *this;
}

std::istream &operator>>(std::istream &stream, SessionSettings &s) EXCEPT(ConfigError) {
  Settings settings(s.m_resolveEnvVars);
  stream >> settings;

  Settings::Sections section;

  section = settings.get("DEFAULT");
  Dictionary def;
  if (section.size()) {
    def = section[0];
  }
  s.set(def);

  section = settings.get("SESSION");
  Settings::Sections::size_type session;
  Dictionary dict;

  for (session = 0; session < section.size(); ++session) {
    dict = section[session];
    dict.merge(def);

    BeginString beginString(dict.getString(BEGINSTRING));
    SenderCompID senderCompID(dict.getString(SENDERCOMPID));
    TargetCompID targetCompID(dict.getString(TARGETCOMPID));

    std::string sessionQualifier;
    if (dict.has(SESSION_QUALIFIER)) {
      sessionQualifier = dict.getString(SESSION_QUALIFIER);
    }
    SessionID sessionID(beginString, senderCompID, targetCompID, sessionQualifier);
    s.set(sessionID, dict);
  }
  return stream;
}

std::ostream &operator<<(std::ostream &stream, const SessionSettings &sessionSettings) {
  const Dictionary &defaults = sessionSettings.get();
  if (defaults.size()) {
    stream << "[DEFAULT]" << std::endl;
    for (const Dictionary::value_type &defaultParam : defaults) {
      stream << defaultParam.first << "=" << defaultParam.second << std::endl;
    }
    stream << std::endl;
  }

  for (const SessionID &sessionID : sessionSettings.getSessions()) {
    stream << "[SESSION]" << std::endl;
    const Dictionary &section = sessionSettings.get(sessionID);
    if (!section.size()) {
      continue;
    }

    for (const Dictionary::value_type &sectionParam : section) {
      if (defaults.has(sectionParam.first) && defaults.getString(sectionParam.first) == sectionParam.second) {
        continue;
      }
      stream << sectionParam.first << "=" << sectionParam.second << std::endl;
    }
    stream << std::endl;
  }

  return stream;
}

const bool SessionSettings::has(const SessionID &sessionID) const {
  return m_settings.find(sessionID) != m_settings.end();
}

const Dictionary &SessionSettings::get(const SessionID &sessionID) const EXCEPT(ConfigError) {
  Dictionaries::const_iterator i;
  i = m_settings.find(sessionID);
  if (i == m_settings.end()) {
    throw ConfigError("Session not found");
  }
  return i->second;
}

void SessionSettings::set(const SessionID &sessionID, Dictionary settings) EXCEPT(ConfigError) {
  if (has(sessionID)) {
    throw ConfigError("Duplicate Session " + sessionID.toString());
  }

  settings.setString(BEGINSTRING, sessionID.getBeginString());
  settings.setString(SENDERCOMPID, sessionID.getSenderCompID());
  settings.setString(TARGETCOMPID, sessionID.getTargetCompID());

  settings.merge(m_defaults);
  validate(settings);
  m_settings[sessionID] = settings;
}

void SessionSettings::set(const Dictionary &defaults) EXCEPT(ConfigError) {
  m_defaults = defaults;
  for (Dictionaries::value_type &setting : m_settings) {
    setting.second.merge(defaults);
  }
}

std::set<SessionID> SessionSettings::getSessions() const {
  std::set<SessionID> result;
  for (const Dictionaries::value_type &setting : m_settings) {
    result.insert(setting.first);
  }
  return result;
}

void SessionSettings::validate(const Dictionary &dictionary) const EXCEPT(ConfigError) {
  std::string beginString = dictionary.getString(BEGINSTRING);
  if (beginString != BeginString_FIX40 && beginString != BeginString_FIX41 && beginString != BeginString_FIX42
      && beginString != BeginString_FIX43 && beginString != BeginString_FIX44 && beginString != BeginString_FIXT11) {
    throw ConfigError(std::string(BEGINSTRING) + " must be FIX.4.0 to FIX.4.4 or FIXT.1.1");
  }

  std::string connectionType = dictionary.getString(CONNECTION_TYPE);
  if (connectionType != "initiator" && connectionType != "acceptor") {
    throw ConfigError(std::string(CONNECTION_TYPE) + " must be 'initiator' or 'acceptor'");
  }
}

} // namespace FIX
