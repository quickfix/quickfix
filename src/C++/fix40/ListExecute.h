#ifndef FIX40_LISTEXECUTE_H
#define FIX40_LISTEXECUTE_H

#include "Message.h"

namespace FIX40
{

  class ListExecute : public Message
  {
  public:
    ListExecute() : Message(MsgType()) {}
    ListExecute(const FIX::Message& m) : Message(m) {}
    ListExecute(const Message& m) : Message(m) {}
    ListExecute(const ListExecute&) = default;
    ListExecute(ListExecute&&) = default;
    ListExecute& operator=(const ListExecute&) = default;
    ListExecute& operator=(ListExecute&&) = default;
    static FIX::MsgType MsgType() { return FIX::MsgType("L"); }

    ListExecute(
      const FIX::ListID& aListID )
    : Message(MsgType())
    {
      set(aListID);
    }

    FIELD_SET(*this, FIX::ListID);
    FIELD_SET(*this, FIX::WaveNo);
    FIELD_SET(*this, FIX::Text);
  };

}

#endif
