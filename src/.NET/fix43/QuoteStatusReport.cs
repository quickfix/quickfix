namespace QuickFix43
{

  public class QuoteStatusReport : Message
  {
    public QuoteStatusReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("AI"); }

    public QuoteStatusReport(
      QuickFix.QuoteID aQuoteID )
    : base(MsgType()) {
      set(aQuoteID);
    }

    public void set(QuickFix.QuoteStatusReqID value)
    { setField(value); }
    public QuickFix.QuoteStatusReqID get(QuickFix.QuoteStatusReqID  value)
    { getField(value); return value; }
    public QuickFix.QuoteStatusReqID getQuoteStatusReqID()
    { QuickFix.QuoteStatusReqID value = new QuickFix.QuoteStatusReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteStatusReqID field)
    { return isSetField(field); }
    public bool isSetQuoteStatusReqID()
    { return isSetField(649); }

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

    public void set(QuickFix.NoSecurityAltID value)
    { setField(value); }
    public QuickFix.NoSecurityAltID get(QuickFix.NoSecurityAltID  value)
    { getField(value); return value; }
    public QuickFix.NoSecurityAltID getNoSecurityAltID()
    { QuickFix.NoSecurityAltID value = new QuickFix.NoSecurityAltID();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSecurityAltID field)
    { return isSetField(field); }
    public bool isSetNoSecurityAltID()
    { return isSetField(454); }

    public class NoSecurityAltID: QuickFix.Group
    {
    public NoSecurityAltID() : base(454,455,message_order ) {}
    static int[] message_order = new int[] {455,456,0};
      public void set(QuickFix.SecurityAltID value)
      { setField(value); }
      public QuickFix.SecurityAltID get(QuickFix.SecurityAltID  value)
      { getField(value); return value; }
      public QuickFix.SecurityAltID getSecurityAltID()
      { QuickFix.SecurityAltID value = new QuickFix.SecurityAltID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityAltID field)
      { return isSetField(field); }
      public bool isSetSecurityAltID()
      { return isSetField(455); }

      public void set(QuickFix.SecurityAltIDSource value)
      { setField(value); }
      public QuickFix.SecurityAltIDSource get(QuickFix.SecurityAltIDSource  value)
      { getField(value); return value; }
      public QuickFix.SecurityAltIDSource getSecurityAltIDSource()
      { QuickFix.SecurityAltIDSource value = new QuickFix.SecurityAltIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityAltIDSource field)
      { return isSetField(field); }
      public bool isSetSecurityAltIDSource()
      { return isSetField(456); }

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

    public void set(QuickFix.FutSettDate value)
    { setField(value); }
    public QuickFix.FutSettDate get(QuickFix.FutSettDate  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate getFutSettDate()
    { QuickFix.FutSettDate value = new QuickFix.FutSettDate();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate field)
    { return isSetField(field); }
    public bool isSetFutSettDate()
    { return isSetField(64); }

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

    public void set(QuickFix.FutSettDate2 value)
    { setField(value); }
    public QuickFix.FutSettDate2 get(QuickFix.FutSettDate2  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate2 getFutSettDate2()
    { QuickFix.FutSettDate2 value = new QuickFix.FutSettDate2();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate2 field)
    { return isSetField(field); }
    public bool isSetFutSettDate2()
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

    public void set(QuickFix.QuoteStatus value)
    { setField(value); }
    public QuickFix.QuoteStatus get(QuickFix.QuoteStatus  value)
    { getField(value); return value; }
    public QuickFix.QuoteStatus getQuoteStatus()
    { QuickFix.QuoteStatus value = new QuickFix.QuoteStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteStatus field)
    { return isSetField(field); }
    public bool isSetQuoteStatus()
    { return isSetField(297); }

  };

}

