namespace QuickFix43
{

  public class SecurityList : Message
  {
    public SecurityList() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("y"); }

    public SecurityList(
      QuickFix.SecurityReqID aSecurityReqID,
      QuickFix.SecurityResponseID aSecurityResponseID,
      QuickFix.SecurityRequestResult aSecurityRequestResult )
    : base(MsgType()) {
      set(aSecurityReqID);
      set(aSecurityResponseID);
      set(aSecurityRequestResult);
    }

    public void set(QuickFix.SecurityReqID value)
    { setField(value); }
    public QuickFix.SecurityReqID get(QuickFix.SecurityReqID  value)
    { getField(value); return value; }
    public QuickFix.SecurityReqID getSecurityReqID()
    { QuickFix.SecurityReqID value = new QuickFix.SecurityReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityReqID field)
    { return isSetField(field); }
    public bool isSetSecurityReqID()
    { return isSetField(320); }

    public void set(QuickFix.SecurityResponseID value)
    { setField(value); }
    public QuickFix.SecurityResponseID get(QuickFix.SecurityResponseID  value)
    { getField(value); return value; }
    public QuickFix.SecurityResponseID getSecurityResponseID()
    { QuickFix.SecurityResponseID value = new QuickFix.SecurityResponseID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityResponseID field)
    { return isSetField(field); }
    public bool isSetSecurityResponseID()
    { return isSetField(322); }

    public void set(QuickFix.SecurityRequestResult value)
    { setField(value); }
    public QuickFix.SecurityRequestResult get(QuickFix.SecurityRequestResult  value)
    { getField(value); return value; }
    public QuickFix.SecurityRequestResult getSecurityRequestResult()
    { QuickFix.SecurityRequestResult value = new QuickFix.SecurityRequestResult();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityRequestResult field)
    { return isSetField(field); }
    public bool isSetSecurityRequestResult()
    { return isSetField(560); }

    public void set(QuickFix.TotalNumSecurities value)
    { setField(value); }
    public QuickFix.TotalNumSecurities get(QuickFix.TotalNumSecurities  value)
    { getField(value); return value; }
    public QuickFix.TotalNumSecurities getTotalNumSecurities()
    { QuickFix.TotalNumSecurities value = new QuickFix.TotalNumSecurities();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalNumSecurities field)
    { return isSetField(field); }
    public bool isSetTotalNumSecurities()
    { return isSetField(393); }

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
    static int[] message_order = new int[] {55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,15,555,561,562,336,625,58,354,355,0};
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

      public void set(QuickFix.RoundLot value)
      { setField(value); }
      public QuickFix.RoundLot get(QuickFix.RoundLot  value)
      { getField(value); return value; }
      public QuickFix.RoundLot getRoundLot()
      { QuickFix.RoundLot value = new QuickFix.RoundLot();
        getField(value); return value; }
      public bool isSet(QuickFix.RoundLot field)
      { return isSetField(field); }
      public bool isSetRoundLot()
      { return isSetField(561); }

      public void set(QuickFix.MinTradeVol value)
      { setField(value); }
      public QuickFix.MinTradeVol get(QuickFix.MinTradeVol  value)
      { getField(value); return value; }
      public QuickFix.MinTradeVol getMinTradeVol()
      { QuickFix.MinTradeVol value = new QuickFix.MinTradeVol();
        getField(value); return value; }
      public bool isSet(QuickFix.MinTradeVol field)
      { return isSetField(field); }
      public bool isSetMinTradeVol()
      { return isSetField(562); }

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
      static int[] message_order = new int[] {600,601,602,603,604,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,556,0};
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

        public void set(QuickFix.NoLegSecurityAltID value)
        { setField(value); }
        public QuickFix.NoLegSecurityAltID get(QuickFix.NoLegSecurityAltID  value)
        { getField(value); return value; }
        public QuickFix.NoLegSecurityAltID getNoLegSecurityAltID()
        { QuickFix.NoLegSecurityAltID value = new QuickFix.NoLegSecurityAltID();
          getField(value); return value; }
        public bool isSet(QuickFix.NoLegSecurityAltID field)
        { return isSetField(field); }
        public bool isSetNoLegSecurityAltID()
        { return isSetField(604); }

        public class NoLegSecurityAltID: QuickFix.Group
        {
        public NoLegSecurityAltID() : base(604,605,message_order ) {}
        static int[] message_order = new int[] {605,606,0};
          public void set(QuickFix.LegSecurityAltID value)
          { setField(value); }
          public QuickFix.LegSecurityAltID get(QuickFix.LegSecurityAltID  value)
          { getField(value); return value; }
          public QuickFix.LegSecurityAltID getLegSecurityAltID()
          { QuickFix.LegSecurityAltID value = new QuickFix.LegSecurityAltID();
            getField(value); return value; }
          public bool isSet(QuickFix.LegSecurityAltID field)
          { return isSetField(field); }
          public bool isSetLegSecurityAltID()
          { return isSetField(605); }

          public void set(QuickFix.LegSecurityAltIDSource value)
          { setField(value); }
          public QuickFix.LegSecurityAltIDSource get(QuickFix.LegSecurityAltIDSource  value)
          { getField(value); return value; }
          public QuickFix.LegSecurityAltIDSource getLegSecurityAltIDSource()
          { QuickFix.LegSecurityAltIDSource value = new QuickFix.LegSecurityAltIDSource();
            getField(value); return value; }
          public bool isSet(QuickFix.LegSecurityAltIDSource field)
          { return isSetField(field); }
          public bool isSetLegSecurityAltIDSource()
          { return isSetField(606); }

        };
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

      };
    };
  };

}

