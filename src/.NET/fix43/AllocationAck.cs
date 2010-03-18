namespace QuickFix43
{

  public class AllocationAck : Message
  {
    public AllocationAck() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("P"); }

    public AllocationAck(
      QuickFix.AllocID aAllocID,
      QuickFix.TradeDate aTradeDate,
      QuickFix.AllocStatus aAllocStatus )
    : base(MsgType()) {
      set(aAllocID);
      set(aTradeDate);
      set(aAllocStatus);
    }

    public void set(QuickFix.NoPartyIDs value)
    { setField(value); }
    public QuickFix.NoPartyIDs get(QuickFix.NoPartyIDs  value)
    { getField(value); return value; }
    public QuickFix.NoPartyIDs getNoPartyIDs()
    { QuickFix.NoPartyIDs value = new QuickFix.NoPartyIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyIDs field)
    { return isSetField(field); }
    public bool isSetNoPartyIDs()
    { return isSetField(453); }

    public class NoPartyIDs: QuickFix.Group
    {
    public NoPartyIDs() : base(453,448,message_order ) {}
    static int[] message_order = new int[] {448,447,452,523,0};
      public void set(QuickFix.PartyID value)
      { setField(value); }
      public QuickFix.PartyID get(QuickFix.PartyID  value)
      { getField(value); return value; }
      public QuickFix.PartyID getPartyID()
      { QuickFix.PartyID value = new QuickFix.PartyID();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyID field)
      { return isSetField(field); }
      public bool isSetPartyID()
      { return isSetField(448); }

      public void set(QuickFix.PartyIDSource value)
      { setField(value); }
      public QuickFix.PartyIDSource get(QuickFix.PartyIDSource  value)
      { getField(value); return value; }
      public QuickFix.PartyIDSource getPartyIDSource()
      { QuickFix.PartyIDSource value = new QuickFix.PartyIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyIDSource field)
      { return isSetField(field); }
      public bool isSetPartyIDSource()
      { return isSetField(447); }

      public void set(QuickFix.PartyRole value)
      { setField(value); }
      public QuickFix.PartyRole get(QuickFix.PartyRole  value)
      { getField(value); return value; }
      public QuickFix.PartyRole getPartyRole()
      { QuickFix.PartyRole value = new QuickFix.PartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyRole field)
      { return isSetField(field); }
      public bool isSetPartyRole()
      { return isSetField(452); }

      public void set(QuickFix.PartySubID value)
      { setField(value); }
      public QuickFix.PartySubID get(QuickFix.PartySubID  value)
      { getField(value); return value; }
      public QuickFix.PartySubID getPartySubID()
      { QuickFix.PartySubID value = new QuickFix.PartySubID();
        getField(value); return value; }
      public bool isSet(QuickFix.PartySubID field)
      { return isSetField(field); }
      public bool isSetPartySubID()
      { return isSetField(523); }

    };
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

    public void set(QuickFix.LegalConfirm value)
    { setField(value); }
    public QuickFix.LegalConfirm get(QuickFix.LegalConfirm  value)
    { getField(value); return value; }
    public QuickFix.LegalConfirm getLegalConfirm()
    { QuickFix.LegalConfirm value = new QuickFix.LegalConfirm();
      getField(value); return value; }
    public bool isSet(QuickFix.LegalConfirm field)
    { return isSetField(field); }
    public bool isSetLegalConfirm()
    { return isSetField(650); }

  };

}

