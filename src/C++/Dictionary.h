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

#ifndef FIX_DICTIONARY_H
#define FIX_DICTIONARY_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include <map>
#include <string>
#include "Exceptions.h"

namespace FIX
{
/*! \addtogroup user
 *  @{
 */ 
/// For storage and retrieval of key/value pairs.
class Dictionary
{
public:
Dictionary( const std::string& name ) : m_name( name ) {}
  Dictionary() {}
  virtual ~Dictionary() {}

  /// Get the name of the dictionary.
  std::string getName() const { return m_name; }
  /// Return the number of key/value pairs.
  int size() const { return m_data.size(); }

  /// Get a value as a string.
  std::string getString( const std::string& ) const
  throw( ConfigError&, FieldConvertError& );
  /// Get a value as a long.
  long getLong( const std::string& ) const
  throw( ConfigError&, FieldConvertError& );
  /// Get a value as a double.
  double getDouble( const std::string& ) const
  throw( ConfigError&, FieldConvertError& );
  /// Get a value as a bool
  bool getBool( const std::string& ) const
  throw( ConfigError&, FieldConvertError& );

  /// Set a value from a string.
  void setString( const std::string&, const std::string& );
  /// Set a value from a long.
  void setLong( const std::string&, const long& );
  /// Set a value from a double.
  void setDouble( const std::string&, const double& );
  /// Set a value from a bool
  void setBool( const std::string&, const bool& );

  /// Check if the dictionary contains a value for key.
  bool has( const std::string& ) const;
  /// Merge two dictionaries.
  void merge( const Dictionary& );

private:
  typedef std::map < std::string, std::string > Data;
  Data m_data;
  std::string m_name;
};
/*! @} */
}

#endif //FIX_DICTIONARY_H
