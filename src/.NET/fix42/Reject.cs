namespace QuickFix42
{

  public class Reject : Message
  {
    public Reject() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("3"); }

    public Reject(
      QuickFix.RefSeqNum aRefSeqNum )
    : base(MsgType()) {
      set(aRefSeqNum);
    }

    public void set(QuickFix.RefSeqNum value)
    { setField(value); }
    public QuickFix.RefSeqNum get(QuickFix.RefSeqNum  value)
    { getField(value); return value; }
    public QuickFix.RefSeqNum getRefSeqNum()
    { QuickFix.RefSeqNum value = new QuickFix.RefSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.RefSeqNum field)
    { return isSetField(field); }
    public bool isSetRefSeqNum()
    { return isSetField(45); }

    public void set(QuickFix.RefTagID value)
    { setField(value); }
    public QuickFix.RefTagID get(QuickFix.RefTagID  value)
    { getField(value); return value; }
    public QuickFix.RefTagID getRefTagID()
    { QuickFix.RefTagID value = new QuickFix.RefTagID();
      getField(value); return value; }
    public bool isSet(QuickFix.RefTagID field)
    { return isSetField(field); }
    public bool isSetRefTagID()
    { return isSetField(371); }

    public void set(QuickFix.RefMsgType value)
    { setField(value); }
    public QuickFix.RefMsgType get(QuickFix.RefMsgType  value)
    { getField(value); return value; }
    public QuickFix.RefMsgType getRefMsgType()
    { QuickFix.RefMsgType value = new QuickFix.RefMsgType();
      getField(value); return value; }
    public bool isSet(QuickFix.RefMsgType field)
    { return isSetField(field); }
    public bool isSetRefMsgType()
    { return isSetField(372); }

    public void set(QuickFix.SessionRejectReason value)
    { setField(value); }
    public QuickFix.SessionRejectReason get(QuickFix.SessionRejectReason  value)
    { getField(value); return value; }
    public QuickFix.SessionRejectReason getSessionRejectReason()
    { QuickFix.SessionRejectReason value = new QuickFix.SessionRejectReason();
      getField(value); return value; }
    public bool isSet(QuickFix.SessionRejectReason field)
    { return isSetField(field); }
    public bool isSetSessionRejectReason()
    { return isSetField(373); }

    public void set(QuickFix.Text value)
    { setField(value); }
    public QuickFix.Text get(QuickFix.Text  value)
    { getField(value); return value; }
    public QuickFix.Text getText()
    { QuickFix.Text value = new QuickFix.Text();
      getField(value); return value; }
    public bool isSet(QuickFix.Text field)
    { return isSetField(field); }
    public bool isSetText()
    { return isSetField(58); }

    public void set(QuickFix.EncodedTextLen value)
    { setField(value); }
    public QuickFix.EncodedTextLen get(QuickFix.EncodedTextLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedTextLen getEncodedTextLen()
    { QuickFix.EncodedTextLen value = new QuickFix.EncodedTextLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedTextLen field)
    { return isSetField(field); }
    public bool isSetEncodedTextLen()
    { return isSetField(354); }

    public void set(QuickFix.EncodedText value)
    { setField(value); }
    public QuickFix.EncodedText get(QuickFix.EncodedText  value)
    { getField(value); return value; }
    public QuickFix.EncodedText getEncodedText()
    { QuickFix.EncodedText value = new QuickFix.EncodedText();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedText field)
    { return isSetField(field); }
    public bool isSetEncodedText()
    { return isSetField(355); }

  };

}

