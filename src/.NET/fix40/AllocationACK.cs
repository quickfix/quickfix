namespace QuickFix40
{

  public class AllocationACK : Message
  {
    public AllocationACK() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("P"); }

    public AllocationACK(
      QuickFix.AllocID aAllocID,
      QuickFix.TradeDate aTradeDate,
      QuickFix.AllocStatus aAllocStatus )
    : base(MsgType()) {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }

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

    public void set(QuickFix.AllocID value)
    { setField(value); }
    public QuickFix.AllocID get(QuickFix.AllocID  value)
    { getField(value); return value; }
    public QuickFix.AllocID getAllocID()
    { QuickFix.AllocID value = new QuickFix.AllocID();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocID field)
    { return isSetField(field); }
    public bool isSetAllocID()
    { return isSetField(70); }

    public void set(QuickFix.TradeDate value)
    { setField(value); }
    public QuickFix.TradeDate get(QuickFix.TradeDate  value)
    { getField(value); return value; }
    public QuickFix.TradeDate getTradeDate()
    { QuickFix.TradeDate value = new QuickFix.TradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeDate field)
    { return isSetField(field); }
    public bool isSetTradeDate()
    { return isSetField(75); }

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

    public void set(QuickFix.AllocStatus value)
    { setField(value); }
    public QuickFix.AllocStatus get(QuickFix.AllocStatus  value)
    { getField(value); return value; }
    public QuickFix.AllocStatus getAllocStatus()
    { QuickFix.AllocStatus value = new QuickFix.AllocStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocStatus field)
    { return isSetField(field); }
    public bool isSetAllocStatus()
    { return isSetField(87); }

    public void set(QuickFix.AllocRejCode value)
    { setField(value); }
    public QuickFix.AllocRejCode get(QuickFix.AllocRejCode  value)
    { getField(value); return value; }
    public QuickFix.AllocRejCode getAllocRejCode()
    { QuickFix.AllocRejCode value = new QuickFix.AllocRejCode();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocRejCode field)
    { return isSetField(field); }
    public bool isSetAllocRejCode()
    { return isSetField(88); }

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

  };

}

