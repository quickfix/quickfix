/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
  std::string getString( const std::string&, bool capitalize = false ) const
  throw( ConfigError, FieldConvertError );
  /// Get a value as a long.
  long getLong( const std::string& ) const
  throw( ConfigError, FieldConvertError );
  /// Get a value as a double.
  double getDouble( const std::string& ) const
  throw( ConfigError, FieldConvertError );
  /// Get a value as a bool
  bool getBool( const std::string& ) const
  throw( ConfigError, FieldConvertError );
  /// Get a value as a day of week
  int getDay( const std::string& ) const
  throw( ConfigError, FieldConvertError );

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
