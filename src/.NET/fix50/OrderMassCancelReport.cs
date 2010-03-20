namespace QuickFix50
{

  public class OrderMassCancelReport : Message
  {
    public OrderMassCancelReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("r"); }

    public OrderMassCancelReport(
      QuickFix.OrderID aOrderID,
      QuickFix.MassCancelRequestType aMassCancelRequestType,
      QuickFix.MassCancelResponse aMassCancelResponse )
    : base(MsgType()) {
      set(aOrderID);
      set(aMassCancelRequestType);
      set(aMassCancelResponse);
    }

    public void set(QuickFix.ClOrdID value)
    { setField(value); }
    public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
    { getField(value); return value; }
    public QuickFix.ClOrdID getClOrdID()
    { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClOrdID field)
    { return isSetField(field); }
    public bool isSetClOrdID()
    { return isSetField(11); }

    public void set(QuickFix.SecondaryClOrdID value)
    { setField(value); }
    public QuickFix.SecondaryClOrdID get(QuickFix.SecondaryClOrdID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryClOrdID getSecondaryClOrdID()
    { QuickFix.SecondaryClOrdID value = new QuickFix.SecondaryClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryClOrdID field)
    { return isSetField(field); }
    public bool isSetSecondaryClOrdID()
    { return isSetField(526); }

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

    public void set(QuickFix.SecondaryOrderID value)
    { setField(value); }
    public QuickFix.SecondaryOrderID get(QuickFix.SecondaryOrderID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryOrderID getSecondaryOrderID()
    { QuickFix.SecondaryOrderID value = new QuickFix.SecondaryOrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryOrderID field)
    { return isSetField(field); }
    public bool isSetSecondaryOrderID()
    { return isSetField(198); }

    public void set(QuickFix.MassCancelRequestType value)
    { setField(value); }
    public QuickFix.MassCancelRequestType get(QuickFix.MassCancelRequestType  value)
    { getField(value); return value; }
    public QuickFix.MassCancelRequestType getMassCancelRequestType()
    { QuickFix.MassCancelRequestType value = new QuickFix.MassCancelRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.MassCancelRequestType field)
    { return isSetField(field); }
    public bool isSetMassCancelRequestType()
    { return isSetField(530); }

    public void set(QuickFix.MassCancelResponse value)
    { setField(value); }
    public QuickFix.MassCancelResponse get(QuickFix.MassCancelResponse  value)
    { getField(value); return value; }
    public QuickFix.MassCancelResponse getMassCancelResponse()
    { QuickFix.MassCancelResponse value = new QuickFix.MassCancelResponse();
      getField(value); return value; }
    public bool isSet(QuickFix.MassCancelResponse field)
    { return isSetField(field); }
    public bool isSetMassCancelResponse()
    { return isSetField(531); }

    public void set(QuickFix.MassCancelRejectReason value)
    { setField(value); }
    public QuickFix.MassCancelRejectReason get(QuickFix.MassCancelRejectReason  value)
    { getField(value); return value; }
    public QuickFix.MassCancelRejectReason getMassCancelRejectReason()
    { QuickFix.MassCancelRejectReason value = new QuickFix.MassCancelRejectReason();
      getField(value); return value; }
    public bool isSet(QuickFix.MassCancelRejectReason field)
    { return isSetField(field); }
    public bool isSetMassCancelRejectReason()
    { return isSetField(532); }

    public void set(QuickFix.TotalAffectedOrders value)
    { setField(value); }
    public QuickFix.TotalAffectedOrders get(QuickFix.TotalAffectedOrders  value)
    { getField(value); return value; }
    public QuickFix.TotalAffectedOrders getTotalAffectedOrders()
    { QuickFix.TotalAffectedOrders value = new QuickFix.TotalAffectedOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalAffectedOrders field)
    { return isSetField(field); }
    public bool isSetTotalAffectedOrders()
    { return isSetField(533); }

    public void set(QuickFix.NoAffectedOrders value)
    { setField(value); }
    public QuickFix.NoAffectedOrders get(QuickFix.NoAffectedOrders  value)
    { getField(value); return value; }
    public QuickFix.NoAffectedOrders getNoAffectedOrders()
    { QuickFix.NoAffectedOrders value = new QuickFix.NoAffectedOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.NoAffectedOrders field)
    { return isSetField(field); }
    public bool isSetNoAffectedOrders()
    { return isSetField(534); }

    public class NoAffectedOrders: QuickFix.Group
    {
    public NoAffectedOrders() : base(534,41,message_order ) {}
    static int[] message_order = new int[] {41,535,536,0};
      public void set(QuickFix.OrigClOrdID value)
      { setField(value); }
      public QuickFix.OrigClOrdID get(QuickFix.OrigClOrdID  value)
      { getField(value); return value; }
      public QuickFix.OrigClOrdID getOrigClOrdID()
      { QuickFix.OrigClOrdID value = new QuickFix.OrigClOrdID();
        getField(value); return value; }
      public bool isSet(QuickFix.OrigClOrdID field)
      { return isSetField(field); }
      public bool isSetOrigClOrdID()
      { return isSetField(41); }

      public void set(QuickFix.AffectedOrderID value)
      { setField(value); }
      public QuickFix.AffectedOrderID get(QuickFix.AffectedOrderID  value)
      { getField(value); return value; }
      public QuickFix.AffectedOrderID getAffectedOrderID()
      { QuickFix.AffectedOrderID value = new QuickFix.AffectedOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.AffectedOrderID field)
      { return isSetField(field); }
      public bool isSetAffectedOrderID()
      { return isSetField(535); }

      public void set(QuickFix.AffectedSecondaryOrderID value)
      { setField(value); }
      public QuickFix.AffectedSecondaryOrderID get(QuickFix.AffectedSecondaryOrderID  value)
      { getField(value); return value; }
      public QuickFix.AffectedSecondaryOrderID getAffectedSecondaryOrderID()
      { QuickFix.AffectedSecondaryOrderID value = new QuickFix.AffectedSecondaryOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.AffectedSecondaryOrderID field)
      { return isSetField(field); }
      public bool isSetAffectedSecondaryOrderID()
      { return isSetField(536); }

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
  };

}

