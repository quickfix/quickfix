/* -*- C++ -*- */
/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#ifndef FIX_SESSIONID_H
#define FIX_SESSIONID_H

#include "Fields.h"

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/// Unique session id consists of BeginString, SenderCompID and TargetCompID.
class SessionID
{
public:
  SessionID( const BeginString& beginString,
             const SenderCompID& senderCompID,
             const TargetCompID& targetCompID )
  : m_beginString( beginString ),
    m_senderCompID( senderCompID ),
    m_targetCompID( targetCompID ) {}

  SessionID( const std::string& beginString,
             const std::string& senderCompID,
             const std::string& targetCompID )
  : m_beginString( BeginString(beginString) ),
    m_senderCompID( SenderCompID(senderCompID) ),
    m_targetCompID( TargetCompID(targetCompID) ) {}

  const BeginString& getBeginString() const { return m_beginString; }
  const SenderCompID& getSenderCompID() const { return m_senderCompID; }
  const TargetCompID& getTargetCompID() const { return m_targetCompID; }

  friend bool operator<( const SessionID&, const SessionID& );
  friend bool operator==( const SessionID&, const SessionID& );
  friend bool operator!=( const SessionID&, const SessionID& );
  friend std::ostream& operator<<( std::ostream&, const SessionID& );

  SessionID operator~()
  {
    return SessionID( m_beginString, SenderCompID( m_targetCompID ),
                      TargetCompID( m_senderCompID ) );
  }

private:
  BeginString m_beginString;
  SenderCompID m_senderCompID;
  TargetCompID m_targetCompID;
};
/*! @} */

inline bool operator<( const SessionID& lhs, const SessionID& rhs )
{
  if ( lhs.m_beginString < rhs.m_beginString )
    return true;
  else if ( rhs.m_beginString < lhs.m_beginString )
    return false;
  else if ( lhs.m_senderCompID < rhs.m_senderCompID )
    return true;
  else if ( rhs.m_senderCompID < lhs.m_senderCompID )
    return false;
  else if ( lhs.m_targetCompID < rhs.m_targetCompID )
    return true;
  else if ( rhs.m_targetCompID < lhs.m_targetCompID )
    return false;
  else
    return false;
}
inline bool operator==( const SessionID& lhs, const SessionID& rhs )
{
  return ( ( lhs.m_beginString == rhs.m_beginString ) &&
           ( lhs.m_senderCompID == rhs.m_senderCompID ) &&
           ( lhs.m_targetCompID == rhs.m_targetCompID ) );
}
inline bool operator!=( const SessionID& lhs, const SessionID& rhs )
{
  return !( lhs == rhs );
}

inline std::ostream& operator<<
( std::ostream& ostream, const SessionID& sessionID )
{
  return ostream
         << sessionID.getBeginString().getValue() << ":"
         << sessionID.getSenderCompID().getValue() << "->"
         << sessionID.getTargetCompID().getValue();
}
}

#endif //FIX_SESSIONID_H
