namespace QuickFix43
{

  public class CrossOrderCancelReplaceRequest : Message
  {
    public CrossOrderCancelReplaceRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("t"); }

    public CrossOrderCancelReplaceRequest(
      QuickFix.CrossID aCrossID,
      QuickFix.OrigCrossID aOrigCrossID,
      QuickFix.CrossType aCrossType,
      QuickFix.CrossPrioritization aCrossPrioritization,
      QuickFix.HandlInst aHandlInst,
      QuickFix.TransactTime aTransactTime,
      QuickFix.OrdType aOrdType )
    : base(MsgType()) {
      set(aCrossID);
      set(aOrigCrossID);
      set(aCrossType);
      set(aCrossPrioritization);
      set(aHandlInst);
      set(aTransactTime);
      set(aOrdType);
    }

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

    public void set(QuickFix.CrossID value)
    { setField(value); }
    public QuickFix.CrossID get(QuickFix.CrossID  value)
    { getField(value); return value; }
    public QuickFix.CrossID getCrossID()
    { QuickFix.CrossID value = new QuickFix.CrossID();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossID field)
    { return isSetField(field); }
    public bool isSetCrossID()
    { return isSetField(548); }

    public void set(QuickFix.OrigCrossID value)
    { setField(value); }
    public QuickFix.OrigCrossID get(QuickFix.OrigCrossID  value)
    { getField(value); return value; }
    public QuickFix.OrigCrossID getOrigCrossID()
    { QuickFix.OrigCrossID value = new QuickFix.OrigCrossID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigCrossID field)
    { return isSetField(field); }
    public bool isSetOrigCrossID()
    { return isSetField(551); }

    public void set(QuickFix.CrossType value)
    { setField(value); }
    public QuickFix.CrossType get(QuickFix.CrossType  value)
    { getField(value); return value; }
    public QuickFix.CrossType getCrossType()
    { QuickFix.CrossType value = new QuickFix.CrossType();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossType field)
    { return isSetField(field); }
    public bool isSetCrossType()
    { return isSetField(549); }

    public void set(QuickFix.CrossPrioritization value)
    { setField(value); }
    public QuickFix.CrossPrioritization get(QuickFix.CrossPrioritization  value)
    { getField(value); return value; }
    public QuickFix.CrossPrioritization getCrossPrioritization()
    { QuickFix.CrossPrioritization value = new QuickFix.CrossPrioritization();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossPrioritization field)
    { return isSetField(field); }
    public bool isSetCrossPrioritization()
    { return isSetField(550); }

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

    public void set(QuickFix.HandlInst value)
    { setField(value); }
    public QuickFix.HandlInst get(QuickFix.HandlInst  value)
    { getField(value); return value; }
    public QuickFix.HandlInst getHandlInst()
    { QuickFix.HandlInst value = new QuickFix.HandlInst();
      getField(value); return value; }
    public bool isSet(QuickFix.HandlInst field)
    { return isSetField(field); }
    public bool isSetHandlInst()
    { return isSetField(21); }

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

    public void set(QuickFix.MaxFloor value)
    { setField(value); }
    public QuickFix.MaxFloor get(QuickFix.MaxFloor  value)
    { getField(value); return value; }
    public QuickFix.MaxFloor getMaxFloor()
    { QuickFix.MaxFloor value = new QuickFix.MaxFloor();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxFloor field)
    { return isSetField(field); }
    public bool isSetMaxFloor()
    { return isSetField(111); }

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

    public void set(QuickFix.ProcessCode value)
    { setField(value); }
    public QuickFix.ProcessCode get(QuickFix.ProcessCode  value)
    { getField(value); return value; }
    public QuickFix.ProcessCode getProcessCode()
    { QuickFix.ProcessCode value = new QuickFix.ProcessCode();
      getField(value); return value; }
    public bool isSet(QuickFix.ProcessCode field)
    { return isSetField(field); }
    public bool isSetProcessCode()
    { return isSetField(81); }

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

    public void set(QuickFix.LocateReqd value)
    { setField(value); }
    public QuickFix.LocateReqd get(QuickFix.LocateReqd  value)
    { getField(value); return value; }
    public QuickFix.LocateReqd getLocateReqd()
    { QuickFix.LocateReqd value = new QuickFix.LocateReqd();
      getField(value); return value; }
    public bool isSet(QuickFix.LocateReqd field)
    { return isSetField(field); }
    public bool isSetLocateReqd()
    { return isSetField(114); }

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

    public void set(QuickFix.StopPx value)
    { setField(value); }
    public QuickFix.StopPx get(QuickFix.StopPx  value)
    { getField(value); return value; }
    public QuickFix.StopPx getStopPx()
    { QuickFix.StopPx value = new QuickFix.StopPx();
      getField(value); return value; }
    public bool isSet(QuickFix.StopPx field)
    { return isSetField(field); }
    public bool isSetStopPx()
    { return isSetField(99); }

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

    public void set(QuickFix.ComplianceID value)
    { setField(value); }
    public QuickFix.ComplianceID get(QuickFix.ComplianceID  value)
    { getField(value); return value; }
    public QuickFix.ComplianceID getComplianceID()
    { QuickFix.ComplianceID value = new QuickFix.ComplianceID();
      getField(value); return value; }
    public bool isSet(QuickFix.ComplianceID field)
    { return isSetField(field); }
    public bool isSetComplianceID()
    { return isSetField(376); }

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

    public void set(QuickFix.EffectiveTime value)
    { setField(value); }
    public QuickFix.EffectiveTime get(QuickFix.EffectiveTime  value)
    { getField(value); return value; }
    public QuickFix.EffectiveTime getEffectiveTime()
    { QuickFix.EffectiveTime value = new QuickFix.EffectiveTime();
      getField(value); return value; }
    public bool isSet(QuickFix.EffectiveTime field)
    { return isSetField(field); }
    public bool isSetEffectiveTime()
    { return isSetField(168); }

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

    public void set(QuickFix.GTBookingInst value)
    { setField(value); }
    public QuickFix.GTBookingInst get(QuickFix.GTBookingInst  value)
    { getField(value); return value; }
    public QuickFix.GTBookingInst getGTBookingInst()
    { QuickFix.GTBookingInst value = new QuickFix.GTBookingInst();
      getField(value); return value; }
    public bool isSet(QuickFix.GTBookingInst field)
    { return isSetField(field); }
    public bool isSetGTBookingInst()
    { return isSetField(427); }

    public void set(QuickFix.MaxShow value)
    { setField(value); }
    public QuickFix.MaxShow get(QuickFix.MaxShow  value)
    { getField(value); return value; }
    public QuickFix.MaxShow getMaxShow()
    { QuickFix.MaxShow value = new QuickFix.MaxShow();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxShow field)
    { return isSetField(field); }
    public bool isSetMaxShow()
    { return isSetField(210); }

    public void set(QuickFix.PegDifference value)
    { setField(value); }
    public QuickFix.PegDifference get(QuickFix.PegDifference  value)
    { getField(value); return value; }
    public QuickFix.PegDifference getPegDifference()
    { QuickFix.PegDifference value = new QuickFix.PegDifference();
      getField(value); return value; }
    public bool isSet(QuickFix.PegDifference field)
    { return isSetField(field); }
    public bool isSetPegDifference()
    { return isSetField(211); }

    public void set(QuickFix.DiscretionInst value)
    { setField(value); }
    public QuickFix.DiscretionInst get(QuickFix.DiscretionInst  value)
    { getField(value); return value; }
    public QuickFix.DiscretionInst getDiscretionInst()
    { QuickFix.DiscretionInst value = new QuickFix.DiscretionInst();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionInst field)
    { return isSetField(field); }
    public bool isSetDiscretionInst()
    { return isSetField(388); }

    public void set(QuickFix.DiscretionOffset value)
    { setField(value); }
    public QuickFix.DiscretionOffset get(QuickFix.DiscretionOffset  value)
    { getField(value); return value; }
    public QuickFix.DiscretionOffset getDiscretionOffset()
    { QuickFix.DiscretionOffset value = new QuickFix.DiscretionOffset();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionOffset field)
    { return isSetField(field); }
    public bool isSetDiscretionOffset()
    { return isSetField(389); }

    public void set(QuickFix.CancellationRights value)
    { setField(value); }
    public QuickFix.CancellationRights get(QuickFix.CancellationRights  value)
    { getField(value); return value; }
    public QuickFix.CancellationRights getCancellationRights()
    { QuickFix.CancellationRights value = new QuickFix.CancellationRights();
      getField(value); return value; }
    public bool isSet(QuickFix.CancellationRights field)
    { return isSetField(field); }
    public bool isSetCancellationRights()
    { return isSetField(480); }

    public void set(QuickFix.MoneyLaunderingStatus value)
    { setField(value); }
    public QuickFix.MoneyLaunderingStatus get(QuickFix.MoneyLaunderingStatus  value)
    { getField(value); return value; }
    public QuickFix.MoneyLaunderingStatus getMoneyLaunderingStatus()
    { QuickFix.MoneyLaunderingStatus value = new QuickFix.MoneyLaunderingStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.MoneyLaunderingStatus field)
    { return isSetField(field); }
    public bool isSetMoneyLaunderingStatus()
    { return isSetField(481); }

    public void set(QuickFix.RegistID value)
    { setField(value); }
    public QuickFix.RegistID get(QuickFix.RegistID  value)
    { getField(value); return value; }
    public QuickFix.RegistID getRegistID()
    { QuickFix.RegistID value = new QuickFix.RegistID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistID field)
    { return isSetField(field); }
    public bool isSetRegistID()
    { return isSetField(513); }

    public void set(QuickFix.Designation value)
    { setField(value); }
    public QuickFix.Designation get(QuickFix.Designation  value)
    { getField(value); return value; }
    public QuickFix.Designation getDesignation()
    { QuickFix.Designation value = new QuickFix.Designation();
      getField(value); return value; }
    public bool isSet(QuickFix.Designation field)
    { return isSetField(field); }
    public bool isSetDesignation()
    { return isSetField(494); }

    public void set(QuickFix.AccruedInterestRate value)
    { setField(value); }
    public QuickFix.AccruedInterestRate get(QuickFix.AccruedInterestRate  value)
    { getField(value); return value; }
    public QuickFix.AccruedInterestRate getAccruedInterestRate()
    { QuickFix.AccruedInterestRate value = new QuickFix.AccruedInterestRate();
      getField(value); return value; }
    public bool isSet(QuickFix.AccruedInterestRate field)
    { return isSetField(field); }
    public bool isSetAccruedInterestRate()
    { return isSetField(158); }

    public void set(QuickFix.AccruedInterestAmt value)
    { setField(value); }
    public QuickFix.AccruedInterestAmt get(QuickFix.AccruedInterestAmt  value)
    { getField(value); return value; }
    public QuickFix.AccruedInterestAmt getAccruedInterestAmt()
    { QuickFix.AccruedInterestAmt value = new QuickFix.AccruedInterestAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.AccruedInterestAmt field)
    { return isSetField(field); }
    public bool isSetAccruedInterestAmt()
    { return isSetField(159); }

    public void set(QuickFix.NetMoney value)
    { setField(value); }
    public QuickFix.NetMoney get(QuickFix.NetMoney  value)
    { getField(value); return value; }
    public QuickFix.NetMoney getNetMoney()
    { QuickFix.NetMoney value = new QuickFix.NetMoney();
      getField(value); return value; }
    public bool isSet(QuickFix.NetMoney field)
    { return isSetField(field); }
    public bool isSetNetMoney()
    { return isSetField(118); }

    public void set(QuickFix.NoSides value)
    { setField(value); }
    public QuickFix.NoSides get(QuickFix.NoSides  value)
    { getField(value); return value; }
    public QuickFix.NoSides getNoSides()
    { QuickFix.NoSides value = new QuickFix.NoSides();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSides field)
    { return isSetField(field); }
    public bool isSetNoSides()
    { return isSetField(552); }

    public class NoSides: QuickFix.Group
    {
    public NoSides() : base(552,54,message_order ) {}
    static int[] message_order = new int[] {54,41,11,526,583,586,453,229,1,581,589,590,591,78,465,38,152,516,468,469,12,13,479,497,528,529,582,121,120,58,354,355,77,203,544,635,377,659,0};
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

      public void set(QuickFix.ClOrdLinkID value)
      { setField(value); }
      public QuickFix.ClOrdLinkID get(QuickFix.ClOrdLinkID  value)
      { getField(value); return value; }
      public QuickFix.ClOrdLinkID getClOrdLinkID()
      { QuickFix.ClOrdLinkID value = new QuickFix.ClOrdLinkID();
        getField(value); return value; }
      public bool isSet(QuickFix.ClOrdLinkID field)
      { return isSetField(field); }
      public bool isSetClOrdLinkID()
      { return isSetField(583); }

      public void set(QuickFix.OrigOrdModTime value)
      { setField(value); }
      public QuickFix.OrigOrdModTime get(QuickFix.OrigOrdModTime  value)
      { getField(value); return value; }
      public QuickFix.OrigOrdModTime getOrigOrdModTime()
      { QuickFix.OrigOrdModTime value = new QuickFix.OrigOrdModTime();
        getField(value); return value; }
      public bool isSet(QuickFix.OrigOrdModTime field)
      { return isSetField(field); }
      public bool isSetOrigOrdModTime()
      { return isSetField(586); }

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

      public void set(QuickFix.DayBookingInst value)
      { setField(value); }
      public QuickFix.DayBookingInst get(QuickFix.DayBookingInst  value)
      { getField(value); return value; }
      public QuickFix.DayBookingInst getDayBookingInst()
      { QuickFix.DayBookingInst value = new QuickFix.DayBookingInst();
        getField(value); return value; }
      public bool isSet(QuickFix.DayBookingInst field)
      { return isSetField(field); }
      public bool isSetDayBookingInst()
      { return isSetField(589); }

      public void set(QuickFix.BookingUnit value)
      { setField(value); }
      public QuickFix.BookingUnit get(QuickFix.BookingUnit  value)
      { getField(value); return value; }
      public QuickFix.BookingUnit getBookingUnit()
      { QuickFix.BookingUnit value = new QuickFix.BookingUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.BookingUnit field)
      { return isSetField(field); }
      public bool isSetBookingUnit()
      { return isSetField(590); }

      public void set(QuickFix.PreallocMethod value)
      { setField(value); }
      public QuickFix.PreallocMethod get(QuickFix.PreallocMethod  value)
      { getField(value); return value; }
      public QuickFix.PreallocMethod getPreallocMethod()
      { QuickFix.PreallocMethod value = new QuickFix.PreallocMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.PreallocMethod field)
      { return isSetField(field); }
      public bool isSetPreallocMethod()
      { return isSetField(591); }

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

      public void set(QuickFix.OrderRestrictions value)
      { setField(value); }
      public QuickFix.OrderRestrictions get(QuickFix.OrderRestrictions  value)
      { getField(value); return value; }
      public QuickFix.OrderRestrictions getOrderRestrictions()
      { QuickFix.OrderRestrictions value = new QuickFix.OrderRestrictions();
        getField(value); return value; }
      public bool isSet(QuickFix.OrderRestrictions field)
      { return isSetField(field); }
      public bool isSetOrderRestrictions()
      { return isSetField(529); }

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

      public void set(QuickFix.ForexReq value)
      { setField(value); }
      public QuickFix.ForexReq get(QuickFix.ForexReq  value)
      { getField(value); return value; }
      public QuickFix.ForexReq getForexReq()
      { QuickFix.ForexReq value = new QuickFix.ForexReq();
        getField(value); return value; }
      public bool isSet(QuickFix.ForexReq field)
      { return isSetField(field); }
      public bool isSetForexReq()
      { return isSetField(121); }

      public void set(QuickFix.SettlCurrency value)
      { setField(value); }
      public QuickFix.SettlCurrency get(QuickFix.SettlCurrency  value)
      { getField(value); return value; }
      public QuickFix.SettlCurrency getSettlCurrency()
      { QuickFix.SettlCurrency value = new QuickFix.SettlCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.SettlCurrency field)
      { return isSetField(field); }
      public bool isSetSettlCurrency()
      { return isSetField(120); }

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

      public void set(QuickFix.PositionEffect value)
      { setField(value); }
      public QuickFix.PositionEffect get(QuickFix.PositionEffect  value)
      { getField(value); return value; }
      public QuickFix.PositionEffect getPositionEffect()
      { QuickFix.PositionEffect value = new QuickFix.PositionEffect();
        getField(value); return value; }
      public bool isSet(QuickFix.PositionEffect field)
      { return isSetField(field); }
      public bool isSetPositionEffect()
      { return isSetField(77); }

      public void set(QuickFix.CoveredOrUncovered value)
      { setField(value); }
      public QuickFix.CoveredOrUncovered get(QuickFix.CoveredOrUncovered  value)
      { getField(value); return value; }
      public QuickFix.CoveredOrUncovered getCoveredOrUncovered()
      { QuickFix.CoveredOrUncovered value = new QuickFix.CoveredOrUncovered();
        getField(value); return value; }
      public bool isSet(QuickFix.CoveredOrUncovered field)
      { return isSetField(field); }
      public bool isSetCoveredOrUncovered()
      { return isSetField(203); }

      public void set(QuickFix.CashMargin value)
      { setField(value); }
      public QuickFix.CashMargin get(QuickFix.CashMargin  value)
      { getField(value); return value; }
      public QuickFix.CashMargin getCashMargin()
      { QuickFix.CashMargin value = new QuickFix.CashMargin();
        getField(value); return value; }
      public bool isSet(QuickFix.CashMargin field)
      { return isSetField(field); }
      public bool isSetCashMargin()
      { return isSetField(544); }

      public void set(QuickFix.ClearingFeeIndicator value)
      { setField(value); }
      public QuickFix.ClearingFeeIndicator get(QuickFix.ClearingFeeIndicator  value)
      { getField(value); return value; }
      public QuickFix.ClearingFeeIndicator getClearingFeeIndicator()
      { QuickFix.ClearingFeeIndicator value = new QuickFix.ClearingFeeIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.ClearingFeeIndicator field)
      { return isSetField(field); }
      public bool isSetClearingFeeIndicator()
      { return isSetField(635); }

      public void set(QuickFix.SolicitedFlag value)
      { setField(value); }
      public QuickFix.SolicitedFlag get(QuickFix.SolicitedFlag  value)
      { getField(value); return value; }
      public QuickFix.SolicitedFlag getSolicitedFlag()
      { QuickFix.SolicitedFlag value = new QuickFix.SolicitedFlag();
        getField(value); return value; }
      public bool isSet(QuickFix.SolicitedFlag field)
      { return isSetField(field); }
      public bool isSetSolicitedFlag()
      { return isSetField(377); }

      public void set(QuickFix.SideComplianceID value)
      { setField(value); }
      public QuickFix.SideComplianceID get(QuickFix.SideComplianceID  value)
      { getField(value); return value; }
      public QuickFix.SideComplianceID getSideComplianceID()
      { QuickFix.SideComplianceID value = new QuickFix.SideComplianceID();
        getField(value); return value; }
      public bool isSet(QuickFix.SideComplianceID field)
      { return isSetField(field); }
      public bool isSetSideComplianceID()
      { return isSetField(659); }

      public void set(QuickFix.NoAllocs value)
      { setField(value); }
      public QuickFix.NoAllocs get(QuickFix.NoAllocs  value)
      { getField(value); return value; }
      public QuickFix.NoAllocs getNoAllocs()
      { QuickFix.NoAllocs value = new QuickFix.NoAllocs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoAllocs field)
      { return isSetField(field); }
      public bool isSetNoAllocs()
      { return isSetField(78); }

      public class NoAllocs: QuickFix.Group
      {
      public NoAllocs() : base(78,79,message_order ) {}
      static int[] message_order = new int[] {79,467,539,80,0};
        public void set(QuickFix.AllocAccount value)
        { setField(value); }
        public QuickFix.AllocAccount get(QuickFix.AllocAccount  value)
        { getField(value); return value; }
        public QuickFix.AllocAccount getAllocAccount()
        { QuickFix.AllocAccount value = new QuickFix.AllocAccount();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocAccount field)
        { return isSetField(field); }
        public bool isSetAllocAccount()
        { return isSetField(79); }

        public void set(QuickFix.IndividualAllocID value)
        { setField(value); }
        public QuickFix.IndividualAllocID get(QuickFix.IndividualAllocID  value)
        { getField(value); return value; }
        public QuickFix.IndividualAllocID getIndividualAllocID()
        { QuickFix.IndividualAllocID value = new QuickFix.IndividualAllocID();
          getField(value); return value; }
        public bool isSet(QuickFix.IndividualAllocID field)
        { return isSetField(field); }
        public bool isSetIndividualAllocID()
        { return isSetField(467); }

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
        static int[] message_order = new int[] {524,525,538,545,0};
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

        };
        public void set(QuickFix.AllocQty value)
        { setField(value); }
        public QuickFix.AllocQty get(QuickFix.AllocQty  value)
        { getField(value); return value; }
        public QuickFix.AllocQty getAllocQty()
        { QuickFix.AllocQty value = new QuickFix.AllocQty();
          getField(value); return value; }
        public bool isSet(QuickFix.AllocQty field)
        { return isSetField(field); }
        public bool isSetAllocQty()
        { return isSetField(80); }

      };
    };
    public void set(QuickFix.NoTradingSessions value)
    { setField(value); }
    public QuickFix.NoTradingSessions get(QuickFix.NoTradingSessions  value)
    { getField(value); return value; }
    public QuickFix.NoTradingSessions getNoTradingSessions()
    { QuickFix.NoTradingSessions value = new QuickFix.NoTradingSessions();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTradingSessions field)
    { return isSetField(field); }
    public bool isSetNoTradingSessions()
    { return isSetField(386); }

    public class NoTradingSessions: QuickFix.Group
    {
    public NoTradingSessions() : base(386,336,message_order ) {}
    static int[] message_order = new int[] {336,625,0};
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

    };
  };

}

