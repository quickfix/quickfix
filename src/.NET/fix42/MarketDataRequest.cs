namespace QuickFix42
{

  public class MarketDataRequest : Message
  {
    public MarketDataRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("V"); }

    public MarketDataRequest(
      QuickFix.MDReqID aMDReqID,
      QuickFix.SubscriptionRequestType aSubscriptionRequestType,
      QuickFix.MarketDepth aMarketDepth )
    : base(MsgType()) {
      set(aMDReqID);
      set(aSubscriptionRequestType);
      set(aMarketDepth);
    }

    public void set(QuickFix.MDReqID value)
    { setField(value); }
    public QuickFix.MDReqID get(QuickFix.MDReqID  value)
    { getField(value); return value; }
    public QuickFix.MDReqID getMDReqID()
    { QuickFix.MDReqID value = new QuickFix.MDReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.MDReqID field)
    { return isSetField(field); }
    public bool isSetMDReqID()
    { return isSetField(262); }

    public void set(QuickFix.SubscriptionRequestType value)
    { setField(value); }
    public QuickFix.SubscriptionRequestType get(QuickFix.SubscriptionRequestType  value)
    { getField(value); return value; }
    public QuickFix.SubscriptionRequestType getSubscriptionRequestType()
    { QuickFix.SubscriptionRequestType value = new QuickFix.SubscriptionRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SubscriptionRequestType field)
    { return isSetField(field); }
    public bool isSetSubscriptionRequestType()
    { return isSetField(263); }

    public void set(QuickFix.MarketDepth value)
    { setField(value); }
    public QuickFix.MarketDepth get(QuickFix.MarketDepth  value)
    { getField(value); return value; }
    public QuickFix.MarketDepth getMarketDepth()
    { QuickFix.MarketDepth value = new QuickFix.MarketDepth();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketDepth field)
    { return isSetField(field); }
    public bool isSetMarketDepth()
    { return isSetField(264); }

    public void set(QuickFix.MDUpdateType value)
    { setField(value); }
    public QuickFix.MDUpdateType get(QuickFix.MDUpdateType  value)
    { getField(value); return value; }
    public QuickFix.MDUpdateType getMDUpdateType()
    { QuickFix.MDUpdateType value = new QuickFix.MDUpdateType();
      getField(value); return value; }
    public bool isSet(QuickFix.MDUpdateType field)
    { return isSetField(field); }
    public bool isSetMDUpdateType()
    { return isSetField(265); }

    public void set(QuickFix.AggregatedBook value)
    { setField(value); }
    public QuickFix.AggregatedBook get(QuickFix.AggregatedBook  value)
    { getField(value); return value; }
    public QuickFix.AggregatedBook getAggregatedBook()
    { QuickFix.AggregatedBook value = new QuickFix.AggregatedBook();
      getField(value); return value; }
    public bool isSet(QuickFix.AggregatedBook field)
    { return isSetField(field); }
    public bool isSetAggregatedBook()
    { return isSetField(266); }

    public void set(QuickFix.NoMDEntryTypes value)
    { setField(value); }
    public QuickFix.NoMDEntryTypes get(QuickFix.NoMDEntryTypes  value)
    { getField(value); return value; }
    public QuickFix.NoMDEntryTypes getNoMDEntryTypes()
    { QuickFix.NoMDEntryTypes value = new QuickFix.NoMDEntryTypes();
      getField(value); return value; }
    public bool isSet(QuickFix.NoMDEntryTypes field)
    { return isSetField(field); }
    public bool isSetNoMDEntryTypes()
    { return isSetField(267); }

    public class NoMDEntryTypes: QuickFix.Group
    {
    public NoMDEntryTypes() : base(267,269,message_order ) {}
    static int[] message_order = new int[] {269,0};
      public void set(QuickFix.MDEntryType value)
      { setField(value); }
      public QuickFix.MDEntryType get(QuickFix.MDEntryType  value)
      { getField(value); return value; }
      public QuickFix.MDEntryType getMDEntryType()
      { QuickFix.MDEntryType value = new QuickFix.MDEntryType();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryType field)
      { return isSetField(field); }
      public bool isSetMDEntryType()
      { return isSetField(269); }

    };
    public void set(QuickFix.NoRelatedSym value)
    { setField(value); }
    public QuickFix.NoRelatedSym get(QuickFix.NoRelatedSym  value)
    { getField(value); return value; }
    public QuickFix.NoRelatedSym getNoRelatedSym()
    { QuickFix.NoRelatedSym value = new QuickFix.NoRelatedSym();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRelatedSym field)
    { return isSetField(field); }
    public bool isSetNoRelatedSym()
    { return isSetField(146); }

    public class NoRelatedSym: QuickFix.Group
    {
    public NoRelatedSym() : base(146,55,message_order ) {}
    static int[] message_order = new int[] {55,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,336,0};
      public void set(QuickFix.Symbol value)
      { setField(value); }
      public QuickFix.Symbol get(QuickFix.Symbol  value)
      { getField(value); return value; }
      public QuickFix.Symbol getSymbol()
      { QuickFix.Symbol value = new QuickFix.Symbol();
        getField(value); return value; }
      public bool isSet(QuickFix.Symbol field)
      { return isSetField(field); }
      public bool isSetSymbol()
      { return isSetField(55); }

      public void set(QuickFix.SymbolSfx value)
      { setField(value); }
      public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.SymbolSfx getSymbolSfx()
      { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.SymbolSfx field)
      { return isSetField(field); }
      public bool isSetSymbolSfx()
      { return isSetField(65); }

      public void set(QuickFix.SecurityID value)
      { setField(value); }
      public QuickFix.SecurityID get(QuickFix.SecurityID  value)
      { getField(value); return value; }
      public QuickFix.SecurityID getSecurityID()
      { QuickFix.SecurityID value = new QuickFix.SecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityID field)
      { return isSetField(field); }
      public bool isSetSecurityID()
      { return isSetField(48); }

      public void set(QuickFix.IDSource value)
      { setField(value); }
      public QuickFix.IDSource get(QuickFix.IDSource  value)
      { getField(value); return value; }
      public QuickFix.IDSource getIDSource()
      { QuickFix.IDSource value = new QuickFix.IDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.IDSource field)
      { return isSetField(field); }
      public bool isSetIDSource()
      { return isSetField(22); }

      public void set(QuickFix.SecurityType value)
      { setField(value); }
      public QuickFix.SecurityType get(QuickFix.SecurityType  value)
      { getField(value); return value; }
      public QuickFix.SecurityType getSecurityType()
      { QuickFix.SecurityType value = new QuickFix.SecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityType field)
      { return isSetField(field); }
      public bool isSetSecurityType()
      { return isSetField(167); }

      public void set(QuickFix.MaturityMonthYear value)
      { setField(value); }
      public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.MaturityMonthYear getMaturityMonthYear()
      { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetMaturityMonthYear()
      { return isSetField(200); }

      public void set(QuickFix.MaturityDay value)
      { setField(value); }
      public QuickFix.MaturityDay get(QuickFix.MaturityDay  value)
      { getField(value); return value; }
      public QuickFix.MaturityDay getMaturityDay()
      { QuickFix.MaturityDay value = new QuickFix.MaturityDay();
        getField(value); return value; }
      public bool isSet(QuickFix.MaturityDay field)
      { return isSetField(field); }
      public bool isSetMaturityDay()
      { return isSetField(205); }

      public void set(QuickFix.PutOrCall value)
      { setField(value); }
      public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
      { getField(value); return value; }
      public QuickFix.PutOrCall getPutOrCall()
      { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.PutOrCall field)
      { return isSetField(field); }
      public bool isSetPutOrCall()
      { return isSetField(201); }

      public void set(QuickFix.StrikePrice value)
      { setField(value); }
      public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
      { getField(value); return value; }
      public QuickFix.StrikePrice getStrikePrice()
      { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.StrikePrice field)
      { return isSetField(field); }
      public bool isSetStrikePrice()
      { return isSetField(202); }

      public void set(QuickFix.OptAttribute value)
      { setField(value); }
      public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
      { getField(value); return value; }
      public QuickFix.OptAttribute getOptAttribute()
      { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.OptAttribute field)
      { return isSetField(field); }
      public bool isSetOptAttribute()
      { return isSetField(206); }

      public void set(QuickFix.ContractMultiplier value)
      { setField(value); }
      public QuickFix.ContractMultiplier get(QuickFix.ContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.ContractMultiplier getContractMultiplier()
      { QuickFix.ContractMultiplier value = new QuickFix.ContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.ContractMultiplier field)
      { return isSetField(field); }
      public bool isSetContractMultiplier()
      { return isSetField(231); }

      public void set(QuickFix.CouponRate value)
      { setField(value); }
      public QuickFix.CouponRate get(QuickFix.CouponRate  value)
      { getField(value); return value; }
      public QuickFix.CouponRate getCouponRate()
      { QuickFix.CouponRate value = new QuickFix.CouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.CouponRate field)
      { return isSetField(field); }
      public bool isSetCouponRate()
      { return isSetField(223); }

      public void set(QuickFix.SecurityExchange value)
      { setField(value); }
      public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.SecurityExchange getSecurityExchange()
      { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityExchange field)
      { return isSetField(field); }
      public bool isSetSecurityExchange()
      { return isSetField(207); }

      public void set(QuickFix.Issuer value)
      { setField(value); }
      public QuickFix.Issuer get(QuickFix.Issuer  value)
      { getField(value); return value; }
      public QuickFix.Issuer getIssuer()
      { QuickFix.Issuer value = new QuickFix.Issuer();
        getField(value); return value; }
      public bool isSet(QuickFix.Issuer field)
      { return isSetField(field); }
      public bool isSetIssuer()
      { return isSetField(106); }

      public void set(QuickFix.EncodedIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedIssuerLen get(QuickFix.EncodedIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuerLen getEncodedIssuerLen()
      { QuickFix.EncodedIssuerLen value = new QuickFix.EncodedIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedIssuerLen()
      { return isSetField(348); }

      public void set(QuickFix.EncodedIssuer value)
      { setField(value); }
      public QuickFix.EncodedIssuer get(QuickFix.EncodedIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedIssuer getEncodedIssuer()
      { QuickFix.EncodedIssuer value = new QuickFix.EncodedIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedIssuer()
      { return isSetField(349); }

      public void set(QuickFix.SecurityDesc value)
      { setField(value); }
      public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.SecurityDesc getSecurityDesc()
      { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityDesc field)
      { return isSetField(field); }
      public bool isSetSecurityDesc()
      { return isSetField(107); }

      public void set(QuickFix.EncodedSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedSecurityDescLen get(QuickFix.EncodedSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDescLen getEncodedSecurityDescLen()
      { QuickFix.EncodedSecurityDescLen value = new QuickFix.EncodedSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDescLen()
      { return isSetField(350); }

      public void set(QuickFix.EncodedSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedSecurityDesc get(QuickFix.EncodedSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedSecurityDesc getEncodedSecurityDesc()
      { QuickFix.EncodedSecurityDesc value = new QuickFix.EncodedSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedSecurityDesc()
      { return isSetField(351); }

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

    };
  };

}

