namespace QuickFix42
{

  public class IndicationofInterest : Message
  {
    public IndicationofInterest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("6"); }

    public IndicationofInterest(
      QuickFix.IOIid aIOIid,
      QuickFix.IOITransType aIOITransType,
      QuickFix.Symbol aSymbol,
      QuickFix.Side aSide,
      QuickFix.IOIShares aIOIShares )
    : base(MsgType()) {
      set(aIOIid);
      set(aIOITransType);
      set(aSymbol);
      set(aSide);
      set(aIOIShares);
    }

    public void set(QuickFix.IOIid value)
    { setField(value); }
    public QuickFix.IOIid get(QuickFix.IOIid  value)
    { getField(value); return value; }
    public QuickFix.IOIid getIOIid()
    { QuickFix.IOIid value = new QuickFix.IOIid();
      getField(value); return value; }
    public bool isSet(QuickFix.IOIid field)
    { return isSetField(field); }
    public bool isSetIOIid()
    { return isSetField(23); }

    public void set(QuickFix.IOITransType value)
    { setField(value); }
    public QuickFix.IOITransType get(QuickFix.IOITransType  value)
    { getField(value); return value; }
    public QuickFix.IOITransType getIOITransType()
    { QuickFix.IOITransType value = new QuickFix.IOITransType();
      getField(value); return value; }
    public bool isSet(QuickFix.IOITransType field)
    { return isSetField(field); }
    public bool isSetIOITransType()
    { return isSetField(28); }

    public void set(QuickFix.IOIRefID value)
    { setField(value); }
    public QuickFix.IOIRefID get(QuickFix.IOIRefID  value)
    { getField(value); return value; }
    public QuickFix.IOIRefID getIOIRefID()
    { QuickFix.IOIRefID value = new QuickFix.IOIRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.IOIRefID field)
    { return isSetField(field); }
    public bool isSetIOIRefID()
    { return isSetField(26); }

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

    public void set(QuickFix.IOIShares value)
    { setField(value); }
    public QuickFix.IOIShares get(QuickFix.IOIShares  value)
    { getField(value); return value; }
    public QuickFix.IOIShares getIOIShares()
    { QuickFix.IOIShares value = new QuickFix.IOIShares();
      getField(value); return value; }
    public bool isSet(QuickFix.IOIShares field)
    { return isSetField(field); }
    public bool isSetIOIShares()
    { return isSetField(27); }

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

    public void set(QuickFix.Currency value)
    { setField(value); }
    public QuickFix.Currency get(QuickFix.Currency  value)
    { getField(value); return value; }
    public QuickFix.Currency getCurrency()
    { QuickFix.Currency value = new QuickFix.Currency();
      getField(value); return value; }
    public bool isSet(QuickFix.Currency field)
    { return isSetField(field); }
    public bool isSetCurrency()
    { return isSetField(15); }

    public void set(QuickFix.ValidUntilTime value)
    { setField(value); }
    public QuickFix.ValidUntilTime get(QuickFix.ValidUntilTime  value)
    { getField(value); return value; }
    public QuickFix.ValidUntilTime getValidUntilTime()
    { QuickFix.ValidUntilTime value = new QuickFix.ValidUntilTime();
      getField(value); return value; }
    public bool isSet(QuickFix.ValidUntilTime field)
    { return isSetField(field); }
    public bool isSetValidUntilTime()
    { return isSetField(62); }

    public void set(QuickFix.IOIQltyInd value)
    { setField(value); }
    public QuickFix.IOIQltyInd get(QuickFix.IOIQltyInd  value)
    { getField(value); return value; }
    public QuickFix.IOIQltyInd getIOIQltyInd()
    { QuickFix.IOIQltyInd value = new QuickFix.IOIQltyInd();
      getField(value); return value; }
    public bool isSet(QuickFix.IOIQltyInd field)
    { return isSetField(field); }
    public bool isSetIOIQltyInd()
    { return isSetField(25); }

    public void set(QuickFix.IOINaturalFlag value)
    { setField(value); }
    public QuickFix.IOINaturalFlag get(QuickFix.IOINaturalFlag  value)
    { getField(value); return value; }
    public QuickFix.IOINaturalFlag getIOINaturalFlag()
    { QuickFix.IOINaturalFlag value = new QuickFix.IOINaturalFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.IOINaturalFlag field)
    { return isSetField(field); }
    public bool isSetIOINaturalFlag()
    { return isSetField(130); }

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

    public void set(QuickFix.URLLink value)
    { setField(value); }
    public QuickFix.URLLink get(QuickFix.URLLink  value)
    { getField(value); return value; }
    public QuickFix.URLLink getURLLink()
    { QuickFix.URLLink value = new QuickFix.URLLink();
      getField(value); return value; }
    public bool isSet(QuickFix.URLLink field)
    { return isSetField(field); }
    public bool isSetURLLink()
    { return isSetField(149); }

    public void set(QuickFix.SpreadToBenchmark value)
    { setField(value); }
    public QuickFix.SpreadToBenchmark get(QuickFix.SpreadToBenchmark  value)
    { getField(value); return value; }
    public QuickFix.SpreadToBenchmark getSpreadToBenchmark()
    { QuickFix.SpreadToBenchmark value = new QuickFix.SpreadToBenchmark();
      getField(value); return value; }
    public bool isSet(QuickFix.SpreadToBenchmark field)
    { return isSetField(field); }
    public bool isSetSpreadToBenchmark()
    { return isSetField(218); }

    public void set(QuickFix.Benchmark value)
    { setField(value); }
    public QuickFix.Benchmark get(QuickFix.Benchmark  value)
    { getField(value); return value; }
    public QuickFix.Benchmark getBenchmark()
    { QuickFix.Benchmark value = new QuickFix.Benchmark();
      getField(value); return value; }
    public bool isSet(QuickFix.Benchmark field)
    { return isSetField(field); }
    public bool isSetBenchmark()
    { return isSetField(219); }

    public void set(QuickFix.NoIOIQualifiers value)
    { setField(value); }
    public QuickFix.NoIOIQualifiers get(QuickFix.NoIOIQualifiers  value)
    { getField(value); return value; }
    public QuickFix.NoIOIQualifiers getNoIOIQualifiers()
    { QuickFix.NoIOIQualifiers value = new QuickFix.NoIOIQualifiers();
      getField(value); return value; }
    public bool isSet(QuickFix.NoIOIQualifiers field)
    { return isSetField(field); }
    public bool isSetNoIOIQualifiers()
    { return isSetField(199); }

    public class NoIOIQualifiers: QuickFix.Group
    {
    public NoIOIQualifiers() : base(199,104,message_order ) {}
    static int[] message_order = new int[] {104,0};
      public void set(QuickFix.IOIQualifier value)
      { setField(value); }
      public QuickFix.IOIQualifier get(QuickFix.IOIQualifier  value)
      { getField(value); return value; }
      public QuickFix.IOIQualifier getIOIQualifier()
      { QuickFix.IOIQualifier value = new QuickFix.IOIQualifier();
        getField(value); return value; }
      public bool isSet(QuickFix.IOIQualifier field)
      { return isSetField(field); }
      public bool isSetIOIQualifier()
      { return isSetField(104); }

    };
    public void set(QuickFix.NoRoutingIDs value)
    { setField(value); }
    public QuickFix.NoRoutingIDs get(QuickFix.NoRoutingIDs  value)
    { getField(value); return value; }
    public QuickFix.NoRoutingIDs getNoRoutingIDs()
    { QuickFix.NoRoutingIDs value = new QuickFix.NoRoutingIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRoutingIDs field)
    { return isSetField(field); }
    public bool isSetNoRoutingIDs()
    { return isSetField(215); }

    public class NoRoutingIDs: QuickFix.Group
    {
    public NoRoutingIDs() : base(215,216,message_order ) {}
    static int[] message_order = new int[] {216,217,0};
      public void set(QuickFix.RoutingType value)
      { setField(value); }
      public QuickFix.RoutingType get(QuickFix.RoutingType  value)
      { getField(value); return value; }
      public QuickFix.RoutingType getRoutingType()
      { QuickFix.RoutingType value = new QuickFix.RoutingType();
        getField(value); return value; }
      public bool isSet(QuickFix.RoutingType field)
      { return isSetField(field); }
      public bool isSetRoutingType()
      { return isSetField(216); }

      public void set(QuickFix.RoutingID value)
      { setField(value); }
      public QuickFix.RoutingID get(QuickFix.RoutingID  value)
      { getField(value); return value; }
      public QuickFix.RoutingID getRoutingID()
      { QuickFix.RoutingID value = new QuickFix.RoutingID();
        getField(value); return value; }
      public bool isSet(QuickFix.RoutingID field)
      { return isSetField(field); }
      public bool isSetRoutingID()
      { return isSetField(217); }

    };
  };

}

