#ifndef FIX40_NEWS_H
#define FIX40_NEWS_H

#include "Message.h"

namespace FIX40
{

  class News : public Message
  {
  public:
    News() : Message(MsgType()) {}
    News(const Message& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }

    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Urgency);
    FIELD_SET(*this, FIX::RelatdSym);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
    FIELD_SET(*this, FIX::LinesOfText);
    class LinesOfText: public FIX::Group
    {
    public:
    LinesOfText() : FIX::Group(33,58,FIX::message_order(58,0)) {}
      FIELD_SET(*this, FIX::Text);
    };
  };

}

#endif
