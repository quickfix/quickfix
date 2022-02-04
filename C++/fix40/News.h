#ifndef FIX40_NEWS_H
#define FIX40_NEWS_H

#include "Message.h"

namespace FIX40
{

  class News : public Message
  {
  public:
    News() : Message(MsgType()) {}
    News(const FIX::Message& m) : Message(m) {}
    News(const Message& m) : Message(m) {}
    News(const News& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("B"); }

    News(
      const FIX::LinesOfText& aLinesOfText,
      const FIX::Text& aText )
    : Message(MsgType())
    {
      set(aLinesOfText);
      set(aText);
    }

    FIELD_SET(*this, FIX::OrigTime);
    FIELD_SET(*this, FIX::Urgency);
    FIELD_SET(*this, FIX::RelatdSym);
    FIELD_SET(*this, FIX::LinesOfText);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::RawDataLength);
    FIELD_SET(*this, FIX::RawData);
  };

}

#endif
