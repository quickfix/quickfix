#ifndef FIX_TEST_HELPER_H
#define FIX_TEST_HELPER_H

#include <Application.h>
#include <SessionSettings.h>

namespace FIX
{
struct TestSettings
{
  static short port;
  static FIX::SessionSettings sessionSettings;
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

inline void destroySocket( int s )
{
  socket_close( s );
  socket_invalidate( s );
}

int inline createSocket( int port, const char* address )
{
  int sock = socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( address );

  int result = ::connect( sock, reinterpret_cast < sockaddr* > ( &addr ),
                          sizeof( addr ) );
  if ( result != 0 )
  {
    destroySocket( sock );
    return -1;
  }
  return sock;
}

}

#endif
