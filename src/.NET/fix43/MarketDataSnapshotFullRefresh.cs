namespace QuickFix43
{

  public class MarketDataSnapshotFullRefresh : Message
  {
    public MarketDataSnapshotFullRefresh() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("W"); }

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

    public void set(QuickFix.TotalVolumeTraded value)
    { setField(value); }
    public QuickFix.TotalVolumeTraded get(QuickFix.TotalVolumeTraded  value)
    { getField(value); return value; }
    public QuickFix.TotalVolumeTraded getTotalVolumeTraded()
    { QuickFix.TotalVolumeTraded value = new QuickFix.TotalVolumeTraded();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalVolumeTraded field)
    { return isSetField(field); }
    public bool isSetTotalVolumeTraded()
    { return isSetField(387); }

    public void set(QuickFix.TotalVolumeTradedDate value)
    { setField(value); }
    public QuickFix.TotalVolumeTradedDate get(QuickFix.TotalVolumeTradedDate  value)
    { getField(value); return value; }
    public QuickFix.TotalVolumeTradedDate getTotalVolumeTradedDate()
    { QuickFix.TotalVolumeTradedDate value = new QuickFix.TotalVolumeTradedDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalVolumeTradedDate field)
    { return isSetField(field); }
    public bool isSetTotalVolumeTradedDate()
    { return isSetField(449); }

    public void set(QuickFix.TotalVolumeTradedTime value)
    { setField(value); }
    public QuickFix.TotalVolumeTradedTime get(QuickFix.TotalVolumeTradedTime  value)
    { getField(value); return value; }
    public QuickFix.TotalVolumeTradedTime getTotalVolumeTradedTime()
    { QuickFix.TotalVolumeTradedTime value = new QuickFix.TotalVolumeTradedTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalVolumeTradedTime field)
    { return isSetField(field); }
    public bool isSetTotalVolumeTradedTime()
    { return isSetField(450); }

    public void set(QuickFix.NetChgPrevDay value)
    { setField(value); }
    public QuickFix.NetChgPrevDay get(QuickFix.NetChgPrevDay  value)
    { getField(value); return value; }
    public QuickFix.NetChgPrevDay getNetChgPrevDay()
    { QuickFix.NetChgPrevDay value = new QuickFix.NetChgPrevDay();
      getField(value); return value; }
    public bool isSet(QuickFix.NetChgPrevDay field)
    { return isSetField(field); }
    public bool isSetNetChgPrevDay()
    { return isSetField(451); }

    public void set(QuickFix.NoMDEntries value)
    { setField(value); }
    public QuickFix.NoMDEntries get(QuickFix.NoMDEntries  value)
    { getField(value); return value; }
    public QuickFix.NoMDEntries getNoMDEntries()
    { QuickFix.NoMDEntries value = new QuickFix.NoMDEntries();
      getField(value); return value; }
    public bool isSet(QuickFix.NoMDEntries field)
    { return isSetField(field); }
    public bool isSetNoMDEntries()
    { return isSetField(268); }

    public class NoMDEntries: QuickFix.Group
    {
    public NoMDEntries() : base(268,269,message_order ) {}
    static int[] message_order = new int[] {269,270,15,271,272,273,274,275,336,625,276,277,282,283,284,286,59,432,126,110,18,287,37,299,288,289,346,290,546,58,354,355,0};
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

      public void set(QuickFix.MDEntryPx value)
      { setField(value); }
      public QuickFix.MDEntryPx get(QuickFix.MDEntryPx  value)
      { getField(value); return value; }
      public QuickFix.MDEntryPx getMDEntryPx()
      { QuickFix.MDEntryPx value = new QuickFix.MDEntryPx();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryPx field)
      { return isSetField(field); }
      public bool isSetMDEntryPx()
      { return isSetField(270); }

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

      public void set(QuickFix.MDEntrySize value)
      { setField(value); }
      public QuickFix.MDEntrySize get(QuickFix.MDEntrySize  value)
      { getField(value); return value; }
      public QuickFix.MDEntrySize getMDEntrySize()
      { QuickFix.MDEntrySize value = new QuickFix.MDEntrySize();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntrySize field)
      { return isSetField(field); }
      public bool isSetMDEntrySize()
      { return isSetField(271); }

      public void set(QuickFix.MDEntryDate value)
      { setField(value); }
      public QuickFix.MDEntryDate get(QuickFix.MDEntryDate  value)
      { getField(value); return value; }
      public QuickFix.MDEntryDate getMDEntryDate()
      { QuickFix.MDEntryDate value = new QuickFix.MDEntryDate();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryDate field)
      { return isSetField(field); }
      public bool isSetMDEntryDate()
      { return isSetField(272); }

      public void set(QuickFix.MDEntryTime value)
      { setField(value); }
      public QuickFix.MDEntryTime get(QuickFix.MDEntryTime  value)
      { getField(value); return value; }
      public QuickFix.MDEntryTime getMDEntryTime()
      { QuickFix.MDEntryTime value = new QuickFix.MDEntryTime();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryTime field)
      { return isSetField(field); }
      public bool isSetMDEntryTime()
      { return isSetField(273); }

      public void set(QuickFix.TickDirection value)
      { setField(value); }
      public QuickFix.TickDirection get(QuickFix.TickDirection  value)
      { getField(value); return value; }
      public QuickFix.TickDirection getTickDirection()
      { QuickFix.TickDirection value = new QuickFix.TickDirection();
        getField(value); return value; }
      public bool isSet(QuickFix.TickDirection field)
      { return isSetField(field); }
      public bool isSetTickDirection()
      { return isSetField(274); }

      public void set(QuickFix.MDMkt value)
      { setField(value); }
      public QuickFix.MDMkt get(QuickFix.MDMkt  value)
      { getField(value); return value; }
      public QuickFix.MDMkt getMDMkt()
      { QuickFix.MDMkt value = new QuickFix.MDMkt();
        getField(value); return value; }
      public bool isSet(QuickFix.MDMkt field)
      { return isSetField(field); }
      public bool isSetMDMkt()
      { return isSetField(275); }

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

      public void set(QuickFix.QuoteCondition value)
      { setField(value); }
      public QuickFix.QuoteCondition get(QuickFix.QuoteCondition  value)
      { getField(value); return value; }
      public QuickFix.QuoteCondition getQuoteCondition()
      { QuickFix.QuoteCondition value = new QuickFix.QuoteCondition();
        getField(value); return value; }
      public bool isSet(QuickFix.QuoteCondition field)
      { return isSetField(field); }
      public bool isSetQuoteCondition()
      { return isSetField(276); }

      public void set(QuickFix.TradeCondition value)
      { setField(value); }
      public QuickFix.TradeCondition get(QuickFix.TradeCondition  value)
      { getField(value); return value; }
      public QuickFix.TradeCondition getTradeCondition()
      { QuickFix.TradeCondition value = new QuickFix.TradeCondition();
        getField(value); return value; }
      public bool isSet(QuickFix.TradeCondition field)
      { return isSetField(field); }
      public bool isSetTradeCondition()
      { return isSetField(277); }

      public void set(QuickFix.MDEntryOriginator value)
      { setField(value); }
      public QuickFix.MDEntryOriginator get(QuickFix.MDEntryOriginator  value)
      { getField(value); return value; }
      public QuickFix.MDEntryOriginator getMDEntryOriginator()
      { QuickFix.MDEntryOriginator value = new QuickFix.MDEntryOriginator();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryOriginator field)
      { return isSetField(field); }
      public bool isSetMDEntryOriginator()
      { return isSetField(282); }

      public void set(QuickFix.LocationID value)
      { setField(value); }
      public QuickFix.LocationID get(QuickFix.LocationID  value)
      { getField(value); return value; }
      public QuickFix.LocationID getLocationID()
      { QuickFix.LocationID value = new QuickFix.LocationID();
        getField(value); return value; }
      public bool isSet(QuickFix.LocationID field)
      { return isSetField(field); }
      public bool isSetLocationID()
      { return isSetField(283); }

      public void set(QuickFix.DeskID value)
      { setField(value); }
      public QuickFix.DeskID get(QuickFix.DeskID  value)
      { getField(value); return value; }
      public QuickFix.DeskID getDeskID()
      { QuickFix.DeskID value = new QuickFix.DeskID();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskID field)
      { return isSetField(field); }
      public bool isSetDeskID()
      { return isSetField(284); }

      public void set(QuickFix.OpenCloseSettleFlag value)
      { setField(value); }
      public QuickFix.OpenCloseSettleFlag get(QuickFix.OpenCloseSettleFlag  value)
      { getField(value); return value; }
      public QuickFix.OpenCloseSettleFlag getOpenCloseSettleFlag()
      { QuickFix.OpenCloseSettleFlag value = new QuickFix.OpenCloseSettleFlag();
        getField(value); return value; }
      public bool isSet(QuickFix.OpenCloseSettleFlag field)
      { return isSetField(field); }
      public bool isSetOpenCloseSettleFlag()
      { return isSetField(286); }

      public void set(QuickFix.TimeInForce value)
      { setField(value); }
      public QuickFix.TimeInForce get(QuickFix.TimeInForce  value)
      { getField(value); return value; }
      public QuickFix.TimeInForce getTimeInForce()
      { QuickFix.TimeInForce value = new QuickFix.TimeInForce();
        getField(value); return value; }
      public bool isSet(QuickFix.TimeInForce field)
      { return isSetField(field); }
      public bool isSetTimeInForce()
      { return isSetField(59); }

      public void set(QuickFix.ExpireDate value)
      { setField(value); }
      public QuickFix.ExpireDate get(QuickFix.ExpireDate  value)
      { getField(value); return value; }
      public QuickFix.ExpireDate getExpireDate()
      { QuickFix.ExpireDate value = new QuickFix.ExpireDate();
        getField(value); return value; }
      public bool isSet(QuickFix.ExpireDate field)
      { return isSetField(field); }
      public bool isSetExpireDate()
      { return isSetField(432); }

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

      public void set(QuickFix.ExecInst value)
      { setField(value); }
      public QuickFix.ExecInst get(QuickFix.ExecInst  value)
      { getField(value); return value; }
      public QuickFix.ExecInst getExecInst()
      { QuickFix.ExecInst value = new QuickFix.ExecInst();
        getField(value); return value; }
      public bool isSet(QuickFix.ExecInst field)
      { return isSetField(field); }
      public bool isSetExecInst()
      { return isSetField(18); }

      public void set(QuickFix.SellerDays value)
      { setField(value); }
      public QuickFix.SellerDays get(QuickFix.SellerDays  value)
      { getField(value); return value; }
      public QuickFix.SellerDays getSellerDays()
      { QuickFix.SellerDays value = new QuickFix.SellerDays();
        getField(value); return value; }
      public bool isSet(QuickFix.SellerDays field)
      { return isSetField(field); }
      public bool isSetSellerDays()
      { return isSetField(287); }

      public void set(QuickFix.OrderID value)
      { setField(value); }
      public QuickFix.OrderID get(QuickFix.OrderID  value)
      { getField(value); return value; }
      public QuickFix.OrderID getOrderID()
      { QuickFix.OrderID value = new QuickFix.OrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderID field)
      { return isSetField(field); }
      public bool isSetOrderID()
      { return isSetField(37); }

      public void set(QuickFix.QuoteEntryID value)
      { setField(value); }
      public QuickFix.QuoteEntryID get(QuickFix.QuoteEntryID  value)
      { getField(value); return value; }
      public QuickFix.QuoteEntryID getQuoteEntryID()
      { QuickFix.QuoteEntryID value = new QuickFix.QuoteEntryID();
        getField(value); return value; }
      public bool isSet(QuickFix.QuoteEntryID field)
      { return isSetField(field); }
      public bool isSetQuoteEntryID()
      { return isSetField(299); }

      public void set(QuickFix.MDEntryBuyer value)
      { setField(value); }
      public QuickFix.MDEntryBuyer get(QuickFix.MDEntryBuyer  value)
      { getField(value); return value; }
      public QuickFix.MDEntryBuyer getMDEntryBuyer()
      { QuickFix.MDEntryBuyer value = new QuickFix.MDEntryBuyer();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryBuyer field)
      { return isSetField(field); }
      public bool isSetMDEntryBuyer()
      { return isSetField(288); }

      public void set(QuickFix.MDEntrySeller value)
      { setField(value); }
      public QuickFix.MDEntrySeller get(QuickFix.MDEntrySeller  value)
      { getField(value); return value; }
      public QuickFix.MDEntrySeller getMDEntrySeller()
      { QuickFix.MDEntrySeller value = new QuickFix.MDEntrySeller();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntrySeller field)
      { return isSetField(field); }
      public bool isSetMDEntrySeller()
      { return isSetField(289); }

      public void set(QuickFix.NumberOfOrders value)
      { setField(value); }
      public QuickFix.NumberOfOrders get(QuickFix.NumberOfOrders  value)
      { getField(value); return value; }
      public QuickFix.NumberOfOrders getNumberOfOrders()
      { QuickFix.NumberOfOrders value = new QuickFix.NumberOfOrders();
        getField(value); return value; }
      public bool isSet(QuickFix.NumberOfOrders field)
      { return isSetField(field); }
      public bool isSetNumberOfOrders()
      { return isSetField(346); }

      public void set(QuickFix.MDEntryPositionNo value)
      { setField(value); }
      public QuickFix.MDEntryPositionNo get(QuickFix.MDEntryPositionNo  value)
      { getField(value); return value; }
      public QuickFix.MDEntryPositionNo getMDEntryPositionNo()
      { QuickFix.MDEntryPositionNo value = new QuickFix.MDEntryPositionNo();
        getField(value); return value; }
      public bool isSet(QuickFix.MDEntryPositionNo field)
      { return isSetField(field); }
      public bool isSetMDEntryPositionNo()
      { return isSetField(290); }

      public void set(QuickFix.Scope value)
      { setField(value); }
      public QuickFix.Scope get(QuickFix.Scope  value)
      { getField(value); return value; }
      public QuickFix.Scope getScope()
      { QuickFix.Scope value = new QuickFix.Scope();
        getField(value); return value; }
      public bool isSet(QuickFix.Scope field)
      { return isSetField(field); }
      public bool isSetScope()
      { return isSetField(546); }

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

