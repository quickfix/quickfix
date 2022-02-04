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

#include <math.h>
#include "FieldConvertors.h"
#include <math.h>

namespace FIX
{

// we include "double-conversion" project in FIX namespace
// to avoid linking errors if quickfix is linked statically
// and "double-conversion" is already used by target project

#include "double-conversion/diy-fp.cc"
#include "double-conversion/fixed-dtoa.cc"
#include "double-conversion/bignum.cc"
#include "double-conversion/bignum-dtoa.cc"
#include "double-conversion/cached-powers.cc"
#include "double-conversion/fast-dtoa.cc"
#include "double-conversion/strtod.cc"
#include "double-conversion/double-conversion.cc"

  static double_conversion::DoubleToStringConverter g_dtoa_converter(
    double_conversion::DoubleToStringConverter::NO_FLAGS,
    "INF",
    "NAN",
    'e',
    -DoubleConvertor::SIGNIFICANT_DIGITS,
    DoubleConvertor::SIGNIFICANT_DIGITS,
    DoubleConvertor::SIGNIFICANT_DIGITS - 1,
    0);

  static double_conversion::StringToDoubleConverter g_atod_converter(
	  double_conversion::StringToDoubleConverter::NO_FLAGS,
	  std::numeric_limits<double>::quiet_NaN(),
	  std::numeric_limits<double>::quiet_NaN(),
	  "INF",
	  "NAN");

  double DoubleConvertor::fast_strtod( const char * buffer, int size, int * processed_chars )
  {
	  return g_atod_converter.StringToDouble( buffer, size, processed_chars );
  }

  int DoubleConvertor::fast_dtoa( char * buffer, int size, double value, int significant_digits )
  {
    double_conversion::StringBuilder builder( buffer, size );
    if( !g_dtoa_converter.ToPrecision( value, significant_digits, &builder ) )
    {
      builder.Reset();
      return 0;
    }

    builder.TrimTrailingZeros();
    return builder.position();
  }

  int DoubleConvertor::fast_fixed_dtoa( char * buffer, int size, double value, int significant_digits )
  {
    double_conversion::StringBuilder builder( buffer, size );
    if( !g_dtoa_converter.ToFixed( value, significant_digits, &builder ) )
    {
      builder.Reset();
      return 0;
    }

    return builder.position();
  }

}
