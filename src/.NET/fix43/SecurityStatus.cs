namespace QuickFix43
{

  public class SecurityStatus : Message
  {
    public SecurityStatus() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("f"); }

    public void set(QuickFix.SecurityStatusReqID value)
    { setField(value); }
    public QuickFix.SecurityStatusReqID get(QuickFix.SecurityStatusReqID  value)
    { getField(value); return value; }
    public QuickFix.SecurityStatusReqID getSecurityStatusReqID()
    { QuickFix.SecurityStatusReqID value = new QuickFix.SecurityStatusReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityStatusReqID field)
    { return isSetField(field); }
    public bool isSetSecurityStatusReqID()
    { return isSetField(324); }

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

    public void set(QuickFix.UnsolicitedIndicator value)
    { setField(value); }
    public QuickFix.UnsolicitedIndicator get(QuickFix.UnsolicitedIndicator  value)
    { getField(value); return value; }
    public QuickFix.UnsolicitedIndicator getUnsolicitedIndicator()
    { QuickFix.UnsolicitedIndicator value = new QuickFix.UnsolicitedIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.UnsolicitedIndicator field)
    { return isSetField(field); }
    public bool isSetUnsolicitedIndicator()
    { return isSetField(325); }

    public void set(QuickFix.SecurityTradingStatus value)
    { setField(value); }
    public QuickFix.SecurityTradingStatus get(QuickFix.SecurityTradingStatus  value)
    { getField(value); return value; }
    public QuickFix.SecurityTradingStatus getSecurityTradingStatus()
    { QuickFix.SecurityTradingStatus value = new QuickFix.SecurityTradingStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityTradingStatus field)
    { return isSetField(field); }
    public bool isSetSecurityTradingStatus()
    { return isSetField(326); }

    public void set(QuickFix.FinancialStatus value)
    { setField(value); }
    public QuickFix.FinancialStatus get(QuickFix.FinancialStatus  value)
    { getField(value); return value; }
    public QuickFix.FinancialStatus getFinancialStatus()
    { QuickFix.FinancialStatus value = new QuickFix.FinancialStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.FinancialStatus field)
    { return isSetField(field); }
    public bool isSetFinancialStatus()
    { return isSetField(291); }

    public void set(QuickFix.CorporateAction value)
    { setField(value); }
    public QuickFix.CorporateAction get(QuickFix.CorporateAction  value)
    { getField(value); return value; }
    public QuickFix.CorporateAction getCorporateAction()
    { QuickFix.CorporateAction value = new QuickFix.CorporateAction();
      getField(value); return value; }
    public bool isSet(QuickFix.CorporateAction field)
    { return isSetField(field); }
    public bool isSetCorporateAction()
    { return isSetField(292); }

    public void set(QuickFix.HaltReasonChar value)
    { setField(value); }
    public QuickFix.HaltReasonChar get(QuickFix.HaltReasonChar  value)
    { getField(value); return value; }
    public QuickFix.HaltReasonChar getHaltReasonChar()
    { QuickFix.HaltReasonChar value = new QuickFix.HaltReasonChar();
      getField(value); return value; }
    public bool isSet(QuickFix.HaltReasonChar field)
    { return isSetField(field); }
    public bool isSetHaltReasonChar()
    { return isSetField(327); }

    public void set(QuickFix.InViewOfCommon value)
    { setField(value); }
    public QuickFix.InViewOfCommon get(QuickFix.InViewOfCommon  value)
    { getField(value); return value; }
    public QuickFix.InViewOfCommon getInViewOfCommon()
    { QuickFix.InViewOfCommon value = new QuickFix.InViewOfCommon();
      getField(value); return value; }
    public bool isSet(QuickFix.InViewOfCommon field)
    { return isSetField(field); }
    public bool isSetInViewOfCommon()
    { return isSetField(328); }

    public void set(QuickFix.DueToRelated value)
    { setField(value); }
    public QuickFix.DueToRelated get(QuickFix.DueToRelated  value)
    { getField(value); return value; }
    public QuickFix.DueToRelated getDueToRelated()
    { QuickFix.DueToRelated value = new QuickFix.DueToRelated();
      getField(value); return value; }
    public bool isSet(QuickFix.DueToRelated field)
    { return isSetField(field); }
    public bool isSetDueToRelated()
    { return isSetField(329); }

    public void set(QuickFix.BuyVolume value)
    { setField(value); }
    public QuickFix.BuyVolume get(QuickFix.BuyVolume  value)
    { getField(value); return value; }
    public QuickFix.BuyVolume getBuyVolume()
    { QuickFix.BuyVolume value = new QuickFix.BuyVolume();
      getField(value); return value; }
    public bool isSet(QuickFix.BuyVolume field)
    { return isSetField(field); }
    public bool isSetBuyVolume()
    { return isSetField(330); }

    public void set(QuickFix.SellVolume value)
    { setField(value); }
    public QuickFix.SellVolume get(QuickFix.SellVolume  value)
    { getField(value); return value; }
    public QuickFix.SellVolume getSellVolume()
    { QuickFix.SellVolume value = new QuickFix.SellVolume();
      getField(value); return value; }
    public bool isSet(QuickFix.SellVolume field)
    { return isSetField(field); }
    public bool isSetSellVolume()
    { return isSetField(331); }

    public void set(QuickFix.HighPx value)
    { setField(value); }
    public QuickFix.HighPx get(QuickFix.HighPx  value)
    { getField(value); return value; }
    public QuickFix.HighPx getHighPx()
    { QuickFix.HighPx value = new QuickFix.HighPx();
      getField(value); return value; }
    public bool isSet(QuickFix.HighPx field)
    { return isSetField(field); }
    public bool isSetHighPx()
    { return isSetField(332); }

    public void set(QuickFix.LowPx value)
    { setField(value); }
    public QuickFix.LowPx get(QuickFix.LowPx  value)
    { getField(value); return value; }
    public QuickFix.LowPx getLowPx()
    { QuickFix.LowPx value = new QuickFix.LowPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LowPx field)
    { return isSetField(field); }
    public bool isSetLowPx()
    { return isSetField(333); }

    public void set(QuickFix.LastPx value)
    { setField(value); }
    public QuickFix.LastPx get(QuickFix.LastPx  value)
    { getField(value); return value; }
    public QuickFix.LastPx getLastPx()
    { QuickFix.LastPx value = new QuickFix.LastPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastPx field)
    { return isSetField(field); }
    public bool isSetLastPx()
    { return isSetField(31); }

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

    public void set(QuickFix.Adjustment value)
    { setField(value); }
    public QuickFix.Adjustment get(QuickFix.Adjustment  value)
    { getField(value); return value; }
    public QuickFix.Adjustment getAdjustment()
    { QuickFix.Adjustment value = new QuickFix.Adjustment();
      getField(value); return value; }
    public bool isSet(QuickFix.Adjustment field)
    { return isSetField(field); }
    public bool isSetAdjustment()
    { return isSetField(334); }

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

