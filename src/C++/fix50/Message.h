#ifndef FIX50_MESSAGES_H
#define FIX50_MESSAGES_H

#include "../Message.h"
#include "../Group.h"

namespace FIX50
{
  class Header : public FIX::Header
  {
  public:
  };

  class Trailer : public FIX::Trailer
  {
  public:
  };

  class Message : public FIX::Message
  {
  public:
    Message( const FIX::MsgType& msgtype )
    : FIX::Message(
      FIX::BeginString("FIXT.1.1"), msgtype )
     { getHeader().setField( FIX::ApplVerID("7") ); }

    Message(const FIX::Message& m) : FIX::Message(m) {}
    Message(const Message& m) = default;
    Message(Message&& m) = default;
    Message& operator=(Message&&) = default;
    Message& operator=(const Message&) = default;
    Header& getHeader() { return (Header&)m_header; }
    const Header& getHeader() const { return (Header&)m_header; }
    Trailer& getTrailer() { return (Trailer&)m_trailer; }
    const Trailer& getTrailer() const { return (Trailer&)m_trailer; }
  };

}

#endif
