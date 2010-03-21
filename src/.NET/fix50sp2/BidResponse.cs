namespace QuickFix50Sp2
{

  public class BidResponse : Message
  {
    public BidResponse() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("l"); }

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

    public void set(QuickFix.NoBidComponents value)
    { setField(value); }
    public QuickFix.NoBidComponents get(QuickFix.NoBidComponents  value)
    { getField(value); return value; }
    public QuickFix.NoBidComponents getNoBidComponents()
    { QuickFix.NoBidComponents value = new QuickFix.NoBidComponents();
      getField(value); return value; }
    public bool isSet(QuickFix.NoBidComponents field)
    { return isSetField(field); }
    public bool isSetNoBidComponents()
    { return isSetField(420); }

    public class NoBidComponents: QuickFix.Group
    {
    public NoBidComponents() : base(420,12,message_order ) {}
    static int[] message_order = new int[] {12,13,479,497,66,421,54,44,423,406,430,63,64,336,625,58,354,355,0};
      public void set(QuickFix.Commission value)
      { setField(value); }
      public QuickFix.Commission get(QuickFix.Commission  value)
      { getField(value); return value; }
      public QuickFix.Commission getCommission()
      { QuickFix.Commission value = new QuickFix.Commission();
        getField(value); return value; }
      public bool isSet(QuickFix.Commission field)
      { return isSetField(field); }
      public bool isSetCommission()
      { return isSetField(12); }

      public void set(QuickFix.CommType value)
      { setField(value); }
      public QuickFix.CommType get(QuickFix.CommType  value)
      { getField(value); return value; }
      public QuickFix.CommType getCommType()
      { QuickFix.CommType value = new QuickFix.CommType();
        getField(value); return value; }
      public bool isSet(QuickFix.CommType field)
      { return isSetField(field); }
      public bool isSetCommType()
      { return isSetField(13); }

      public void set(QuickFix.CommCurrency value)
      { setField(value); }
      public QuickFix.CommCurrency get(QuickFix.CommCurrency  value)
      { getField(value); return value; }
      public QuickFix.CommCurrency getCommCurrency()
      { QuickFix.CommCurrency value = new QuickFix.CommCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.CommCurrency field)
      { return isSetField(field); }
      public bool isSetCommCurrency()
      { return isSetField(479); }

      public void set(QuickFix.FundRenewWaiv value)
      { setField(value); }
      public QuickFix.FundRenewWaiv get(QuickFix.FundRenewWaiv  value)
      { getField(value); return value; }
      public QuickFix.FundRenewWaiv getFundRenewWaiv()
      { QuickFix.FundRenewWaiv value = new QuickFix.FundRenewWaiv();
        getField(value); return value; }
      public bool isSet(QuickFix.FundRenewWaiv field)
      { return isSetField(field); }
      public bool isSetFundRenewWaiv()
      { return isSetField(497); }

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

      public void set(QuickFix.Country value)
      { setField(value); }
      public QuickFix.Country get(QuickFix.Country  value)
      { getField(value); return value; }
      public QuickFix.Country getCountry()
      { QuickFix.Country value = new QuickFix.Country();
        getField(value); return value; }
      public bool isSet(QuickFix.Country field)
      { return isSetField(field); }
      public bool isSetCountry()
      { return isSetField(421); }

      public void set(QuickFix.Side value)
      { setField(value); }
      public QuickFix.Side get(QuickFix.Side  value)
      { getField(value); return value; }
      public QuickFix.Side getSide()
      { QuickFix.Side value = new QuickFix.Side();
        getField(value); return value; }
      public bool isSet(QuickFix.Side field)
      { return isSetField(field); }
      public bool isSetSide()
      { return isSetField(54); }

      public void set(QuickFix.Price value)
      { setField(value); }
      public QuickFix.Price get(QuickFix.Price  value)
      { getField(value); return value; }
      public QuickFix.Price getPrice()
      { QuickFix.Price value = new QuickFix.Price();
        getField(value); return value; }
      public bool isSet(QuickFix.Price field)
      { return isSetField(field); }
      public bool isSetPrice()
      { return isSetField(44); }

      public void set(QuickFix.PriceType value)
      { setField(value); }
      public QuickFix.PriceType get(QuickFix.PriceType  value)
      { getField(value); return value; }
      public QuickFix.PriceType getPriceType()
      { QuickFix.PriceType value = new QuickFix.PriceType();
        getField(value); return value; }
      public bool isSet(QuickFix.PriceType field)
      { return isSetField(field); }
      public bool isSetPriceType()
      { return isSetField(423); }

      public void set(QuickFix.FairValue value)
      { setField(value); }
      public QuickFix.FairValue get(QuickFix.FairValue  value)
      { getField(value); return value; }
      public QuickFix.FairValue getFairValue()
      { QuickFix.FairValue value = new QuickFix.FairValue();
        getField(value); return value; }
      public bool isSet(QuickFix.FairValue field)
      { return isSetField(field); }
      public bool isSetFairValue()
      { return isSetField(406); }

      public void set(QuickFix.NetGrossInd value)
      { setField(value); }
      public QuickFix.NetGrossInd get(QuickFix.NetGrossInd  value)
      { getField(value); return value; }
      public QuickFix.NetGrossInd getNetGrossInd()
      { QuickFix.NetGrossInd value = new QuickFix.NetGrossInd();
        getField(value); return value; }
      public bool isSet(QuickFix.NetGrossInd field)
      { return isSetField(field); }
      public bool isSetNetGrossInd()
      { return isSetField(430); }

      public void set(QuickFix.SettlType value)
      { setField(value); }
      public QuickFix.SettlType get(QuickFix.SettlType  value)
      { getField(value); return value; }
      public QuickFix.SettlType getSettlType()
      { QuickFix.SettlType value = new QuickFix.SettlType();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlType field)
      { return isSetField(field); }
      public bool isSetSettlType()
      { return isSetField(63); }

      public void set(QuickFix.SettlDate value)
      { setField(value); }
      public QuickFix.SettlDate get(QuickFix.SettlDate  value)
      { getField(value); return value; }
      public QuickFix.SettlDate getSettlDate()
      { QuickFix.SettlDate value = new QuickFix.SettlDate();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlDate field)
      { return isSetField(field); }
      public bool isSetSettlDate()
      { return isSetField(64); }

      public void set(QuickFix.TradingSessionID value)
      { setField(value); }
      public QuickFix.TradingSessionID get(QuickFix.TradingSessionID  value)
      { getField(value); return value; }
      public QuickFix.TradingSessionID getTradingSessionID()
      { QuickFix.TradingSessionID value = new QuickFix.TradingSessionID();
        getField(value); return value; }
      public bool isSet(QuickFix.TradingSessionID field)
      { return isSetField(field); }
      public bool isSetTradingSessionID()
      { return isSetField(336); }

      public void set(QuickFix.TradingSessionSubID value)
      { setField(value); }
      public QuickFix.TradingSessionSubID get(QuickFix.TradingSessionSubID  value)
      { getField(value); return value; }
      public QuickFix.TradingSessionSubID getTradingSessionSubID()
      { QuickFix.TradingSessionSubID value = new QuickFix.TradingSessionSubID();
        getField(value); return value; }
      public bool isSet(QuickFix.TradingSessionSubID field)
      { return isSetField(field); }
      public bool isSetTradingSessionSubID()
      { return isSetField(625); }

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
  };

}

