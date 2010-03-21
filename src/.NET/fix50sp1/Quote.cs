namespace QuickFix50Sp1
{

  public class Quote : Message
  {
    public Quote() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("S"); }

    public Quote(
      QuickFix.QuoteID aQuoteID )
    : base(MsgType()) {
      set(aQuoteID);
    }

    public void set(QuickFix.QuoteReqID value)
    { setField(value); }
    public QuickFix.QuoteReqID get(QuickFix.QuoteReqID  value)
    { getField(value); return value; }
    public QuickFix.QuoteReqID getQuoteReqID()
    { QuickFix.QuoteReqID value = new QuickFix.QuoteReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteReqID field)
    { return isSetField(field); }
    public bool isSetQuoteReqID()
    { return isSetField(131); }

    public void set(QuickFix.QuoteID value)
    { setField(value); }
    public QuickFix.QuoteID get(QuickFix.QuoteID  value)
    { getField(value); return value; }
    public QuickFix.QuoteID getQuoteID()
    { QuickFix.QuoteID value = new QuickFix.QuoteID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteID field)
    { return isSetField(field); }
    public bool isSetQuoteID()
    { return isSetField(117); }

    public void set(QuickFix.QuoteRespID value)
    { setField(value); }
    public QuickFix.QuoteRespID get(QuickFix.QuoteRespID  value)
    { getField(value); return value; }
    public QuickFix.QuoteRespID getQuoteRespID()
    { QuickFix.QuoteRespID value = new QuickFix.QuoteRespID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteRespID field)
    { return isSetField(field); }
    public bool isSetQuoteRespID()
    { return isSetField(693); }

    public void set(QuickFix.QuoteType value)
    { setField(value); }
    public QuickFix.QuoteType get(QuickFix.QuoteType  value)
    { getField(value); return value; }
    public QuickFix.QuoteType getQuoteType()
    { QuickFix.QuoteType value = new QuickFix.QuoteType();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteType field)
    { return isSetField(field); }
    public bool isSetQuoteType()
    { return isSetField(537); }

    public void set(QuickFix.NoQuoteQualifiers value)
    { setField(value); }
    public QuickFix.NoQuoteQualifiers get(QuickFix.NoQuoteQualifiers  value)
    { getField(value); return value; }
    public QuickFix.NoQuoteQualifiers getNoQuoteQualifiers()
    { QuickFix.NoQuoteQualifiers value = new QuickFix.NoQuoteQualifiers();
      getField(value); return value; }
    public bool isSet(QuickFix.NoQuoteQualifiers field)
    { return isSetField(field); }
    public bool isSetNoQuoteQualifiers()
    { return isSetField(735); }

    public class NoQuoteQualifiers: QuickFix.Group
    {
    public NoQuoteQualifiers() : base(735,695,message_order ) {}
    static int[] message_order = new int[] {695,0};
      public void set(QuickFix.QuoteQualifier value)
      { setField(value); }
      public QuickFix.QuoteQualifier get(QuickFix.QuoteQualifier  value)
      { getField(value); return value; }
      public QuickFix.QuoteQualifier getQuoteQualifier()
      { QuickFix.QuoteQualifier value = new QuickFix.QuoteQualifier();
        getField(value); return value; }
      public bool isSet(QuickFix.QuoteQualifier field)
      { return isSetField(field); }
      public bool isSetQuoteQualifier()
      { return isSetField(695); }

    };
    public void set(QuickFix.QuoteResponseLevel value)
    { setField(value); }
    public QuickFix.QuoteResponseLevel get(QuickFix.QuoteResponseLevel  value)
    { getField(value); return value; }
    public QuickFix.QuoteResponseLevel getQuoteResponseLevel()
    { QuickFix.QuoteResponseLevel value = new QuickFix.QuoteResponseLevel();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteResponseLevel field)
    { return isSetField(field); }
    public bool isSetQuoteResponseLevel()
    { return isSetField(301); }

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
    static int[] message_order = new int[] {448,447,452,802,0};
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

      public void set(QuickFix.NoPartySubIDs value)
      { setField(value); }
      public QuickFix.NoPartySubIDs get(QuickFix.NoPartySubIDs  value)
      { getField(value); return value; }
      public QuickFix.NoPartySubIDs getNoPartySubIDs()
      { QuickFix.NoPartySubIDs value = new QuickFix.NoPartySubIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoPartySubIDs field)
      { return isSetField(field); }
      public bool isSetNoPartySubIDs()
      { return isSetField(802); }

      public class NoPartySubIDs: QuickFix.Group
      {
      public NoPartySubIDs() : base(802,523,message_order ) {}
      static int[] message_order = new int[] {523,803,0};
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

        public void set(QuickFix.PartySubIDType value)
        { setField(value); }
        public QuickFix.PartySubIDType get(QuickFix.PartySubIDType  value)
        { getField(value); return value; }
        public QuickFix.PartySubIDType getPartySubIDType()
        { QuickFix.PartySubIDType value = new QuickFix.PartySubIDType();
          getField(value); return value; }
        public bool isSet(QuickFix.PartySubIDType field)
        { return isSetField(field); }
        public bool isSetPartySubIDType()
        { return isSetField(803); }

      };
    };
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

    public void set(QuickFix.SecurityIDSource value)
    { setField(value); }
    public QuickFix.SecurityIDSource get(QuickFix.SecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.SecurityIDSource getSecurityIDSource()
    { QuickFix.SecurityIDSource value = new QuickFix.SecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityIDSource field)
    { return isSetField(field); }
    public bool isSetSecurityIDSource()
    { return isSetField(22); }

    public void set(QuickFix.Product value)
    { setField(value); }
    public QuickFix.Product get(QuickFix.Product  value)
    { getField(value); return value; }
    public QuickFix.Product getProduct()
    { QuickFix.Product value = new QuickFix.Product();
      getField(value); return value; }
    public bool isSet(QuickFix.Product field)
    { return isSetField(field); }
    public bool isSetProduct()
    { return isSetField(460); }

    public void set(QuickFix.CFICode value)
    { setField(value); }
    public QuickFix.CFICode get(QuickFix.CFICode  value)
    { getField(value); return value; }
    public QuickFix.CFICode getCFICode()
    { QuickFix.CFICode value = new QuickFix.CFICode();
      getField(value); return value; }
    public bool isSet(QuickFix.CFICode field)
    { return isSetField(field); }
    public bool isSetCFICode()
    { return isSetField(461); }

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

    public void set(QuickFix.SecuritySubType value)
    { setField(value); }
    public QuickFix.SecuritySubType get(QuickFix.SecuritySubType  value)
    { getField(value); return value; }
    public QuickFix.SecuritySubType getSecuritySubType()
    { QuickFix.SecuritySubType value = new QuickFix.SecuritySubType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySubType field)
    { return isSetField(field); }
    public bool isSetSecuritySubType()
    { return isSetField(762); }

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

    public void set(QuickFix.MaturityDate value)
    { setField(value); }
    public QuickFix.MaturityDate get(QuickFix.MaturityDate  value)
    { getField(value); return value; }
    public QuickFix.MaturityDate getMaturityDate()
    { QuickFix.MaturityDate value = new QuickFix.MaturityDate();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityDate field)
    { return isSetField(field); }
    public bool isSetMaturityDate()
    { return isSetField(541); }

    public void set(QuickFix.CouponPaymentDate value)
    { setField(value); }
    public QuickFix.CouponPaymentDate get(QuickFix.CouponPaymentDate  value)
    { getField(value); return value; }
    public QuickFix.CouponPaymentDate getCouponPaymentDate()
    { QuickFix.CouponPaymentDate value = new QuickFix.CouponPaymentDate();
      getField(value); return value; }
    public bool isSet(QuickFix.CouponPaymentDate field)
    { return isSetField(field); }
    public bool isSetCouponPaymentDate()
    { return isSetField(224); }

    public void set(QuickFix.IssueDate value)
    { setField(value); }
    public QuickFix.IssueDate get(QuickFix.IssueDate  value)
    { getField(value); return value; }
    public QuickFix.IssueDate getIssueDate()
    { QuickFix.IssueDate value = new QuickFix.IssueDate();
      getField(value); return value; }
    public bool isSet(QuickFix.IssueDate field)
    { return isSetField(field); }
    public bool isSetIssueDate()
    { return isSetField(225); }

    public void set(QuickFix.RepoCollateralSecurityType value)
    { setField(value); }
    public QuickFix.RepoCollateralSecurityType get(QuickFix.RepoCollateralSecurityType  value)
    { getField(value); return value; }
    public QuickFix.RepoCollateralSecurityType getRepoCollateralSecurityType()
    { QuickFix.RepoCollateralSecurityType value = new QuickFix.RepoCollateralSecurityType();
      getField(value); return value; }
    public bool isSet(QuickFix.RepoCollateralSecurityType field)
    { return isSetField(field); }
    public bool isSetRepoCollateralSecurityType()
    { return isSetField(239); }

    public void set(QuickFix.RepurchaseTerm value)
    { setField(value); }
    public QuickFix.RepurchaseTerm get(QuickFix.RepurchaseTerm  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseTerm getRepurchaseTerm()
    { QuickFix.RepurchaseTerm value = new QuickFix.RepurchaseTerm();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseTerm field)
    { return isSetField(field); }
    public bool isSetRepurchaseTerm()
    { return isSetField(226); }

    public void set(QuickFix.RepurchaseRate value)
    { setField(value); }
    public QuickFix.RepurchaseRate get(QuickFix.RepurchaseRate  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseRate getRepurchaseRate()
    { QuickFix.RepurchaseRate value = new QuickFix.RepurchaseRate();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseRate field)
    { return isSetField(field); }
    public bool isSetRepurchaseRate()
    { return isSetField(227); }

    public void set(QuickFix.Factor value)
    { setField(value); }
    public QuickFix.Factor get(QuickFix.Factor  value)
    { getField(value); return value; }
    public QuickFix.Factor getFactor()
    { QuickFix.Factor value = new QuickFix.Factor();
      getField(value); return value; }
    public bool isSet(QuickFix.Factor field)
    { return isSetField(field); }
    public bool isSetFactor()
    { return isSetField(228); }

    public void set(QuickFix.CreditRating value)
    { setField(value); }
    public QuickFix.CreditRating get(QuickFix.CreditRating  value)
    { getField(value); return value; }
    public QuickFix.CreditRating getCreditRating()
    { QuickFix.CreditRating value = new QuickFix.CreditRating();
      getField(value); return value; }
    public bool isSet(QuickFix.CreditRating field)
    { return isSetField(field); }
    public bool isSetCreditRating()
    { return isSetField(255); }

    public void set(QuickFix.InstrRegistry value)
    { setField(value); }
    public QuickFix.InstrRegistry get(QuickFix.InstrRegistry  value)
    { getField(value); return value; }
    public QuickFix.InstrRegistry getInstrRegistry()
    { QuickFix.InstrRegistry value = new QuickFix.InstrRegistry();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrRegistry field)
    { return isSetField(field); }
    public bool isSetInstrRegistry()
    { return isSetField(543); }

    public void set(QuickFix.CountryOfIssue value)
    { setField(value); }
    public QuickFix.CountryOfIssue get(QuickFix.CountryOfIssue  value)
    { getField(value); return value; }
    public QuickFix.CountryOfIssue getCountryOfIssue()
    { QuickFix.CountryOfIssue value = new QuickFix.CountryOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.CountryOfIssue field)
    { return isSetField(field); }
    public bool isSetCountryOfIssue()
    { return isSetField(470); }

    public void set(QuickFix.StateOrProvinceOfIssue value)
    { setField(value); }
    public QuickFix.StateOrProvinceOfIssue get(QuickFix.StateOrProvinceOfIssue  value)
    { getField(value); return value; }
    public QuickFix.StateOrProvinceOfIssue getStateOrProvinceOfIssue()
    { QuickFix.StateOrProvinceOfIssue value = new QuickFix.StateOrProvinceOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.StateOrProvinceOfIssue field)
    { return isSetField(field); }
    public bool isSetStateOrProvinceOfIssue()
    { return isSetField(471); }

    public void set(QuickFix.LocaleOfIssue value)
    { setField(value); }
    public QuickFix.LocaleOfIssue get(QuickFix.LocaleOfIssue  value)
    { getField(value); return value; }
    public QuickFix.LocaleOfIssue getLocaleOfIssue()
    { QuickFix.LocaleOfIssue value = new QuickFix.LocaleOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.LocaleOfIssue field)
    { return isSetField(field); }
    public bool isSetLocaleOfIssue()
    { return isSetField(472); }

    public void set(QuickFix.RedemptionDate value)
    { setField(value); }
    public QuickFix.RedemptionDate get(QuickFix.RedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.RedemptionDate getRedemptionDate()
    { QuickFix.RedemptionDate value = new QuickFix.RedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.RedemptionDate field)
    { return isSetField(field); }
    public bool isSetRedemptionDate()
    { return isSetField(240); }

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

    public void set(QuickFix.StrikeCurrency value)
    { setField(value); }
    public QuickFix.StrikeCurrency get(QuickFix.StrikeCurrency  value)
    { getField(value); return value; }
    public QuickFix.StrikeCurrency getStrikeCurrency()
    { QuickFix.StrikeCurrency value = new QuickFix.StrikeCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeCurrency field)
    { return isSetField(field); }
    public bool isSetStrikeCurrency()
    { return isSetField(947); }

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

    public void set(QuickFix.Pool value)
    { setField(value); }
    public QuickFix.Pool get(QuickFix.Pool  value)
    { getField(value); return value; }
    public QuickFix.Pool getPool()
    { QuickFix.Pool value = new QuickFix.Pool();
      getField(value); return value; }
    public bool isSet(QuickFix.Pool field)
    { return isSetField(field); }
    public bool isSetPool()
    { return isSetField(691); }

    public void set(QuickFix.ContractSettlMonth value)
    { setField(value); }
    public QuickFix.ContractSettlMonth get(QuickFix.ContractSettlMonth  value)
    { getField(value); return value; }
    public QuickFix.ContractSettlMonth getContractSettlMonth()
    { QuickFix.ContractSettlMonth value = new QuickFix.ContractSettlMonth();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractSettlMonth field)
    { return isSetField(field); }
    public bool isSetContractSettlMonth()
    { return isSetField(667); }

    public void set(QuickFix.CPProgram value)
    { setField(value); }
    public QuickFix.CPProgram get(QuickFix.CPProgram  value)
    { getField(value); return value; }
    public QuickFix.CPProgram getCPProgram()
    { QuickFix.CPProgram value = new QuickFix.CPProgram();
      getField(value); return value; }
    public bool isSet(QuickFix.CPProgram field)
    { return isSetField(field); }
    public bool isSetCPProgram()
    { return isSetField(875); }

    public void set(QuickFix.CPRegType value)
    { setField(value); }
    public QuickFix.CPRegType get(QuickFix.CPRegType  value)
    { getField(value); return value; }
    public QuickFix.CPRegType getCPRegType()
    { QuickFix.CPRegType value = new QuickFix.CPRegType();
      getField(value); return value; }
    public bool isSet(QuickFix.CPRegType field)
    { return isSetField(field); }
    public bool isSetCPRegType()
    { return isSetField(876); }

    public void set(QuickFix.DatedDate value)
    { setField(value); }
    public QuickFix.DatedDate get(QuickFix.DatedDate  value)
    { getField(value); return value; }
    public QuickFix.DatedDate getDatedDate()
    { QuickFix.DatedDate value = new QuickFix.DatedDate();
      getField(value); return value; }
    public bool isSet(QuickFix.DatedDate field)
    { return isSetField(field); }
    public bool isSetDatedDate()
    { return isSetField(873); }

    public void set(QuickFix.InterestAccrualDate value)
    { setField(value); }
    public QuickFix.InterestAccrualDate get(QuickFix.InterestAccrualDate  value)
    { getField(value); return value; }
    public QuickFix.InterestAccrualDate getInterestAccrualDate()
    { QuickFix.InterestAccrualDate value = new QuickFix.InterestAccrualDate();
      getField(value); return value; }
    public bool isSet(QuickFix.InterestAccrualDate field)
    { return isSetField(field); }
    public bool isSetInterestAccrualDate()
    { return isSetField(874); }

    public void set(QuickFix.SecurityStatus value)
    { setField(value); }
    public QuickFix.SecurityStatus get(QuickFix.SecurityStatus  value)
    { getField(value); return value; }
    public QuickFix.SecurityStatus getSecurityStatus()
    { QuickFix.SecurityStatus value = new QuickFix.SecurityStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityStatus field)
    { return isSetField(field); }
    public bool isSetSecurityStatus()
    { return isSetField(965); }

    public void set(QuickFix.SettleOnOpenFlag value)
    { setField(value); }
    public QuickFix.SettleOnOpenFlag get(QuickFix.SettleOnOpenFlag  value)
    { getField(value); return value; }
    public QuickFix.SettleOnOpenFlag getSettleOnOpenFlag()
    { QuickFix.SettleOnOpenFlag value = new QuickFix.SettleOnOpenFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.SettleOnOpenFlag field)
    { return isSetField(field); }
    public bool isSetSettleOnOpenFlag()
    { return isSetField(966); }

    public void set(QuickFix.InstrmtAssignmentMethod value)
    { setField(value); }
    public QuickFix.InstrmtAssignmentMethod get(QuickFix.InstrmtAssignmentMethod  value)
    { getField(value); return value; }
    public QuickFix.InstrmtAssignmentMethod getInstrmtAssignmentMethod()
    { QuickFix.InstrmtAssignmentMethod value = new QuickFix.InstrmtAssignmentMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrmtAssignmentMethod field)
    { return isSetField(field); }
    public bool isSetInstrmtAssignmentMethod()
    { return isSetField(1049); }

    public void set(QuickFix.StrikeMultiplier value)
    { setField(value); }
    public QuickFix.StrikeMultiplier get(QuickFix.StrikeMultiplier  value)
    { getField(value); return value; }
    public QuickFix.StrikeMultiplier getStrikeMultiplier()
    { QuickFix.StrikeMultiplier value = new QuickFix.StrikeMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeMultiplier field)
    { return isSetField(field); }
    public bool isSetStrikeMultiplier()
    { return isSetField(967); }

    public void set(QuickFix.StrikeValue value)
    { setField(value); }
    public QuickFix.StrikeValue get(QuickFix.StrikeValue  value)
    { getField(value); return value; }
    public QuickFix.StrikeValue getStrikeValue()
    { QuickFix.StrikeValue value = new QuickFix.StrikeValue();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeValue field)
    { return isSetField(field); }
    public bool isSetStrikeValue()
    { return isSetField(968); }

    public void set(QuickFix.MinPriceIncrement value)
    { setField(value); }
    public QuickFix.MinPriceIncrement get(QuickFix.MinPriceIncrement  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrement getMinPriceIncrement()
    { QuickFix.MinPriceIncrement value = new QuickFix.MinPriceIncrement();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrement field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrement()
    { return isSetField(969); }

    public void set(QuickFix.PositionLimit value)
    { setField(value); }
    public QuickFix.PositionLimit get(QuickFix.PositionLimit  value)
    { getField(value); return value; }
    public QuickFix.PositionLimit getPositionLimit()
    { QuickFix.PositionLimit value = new QuickFix.PositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.PositionLimit field)
    { return isSetField(field); }
    public bool isSetPositionLimit()
    { return isSetField(970); }

    public void set(QuickFix.NTPositionLimit value)
    { setField(value); }
    public QuickFix.NTPositionLimit get(QuickFix.NTPositionLimit  value)
    { getField(value); return value; }
    public QuickFix.NTPositionLimit getNTPositionLimit()
    { QuickFix.NTPositionLimit value = new QuickFix.NTPositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.NTPositionLimit field)
    { return isSetField(field); }
    public bool isSetNTPositionLimit()
    { return isSetField(971); }

    public void set(QuickFix.UnitOfMeasure value)
    { setField(value); }
    public QuickFix.UnitOfMeasure get(QuickFix.UnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasure getUnitOfMeasure()
    { QuickFix.UnitOfMeasure value = new QuickFix.UnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasure()
    { return isSetField(996); }

    public void set(QuickFix.TimeUnit value)
    { setField(value); }
    public QuickFix.TimeUnit get(QuickFix.TimeUnit  value)
    { getField(value); return value; }
    public QuickFix.TimeUnit getTimeUnit()
    { QuickFix.TimeUnit value = new QuickFix.TimeUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeUnit field)
    { return isSetField(field); }
    public bool isSetTimeUnit()
    { return isSetField(997); }

    public void set(QuickFix.MaturityTime value)
    { setField(value); }
    public QuickFix.MaturityTime get(QuickFix.MaturityTime  value)
    { getField(value); return value; }
    public QuickFix.MaturityTime getMaturityTime()
    { QuickFix.MaturityTime value = new QuickFix.MaturityTime();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityTime field)
    { return isSetField(field); }
    public bool isSetMaturityTime()
    { return isSetField(1079); }

    public void set(QuickFix.SecurityGroup value)
    { setField(value); }
    public QuickFix.SecurityGroup get(QuickFix.SecurityGroup  value)
    { getField(value); return value; }
    public QuickFix.SecurityGroup getSecurityGroup()
    { QuickFix.SecurityGroup value = new QuickFix.SecurityGroup();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityGroup field)
    { return isSetField(field); }
    public bool isSetSecurityGroup()
    { return isSetField(1151); }

    public void set(QuickFix.MinPriceIncrementAmount value)
    { setField(value); }
    public QuickFix.MinPriceIncrementAmount get(QuickFix.MinPriceIncrementAmount  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrementAmount getMinPriceIncrementAmount()
    { QuickFix.MinPriceIncrementAmount value = new QuickFix.MinPriceIncrementAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrementAmount field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrementAmount()
    { return isSetField(1146); }

    public void set(QuickFix.UnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.UnitOfMeasureQty get(QuickFix.UnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasureQty getUnitOfMeasureQty()
    { QuickFix.UnitOfMeasureQty value = new QuickFix.UnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasureQty()
    { return isSetField(1147); }

    public void set(QuickFix.ProductComplex value)
    { setField(value); }
    public QuickFix.ProductComplex get(QuickFix.ProductComplex  value)
    { getField(value); return value; }
    public QuickFix.ProductComplex getProductComplex()
    { QuickFix.ProductComplex value = new QuickFix.ProductComplex();
      getField(value); return value; }
    public bool isSet(QuickFix.ProductComplex field)
    { return isSetField(field); }
    public bool isSetProductComplex()
    { return isSetField(1227); }

    public void set(QuickFix.PriceUnitOfMeasure value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasure get(QuickFix.PriceUnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasure getPriceUnitOfMeasure()
    { QuickFix.PriceUnitOfMeasure value = new QuickFix.PriceUnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasure()
    { return isSetField(1191); }

    public void set(QuickFix.PriceUnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasureQty get(QuickFix.PriceUnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasureQty getPriceUnitOfMeasureQty()
    { QuickFix.PriceUnitOfMeasureQty value = new QuickFix.PriceUnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasureQty()
    { return isSetField(1192); }

    public void set(QuickFix.SettlMethod value)
    { setField(value); }
    public QuickFix.SettlMethod get(QuickFix.SettlMethod  value)
    { getField(value); return value; }
    public QuickFix.SettlMethod getSettlMethod()
    { QuickFix.SettlMethod value = new QuickFix.SettlMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlMethod field)
    { return isSetField(field); }
    public bool isSetSettlMethod()
    { return isSetField(1193); }

    public void set(QuickFix.ExerciseStyle value)
    { setField(value); }
    public QuickFix.ExerciseStyle get(QuickFix.ExerciseStyle  value)
    { getField(value); return value; }
    public QuickFix.ExerciseStyle getExerciseStyle()
    { QuickFix.ExerciseStyle value = new QuickFix.ExerciseStyle();
      getField(value); return value; }
    public bool isSet(QuickFix.ExerciseStyle field)
    { return isSetField(field); }
    public bool isSetExerciseStyle()
    { return isSetField(1194); }

    public void set(QuickFix.OptPayAmount value)
    { setField(value); }
    public QuickFix.OptPayAmount get(QuickFix.OptPayAmount  value)
    { getField(value); return value; }
    public QuickFix.OptPayAmount getOptPayAmount()
    { QuickFix.OptPayAmount value = new QuickFix.OptPayAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayAmount field)
    { return isSetField(field); }
    public bool isSetOptPayAmount()
    { return isSetField(1195); }

    public void set(QuickFix.PriceQuoteMethod value)
    { setField(value); }
    public QuickFix.PriceQuoteMethod get(QuickFix.PriceQuoteMethod  value)
    { getField(value); return value; }
    public QuickFix.PriceQuoteMethod getPriceQuoteMethod()
    { QuickFix.PriceQuoteMethod value = new QuickFix.PriceQuoteMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceQuoteMethod field)
    { return isSetField(field); }
    public bool isSetPriceQuoteMethod()
    { return isSetField(1196); }

    public void set(QuickFix.ListMethod value)
    { setField(value); }
    public QuickFix.ListMethod get(QuickFix.ListMethod  value)
    { getField(value); return value; }
    public QuickFix.ListMethod getListMethod()
    { QuickFix.ListMethod value = new QuickFix.ListMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ListMethod field)
    { return isSetField(field); }
    public bool isSetListMethod()
    { return isSetField(1198); }

    public void set(QuickFix.CapPrice value)
    { setField(value); }
    public QuickFix.CapPrice get(QuickFix.CapPrice  value)
    { getField(value); return value; }
    public QuickFix.CapPrice getCapPrice()
    { QuickFix.CapPrice value = new QuickFix.CapPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.CapPrice field)
    { return isSetField(field); }
    public bool isSetCapPrice()
    { return isSetField(1199); }

    public void set(QuickFix.FloorPrice value)
    { setField(value); }
    public QuickFix.FloorPrice get(QuickFix.FloorPrice  value)
    { getField(value); return value; }
    public QuickFix.FloorPrice getFloorPrice()
    { QuickFix.FloorPrice value = new QuickFix.FloorPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.FloorPrice field)
    { return isSetField(field); }
    public bool isSetFloorPrice()
    { return isSetField(1200); }

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

    public void set(QuickFix.FlexibleIndicator value)
    { setField(value); }
    public QuickFix.FlexibleIndicator get(QuickFix.FlexibleIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexibleIndicator getFlexibleIndicator()
    { QuickFix.FlexibleIndicator value = new QuickFix.FlexibleIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexibleIndicator field)
    { return isSetField(field); }
    public bool isSetFlexibleIndicator()
    { return isSetField(1244); }

    public void set(QuickFix.FlexProductEligibilityIndicator value)
    { setField(value); }
    public QuickFix.FlexProductEligibilityIndicator get(QuickFix.FlexProductEligibilityIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexProductEligibilityIndicator getFlexProductEligibilityIndicator()
    { QuickFix.FlexProductEligibilityIndicator value = new QuickFix.FlexProductEligibilityIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexProductEligibilityIndicator field)
    { return isSetField(field); }
    public bool isSetFlexProductEligibilityIndicator()
    { return isSetField(1242); }

    public void set(QuickFix.FuturesValuationMethod value)
    { setField(value); }
    public QuickFix.FuturesValuationMethod get(QuickFix.FuturesValuationMethod  value)
    { getField(value); return value; }
    public QuickFix.FuturesValuationMethod getFuturesValuationMethod()
    { QuickFix.FuturesValuationMethod value = new QuickFix.FuturesValuationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.FuturesValuationMethod field)
    { return isSetField(field); }
    public bool isSetFuturesValuationMethod()
    { return isSetField(1197); }

    public void set(QuickFix.AgreementDesc value)
    { setField(value); }
    public QuickFix.AgreementDesc get(QuickFix.AgreementDesc  value)
    { getField(value); return value; }
    public QuickFix.AgreementDesc getAgreementDesc()
    { QuickFix.AgreementDesc value = new QuickFix.AgreementDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDesc field)
    { return isSetField(field); }
    public bool isSetAgreementDesc()
    { return isSetField(913); }

    public void set(QuickFix.AgreementID value)
    { setField(value); }
    public QuickFix.AgreementID get(QuickFix.AgreementID  value)
    { getField(value); return value; }
    public QuickFix.AgreementID getAgreementID()
    { QuickFix.AgreementID value = new QuickFix.AgreementID();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementID field)
    { return isSetField(field); }
    public bool isSetAgreementID()
    { return isSetField(914); }

    public void set(QuickFix.AgreementDate value)
    { setField(value); }
    public QuickFix.AgreementDate get(QuickFix.AgreementDate  value)
    { getField(value); return value; }
    public QuickFix.AgreementDate getAgreementDate()
    { QuickFix.AgreementDate value = new QuickFix.AgreementDate();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDate field)
    { return isSetField(field); }
    public bool isSetAgreementDate()
    { return isSetField(915); }

    public void set(QuickFix.AgreementCurrency value)
    { setField(value); }
    public QuickFix.AgreementCurrency get(QuickFix.AgreementCurrency  value)
    { getField(value); return value; }
    public QuickFix.AgreementCurrency getAgreementCurrency()
    { QuickFix.AgreementCurrency value = new QuickFix.AgreementCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementCurrency field)
    { return isSetField(field); }
    public bool isSetAgreementCurrency()
    { return isSetField(918); }

    public void set(QuickFix.TerminationType value)
    { setField(value); }
    public QuickFix.TerminationType get(QuickFix.TerminationType  value)
    { getField(value); return value; }
    public QuickFix.TerminationType getTerminationType()
    { QuickFix.TerminationType value = new QuickFix.TerminationType();
      getField(value); return value; }
    public bool isSet(QuickFix.TerminationType field)
    { return isSetField(field); }
    public bool isSetTerminationType()
    { return isSetField(788); }

    public void set(QuickFix.StartDate value)
    { setField(value); }
    public QuickFix.StartDate get(QuickFix.StartDate  value)
    { getField(value); return value; }
    public QuickFix.StartDate getStartDate()
    { QuickFix.StartDate value = new QuickFix.StartDate();
      getField(value); return value; }
    public bool isSet(QuickFix.StartDate field)
    { return isSetField(field); }
    public bool isSetStartDate()
    { return isSetField(916); }

    public void set(QuickFix.EndDate value)
    { setField(value); }
    public QuickFix.EndDate get(QuickFix.EndDate  value)
    { getField(value); return value; }
    public QuickFix.EndDate getEndDate()
    { QuickFix.EndDate value = new QuickFix.EndDate();
      getField(value); return value; }
    public bool isSet(QuickFix.EndDate field)
    { return isSetField(field); }
    public bool isSetEndDate()
    { return isSetField(917); }

    public void set(QuickFix.DeliveryType value)
    { setField(value); }
    public QuickFix.DeliveryType get(QuickFix.DeliveryType  value)
    { getField(value); return value; }
    public QuickFix.DeliveryType getDeliveryType()
    { QuickFix.DeliveryType value = new QuickFix.DeliveryType();
      getField(value); return value; }
    public bool isSet(QuickFix.DeliveryType field)
    { return isSetField(field); }
    public bool isSetDeliveryType()
    { return isSetField(919); }

    public void set(QuickFix.MarginRatio value)
    { setField(value); }
    public QuickFix.MarginRatio get(QuickFix.MarginRatio  value)
    { getField(value); return value; }
    public QuickFix.MarginRatio getMarginRatio()
    { QuickFix.MarginRatio value = new QuickFix.MarginRatio();
      getField(value); return value; }
    public bool isSet(QuickFix.MarginRatio field)
    { return isSetField(field); }
    public bool isSetMarginRatio()
    { return isSetField(898); }

    public void set(QuickFix.NoUnderlyings value)
    { setField(value); }
    public QuickFix.NoUnderlyings get(QuickFix.NoUnderlyings  value)
    { getField(value); return value; }
    public QuickFix.NoUnderlyings getNoUnderlyings()
    { QuickFix.NoUnderlyings value = new QuickFix.NoUnderlyings();
      getField(value); return value; }
    public bool isSet(QuickFix.NoUnderlyings field)
    { return isSetField(field); }
    public bool isSetNoUnderlyings()
    { return isSetField(711); }

    public class NoUnderlyings: QuickFix.Group
    {
    public NoUnderlyings() : base(711,311,message_order ) {}
    static int[] message_order = new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,1213,315,1419,1423,1424,1425,0};
      public void set(QuickFix.UnderlyingSymbol value)
      { setField(value); }
      public QuickFix.UnderlyingSymbol get(QuickFix.UnderlyingSymbol  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbol getUnderlyingSymbol()
      { QuickFix.UnderlyingSymbol value = new QuickFix.UnderlyingSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbol field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbol()
      { return isSetField(311); }

      public void set(QuickFix.UnderlyingSymbolSfx value)
      { setField(value); }
      public QuickFix.UnderlyingSymbolSfx get(QuickFix.UnderlyingSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbolSfx getUnderlyingSymbolSfx()
      { QuickFix.UnderlyingSymbolSfx value = new QuickFix.UnderlyingSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbolSfx field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbolSfx()
      { return isSetField(312); }

      public void set(QuickFix.UnderlyingSecurityID value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityID get(QuickFix.UnderlyingSecurityID  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityID getUnderlyingSecurityID()
      { QuickFix.UnderlyingSecurityID value = new QuickFix.UnderlyingSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityID field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityID()
      { return isSetField(309); }

      public void set(QuickFix.UnderlyingSecurityIDSource value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityIDSource get(QuickFix.UnderlyingSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource()
      { QuickFix.UnderlyingSecurityIDSource value = new QuickFix.UnderlyingSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityIDSource()
      { return isSetField(305); }

      public void set(QuickFix.UnderlyingProduct value)
      { setField(value); }
      public QuickFix.UnderlyingProduct get(QuickFix.UnderlyingProduct  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingProduct getUnderlyingProduct()
      { QuickFix.UnderlyingProduct value = new QuickFix.UnderlyingProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingProduct field)
      { return isSetField(field); }
      public bool isSetUnderlyingProduct()
      { return isSetField(462); }

      public void set(QuickFix.UnderlyingCFICode value)
      { setField(value); }
      public QuickFix.UnderlyingCFICode get(QuickFix.UnderlyingCFICode  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCFICode getUnderlyingCFICode()
      { QuickFix.UnderlyingCFICode value = new QuickFix.UnderlyingCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCFICode field)
      { return isSetField(field); }
      public bool isSetUnderlyingCFICode()
      { return isSetField(463); }

      public void set(QuickFix.UnderlyingSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityType get(QuickFix.UnderlyingSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityType getUnderlyingSecurityType()
      { QuickFix.UnderlyingSecurityType value = new QuickFix.UnderlyingSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityType()
      { return isSetField(310); }

      public void set(QuickFix.UnderlyingSecuritySubType value)
      { setField(value); }
      public QuickFix.UnderlyingSecuritySubType get(QuickFix.UnderlyingSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecuritySubType getUnderlyingSecuritySubType()
      { QuickFix.UnderlyingSecuritySubType value = new QuickFix.UnderlyingSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecuritySubType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecuritySubType()
      { return isSetField(763); }

      public void set(QuickFix.UnderlyingMaturityMonthYear value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityMonthYear get(QuickFix.UnderlyingMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear()
      { QuickFix.UnderlyingMaturityMonthYear value = new QuickFix.UnderlyingMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityMonthYear()
      { return isSetField(313); }

      public void set(QuickFix.UnderlyingMaturityDate value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityDate get(QuickFix.UnderlyingMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityDate getUnderlyingMaturityDate()
      { QuickFix.UnderlyingMaturityDate value = new QuickFix.UnderlyingMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityDate()
      { return isSetField(542); }

      public void set(QuickFix.UnderlyingCouponPaymentDate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponPaymentDate get(QuickFix.UnderlyingCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate()
      { QuickFix.UnderlyingCouponPaymentDate value = new QuickFix.UnderlyingCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponPaymentDate()
      { return isSetField(241); }

      public void set(QuickFix.UnderlyingIssueDate value)
      { setField(value); }
      public QuickFix.UnderlyingIssueDate get(QuickFix.UnderlyingIssueDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssueDate getUnderlyingIssueDate()
      { QuickFix.UnderlyingIssueDate value = new QuickFix.UnderlyingIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssueDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssueDate()
      { return isSetField(242); }

      public void set(QuickFix.UnderlyingRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingRepoCollateralSecurityType get(QuickFix.UnderlyingRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType()
      { QuickFix.UnderlyingRepoCollateralSecurityType value = new QuickFix.UnderlyingRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepoCollateralSecurityType()
      { return isSetField(243); }

      public void set(QuickFix.UnderlyingRepurchaseTerm value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseTerm get(QuickFix.UnderlyingRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm()
      { QuickFix.UnderlyingRepurchaseTerm value = new QuickFix.UnderlyingRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseTerm()
      { return isSetField(244); }

      public void set(QuickFix.UnderlyingRepurchaseRate value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseRate get(QuickFix.UnderlyingRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate()
      { QuickFix.UnderlyingRepurchaseRate value = new QuickFix.UnderlyingRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseRate()
      { return isSetField(245); }

      public void set(QuickFix.UnderlyingFactor value)
      { setField(value); }
      public QuickFix.UnderlyingFactor get(QuickFix.UnderlyingFactor  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFactor getUnderlyingFactor()
      { QuickFix.UnderlyingFactor value = new QuickFix.UnderlyingFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFactor field)
      { return isSetField(field); }
      public bool isSetUnderlyingFactor()
      { return isSetField(246); }

      public void set(QuickFix.UnderlyingCreditRating value)
      { setField(value); }
      public QuickFix.UnderlyingCreditRating get(QuickFix.UnderlyingCreditRating  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCreditRating getUnderlyingCreditRating()
      { QuickFix.UnderlyingCreditRating value = new QuickFix.UnderlyingCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCreditRating field)
      { return isSetField(field); }
      public bool isSetUnderlyingCreditRating()
      { return isSetField(256); }

      public void set(QuickFix.UnderlyingInstrRegistry value)
      { setField(value); }
      public QuickFix.UnderlyingInstrRegistry get(QuickFix.UnderlyingInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingInstrRegistry getUnderlyingInstrRegistry()
      { QuickFix.UnderlyingInstrRegistry value = new QuickFix.UnderlyingInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingInstrRegistry field)
      { return isSetField(field); }
      public bool isSetUnderlyingInstrRegistry()
      { return isSetField(595); }

      public void set(QuickFix.UnderlyingCountryOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingCountryOfIssue get(QuickFix.UnderlyingCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue()
      { QuickFix.UnderlyingCountryOfIssue value = new QuickFix.UnderlyingCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCountryOfIssue()
      { return isSetField(592); }

      public void set(QuickFix.UnderlyingStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingStateOrProvinceOfIssue get(QuickFix.UnderlyingStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue()
      { QuickFix.UnderlyingStateOrProvinceOfIssue value = new QuickFix.UnderlyingStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStateOrProvinceOfIssue()
      { return isSetField(593); }

      public void set(QuickFix.UnderlyingLocaleOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingLocaleOfIssue get(QuickFix.UnderlyingLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue()
      { QuickFix.UnderlyingLocaleOfIssue value = new QuickFix.UnderlyingLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingLocaleOfIssue()
      { return isSetField(594); }

      public void set(QuickFix.UnderlyingRedemptionDate value)
      { setField(value); }
      public QuickFix.UnderlyingRedemptionDate get(QuickFix.UnderlyingRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRedemptionDate getUnderlyingRedemptionDate()
      { QuickFix.UnderlyingRedemptionDate value = new QuickFix.UnderlyingRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRedemptionDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRedemptionDate()
      { return isSetField(247); }

      public void set(QuickFix.UnderlyingStrikePrice value)
      { setField(value); }
      public QuickFix.UnderlyingStrikePrice get(QuickFix.UnderlyingStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikePrice getUnderlyingStrikePrice()
      { QuickFix.UnderlyingStrikePrice value = new QuickFix.UnderlyingStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikePrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikePrice()
      { return isSetField(316); }

      public void set(QuickFix.UnderlyingStrikeCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingStrikeCurrency get(QuickFix.UnderlyingStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency()
      { QuickFix.UnderlyingStrikeCurrency value = new QuickFix.UnderlyingStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikeCurrency()
      { return isSetField(941); }

      public void set(QuickFix.UnderlyingOptAttribute value)
      { setField(value); }
      public QuickFix.UnderlyingOptAttribute get(QuickFix.UnderlyingOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingOptAttribute getUnderlyingOptAttribute()
      { QuickFix.UnderlyingOptAttribute value = new QuickFix.UnderlyingOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingOptAttribute field)
      { return isSetField(field); }
      public bool isSetUnderlyingOptAttribute()
      { return isSetField(317); }

      public void set(QuickFix.UnderlyingContractMultiplier value)
      { setField(value); }
      public QuickFix.UnderlyingContractMultiplier get(QuickFix.UnderlyingContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingContractMultiplier getUnderlyingContractMultiplier()
      { QuickFix.UnderlyingContractMultiplier value = new QuickFix.UnderlyingContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingContractMultiplier field)
      { return isSetField(field); }
      public bool isSetUnderlyingContractMultiplier()
      { return isSetField(436); }

      public void set(QuickFix.UnderlyingCouponRate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponRate get(QuickFix.UnderlyingCouponRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponRate getUnderlyingCouponRate()
      { QuickFix.UnderlyingCouponRate value = new QuickFix.UnderlyingCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponRate()
      { return isSetField(435); }

      public void set(QuickFix.UnderlyingSecurityExchange value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityExchange get(QuickFix.UnderlyingSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityExchange getUnderlyingSecurityExchange()
      { QuickFix.UnderlyingSecurityExchange value = new QuickFix.UnderlyingSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityExchange field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityExchange()
      { return isSetField(308); }

      public void set(QuickFix.UnderlyingIssuer value)
      { setField(value); }
      public QuickFix.UnderlyingIssuer get(QuickFix.UnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssuer getUnderlyingIssuer()
      { QuickFix.UnderlyingIssuer value = new QuickFix.UnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssuer()
      { return isSetField(306); }

      public void set(QuickFix.EncodedUnderlyingIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuerLen get(QuickFix.EncodedUnderlyingIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen()
      { QuickFix.EncodedUnderlyingIssuerLen value = new QuickFix.EncodedUnderlyingIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuerLen()
      { return isSetField(362); }

      public void set(QuickFix.EncodedUnderlyingIssuer value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuer get(QuickFix.EncodedUnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer()
      { QuickFix.EncodedUnderlyingIssuer value = new QuickFix.EncodedUnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuer()
      { return isSetField(363); }

      public void set(QuickFix.UnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityDesc get(QuickFix.UnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityDesc getUnderlyingSecurityDesc()
      { QuickFix.UnderlyingSecurityDesc value = new QuickFix.UnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityDesc()
      { return isSetField(307); }

      public void set(QuickFix.EncodedUnderlyingSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDescLen get(QuickFix.EncodedUnderlyingSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen()
      { QuickFix.EncodedUnderlyingSecurityDescLen value = new QuickFix.EncodedUnderlyingSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDescLen()
      { return isSetField(364); }

      public void set(QuickFix.EncodedUnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDesc get(QuickFix.EncodedUnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc()
      { QuickFix.EncodedUnderlyingSecurityDesc value = new QuickFix.EncodedUnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDesc()
      { return isSetField(365); }

      public void set(QuickFix.UnderlyingCPProgram value)
      { setField(value); }
      public QuickFix.UnderlyingCPProgram get(QuickFix.UnderlyingCPProgram  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPProgram getUnderlyingCPProgram()
      { QuickFix.UnderlyingCPProgram value = new QuickFix.UnderlyingCPProgram();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPProgram field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPProgram()
      { return isSetField(877); }

      public void set(QuickFix.UnderlyingCPRegType value)
      { setField(value); }
      public QuickFix.UnderlyingCPRegType get(QuickFix.UnderlyingCPRegType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPRegType getUnderlyingCPRegType()
      { QuickFix.UnderlyingCPRegType value = new QuickFix.UnderlyingCPRegType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPRegType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPRegType()
      { return isSetField(878); }

      public void set(QuickFix.UnderlyingCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingCurrency get(QuickFix.UnderlyingCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrency getUnderlyingCurrency()
      { QuickFix.UnderlyingCurrency value = new QuickFix.UnderlyingCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrency()
      { return isSetField(318); }

      public void set(QuickFix.UnderlyingQty value)
      { setField(value); }
      public QuickFix.UnderlyingQty get(QuickFix.UnderlyingQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingQty getUnderlyingQty()
      { QuickFix.UnderlyingQty value = new QuickFix.UnderlyingQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingQty()
      { return isSetField(879); }

      public void set(QuickFix.UnderlyingPx value)
      { setField(value); }
      public QuickFix.UnderlyingPx get(QuickFix.UnderlyingPx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPx getUnderlyingPx()
      { QuickFix.UnderlyingPx value = new QuickFix.UnderlyingPx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPx field)
      { return isSetField(field); }
      public bool isSetUnderlyingPx()
      { return isSetField(810); }

      public void set(QuickFix.UnderlyingDirtyPrice value)
      { setField(value); }
      public QuickFix.UnderlyingDirtyPrice get(QuickFix.UnderlyingDirtyPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingDirtyPrice getUnderlyingDirtyPrice()
      { QuickFix.UnderlyingDirtyPrice value = new QuickFix.UnderlyingDirtyPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingDirtyPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingDirtyPrice()
      { return isSetField(882); }

      public void set(QuickFix.UnderlyingEndPrice value)
      { setField(value); }
      public QuickFix.UnderlyingEndPrice get(QuickFix.UnderlyingEndPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndPrice getUnderlyingEndPrice()
      { QuickFix.UnderlyingEndPrice value = new QuickFix.UnderlyingEndPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndPrice()
      { return isSetField(883); }

      public void set(QuickFix.UnderlyingStartValue value)
      { setField(value); }
      public QuickFix.UnderlyingStartValue get(QuickFix.UnderlyingStartValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStartValue getUnderlyingStartValue()
      { QuickFix.UnderlyingStartValue value = new QuickFix.UnderlyingStartValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStartValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStartValue()
      { return isSetField(884); }

      public void set(QuickFix.UnderlyingCurrentValue value)
      { setField(value); }
      public QuickFix.UnderlyingCurrentValue get(QuickFix.UnderlyingCurrentValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrentValue getUnderlyingCurrentValue()
      { QuickFix.UnderlyingCurrentValue value = new QuickFix.UnderlyingCurrentValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrentValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrentValue()
      { return isSetField(885); }

      public void set(QuickFix.UnderlyingEndValue value)
      { setField(value); }
      public QuickFix.UnderlyingEndValue get(QuickFix.UnderlyingEndValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndValue getUnderlyingEndValue()
      { QuickFix.UnderlyingEndValue value = new QuickFix.UnderlyingEndValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndValue()
      { return isSetField(886); }

      public void set(QuickFix.UnderlyingAllocationPercent value)
      { setField(value); }
      public QuickFix.UnderlyingAllocationPercent get(QuickFix.UnderlyingAllocationPercent  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAllocationPercent getUnderlyingAllocationPercent()
      { QuickFix.UnderlyingAllocationPercent value = new QuickFix.UnderlyingAllocationPercent();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAllocationPercent field)
      { return isSetField(field); }
      public bool isSetUnderlyingAllocationPercent()
      { return isSetField(972); }

      public void set(QuickFix.UnderlyingSettlementType value)
      { setField(value); }
      public QuickFix.UnderlyingSettlementType get(QuickFix.UnderlyingSettlementType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlementType getUnderlyingSettlementType()
      { QuickFix.UnderlyingSettlementType value = new QuickFix.UnderlyingSettlementType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlementType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlementType()
      { return isSetField(975); }

      public void set(QuickFix.UnderlyingCashAmount value)
      { setField(value); }
      public QuickFix.UnderlyingCashAmount get(QuickFix.UnderlyingCashAmount  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashAmount getUnderlyingCashAmount()
      { QuickFix.UnderlyingCashAmount value = new QuickFix.UnderlyingCashAmount();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashAmount field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashAmount()
      { return isSetField(973); }

      public void set(QuickFix.UnderlyingCashType value)
      { setField(value); }
      public QuickFix.UnderlyingCashType get(QuickFix.UnderlyingCashType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashType getUnderlyingCashType()
      { QuickFix.UnderlyingCashType value = new QuickFix.UnderlyingCashType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashType()
      { return isSetField(974); }

      public void set(QuickFix.UnderlyingUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasure get(QuickFix.UnderlyingUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasure getUnderlyingUnitOfMeasure()
      { QuickFix.UnderlyingUnitOfMeasure value = new QuickFix.UnderlyingUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasure()
      { return isSetField(998); }

      public void set(QuickFix.UnderlyingTimeUnit value)
      { setField(value); }
      public QuickFix.UnderlyingTimeUnit get(QuickFix.UnderlyingTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingTimeUnit getUnderlyingTimeUnit()
      { QuickFix.UnderlyingTimeUnit value = new QuickFix.UnderlyingTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingTimeUnit field)
      { return isSetField(field); }
      public bool isSetUnderlyingTimeUnit()
      { return isSetField(1000); }

      public void set(QuickFix.UnderlyingCapValue value)
      { setField(value); }
      public QuickFix.UnderlyingCapValue get(QuickFix.UnderlyingCapValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCapValue getUnderlyingCapValue()
      { QuickFix.UnderlyingCapValue value = new QuickFix.UnderlyingCapValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCapValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCapValue()
      { return isSetField(1038); }

      public void set(QuickFix.UnderlyingSettlMethod value)
      { setField(value); }
      public QuickFix.UnderlyingSettlMethod get(QuickFix.UnderlyingSettlMethod  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlMethod getUnderlyingSettlMethod()
      { QuickFix.UnderlyingSettlMethod value = new QuickFix.UnderlyingSettlMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlMethod field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlMethod()
      { return isSetField(1039); }

      public void set(QuickFix.UnderlyingAdjustedQuantity value)
      { setField(value); }
      public QuickFix.UnderlyingAdjustedQuantity get(QuickFix.UnderlyingAdjustedQuantity  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity()
      { QuickFix.UnderlyingAdjustedQuantity value = new QuickFix.UnderlyingAdjustedQuantity();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAdjustedQuantity field)
      { return isSetField(field); }
      public bool isSetUnderlyingAdjustedQuantity()
      { return isSetField(1044); }

      public void set(QuickFix.UnderlyingFXRate value)
      { setField(value); }
      public QuickFix.UnderlyingFXRate get(QuickFix.UnderlyingFXRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRate getUnderlyingFXRate()
      { QuickFix.UnderlyingFXRate value = new QuickFix.UnderlyingFXRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRate()
      { return isSetField(1045); }

      public void set(QuickFix.UnderlyingFXRateCalc value)
      { setField(value); }
      public QuickFix.UnderlyingFXRateCalc get(QuickFix.UnderlyingFXRateCalc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRateCalc getUnderlyingFXRateCalc()
      { QuickFix.UnderlyingFXRateCalc value = new QuickFix.UnderlyingFXRateCalc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRateCalc field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRateCalc()
      { return isSetField(1046); }

      public void set(QuickFix.UnderlyingMaturityTime value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityTime get(QuickFix.UnderlyingMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityTime getUnderlyingMaturityTime()
      { QuickFix.UnderlyingMaturityTime value = new QuickFix.UnderlyingMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityTime field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityTime()
      { return isSetField(1213); }

      public void set(QuickFix.UnderlyingPutOrCall value)
      { setField(value); }
      public QuickFix.UnderlyingPutOrCall get(QuickFix.UnderlyingPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPutOrCall getUnderlyingPutOrCall()
      { QuickFix.UnderlyingPutOrCall value = new QuickFix.UnderlyingPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPutOrCall field)
      { return isSetField(field); }
      public bool isSetUnderlyingPutOrCall()
      { return isSetField(315); }

      public void set(QuickFix.UnderlyingExerciseStyle value)
      { setField(value); }
      public QuickFix.UnderlyingExerciseStyle get(QuickFix.UnderlyingExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingExerciseStyle getUnderlyingExerciseStyle()
      { QuickFix.UnderlyingExerciseStyle value = new QuickFix.UnderlyingExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingExerciseStyle field)
      { return isSetField(field); }
      public bool isSetUnderlyingExerciseStyle()
      { return isSetField(1419); }

      public void set(QuickFix.UnderlyingUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasureQty get(QuickFix.UnderlyingUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasureQty getUnderlyingUnitOfMeasureQty()
      { QuickFix.UnderlyingUnitOfMeasureQty value = new QuickFix.UnderlyingUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasureQty()
      { return isSetField(1423); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasure get(QuickFix.UnderlyingPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasure getUnderlyingPriceUnitOfMeasure()
      { QuickFix.UnderlyingPriceUnitOfMeasure value = new QuickFix.UnderlyingPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasure()
      { return isSetField(1424); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty get(QuickFix.UnderlyingPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty getUnderlyingPriceUnitOfMeasureQty()
      { QuickFix.UnderlyingPriceUnitOfMeasureQty value = new QuickFix.UnderlyingPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasureQty()
      { return isSetField(1425); }

    };
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

    public void set(QuickFix.OrderQty value)
    { setField(value); }
    public QuickFix.OrderQty get(QuickFix.OrderQty  value)
    { getField(value); return value; }
    public QuickFix.OrderQty getOrderQty()
    { QuickFix.OrderQty value = new QuickFix.OrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty field)
    { return isSetField(field); }
    public bool isSetOrderQty()
    { return isSetField(38); }

    public void set(QuickFix.CashOrderQty value)
    { setField(value); }
    public QuickFix.CashOrderQty get(QuickFix.CashOrderQty  value)
    { getField(value); return value; }
    public QuickFix.CashOrderQty getCashOrderQty()
    { QuickFix.CashOrderQty value = new QuickFix.CashOrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.CashOrderQty field)
    { return isSetField(field); }
    public bool isSetCashOrderQty()
    { return isSetField(152); }

    public void set(QuickFix.OrderPercent value)
    { setField(value); }
    public QuickFix.OrderPercent get(QuickFix.OrderPercent  value)
    { getField(value); return value; }
    public QuickFix.OrderPercent getOrderPercent()
    { QuickFix.OrderPercent value = new QuickFix.OrderPercent();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderPercent field)
    { return isSetField(field); }
    public bool isSetOrderPercent()
    { return isSetField(516); }

    public void set(QuickFix.RoundingDirection value)
    { setField(value); }
    public QuickFix.RoundingDirection get(QuickFix.RoundingDirection  value)
    { getField(value); return value; }
    public QuickFix.RoundingDirection getRoundingDirection()
    { QuickFix.RoundingDirection value = new QuickFix.RoundingDirection();
      getField(value); return value; }
    public bool isSet(QuickFix.RoundingDirection field)
    { return isSetField(field); }
    public bool isSetRoundingDirection()
    { return isSetField(468); }

    public void set(QuickFix.RoundingModulus value)
    { setField(value); }
    public QuickFix.RoundingModulus get(QuickFix.RoundingModulus  value)
    { getField(value); return value; }
    public QuickFix.RoundingModulus getRoundingModulus()
    { QuickFix.RoundingModulus value = new QuickFix.RoundingModulus();
      getField(value); return value; }
    public bool isSet(QuickFix.RoundingModulus field)
    { return isSetField(field); }
    public bool isSetRoundingModulus()
    { return isSetField(469); }

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

    public void set(QuickFix.SettlDate2 value)
    { setField(value); }
    public QuickFix.SettlDate2 get(QuickFix.SettlDate2  value)
    { getField(value); return value; }
    public QuickFix.SettlDate2 getSettlDate2()
    { QuickFix.SettlDate2 value = new QuickFix.SettlDate2();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDate2 field)
    { return isSetField(field); }
    public bool isSetSettlDate2()
    { return isSetField(193); }

    public void set(QuickFix.OrderQty2 value)
    { setField(value); }
    public QuickFix.OrderQty2 get(QuickFix.OrderQty2  value)
    { getField(value); return value; }
    public QuickFix.OrderQty2 getOrderQty2()
    { QuickFix.OrderQty2 value = new QuickFix.OrderQty2();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty2 field)
    { return isSetField(field); }
    public bool isSetOrderQty2()
    { return isSetField(192); }

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

    public void set(QuickFix.NoStipulations value)
    { setField(value); }
    public QuickFix.NoStipulations get(QuickFix.NoStipulations  value)
    { getField(value); return value; }
    public QuickFix.NoStipulations getNoStipulations()
    { QuickFix.NoStipulations value = new QuickFix.NoStipulations();
      getField(value); return value; }
    public bool isSet(QuickFix.NoStipulations field)
    { return isSetField(field); }
    public bool isSetNoStipulations()
    { return isSetField(232); }

    public class NoStipulations: QuickFix.Group
    {
    public NoStipulations() : base(232,233,message_order ) {}
    static int[] message_order = new int[] {233,234,0};
      public void set(QuickFix.StipulationType value)
      { setField(value); }
      public QuickFix.StipulationType get(QuickFix.StipulationType  value)
      { getField(value); return value; }
      public QuickFix.StipulationType getStipulationType()
      { QuickFix.StipulationType value = new QuickFix.StipulationType();
        getField(value); return value; }
      public bool isSet(QuickFix.StipulationType field)
      { return isSetField(field); }
      public bool isSetStipulationType()
      { return isSetField(233); }

      public void set(QuickFix.StipulationValue value)
      { setField(value); }
      public QuickFix.StipulationValue get(QuickFix.StipulationValue  value)
      { getField(value); return value; }
      public QuickFix.StipulationValue getStipulationValue()
      { QuickFix.StipulationValue value = new QuickFix.StipulationValue();
        getField(value); return value; }
      public bool isSet(QuickFix.StipulationValue field)
      { return isSetField(field); }
      public bool isSetStipulationValue()
      { return isSetField(234); }

    };
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

    public void set(QuickFix.AcctIDSource value)
    { setField(value); }
    public QuickFix.AcctIDSource get(QuickFix.AcctIDSource  value)
    { getField(value); return value; }
    public QuickFix.AcctIDSource getAcctIDSource()
    { QuickFix.AcctIDSource value = new QuickFix.AcctIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.AcctIDSource field)
    { return isSetField(field); }
    public bool isSetAcctIDSource()
    { return isSetField(660); }

    public void set(QuickFix.AccountType value)
    { setField(value); }
    public QuickFix.AccountType get(QuickFix.AccountType  value)
    { getField(value); return value; }
    public QuickFix.AccountType getAccountType()
    { QuickFix.AccountType value = new QuickFix.AccountType();
      getField(value); return value; }
    public bool isSet(QuickFix.AccountType field)
    { return isSetField(field); }
    public bool isSetAccountType()
    { return isSetField(581); }

    public void set(QuickFix.NoLegs value)
    { setField(value); }
    public QuickFix.NoLegs get(QuickFix.NoLegs  value)
    { getField(value); return value; }
    public QuickFix.NoLegs getNoLegs()
    { QuickFix.NoLegs value = new QuickFix.NoLegs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoLegs field)
    { return isSetField(field); }
    public bool isSetNoLegs()
    { return isSetField(555); }

    public class NoLegs: QuickFix.Group
    {
    public NoLegs() : base(555,600,message_order ) {}
    static int[] message_order = new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,1017,566,1212,1358,1420,1224,1421,1422,687,690,587,588,683,539,686,681,684,676,677,678,679,680,685,654,1067,1068,0};
      public void set(QuickFix.LegSymbol value)
      { setField(value); }
      public QuickFix.LegSymbol get(QuickFix.LegSymbol  value)
      { getField(value); return value; }
      public QuickFix.LegSymbol getLegSymbol()
      { QuickFix.LegSymbol value = new QuickFix.LegSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbol field)
      { return isSetField(field); }
      public bool isSetLegSymbol()
      { return isSetField(600); }

      public void set(QuickFix.LegSymbolSfx value)
      { setField(value); }
      public QuickFix.LegSymbolSfx get(QuickFix.LegSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.LegSymbolSfx getLegSymbolSfx()
      { QuickFix.LegSymbolSfx value = new QuickFix.LegSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbolSfx field)
      { return isSetField(field); }
      public bool isSetLegSymbolSfx()
      { return isSetField(601); }

      public void set(QuickFix.LegSecurityID value)
      { setField(value); }
      public QuickFix.LegSecurityID get(QuickFix.LegSecurityID  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityID getLegSecurityID()
      { QuickFix.LegSecurityID value = new QuickFix.LegSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityID field)
      { return isSetField(field); }
      public bool isSetLegSecurityID()
      { return isSetField(602); }

      public void set(QuickFix.LegSecurityIDSource value)
      { setField(value); }
      public QuickFix.LegSecurityIDSource get(QuickFix.LegSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityIDSource getLegSecurityIDSource()
      { QuickFix.LegSecurityIDSource value = new QuickFix.LegSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetLegSecurityIDSource()
      { return isSetField(603); }

      public void set(QuickFix.LegProduct value)
      { setField(value); }
      public QuickFix.LegProduct get(QuickFix.LegProduct  value)
      { getField(value); return value; }
      public QuickFix.LegProduct getLegProduct()
      { QuickFix.LegProduct value = new QuickFix.LegProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.LegProduct field)
      { return isSetField(field); }
      public bool isSetLegProduct()
      { return isSetField(607); }

      public void set(QuickFix.LegCFICode value)
      { setField(value); }
      public QuickFix.LegCFICode get(QuickFix.LegCFICode  value)
      { getField(value); return value; }
      public QuickFix.LegCFICode getLegCFICode()
      { QuickFix.LegCFICode value = new QuickFix.LegCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCFICode field)
      { return isSetField(field); }
      public bool isSetLegCFICode()
      { return isSetField(608); }

      public void set(QuickFix.LegSecurityType value)
      { setField(value); }
      public QuickFix.LegSecurityType get(QuickFix.LegSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityType getLegSecurityType()
      { QuickFix.LegSecurityType value = new QuickFix.LegSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityType field)
      { return isSetField(field); }
      public bool isSetLegSecurityType()
      { return isSetField(609); }

      public void set(QuickFix.LegSecuritySubType value)
      { setField(value); }
      public QuickFix.LegSecuritySubType get(QuickFix.LegSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.LegSecuritySubType getLegSecuritySubType()
      { QuickFix.LegSecuritySubType value = new QuickFix.LegSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecuritySubType field)
      { return isSetField(field); }
      public bool isSetLegSecuritySubType()
      { return isSetField(764); }

      public void set(QuickFix.LegMaturityMonthYear value)
      { setField(value); }
      public QuickFix.LegMaturityMonthYear get(QuickFix.LegMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityMonthYear getLegMaturityMonthYear()
      { QuickFix.LegMaturityMonthYear value = new QuickFix.LegMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetLegMaturityMonthYear()
      { return isSetField(610); }

      public void set(QuickFix.LegMaturityDate value)
      { setField(value); }
      public QuickFix.LegMaturityDate get(QuickFix.LegMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityDate getLegMaturityDate()
      { QuickFix.LegMaturityDate value = new QuickFix.LegMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityDate field)
      { return isSetField(field); }
      public bool isSetLegMaturityDate()
      { return isSetField(611); }

      public void set(QuickFix.LegCouponPaymentDate value)
      { setField(value); }
      public QuickFix.LegCouponPaymentDate get(QuickFix.LegCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponPaymentDate getLegCouponPaymentDate()
      { QuickFix.LegCouponPaymentDate value = new QuickFix.LegCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetLegCouponPaymentDate()
      { return isSetField(248); }

      public void set(QuickFix.LegIssueDate value)
      { setField(value); }
      public QuickFix.LegIssueDate get(QuickFix.LegIssueDate  value)
      { getField(value); return value; }
      public QuickFix.LegIssueDate getLegIssueDate()
      { QuickFix.LegIssueDate value = new QuickFix.LegIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssueDate field)
      { return isSetField(field); }
      public bool isSetLegIssueDate()
      { return isSetField(249); }

      public void set(QuickFix.LegRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.LegRepoCollateralSecurityType get(QuickFix.LegRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType()
      { QuickFix.LegRepoCollateralSecurityType value = new QuickFix.LegRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetLegRepoCollateralSecurityType()
      { return isSetField(250); }

      public void set(QuickFix.LegRepurchaseTerm value)
      { setField(value); }
      public QuickFix.LegRepurchaseTerm get(QuickFix.LegRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseTerm getLegRepurchaseTerm()
      { QuickFix.LegRepurchaseTerm value = new QuickFix.LegRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseTerm()
      { return isSetField(251); }

      public void set(QuickFix.LegRepurchaseRate value)
      { setField(value); }
      public QuickFix.LegRepurchaseRate get(QuickFix.LegRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseRate getLegRepurchaseRate()
      { QuickFix.LegRepurchaseRate value = new QuickFix.LegRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseRate()
      { return isSetField(252); }

      public void set(QuickFix.LegFactor value)
      { setField(value); }
      public QuickFix.LegFactor get(QuickFix.LegFactor  value)
      { getField(value); return value; }
      public QuickFix.LegFactor getLegFactor()
      { QuickFix.LegFactor value = new QuickFix.LegFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFactor field)
      { return isSetField(field); }
      public bool isSetLegFactor()
      { return isSetField(253); }

      public void set(QuickFix.LegCreditRating value)
      { setField(value); }
      public QuickFix.LegCreditRating get(QuickFix.LegCreditRating  value)
      { getField(value); return value; }
      public QuickFix.LegCreditRating getLegCreditRating()
      { QuickFix.LegCreditRating value = new QuickFix.LegCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCreditRating field)
      { return isSetField(field); }
      public bool isSetLegCreditRating()
      { return isSetField(257); }

      public void set(QuickFix.LegInstrRegistry value)
      { setField(value); }
      public QuickFix.LegInstrRegistry get(QuickFix.LegInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.LegInstrRegistry getLegInstrRegistry()
      { QuickFix.LegInstrRegistry value = new QuickFix.LegInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInstrRegistry field)
      { return isSetField(field); }
      public bool isSetLegInstrRegistry()
      { return isSetField(599); }

      public void set(QuickFix.LegCountryOfIssue value)
      { setField(value); }
      public QuickFix.LegCountryOfIssue get(QuickFix.LegCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegCountryOfIssue getLegCountryOfIssue()
      { QuickFix.LegCountryOfIssue value = new QuickFix.LegCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetLegCountryOfIssue()
      { return isSetField(596); }

      public void set(QuickFix.LegStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.LegStateOrProvinceOfIssue get(QuickFix.LegStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue()
      { QuickFix.LegStateOrProvinceOfIssue value = new QuickFix.LegStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetLegStateOrProvinceOfIssue()
      { return isSetField(597); }

      public void set(QuickFix.LegLocaleOfIssue value)
      { setField(value); }
      public QuickFix.LegLocaleOfIssue get(QuickFix.LegLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegLocaleOfIssue getLegLocaleOfIssue()
      { QuickFix.LegLocaleOfIssue value = new QuickFix.LegLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetLegLocaleOfIssue()
      { return isSetField(598); }

      public void set(QuickFix.LegRedemptionDate value)
      { setField(value); }
      public QuickFix.LegRedemptionDate get(QuickFix.LegRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.LegRedemptionDate getLegRedemptionDate()
      { QuickFix.LegRedemptionDate value = new QuickFix.LegRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRedemptionDate field)
      { return isSetField(field); }
      public bool isSetLegRedemptionDate()
      { return isSetField(254); }

      public void set(QuickFix.LegStrikePrice value)
      { setField(value); }
      public QuickFix.LegStrikePrice get(QuickFix.LegStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.LegStrikePrice getLegStrikePrice()
      { QuickFix.LegStrikePrice value = new QuickFix.LegStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikePrice field)
      { return isSetField(field); }
      public bool isSetLegStrikePrice()
      { return isSetField(612); }

      public void set(QuickFix.LegStrikeCurrency value)
      { setField(value); }
      public QuickFix.LegStrikeCurrency get(QuickFix.LegStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegStrikeCurrency getLegStrikeCurrency()
      { QuickFix.LegStrikeCurrency value = new QuickFix.LegStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetLegStrikeCurrency()
      { return isSetField(942); }

      public void set(QuickFix.LegOptAttribute value)
      { setField(value); }
      public QuickFix.LegOptAttribute get(QuickFix.LegOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.LegOptAttribute getLegOptAttribute()
      { QuickFix.LegOptAttribute value = new QuickFix.LegOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptAttribute field)
      { return isSetField(field); }
      public bool isSetLegOptAttribute()
      { return isSetField(613); }

      public void set(QuickFix.LegContractMultiplier value)
      { setField(value); }
      public QuickFix.LegContractMultiplier get(QuickFix.LegContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.LegContractMultiplier getLegContractMultiplier()
      { QuickFix.LegContractMultiplier value = new QuickFix.LegContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractMultiplier field)
      { return isSetField(field); }
      public bool isSetLegContractMultiplier()
      { return isSetField(614); }

      public void set(QuickFix.LegCouponRate value)
      { setField(value); }
      public QuickFix.LegCouponRate get(QuickFix.LegCouponRate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponRate getLegCouponRate()
      { QuickFix.LegCouponRate value = new QuickFix.LegCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponRate field)
      { return isSetField(field); }
      public bool isSetLegCouponRate()
      { return isSetField(615); }

      public void set(QuickFix.LegSecurityExchange value)
      { setField(value); }
      public QuickFix.LegSecurityExchange get(QuickFix.LegSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityExchange getLegSecurityExchange()
      { QuickFix.LegSecurityExchange value = new QuickFix.LegSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityExchange field)
      { return isSetField(field); }
      public bool isSetLegSecurityExchange()
      { return isSetField(616); }

      public void set(QuickFix.LegIssuer value)
      { setField(value); }
      public QuickFix.LegIssuer get(QuickFix.LegIssuer  value)
      { getField(value); return value; }
      public QuickFix.LegIssuer getLegIssuer()
      { QuickFix.LegIssuer value = new QuickFix.LegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssuer field)
      { return isSetField(field); }
      public bool isSetLegIssuer()
      { return isSetField(617); }

      public void set(QuickFix.EncodedLegIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedLegIssuerLen get(QuickFix.EncodedLegIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuerLen getEncodedLegIssuerLen()
      { QuickFix.EncodedLegIssuerLen value = new QuickFix.EncodedLegIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuerLen()
      { return isSetField(618); }

      public void set(QuickFix.EncodedLegIssuer value)
      { setField(value); }
      public QuickFix.EncodedLegIssuer get(QuickFix.EncodedLegIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuer getEncodedLegIssuer()
      { QuickFix.EncodedLegIssuer value = new QuickFix.EncodedLegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuer()
      { return isSetField(619); }

      public void set(QuickFix.LegSecurityDesc value)
      { setField(value); }
      public QuickFix.LegSecurityDesc get(QuickFix.LegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityDesc getLegSecurityDesc()
      { QuickFix.LegSecurityDesc value = new QuickFix.LegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetLegSecurityDesc()
      { return isSetField(620); }

      public void set(QuickFix.EncodedLegSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDescLen get(QuickFix.EncodedLegSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen()
      { QuickFix.EncodedLegSecurityDescLen value = new QuickFix.EncodedLegSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDescLen()
      { return isSetField(621); }

      public void set(QuickFix.EncodedLegSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDesc get(QuickFix.EncodedLegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDesc getEncodedLegSecurityDesc()
      { QuickFix.EncodedLegSecurityDesc value = new QuickFix.EncodedLegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDesc()
      { return isSetField(622); }

      public void set(QuickFix.LegRatioQty value)
      { setField(value); }
      public QuickFix.LegRatioQty get(QuickFix.LegRatioQty  value)
      { getField(value); return value; }
      public QuickFix.LegRatioQty getLegRatioQty()
      { QuickFix.LegRatioQty value = new QuickFix.LegRatioQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRatioQty field)
      { return isSetField(field); }
      public bool isSetLegRatioQty()
      { return isSetField(623); }

      public void set(QuickFix.LegSide value)
      { setField(value); }
      public QuickFix.LegSide get(QuickFix.LegSide  value)
      { getField(value); return value; }
      public QuickFix.LegSide getLegSide()
      { QuickFix.LegSide value = new QuickFix.LegSide();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSide field)
      { return isSetField(field); }
      public bool isSetLegSide()
      { return isSetField(624); }

      public void set(QuickFix.LegCurrency value)
      { setField(value); }
      public QuickFix.LegCurrency get(QuickFix.LegCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegCurrency getLegCurrency()
      { QuickFix.LegCurrency value = new QuickFix.LegCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCurrency field)
      { return isSetField(field); }
      public bool isSetLegCurrency()
      { return isSetField(556); }

      public void set(QuickFix.LegPool value)
      { setField(value); }
      public QuickFix.LegPool get(QuickFix.LegPool  value)
      { getField(value); return value; }
      public QuickFix.LegPool getLegPool()
      { QuickFix.LegPool value = new QuickFix.LegPool();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPool field)
      { return isSetField(field); }
      public bool isSetLegPool()
      { return isSetField(740); }

      public void set(QuickFix.LegDatedDate value)
      { setField(value); }
      public QuickFix.LegDatedDate get(QuickFix.LegDatedDate  value)
      { getField(value); return value; }
      public QuickFix.LegDatedDate getLegDatedDate()
      { QuickFix.LegDatedDate value = new QuickFix.LegDatedDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegDatedDate field)
      { return isSetField(field); }
      public bool isSetLegDatedDate()
      { return isSetField(739); }

      public void set(QuickFix.LegContractSettlMonth value)
      { setField(value); }
      public QuickFix.LegContractSettlMonth get(QuickFix.LegContractSettlMonth  value)
      { getField(value); return value; }
      public QuickFix.LegContractSettlMonth getLegContractSettlMonth()
      { QuickFix.LegContractSettlMonth value = new QuickFix.LegContractSettlMonth();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractSettlMonth field)
      { return isSetField(field); }
      public bool isSetLegContractSettlMonth()
      { return isSetField(955); }

      public void set(QuickFix.LegInterestAccrualDate value)
      { setField(value); }
      public QuickFix.LegInterestAccrualDate get(QuickFix.LegInterestAccrualDate  value)
      { getField(value); return value; }
      public QuickFix.LegInterestAccrualDate getLegInterestAccrualDate()
      { QuickFix.LegInterestAccrualDate value = new QuickFix.LegInterestAccrualDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInterestAccrualDate field)
      { return isSetField(field); }
      public bool isSetLegInterestAccrualDate()
      { return isSetField(956); }

      public void set(QuickFix.LegUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasure get(QuickFix.LegUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasure getLegUnitOfMeasure()
      { QuickFix.LegUnitOfMeasure value = new QuickFix.LegUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasure()
      { return isSetField(999); }

      public void set(QuickFix.LegTimeUnit value)
      { setField(value); }
      public QuickFix.LegTimeUnit get(QuickFix.LegTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.LegTimeUnit getLegTimeUnit()
      { QuickFix.LegTimeUnit value = new QuickFix.LegTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.LegTimeUnit field)
      { return isSetField(field); }
      public bool isSetLegTimeUnit()
      { return isSetField(1001); }

      public void set(QuickFix.LegOptionRatio value)
      { setField(value); }
      public QuickFix.LegOptionRatio get(QuickFix.LegOptionRatio  value)
      { getField(value); return value; }
      public QuickFix.LegOptionRatio getLegOptionRatio()
      { QuickFix.LegOptionRatio value = new QuickFix.LegOptionRatio();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptionRatio field)
      { return isSetField(field); }
      public bool isSetLegOptionRatio()
      { return isSetField(1017); }

      public void set(QuickFix.LegPrice value)
      { setField(value); }
      public QuickFix.LegPrice get(QuickFix.LegPrice  value)
      { getField(value); return value; }
      public QuickFix.LegPrice getLegPrice()
      { QuickFix.LegPrice value = new QuickFix.LegPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPrice field)
      { return isSetField(field); }
      public bool isSetLegPrice()
      { return isSetField(566); }

      public void set(QuickFix.LegMaturityTime value)
      { setField(value); }
      public QuickFix.LegMaturityTime get(QuickFix.LegMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityTime getLegMaturityTime()
      { QuickFix.LegMaturityTime value = new QuickFix.LegMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityTime field)
      { return isSetField(field); }
      public bool isSetLegMaturityTime()
      { return isSetField(1212); }

      public void set(QuickFix.LegPutOrCall value)
      { setField(value); }
      public QuickFix.LegPutOrCall get(QuickFix.LegPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.LegPutOrCall getLegPutOrCall()
      { QuickFix.LegPutOrCall value = new QuickFix.LegPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPutOrCall field)
      { return isSetField(field); }
      public bool isSetLegPutOrCall()
      { return isSetField(1358); }

      public void set(QuickFix.LegExerciseStyle value)
      { setField(value); }
      public QuickFix.LegExerciseStyle get(QuickFix.LegExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.LegExerciseStyle getLegExerciseStyle()
      { QuickFix.LegExerciseStyle value = new QuickFix.LegExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.LegExerciseStyle field)
      { return isSetField(field); }
      public bool isSetLegExerciseStyle()
      { return isSetField(1420); }

      public void set(QuickFix.LegUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasureQty get(QuickFix.LegUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasureQty getLegUnitOfMeasureQty()
      { QuickFix.LegUnitOfMeasureQty value = new QuickFix.LegUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasureQty()
      { return isSetField(1224); }

      public void set(QuickFix.LegPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasure get(QuickFix.LegPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasure getLegPriceUnitOfMeasure()
      { QuickFix.LegPriceUnitOfMeasure value = new QuickFix.LegPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasure()
      { return isSetField(1421); }

      public void set(QuickFix.LegPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasureQty get(QuickFix.LegPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasureQty getLegPriceUnitOfMeasureQty()
      { QuickFix.LegPriceUnitOfMeasureQty value = new QuickFix.LegPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasureQty()
      { return isSetField(1422); }

      public void set(QuickFix.LegQty value)
      { setField(value); }
      public QuickFix.LegQty get(QuickFix.LegQty  value)
      { getField(value); return value; }
      public QuickFix.LegQty getLegQty()
      { QuickFix.LegQty value = new QuickFix.LegQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegQty field)
      { return isSetField(field); }
      public bool isSetLegQty()
      { return isSetField(687); }

      public void set(QuickFix.LegSwapType value)
      { setField(value); }
      public QuickFix.LegSwapType get(QuickFix.LegSwapType  value)
      { getField(value); return value; }
      public QuickFix.LegSwapType getLegSwapType()
      { QuickFix.LegSwapType value = new QuickFix.LegSwapType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSwapType field)
      { return isSetField(field); }
      public bool isSetLegSwapType()
      { return isSetField(690); }

      public void set(QuickFix.LegSettlType value)
      { setField(value); }
      public QuickFix.LegSettlType get(QuickFix.LegSettlType  value)
      { getField(value); return value; }
      public QuickFix.LegSettlType getLegSettlType()
      { QuickFix.LegSettlType value = new QuickFix.LegSettlType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlType field)
      { return isSetField(field); }
      public bool isSetLegSettlType()
      { return isSetField(587); }

      public void set(QuickFix.LegSettlDate value)
      { setField(value); }
      public QuickFix.LegSettlDate get(QuickFix.LegSettlDate  value)
      { getField(value); return value; }
      public QuickFix.LegSettlDate getLegSettlDate()
      { QuickFix.LegSettlDate value = new QuickFix.LegSettlDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlDate field)
      { return isSetField(field); }
      public bool isSetLegSettlDate()
      { return isSetField(588); }

      public void set(QuickFix.NoLegStipulations value)
      { setField(value); }
      public QuickFix.NoLegStipulations get(QuickFix.NoLegStipulations  value)
      { getField(value); return value; }
      public QuickFix.NoLegStipulations getNoLegStipulations()
      { QuickFix.NoLegStipulations value = new QuickFix.NoLegStipulations();
        getField(value); return value; }
      public bool isSet(QuickFix.NoLegStipulations field)
      { return isSetField(field); }
      public bool isSetNoLegStipulations()
      { return isSetField(683); }

      public class NoLegStipulations: QuickFix.Group
      {
      public NoLegStipulations() : base(683,688,message_order ) {}
      static int[] message_order = new int[] {688,689,0};
        public void set(QuickFix.LegStipulationType value)
        { setField(value); }
        public QuickFix.LegStipulationType get(QuickFix.LegStipulationType  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationType getLegStipulationType()
        { QuickFix.LegStipulationType value = new QuickFix.LegStipulationType();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationType field)
        { return isSetField(field); }
        public bool isSetLegStipulationType()
        { return isSetField(688); }

        public void set(QuickFix.LegStipulationValue value)
        { setField(value); }
        public QuickFix.LegStipulationValue get(QuickFix.LegStipulationValue  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationValue getLegStipulationValue()
        { QuickFix.LegStipulationValue value = new QuickFix.LegStipulationValue();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationValue field)
        { return isSetField(field); }
        public bool isSetLegStipulationValue()
        { return isSetField(689); }

      };
      public void set(QuickFix.NoNestedPartyIDs value)
      { setField(value); }
      public QuickFix.NoNestedPartyIDs get(QuickFix.NoNestedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNestedPartyIDs getNoNestedPartyIDs()
      { QuickFix.NoNestedPartyIDs value = new QuickFix.NoNestedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNestedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNestedPartyIDs()
      { return isSetField(539); }

      public class NoNestedPartyIDs: QuickFix.Group
      {
      public NoNestedPartyIDs() : base(539,524,message_order ) {}
      static int[] message_order = new int[] {524,525,538,804,0};
        public void set(QuickFix.NestedPartyID value)
        { setField(value); }
        public QuickFix.NestedPartyID get(QuickFix.NestedPartyID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyID getNestedPartyID()
        { QuickFix.NestedPartyID value = new QuickFix.NestedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyID field)
        { return isSetField(field); }
        public bool isSetNestedPartyID()
        { return isSetField(524); }

        public void set(QuickFix.NestedPartyIDSource value)
        { setField(value); }
        public QuickFix.NestedPartyIDSource get(QuickFix.NestedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyIDSource getNestedPartyIDSource()
        { QuickFix.NestedPartyIDSource value = new QuickFix.NestedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetNestedPartyIDSource()
        { return isSetField(525); }

        public void set(QuickFix.NestedPartyRole value)
        { setField(value); }
        public QuickFix.NestedPartyRole get(QuickFix.NestedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyRole getNestedPartyRole()
        { QuickFix.NestedPartyRole value = new QuickFix.NestedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyRole field)
        { return isSetField(field); }
        public bool isSetNestedPartyRole()
        { return isSetField(538); }

        public void set(QuickFix.NoNestedPartySubIDs value)
        { setField(value); }
        public QuickFix.NoNestedPartySubIDs get(QuickFix.NoNestedPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNestedPartySubIDs getNoNestedPartySubIDs()
        { QuickFix.NoNestedPartySubIDs value = new QuickFix.NoNestedPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNestedPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNestedPartySubIDs()
        { return isSetField(804); }

        public class NoNestedPartySubIDs: QuickFix.Group
        {
        public NoNestedPartySubIDs() : base(804,545,message_order ) {}
        static int[] message_order = new int[] {545,805,0};
          public void set(QuickFix.NestedPartySubID value)
          { setField(value); }
          public QuickFix.NestedPartySubID get(QuickFix.NestedPartySubID  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubID getNestedPartySubID()
          { QuickFix.NestedPartySubID value = new QuickFix.NestedPartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubID field)
          { return isSetField(field); }
          public bool isSetNestedPartySubID()
          { return isSetField(545); }

          public void set(QuickFix.NestedPartySubIDType value)
          { setField(value); }
          public QuickFix.NestedPartySubIDType get(QuickFix.NestedPartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubIDType getNestedPartySubIDType()
          { QuickFix.NestedPartySubIDType value = new QuickFix.NestedPartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubIDType field)
          { return isSetField(field); }
          public bool isSetNestedPartySubIDType()
          { return isSetField(805); }

        };
      };
      public void set(QuickFix.LegPriceType value)
      { setField(value); }
      public QuickFix.LegPriceType get(QuickFix.LegPriceType  value)
      { getField(value); return value; }
      public QuickFix.LegPriceType getLegPriceType()
      { QuickFix.LegPriceType value = new QuickFix.LegPriceType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceType field)
      { return isSetField(field); }
      public bool isSetLegPriceType()
      { return isSetField(686); }

      public void set(QuickFix.LegBidPx value)
      { setField(value); }
      public QuickFix.LegBidPx get(QuickFix.LegBidPx  value)
      { getField(value); return value; }
      public QuickFix.LegBidPx getLegBidPx()
      { QuickFix.LegBidPx value = new QuickFix.LegBidPx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBidPx field)
      { return isSetField(field); }
      public bool isSetLegBidPx()
      { return isSetField(681); }

      public void set(QuickFix.LegOfferPx value)
      { setField(value); }
      public QuickFix.LegOfferPx get(QuickFix.LegOfferPx  value)
      { getField(value); return value; }
      public QuickFix.LegOfferPx getLegOfferPx()
      { QuickFix.LegOfferPx value = new QuickFix.LegOfferPx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOfferPx field)
      { return isSetField(field); }
      public bool isSetLegOfferPx()
      { return isSetField(684); }

      public void set(QuickFix.LegBenchmarkCurveCurrency value)
      { setField(value); }
      public QuickFix.LegBenchmarkCurveCurrency get(QuickFix.LegBenchmarkCurveCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegBenchmarkCurveCurrency getLegBenchmarkCurveCurrency()
      { QuickFix.LegBenchmarkCurveCurrency value = new QuickFix.LegBenchmarkCurveCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBenchmarkCurveCurrency field)
      { return isSetField(field); }
      public bool isSetLegBenchmarkCurveCurrency()
      { return isSetField(676); }

      public void set(QuickFix.LegBenchmarkCurveName value)
      { setField(value); }
      public QuickFix.LegBenchmarkCurveName get(QuickFix.LegBenchmarkCurveName  value)
      { getField(value); return value; }
      public QuickFix.LegBenchmarkCurveName getLegBenchmarkCurveName()
      { QuickFix.LegBenchmarkCurveName value = new QuickFix.LegBenchmarkCurveName();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBenchmarkCurveName field)
      { return isSetField(field); }
      public bool isSetLegBenchmarkCurveName()
      { return isSetField(677); }

      public void set(QuickFix.LegBenchmarkCurvePoint value)
      { setField(value); }
      public QuickFix.LegBenchmarkCurvePoint get(QuickFix.LegBenchmarkCurvePoint  value)
      { getField(value); return value; }
      public QuickFix.LegBenchmarkCurvePoint getLegBenchmarkCurvePoint()
      { QuickFix.LegBenchmarkCurvePoint value = new QuickFix.LegBenchmarkCurvePoint();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBenchmarkCurvePoint field)
      { return isSetField(field); }
      public bool isSetLegBenchmarkCurvePoint()
      { return isSetField(678); }

      public void set(QuickFix.LegBenchmarkPrice value)
      { setField(value); }
      public QuickFix.LegBenchmarkPrice get(QuickFix.LegBenchmarkPrice  value)
      { getField(value); return value; }
      public QuickFix.LegBenchmarkPrice getLegBenchmarkPrice()
      { QuickFix.LegBenchmarkPrice value = new QuickFix.LegBenchmarkPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBenchmarkPrice field)
      { return isSetField(field); }
      public bool isSetLegBenchmarkPrice()
      { return isSetField(679); }

      public void set(QuickFix.LegBenchmarkPriceType value)
      { setField(value); }
      public QuickFix.LegBenchmarkPriceType get(QuickFix.LegBenchmarkPriceType  value)
      { getField(value); return value; }
      public QuickFix.LegBenchmarkPriceType getLegBenchmarkPriceType()
      { QuickFix.LegBenchmarkPriceType value = new QuickFix.LegBenchmarkPriceType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBenchmarkPriceType field)
      { return isSetField(field); }
      public bool isSetLegBenchmarkPriceType()
      { return isSetField(680); }

      public void set(QuickFix.LegOrderQty value)
      { setField(value); }
      public QuickFix.LegOrderQty get(QuickFix.LegOrderQty  value)
      { getField(value); return value; }
      public QuickFix.LegOrderQty getLegOrderQty()
      { QuickFix.LegOrderQty value = new QuickFix.LegOrderQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOrderQty field)
      { return isSetField(field); }
      public bool isSetLegOrderQty()
      { return isSetField(685); }

      public void set(QuickFix.LegRefID value)
      { setField(value); }
      public QuickFix.LegRefID get(QuickFix.LegRefID  value)
      { getField(value); return value; }
      public QuickFix.LegRefID getLegRefID()
      { QuickFix.LegRefID value = new QuickFix.LegRefID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRefID field)
      { return isSetField(field); }
      public bool isSetLegRefID()
      { return isSetField(654); }

      public void set(QuickFix.LegBidForwardPoints value)
      { setField(value); }
      public QuickFix.LegBidForwardPoints get(QuickFix.LegBidForwardPoints  value)
      { getField(value); return value; }
      public QuickFix.LegBidForwardPoints getLegBidForwardPoints()
      { QuickFix.LegBidForwardPoints value = new QuickFix.LegBidForwardPoints();
        getField(value); return value; }
      public bool isSet(QuickFix.LegBidForwardPoints field)
      { return isSetField(field); }
      public bool isSetLegBidForwardPoints()
      { return isSetField(1067); }

      public void set(QuickFix.LegOfferForwardPoints value)
      { setField(value); }
      public QuickFix.LegOfferForwardPoints get(QuickFix.LegOfferForwardPoints  value)
      { getField(value); return value; }
      public QuickFix.LegOfferForwardPoints getLegOfferForwardPoints()
      { QuickFix.LegOfferForwardPoints value = new QuickFix.LegOfferForwardPoints();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOfferForwardPoints field)
      { return isSetField(field); }
      public bool isSetLegOfferForwardPoints()
      { return isSetField(1068); }

    };
    public void set(QuickFix.BidPx value)
    { setField(value); }
    public QuickFix.BidPx get(QuickFix.BidPx  value)
    { getField(value); return value; }
    public QuickFix.BidPx getBidPx()
    { QuickFix.BidPx value = new QuickFix.BidPx();
      getField(value); return value; }
    public bool isSet(QuickFix.BidPx field)
    { return isSetField(field); }
    public bool isSetBidPx()
    { return isSetField(132); }

    public void set(QuickFix.OfferPx value)
    { setField(value); }
    public QuickFix.OfferPx get(QuickFix.OfferPx  value)
    { getField(value); return value; }
    public QuickFix.OfferPx getOfferPx()
    { QuickFix.OfferPx value = new QuickFix.OfferPx();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferPx field)
    { return isSetField(field); }
    public bool isSetOfferPx()
    { return isSetField(133); }

    public void set(QuickFix.MktBidPx value)
    { setField(value); }
    public QuickFix.MktBidPx get(QuickFix.MktBidPx  value)
    { getField(value); return value; }
    public QuickFix.MktBidPx getMktBidPx()
    { QuickFix.MktBidPx value = new QuickFix.MktBidPx();
      getField(value); return value; }
    public bool isSet(QuickFix.MktBidPx field)
    { return isSetField(field); }
    public bool isSetMktBidPx()
    { return isSetField(645); }

    public void set(QuickFix.MktOfferPx value)
    { setField(value); }
    public QuickFix.MktOfferPx get(QuickFix.MktOfferPx  value)
    { getField(value); return value; }
    public QuickFix.MktOfferPx getMktOfferPx()
    { QuickFix.MktOfferPx value = new QuickFix.MktOfferPx();
      getField(value); return value; }
    public bool isSet(QuickFix.MktOfferPx field)
    { return isSetField(field); }
    public bool isSetMktOfferPx()
    { return isSetField(646); }

    public void set(QuickFix.MinBidSize value)
    { setField(value); }
    public QuickFix.MinBidSize get(QuickFix.MinBidSize  value)
    { getField(value); return value; }
    public QuickFix.MinBidSize getMinBidSize()
    { QuickFix.MinBidSize value = new QuickFix.MinBidSize();
      getField(value); return value; }
    public bool isSet(QuickFix.MinBidSize field)
    { return isSetField(field); }
    public bool isSetMinBidSize()
    { return isSetField(647); }

    public void set(QuickFix.BidSize value)
    { setField(value); }
    public QuickFix.BidSize get(QuickFix.BidSize  value)
    { getField(value); return value; }
    public QuickFix.BidSize getBidSize()
    { QuickFix.BidSize value = new QuickFix.BidSize();
      getField(value); return value; }
    public bool isSet(QuickFix.BidSize field)
    { return isSetField(field); }
    public bool isSetBidSize()
    { return isSetField(134); }

    public void set(QuickFix.MinOfferSize value)
    { setField(value); }
    public QuickFix.MinOfferSize get(QuickFix.MinOfferSize  value)
    { getField(value); return value; }
    public QuickFix.MinOfferSize getMinOfferSize()
    { QuickFix.MinOfferSize value = new QuickFix.MinOfferSize();
      getField(value); return value; }
    public bool isSet(QuickFix.MinOfferSize field)
    { return isSetField(field); }
    public bool isSetMinOfferSize()
    { return isSetField(648); }

    public void set(QuickFix.OfferSize value)
    { setField(value); }
    public QuickFix.OfferSize get(QuickFix.OfferSize  value)
    { getField(value); return value; }
    public QuickFix.OfferSize getOfferSize()
    { QuickFix.OfferSize value = new QuickFix.OfferSize();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferSize field)
    { return isSetField(field); }
    public bool isSetOfferSize()
    { return isSetField(135); }

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

    public void set(QuickFix.BidSpotRate value)
    { setField(value); }
    public QuickFix.BidSpotRate get(QuickFix.BidSpotRate  value)
    { getField(value); return value; }
    public QuickFix.BidSpotRate getBidSpotRate()
    { QuickFix.BidSpotRate value = new QuickFix.BidSpotRate();
      getField(value); return value; }
    public bool isSet(QuickFix.BidSpotRate field)
    { return isSetField(field); }
    public bool isSetBidSpotRate()
    { return isSetField(188); }

    public void set(QuickFix.OfferSpotRate value)
    { setField(value); }
    public QuickFix.OfferSpotRate get(QuickFix.OfferSpotRate  value)
    { getField(value); return value; }
    public QuickFix.OfferSpotRate getOfferSpotRate()
    { QuickFix.OfferSpotRate value = new QuickFix.OfferSpotRate();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferSpotRate field)
    { return isSetField(field); }
    public bool isSetOfferSpotRate()
    { return isSetField(190); }

    public void set(QuickFix.BidForwardPoints value)
    { setField(value); }
    public QuickFix.BidForwardPoints get(QuickFix.BidForwardPoints  value)
    { getField(value); return value; }
    public QuickFix.BidForwardPoints getBidForwardPoints()
    { QuickFix.BidForwardPoints value = new QuickFix.BidForwardPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.BidForwardPoints field)
    { return isSetField(field); }
    public bool isSetBidForwardPoints()
    { return isSetField(189); }

    public void set(QuickFix.OfferForwardPoints value)
    { setField(value); }
    public QuickFix.OfferForwardPoints get(QuickFix.OfferForwardPoints  value)
    { getField(value); return value; }
    public QuickFix.OfferForwardPoints getOfferForwardPoints()
    { QuickFix.OfferForwardPoints value = new QuickFix.OfferForwardPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferForwardPoints field)
    { return isSetField(field); }
    public bool isSetOfferForwardPoints()
    { return isSetField(191); }

    public void set(QuickFix.MidPx value)
    { setField(value); }
    public QuickFix.MidPx get(QuickFix.MidPx  value)
    { getField(value); return value; }
    public QuickFix.MidPx getMidPx()
    { QuickFix.MidPx value = new QuickFix.MidPx();
      getField(value); return value; }
    public bool isSet(QuickFix.MidPx field)
    { return isSetField(field); }
    public bool isSetMidPx()
    { return isSetField(631); }

    public void set(QuickFix.BidYield value)
    { setField(value); }
    public QuickFix.BidYield get(QuickFix.BidYield  value)
    { getField(value); return value; }
    public QuickFix.BidYield getBidYield()
    { QuickFix.BidYield value = new QuickFix.BidYield();
      getField(value); return value; }
    public bool isSet(QuickFix.BidYield field)
    { return isSetField(field); }
    public bool isSetBidYield()
    { return isSetField(632); }

    public void set(QuickFix.MidYield value)
    { setField(value); }
    public QuickFix.MidYield get(QuickFix.MidYield  value)
    { getField(value); return value; }
    public QuickFix.MidYield getMidYield()
    { QuickFix.MidYield value = new QuickFix.MidYield();
      getField(value); return value; }
    public bool isSet(QuickFix.MidYield field)
    { return isSetField(field); }
    public bool isSetMidYield()
    { return isSetField(633); }

    public void set(QuickFix.OfferYield value)
    { setField(value); }
    public QuickFix.OfferYield get(QuickFix.OfferYield  value)
    { getField(value); return value; }
    public QuickFix.OfferYield getOfferYield()
    { QuickFix.OfferYield value = new QuickFix.OfferYield();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferYield field)
    { return isSetField(field); }
    public bool isSetOfferYield()
    { return isSetField(634); }

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

    public void set(QuickFix.OrdType value)
    { setField(value); }
    public QuickFix.OrdType get(QuickFix.OrdType  value)
    { getField(value); return value; }
    public QuickFix.OrdType getOrdType()
    { QuickFix.OrdType value = new QuickFix.OrdType();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdType field)
    { return isSetField(field); }
    public bool isSetOrdType()
    { return isSetField(40); }

    public void set(QuickFix.BidForwardPoints2 value)
    { setField(value); }
    public QuickFix.BidForwardPoints2 get(QuickFix.BidForwardPoints2  value)
    { getField(value); return value; }
    public QuickFix.BidForwardPoints2 getBidForwardPoints2()
    { QuickFix.BidForwardPoints2 value = new QuickFix.BidForwardPoints2();
      getField(value); return value; }
    public bool isSet(QuickFix.BidForwardPoints2 field)
    { return isSetField(field); }
    public bool isSetBidForwardPoints2()
    { return isSetField(642); }

    public void set(QuickFix.OfferForwardPoints2 value)
    { setField(value); }
    public QuickFix.OfferForwardPoints2 get(QuickFix.OfferForwardPoints2  value)
    { getField(value); return value; }
    public QuickFix.OfferForwardPoints2 getOfferForwardPoints2()
    { QuickFix.OfferForwardPoints2 value = new QuickFix.OfferForwardPoints2();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferForwardPoints2 field)
    { return isSetField(field); }
    public bool isSetOfferForwardPoints2()
    { return isSetField(643); }

    public void set(QuickFix.SettlCurrBidFxRate value)
    { setField(value); }
    public QuickFix.SettlCurrBidFxRate get(QuickFix.SettlCurrBidFxRate  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrBidFxRate getSettlCurrBidFxRate()
    { QuickFix.SettlCurrBidFxRate value = new QuickFix.SettlCurrBidFxRate();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrBidFxRate field)
    { return isSetField(field); }
    public bool isSetSettlCurrBidFxRate()
    { return isSetField(656); }

    public void set(QuickFix.SettlCurrOfferFxRate value)
    { setField(value); }
    public QuickFix.SettlCurrOfferFxRate get(QuickFix.SettlCurrOfferFxRate  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrOfferFxRate getSettlCurrOfferFxRate()
    { QuickFix.SettlCurrOfferFxRate value = new QuickFix.SettlCurrOfferFxRate();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrOfferFxRate field)
    { return isSetField(field); }
    public bool isSetSettlCurrOfferFxRate()
    { return isSetField(657); }

    public void set(QuickFix.SettlCurrFxRateCalc value)
    { setField(value); }
    public QuickFix.SettlCurrFxRateCalc get(QuickFix.SettlCurrFxRateCalc  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrFxRateCalc getSettlCurrFxRateCalc()
    { QuickFix.SettlCurrFxRateCalc value = new QuickFix.SettlCurrFxRateCalc();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrFxRateCalc field)
    { return isSetField(field); }
    public bool isSetSettlCurrFxRateCalc()
    { return isSetField(156); }

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

    public void set(QuickFix.CustOrderCapacity value)
    { setField(value); }
    public QuickFix.CustOrderCapacity get(QuickFix.CustOrderCapacity  value)
    { getField(value); return value; }
    public QuickFix.CustOrderCapacity getCustOrderCapacity()
    { QuickFix.CustOrderCapacity value = new QuickFix.CustOrderCapacity();
      getField(value); return value; }
    public bool isSet(QuickFix.CustOrderCapacity field)
    { return isSetField(field); }
    public bool isSetCustOrderCapacity()
    { return isSetField(582); }

    public void set(QuickFix.ExDestination value)
    { setField(value); }
    public QuickFix.ExDestination get(QuickFix.ExDestination  value)
    { getField(value); return value; }
    public QuickFix.ExDestination getExDestination()
    { QuickFix.ExDestination value = new QuickFix.ExDestination();
      getField(value); return value; }
    public bool isSet(QuickFix.ExDestination field)
    { return isSetField(field); }
    public bool isSetExDestination()
    { return isSetField(100); }

    public void set(QuickFix.OrderCapacity value)
    { setField(value); }
    public QuickFix.OrderCapacity get(QuickFix.OrderCapacity  value)
    { getField(value); return value; }
    public QuickFix.OrderCapacity getOrderCapacity()
    { QuickFix.OrderCapacity value = new QuickFix.OrderCapacity();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderCapacity field)
    { return isSetField(field); }
    public bool isSetOrderCapacity()
    { return isSetField(528); }

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

    public void set(QuickFix.Spread value)
    { setField(value); }
    public QuickFix.Spread get(QuickFix.Spread  value)
    { getField(value); return value; }
    public QuickFix.Spread getSpread()
    { QuickFix.Spread value = new QuickFix.Spread();
      getField(value); return value; }
    public bool isSet(QuickFix.Spread field)
    { return isSetField(field); }
    public bool isSetSpread()
    { return isSetField(218); }

    public void set(QuickFix.BenchmarkCurveCurrency value)
    { setField(value); }
    public QuickFix.BenchmarkCurveCurrency get(QuickFix.BenchmarkCurveCurrency  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveCurrency getBenchmarkCurveCurrency()
    { QuickFix.BenchmarkCurveCurrency value = new QuickFix.BenchmarkCurveCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveCurrency field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveCurrency()
    { return isSetField(220); }

    public void set(QuickFix.BenchmarkCurveName value)
    { setField(value); }
    public QuickFix.BenchmarkCurveName get(QuickFix.BenchmarkCurveName  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveName getBenchmarkCurveName()
    { QuickFix.BenchmarkCurveName value = new QuickFix.BenchmarkCurveName();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveName field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveName()
    { return isSetField(221); }

    public void set(QuickFix.BenchmarkCurvePoint value)
    { setField(value); }
    public QuickFix.BenchmarkCurvePoint get(QuickFix.BenchmarkCurvePoint  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurvePoint getBenchmarkCurvePoint()
    { QuickFix.BenchmarkCurvePoint value = new QuickFix.BenchmarkCurvePoint();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurvePoint field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurvePoint()
    { return isSetField(222); }

    public void set(QuickFix.BenchmarkPrice value)
    { setField(value); }
    public QuickFix.BenchmarkPrice get(QuickFix.BenchmarkPrice  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPrice getBenchmarkPrice()
    { QuickFix.BenchmarkPrice value = new QuickFix.BenchmarkPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPrice field)
    { return isSetField(field); }
    public bool isSetBenchmarkPrice()
    { return isSetField(662); }

    public void set(QuickFix.BenchmarkPriceType value)
    { setField(value); }
    public QuickFix.BenchmarkPriceType get(QuickFix.BenchmarkPriceType  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPriceType getBenchmarkPriceType()
    { QuickFix.BenchmarkPriceType value = new QuickFix.BenchmarkPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPriceType field)
    { return isSetField(field); }
    public bool isSetBenchmarkPriceType()
    { return isSetField(663); }

    public void set(QuickFix.BenchmarkSecurityID value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityID get(QuickFix.BenchmarkSecurityID  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityID getBenchmarkSecurityID()
    { QuickFix.BenchmarkSecurityID value = new QuickFix.BenchmarkSecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityID field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityID()
    { return isSetField(699); }

    public void set(QuickFix.BenchmarkSecurityIDSource value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityIDSource get(QuickFix.BenchmarkSecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource()
    { QuickFix.BenchmarkSecurityIDSource value = new QuickFix.BenchmarkSecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityIDSource field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityIDSource()
    { return isSetField(761); }

    public void set(QuickFix.YieldType value)
    { setField(value); }
    public QuickFix.YieldType get(QuickFix.YieldType  value)
    { getField(value); return value; }
    public QuickFix.YieldType getYieldType()
    { QuickFix.YieldType value = new QuickFix.YieldType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldType field)
    { return isSetField(field); }
    public bool isSetYieldType()
    { return isSetField(235); }

    public void set(QuickFix.Yield value)
    { setField(value); }
    public QuickFix.Yield get(QuickFix.Yield  value)
    { getField(value); return value; }
    public QuickFix.Yield getYield()
    { QuickFix.Yield value = new QuickFix.Yield();
      getField(value); return value; }
    public bool isSet(QuickFix.Yield field)
    { return isSetField(field); }
    public bool isSetYield()
    { return isSetField(236); }

    public void set(QuickFix.YieldCalcDate value)
    { setField(value); }
    public QuickFix.YieldCalcDate get(QuickFix.YieldCalcDate  value)
    { getField(value); return value; }
    public QuickFix.YieldCalcDate getYieldCalcDate()
    { QuickFix.YieldCalcDate value = new QuickFix.YieldCalcDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldCalcDate field)
    { return isSetField(field); }
    public bool isSetYieldCalcDate()
    { return isSetField(701); }

    public void set(QuickFix.YieldRedemptionDate value)
    { setField(value); }
    public QuickFix.YieldRedemptionDate get(QuickFix.YieldRedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionDate getYieldRedemptionDate()
    { QuickFix.YieldRedemptionDate value = new QuickFix.YieldRedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionDate field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionDate()
    { return isSetField(696); }

    public void set(QuickFix.YieldRedemptionPrice value)
    { setField(value); }
    public QuickFix.YieldRedemptionPrice get(QuickFix.YieldRedemptionPrice  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPrice getYieldRedemptionPrice()
    { QuickFix.YieldRedemptionPrice value = new QuickFix.YieldRedemptionPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPrice field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPrice()
    { return isSetField(697); }

    public void set(QuickFix.YieldRedemptionPriceType value)
    { setField(value); }
    public QuickFix.YieldRedemptionPriceType get(QuickFix.YieldRedemptionPriceType  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPriceType getYieldRedemptionPriceType()
    { QuickFix.YieldRedemptionPriceType value = new QuickFix.YieldRedemptionPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPriceType field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPriceType()
    { return isSetField(698); }

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

    public void set(QuickFix.BidSwapPoints value)
    { setField(value); }
    public QuickFix.BidSwapPoints get(QuickFix.BidSwapPoints  value)
    { getField(value); return value; }
    public QuickFix.BidSwapPoints getBidSwapPoints()
    { QuickFix.BidSwapPoints value = new QuickFix.BidSwapPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.BidSwapPoints field)
    { return isSetField(field); }
    public bool isSetBidSwapPoints()
    { return isSetField(1065); }

    public void set(QuickFix.OfferSwapPoints value)
    { setField(value); }
    public QuickFix.OfferSwapPoints get(QuickFix.OfferSwapPoints  value)
    { getField(value); return value; }
    public QuickFix.OfferSwapPoints getOfferSwapPoints()
    { QuickFix.OfferSwapPoints value = new QuickFix.OfferSwapPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferSwapPoints field)
    { return isSetField(field); }
    public bool isSetOfferSwapPoints()
    { return isSetField(1066); }

    public void set(QuickFix.ExDestinationIDSource value)
    { setField(value); }
    public QuickFix.ExDestinationIDSource get(QuickFix.ExDestinationIDSource  value)
    { getField(value); return value; }
    public QuickFix.ExDestinationIDSource getExDestinationIDSource()
    { QuickFix.ExDestinationIDSource value = new QuickFix.ExDestinationIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.ExDestinationIDSource field)
    { return isSetField(field); }
    public bool isSetExDestinationIDSource()
    { return isSetField(1133); }

    public void set(QuickFix.QuoteMsgID value)
    { setField(value); }
    public QuickFix.QuoteMsgID get(QuickFix.QuoteMsgID  value)
    { getField(value); return value; }
    public QuickFix.QuoteMsgID getQuoteMsgID()
    { QuickFix.QuoteMsgID value = new QuickFix.QuoteMsgID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteMsgID field)
    { return isSetField(field); }
    public bool isSetQuoteMsgID()
    { return isSetField(1166); }

    public void set(QuickFix.PrivateQuote value)
    { setField(value); }
    public QuickFix.PrivateQuote get(QuickFix.PrivateQuote  value)
    { getField(value); return value; }
    public QuickFix.PrivateQuote getPrivateQuote()
    { QuickFix.PrivateQuote value = new QuickFix.PrivateQuote();
      getField(value); return value; }
    public bool isSet(QuickFix.PrivateQuote field)
    { return isSetField(field); }
    public bool isSetPrivateQuote()
    { return isSetField(1171); }

    public void set(QuickFix.MinQty value)
    { setField(value); }
    public QuickFix.MinQty get(QuickFix.MinQty  value)
    { getField(value); return value; }
    public QuickFix.MinQty getMinQty()
    { QuickFix.MinQty value = new QuickFix.MinQty();
      getField(value); return value; }
    public bool isSet(QuickFix.MinQty field)
    { return isSetField(field); }
    public bool isSetMinQty()
    { return isSetField(110); }

  };

}

