namespace QuickFix42
{

  public class OrderCancelReject : Message
  {
    public OrderCancelReject() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("9"); }

    public OrderCancelReject(
      QuickFix.OrderID aOrderID,
      QuickFix.ClOrdID aClOrdID,
      QuickFix.OrigClOrdID aOrigClOrdID,
      QuickFix.OrdStatus aOrdStatus,
      QuickFix.CxlRejResponseTo aCxlRejResponseTo )
    : base(MsgType()) {
      set(aOrderID);
      set(aClOrdID);
      set(aOrigClOrdID);
      set(aOrdStatus);
      set(aCxlRejResponseTo);
    }

    public void set(QuickFix.OrderID value)
    { setField(value); }
    public QuickFix.OrderID get(QuickFix.OrderID  value)
    { getField(value); return value; }
    public QuickFix.OrderID getOrderID()
    { QuickFix.OrderID value = new QuickFix.OrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderID field)
    { return isSetField(field); }
    public bool isSetOrderID()
    { return isSetField(37); }

    public void set(QuickFix.SecondaryOrderID value)
    { setField(value); }
    public QuickFix.SecondaryOrderID get(QuickFix.SecondaryOrderID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryOrderID getSecondaryOrderID()
    { QuickFix.SecondaryOrderID value = new QuickFix.SecondaryOrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryOrderID field)
    { return isSetField(field); }
    public bool isSetSecondaryOrderID()
    { return isSetField(198); }

    public void set(QuickFix.ClOrdID value)
    { setField(value); }
    public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
    { getField(value); return value; }
    public QuickFix.ClOrdID getClOrdID()
    { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClOrdID field)
    { return isSetField(field); }
    public bool isSetClOrdID()
    { return isSetField(11); }

    public void set(QuickFix.OrigClOrdID value)
    { setField(value); }
    public QuickFix.OrigClOrdID get(QuickFix.OrigClOrdID  value)
    { getField(value); return value; }
    public QuickFix.OrigClOrdID getOrigClOrdID()
    { QuickFix.OrigClOrdID value = new QuickFix.OrigClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigClOrdID field)
    { return isSetField(field); }
    public bool isSetOrigClOrdID()
    { return isSetField(41); }

    public void set(QuickFix.OrdStatus value)
    { setField(value); }
    public QuickFix.OrdStatus get(QuickFix.OrdStatus  value)
    { getField(value); return value; }
    public QuickFix.OrdStatus getOrdStatus()
    { QuickFix.OrdStatus value = new QuickFix.OrdStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdStatus field)
    { return isSetField(field); }
    public bool isSetOrdStatus()
    { return isSetField(39); }

    public void set(QuickFix.ClientID value)
    { setField(value); }
    public QuickFix.ClientID get(QuickFix.ClientID  value)
    { getField(value); return value; }
    public QuickFix.ClientID getClientID()
    { QuickFix.ClientID value = new QuickFix.ClientID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientID field)
    { return isSetField(field); }
    public bool isSetClientID()
    { return isSetField(109); }

    public void set(QuickFix.ExecBroker value)
    { setField(value); }
    public QuickFix.ExecBroker get(QuickFix.ExecBroker  value)
    { getField(value); return value; }
    public QuickFix.ExecBroker getExecBroker()
    { QuickFix.ExecBroker value = new QuickFix.ExecBroker();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecBroker field)
    { return isSetField(field); }
    public bool isSetExecBroker()
    { return isSetField(76); }

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

    public void set(QuickFix.Account value)
    { setField(value); }
    public QuickFix.Account get(QuickFix.Account  value)
    { getField(value); return value; }
    public QuickFix.Account getAccount()
    { QuickFix.Account value = new QuickFix.Account();
      getField(value); return value; }
    public bool isSet(QuickFix.Account field)
    { return isSetField(field); }
    public bool isSetAccount()
    { return isSetField(1); }

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

    public void set(QuickFix.CxlRejResponseTo value)
    { setField(value); }
    public QuickFix.CxlRejResponseTo get(QuickFix.CxlRejResponseTo  value)
    { getField(value); return value; }
    public QuickFix.CxlRejResponseTo getCxlRejResponseTo()
    { QuickFix.CxlRejResponseTo value = new QuickFix.CxlRejResponseTo();
      getField(value); return value; }
    public bool isSet(QuickFix.CxlRejResponseTo field)
    { return isSetField(field); }
    public bool isSetCxlRejResponseTo()
    { return isSetField(434); }

    public void set(QuickFix.CxlRejReason value)
    { setField(value); }
    public QuickFix.CxlRejReason get(QuickFix.CxlRejReason  value)
    { getField(value); return value; }
    public QuickFix.CxlRejReason getCxlRejReason()
    { QuickFix.CxlRejReason value = new QuickFix.CxlRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.CxlRejReason field)
    { return isSetField(field); }
    public bool isSetCxlRejReason()
    { return isSetField(102); }

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

