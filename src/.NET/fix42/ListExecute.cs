namespace QuickFix42
{

  public class ListExecute : Message
  {
    public ListExecute() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("L"); }

    public ListExecute(
      QuickFix.ListID aListID,
      QuickFix.TransactTime aTransactTime )
    : base(MsgType()) {
      set(aListID);
      set(aTransactTime);
    }

    public void set(QuickFix.ListID value)
    { setField(value); }
    public QuickFix.ListID get(QuickFix.ListID  value)
    { getField(value); return value; }
    public QuickFix.ListID getListID()
    { QuickFix.ListID value = new QuickFix.ListID();
      getField(value); return value; }
    public bool isSet(QuickFix.ListID field)
    { return isSetField(field); }
    public bool isSetListID()
    { return isSetField(66); }

    public void set(QuickFix.ClientBidID value)
    { setField(value); }
    public QuickFix.ClientBidID get(QuickFix.ClientBidID  value)
    { getField(value); return value; }
    public QuickFix.ClientBidID getClientBidID()
    { QuickFix.ClientBidID value = new QuickFix.ClientBidID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientBidID field)
    { return isSetField(field); }
    public bool isSetClientBidID()
    { return isSetField(391); }

    public void set(QuickFix.BidID value)
    { setField(value); }
    public QuickFix.BidID get(QuickFix.BidID  value)
    { getField(value); return value; }
    public QuickFix.BidID getBidID()
    { QuickFix.BidID value = new QuickFix.BidID();
      getField(value); return value; }
    public bool isSet(QuickFix.BidID field)
    { return isSetField(field); }
    public bool isSetBidID()
    { return isSetField(390); }

    public void set(QuickFix.TransactTime value)
    { setField(value); }
    public QuickFix.TransactTime get(QuickFix.TransactTime  value)
    { getField(value); return value; }
    public QuickFix.TransactTime getTransactTime()
    { QuickFix.TransactTime value = new QuickFix.TransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransactTime field)
    { return isSetField(field); }
    public bool isSetTransactTime()
    { return isSetField(60); }

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

