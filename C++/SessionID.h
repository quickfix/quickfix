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

#ifndef FIX_SESSIONID_H
#define FIX_SESSIONID_H

#include "Fields.h"

namespace FIX
{
/// Unique session id consists of BeginString, SenderCompID and TargetCompID.
class SessionID
{
public:
  SessionID()
  {
    toString(m_frozenString);
  }

  SessionID( const std::string& beginString,
             const std::string& senderCompID,
             const std::string& targetCompID,
             const std::string& sessionQualifier = "" )
  : m_beginString( BeginString(beginString) ),
    m_senderCompID( SenderCompID(senderCompID) ),
    m_targetCompID( TargetCompID(targetCompID) ),
    m_sessionQualifier( sessionQualifier ),
    m_isFIXT(false)
  {
    toString(m_frozenString);
    if( beginString.substr(0, 4) == "FIXT" )
      m_isFIXT = true;
  }

  const BeginString& getBeginString() const
    { return m_beginString; }
  const SenderCompID& getSenderCompID() const
    { return m_senderCompID; }
  const TargetCompID& getTargetCompID() const
    { return m_targetCompID; }
  const std::string& getSessionQualifier() const
    { return m_sessionQualifier; }
  const bool isFIXT() const
    { return m_isFIXT; }

  /// Get a string representation of the SessionID
  std::string toString() const
  {
    return m_frozenString;
  }
    
  // Return a reference for a high-performance scenario
  const std::string& toStringFrozen() const
  {
    return m_frozenString;
  }

  /// Build from string representation of SessionID
  void fromString( const std::string& str )
  {
    std::string::size_type first =
      str.find_first_of(':');
    std::string::size_type second =
      str.find("->");
    std::string::size_type third =
      str.find_last_of(':');
    if( first == std::string::npos )
      return;
    if( second == std::string::npos )
      return;
    m_beginString = str.substr(0, first);
    m_senderCompID = str.substr(first+1, second - first - 1);
    if( first == third )
    {
      m_targetCompID = str.substr(second+2);
      m_sessionQualifier = "";
    }
    else
    {
      m_targetCompID = str.substr(second+2, third - second - 2);
      m_sessionQualifier = str.substr(third+1);
    }
    toString(m_frozenString);
  }

  /// Get a string representation without making a copy
  std::string& toString( std::string& str ) const
  {
    str = getBeginString().getValue() + ":" +
          getSenderCompID().getValue() + "->" +
          getTargetCompID().getValue();
    if( m_sessionQualifier.size() )
      str += ":" + m_sessionQualifier;
    return str;
  }

  friend bool operator<( const SessionID&, const SessionID& );
  friend bool operator==( const SessionID&, const SessionID& );
  friend bool operator!=( const SessionID&, const SessionID& );
  friend std::ostream& operator<<( std::ostream&, const SessionID& );
  friend std::ostream& operator>>( std::ostream&, const SessionID& );

  SessionID operator~() const
  {
    return SessionID( m_beginString, SenderCompID( m_targetCompID ),
                      TargetCompID( m_senderCompID ), m_sessionQualifier );
  }

private:
  BeginString m_beginString;
  SenderCompID m_senderCompID;
  TargetCompID m_targetCompID;
  std::string m_sessionQualifier;
  bool m_isFIXT;
  std::string m_frozenString;
};
/*! @} */

inline bool operator<( const SessionID& lhs, const SessionID& rhs )
{
  return lhs.toStringFrozen() < rhs.toStringFrozen();
}

inline bool operator==( const SessionID& lhs, const SessionID& rhs )
{
  return lhs.toStringFrozen() == rhs.toStringFrozen();
}

inline bool operator!=( const SessionID& lhs, const SessionID& rhs )
{
  return !( lhs == rhs );
}

inline std::ostream& operator<<
( std::ostream& stream, const SessionID& sessionID )
{
  stream << sessionID.toStringFrozen();
  return stream;
}

inline std::istream& operator>>
( std::istream& stream, SessionID& sessionID )
{
  std::string str;
  stream >> str;
  sessionID.fromString( str );
  return stream;
}

}
#endif //FIX_SESSIONID_H

