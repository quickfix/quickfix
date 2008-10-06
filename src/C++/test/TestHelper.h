#ifndef FIX_TEST_HELPER_H
#define FIX_TEST_HELPER_H

#include <Application.h>

namespace FIX
{
struct TestSettings
{
  static short port;
};

class TestApplication : public NullApplication
{
public:
  void fromApp( const Message&, const SessionID& )
  throw( FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType ) {}
  void onRun() {}
};

inline void deleteSession( std::string sender, std::string target )
{
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".messages" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".header" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".seqnums" ).c_str() );
  file_unlink( ( "store/FIX.4.2-" + sender + "-" + target + ".session" ).c_str() );
}
}

#endif