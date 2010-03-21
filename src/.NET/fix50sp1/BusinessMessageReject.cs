namespace QuickFix50Sp1
{

  public class BusinessMessageReject : Message
  {
    public BusinessMessageReject() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("j"); }

    public BusinessMessageReject(
      QuickFix.RefMsgType aRefMsgType,
      QuickFix.BusinessRejectReason aBusinessRejectReason )
    : base(MsgType()) {
      set(aRefMsgType);
      set(aBusinessRejectReason);
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

    public void set(QuickFix.BusinessRejectRefID value)
    { setField(value); }
    public QuickFix.BusinessRejectRefID get(QuickFix.BusinessRejectRefID  value)
    { getField(value); return value; }
    public QuickFix.BusinessRejectRefID getBusinessRejectRefID()
    { QuickFix.BusinessRejectRefID value = new QuickFix.BusinessRejectRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.BusinessRejectRefID field)
    { return isSetField(field); }
    public bool isSetBusinessRejectRefID()
    { return isSetField(379); }

    public void set(QuickFix.BusinessRejectReason value)
    { setField(value); }
    public QuickFix.BusinessRejectReason get(QuickFix.BusinessRejectReason  value)
    { getField(value); return value; }
    public QuickFix.BusinessRejectReason getBusinessRejectReason()
    { QuickFix.BusinessRejectReason value = new QuickFix.BusinessRejectReason();
      getField(value); return value; }
    public bool isSet(QuickFix.BusinessRejectReason field)
    { return isSetField(field); }
    public bool isSetBusinessRejectReason()
    { return isSetField(380); }

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

    public void set(QuickFix.RefApplVerID value)
    { setField(value); }
    public QuickFix.RefApplVerID get(QuickFix.RefApplVerID  value)
    { getField(value); return value; }
    public QuickFix.RefApplVerID getRefApplVerID()
    { QuickFix.RefApplVerID value = new QuickFix.RefApplVerID();
      getField(value); return value; }
    public bool isSet(QuickFix.RefApplVerID field)
    { return isSetField(field); }
    public bool isSetRefApplVerID()
    { return isSetField(1130); }

    public void set(QuickFix.RefApplExtID value)
    { setField(value); }
    public QuickFix.RefApplExtID get(QuickFix.RefApplExtID  value)
    { getField(value); return value; }
    public QuickFix.RefApplExtID getRefApplExtID()
    { QuickFix.RefApplExtID value = new QuickFix.RefApplExtID();
      getField(value); return value; }
    public bool isSet(QuickFix.RefApplExtID field)
    { return isSetField(field); }
    public bool isSetRefApplExtID()
    { return isSetField(1406); }

    public void set(QuickFix.RefCstmApplVerID value)
    { setField(value); }
    public QuickFix.RefCstmApplVerID get(QuickFix.RefCstmApplVerID  value)
    { getField(value); return value; }
    public QuickFix.RefCstmApplVerID getRefCstmApplVerID()
    { QuickFix.RefCstmApplVerID value = new QuickFix.RefCstmApplVerID();
      getField(value); return value; }
    public bool isSet(QuickFix.RefCstmApplVerID field)
    { return isSetField(field); }
    public bool isSetRefCstmApplVerID()
    { return isSetField(1131); }

  };

}

