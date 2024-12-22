/* -*- C++ -*- */

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

#ifndef FIX_LOG_H
#define FIX_LOG_H

#ifdef _MSC_VER
#pragma warning(disable : 4503 4355 4786 4290)
#endif

#include "Message.h"
#include "Mutex.h"
#include "SessionSettings.h"

#include <algorithm>
#include <map>
#include <utility>
#include <vector>

namespace FIX {
class Log;

/**
 * This interface must be implemented to create a Log.
 */
class LogFactory {
public:
  virtual ~LogFactory() = default;
  virtual Log *create() = 0;
  virtual Log *create(const SessionID &) = 0;
  virtual void destroy(Log *) = 0;
};

/**
 * Creates a screen based implementation of Log.
 *
 * This displays all log events onto the standard output
 */
class ScreenLogFactory : public LogFactory {
public:
  explicit ScreenLogFactory(SessionSettings settings)
      : m_useSettings(true),
        m_settings(std::move(settings)) {};
  ScreenLogFactory(bool incoming, bool outgoing, bool event)
      : m_incoming(incoming),
        m_outgoing(outgoing),
        m_event(event),
        m_useSettings(false) {}

  /**
   * \brief Create a new instance of the ScreenLog class.
   *
   * This function initializes the incoming, outgoing, and event variables based on the
   * settings provided. It then creates a new instance of the ScreenLog class with the
   * initialized variables and returns a pointer to it.
   *
   * \return A pointer to the created ScreenLog object.
   */
  Log *create() override;
  /**
   * Creates a `Log` object for the given session ID.
   * @param sessionID The session ID.
   * @return A pointer to the created `Log` object.
   */
  Log *create(const SessionID &) override;
  /**
   * @brief Destroy a Log object.
   *
   * This function destroys a Log object by deleting the dynamically allocated memory.
   *
   * @param pLog A pointer to the Log object to be destroyed.
   * @return None
   */
  void destroy(Log *log) override;

private:
  /**
   * @brief Initializes the screen logging settings.
   *
   * This function initializes the screen logging settings based on the provided dictionary.
   * If m_useSettings is true, the settings from the dictionary are used to set the values of the incoming, outgoing,
   * and event parameters. If m_useSettings is false, the values of incoming, outgoing, and event are set to the
   * values of m_incoming, m_outgoing, and m_event respectively.
   *
   * @param settings The dictionary containing the screen logging settings.
   * @param incoming A boolean reference to store the value of whether to show incoming log events.
   * @param outgoing A boolean reference to store the value of whether to show outgoing log events.
   * @param event A boolean reference to store the value of whether to show event log events.
   */
  void init(const Dictionary &settings, bool &incoming, bool &outgoing, bool &event) const;

  bool m_incoming{};
  bool m_outgoing{};
  bool m_event{};
  bool m_useSettings;
  SessionSettings m_settings;
};

/**
 * This interface must be implemented to log messages and events
 */
class Log {
public:
  virtual ~Log() = default;

  virtual void clear() = 0;
  virtual void backup() = 0;
  virtual void onIncoming(const std::string &) = 0;
  virtual void onOutgoing(const std::string &) = 0;
  virtual void onEvent(const std::string &) = 0;
};
/*! @} */

/**
 * Null implementation of Log
 *
 * This is only for internal use. Used when no log factory is
 * passed to the initiator or acceptor.
 */
class NullLog : public Log {
public:
  void clear() override {}
  void backup() override {}
  void onIncoming(const std::string &) override {}
  void onOutgoing(const std::string &) override {}
  void onEvent(const std::string &) override {}
};

/**
 * Screen based implementation of Log.
 *
 * This will display all log information onto the standard output
 */
class ScreenLog : public Log {
public:
  ScreenLog(bool incoming, bool outgoing, bool event)
      : m_prefix("GLOBAL"),
        m_incoming(incoming),
        m_outgoing(outgoing),
        m_event(event) {}

  ScreenLog(const SessionID &sessionID, bool incoming, bool outgoing, bool event)
      : m_prefix(sessionID.toString()),
        m_incoming(incoming),
        m_outgoing(outgoing),
        m_event(event) {}

  void clear() override {}
  void backup() override {}

  /**
   * @brief Handles incoming messages.
   *
   * This function is called when an incoming message is received.
   * It locks a mutex, retrieves the current timestamp, and prints the incoming message to the standard output.
   *
   * @param[in] value The incoming message.
   */
  void onIncoming(const std::string &value) override {
    if (!m_incoming) {
      return;
    }
    Locker l(s_mutex);
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9) << ", " << m_prefix << ", " << "incoming>"
              << std::endl
              << "  (" << replaceSOHWithPipe(value) << ")" << std::endl;
  }

  /**
   * @brief Handles outgoing messages.
   *
   * This function is called when an outgoing message is sent. It prints the outgoing message to the standard output.
   * The method first checks if outgoing logging is enabled. If not, it returns without performing any action.
   * It locks a mutex to ensure thread safety, retrieves the current timestamp, and prints the outgoing message to the
   * standard output.
   *
   * @param[in] value The outgoing message.
   *
   * @return void
   */
  void onOutgoing(const std::string &value) override {
    if (!m_outgoing) {
      return;
    }
    Locker l(s_mutex);
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9) << ", " << m_prefix << ", " << "outgoing>"
              << std::endl
              << "  (" << replaceSOHWithPipe(value) << ")" << std::endl;
  }

  /**
   * Handles an event by printing the event details to the standard output.
   *
   * This function first checks if the m_event flag is set to true. If not,
   * it returns without performing any action.
   * It then locks a mutex to ensure thread safety, retrieves the current timestamp,
   * and prints the event details to the standard output.
   *
   * @param[in] value The event details.
   * @return void
   */
  void onEvent(const std::string &value) override {
    if (!m_event) {
      return;
    }
    Locker l(s_mutex);
    m_time.setCurrent();
    std::cout << "<" << UtcTimeStampConvertor::convert(m_time, 9) << ", " << m_prefix << ", " << "event>" << std::endl
              << "  (" << replaceSOHWithPipe(value) << ")" << std::endl;
  }

private:
  /**
   * Replaces all occurrences of Start Of Header (SOH) character ('\001') in a given string with a pipe ('|')
   * character.
   *
   * @param value The input string.
   * @return The modified string with SOH replaced by pipe character.
   */
  static std::string replaceSOHWithPipe(std::string value) {
    std::replace(value.begin(), value.end(), '\001', '|');
    return value;
  }

  std::string m_prefix;
  UtcTimeStamp m_time = UtcTimeStamp::now();
  bool m_incoming;
  bool m_outgoing;
  bool m_event;
  static Mutex s_mutex;
};
} // namespace FIX

#endif // FIX_LOG_H
