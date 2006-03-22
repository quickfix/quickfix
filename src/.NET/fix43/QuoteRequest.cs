namespace QuickFix43
{

  public class QuoteRequest : Message
  {
    public QuoteRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("R"); }

    public QuoteRequest(
      QuickFix.QuoteReqID aQuoteReqID )
    : base(MsgType()) {
      set(aQuoteReqID);
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

    public void set(QuickFix.RFQReqID value)
    { setField(value); }
    public QuickFix.RFQReqID get(QuickFix.RFQReqID  value)
    { getField(value); return value; }
    public QuickFix.RFQReqID getRFQReqID()
    { QuickFix.RFQReqID value = new QuickFix.RFQReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.RFQReqID field)
    { return isSetField(field); }
    public bool isSetRFQReqID()
    { return isSetField(644); }

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
    static int[] message_order = new int[] {55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,140,303,537,336,625,229,232,54,465,38,152,63,64,40,193,192,126,60,15,218,220,221,222,423,44,640,235,236,0};
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
      public void set(QuickFix.PrevClosePx value)
      { setField(value); }
      public QuickFix.PrevClosePx get(QuickFix.PrevClosePx  value)
      { getField(value); return value; }
      public QuickFix.PrevClosePx getPrevClosePx()
      { QuickFix.PrevClosePx value = new QuickFix.PrevClosePx();
        getField(value); return value; }
      public bool isSet(QuickFix.PrevClosePx field)
      { return isSetField(field); }
      public bool isSetPrevClosePx()
      { return isSetField(140); }

      public void set(QuickFix.QuoteRequestType value)
      { setField(value); }
      public QuickFix.QuoteRequestType get(QuickFix.QuoteRequestType  value)
      { getField(value); return value; }
      public QuickFix.QuoteRequestType getQuoteRequestType()
      { QuickFix.QuoteRequestType value = new QuickFix.QuoteRequestType();
        getField(value); return value; }
      public bool isSet(QuickFix.QuoteRequestType field)
      { return isSetField(field); }
      public bool isSetQuoteRequestType()
      { return isSetField(303); }

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

      public void set(QuickFix.TradeOriginationDate value)
      { setField(value); }
      public QuickFix.TradeOriginationDate get(QuickFix.TradeOriginationDate  value)
      { getField(value); return value; }
      public QuickFix.TradeOriginationDate getTradeOriginationDate()
      { QuickFix.TradeOriginationDate value = new QuickFix.TradeOriginationDate();
        getField(value); return value; }
      public bool isSet(QuickFix.TradeOriginationDate field)
      { return isSetField(field); }
      public bool isSetTradeOriginationDate()
      { return isSetField(229); }

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

      public void set(QuickFix.QuantityType value)
      { setField(value); }
      public QuickFix.QuantityType get(QuickFix.QuantityType  value)
      { getField(value); return value; }
      public QuickFix.QuantityType getQuantityType()
      { QuickFix.QuantityType value = new QuickFix.QuantityType();
        getField(value); return value; }
      public bool isSet(QuickFix.QuantityType field)
      { return isSetField(field); }
      public bool isSetQuantityType()
      { return isSetField(465); }

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

      public void set(QuickFix.SettlmntTyp value)
      { setField(value); }
      public QuickFix.SettlmntTyp get(QuickFix.SettlmntTyp  value)
      { getField(value); return value; }
      public QuickFix.SettlmntTyp getSettlmntTyp()
      { QuickFix.SettlmntTyp value = new QuickFix.SettlmntTyp();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlmntTyp field)
      { return isSetField(field); }
      public bool isSetSettlmntTyp()
      { return isSetField(63); }

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

      public void set(QuickFix.ExpireTime value)
      { setField(value); }
      public QuickFix.ExpireTime get(QuickFix.ExpireTime  value)
      { getField(value); return value; }
      public QuickFix.ExpireTime getExpireTime()
      { QuickFix.ExpireTime value = new QuickFix.ExpireTime();
        getField(value); return value; }
      public bool isSet(QuickFix.ExpireTime field)
      { return isSetField(field); }
      public bool isSetExpireTime()
      { return isSetField(126); }

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

      public void set(QuickFix.Price2 value)
      { setField(value); }
      public QuickFix.Price2 get(QuickFix.Price2  value)
      { getField(value); return value; }
      public QuickFix.Price2 getPrice2()
      { QuickFix.Price2 value = new QuickFix.Price2();
        getField(value); return value; }
      public bool isSet(QuickFix.Price2 field)
      { return isSetField(field); }
      public bool isSetPrice2()
      { return isSetField(640); }

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

    };
  };

}

