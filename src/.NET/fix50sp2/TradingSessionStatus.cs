namespace QuickFix50Sp2
{

  public class TradingSessionStatus : Message
  {
    public TradingSessionStatus() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("h"); }

    public TradingSessionStatus(
      QuickFix.TradingSessionID aTradingSessionID,
      QuickFix.TradSesStatus aTradSesStatus )
    : base(MsgType()) {
      set(aTradingSessionID);
      set(aTradSesStatus);
    }

    public void set(QuickFix.TradSesReqID value)
    { setField(value); }
    public QuickFix.TradSesReqID get(QuickFix.TradSesReqID  value)
    { getField(value); return value; }
    public QuickFix.TradSesReqID getTradSesReqID()
    { QuickFix.TradSesReqID value = new QuickFix.TradSesReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesReqID field)
    { return isSetField(field); }
    public bool isSetTradSesReqID()
    { return isSetField(335); }

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

    public void set(QuickFix.TradSesMethod value)
    { setField(value); }
    public QuickFix.TradSesMethod get(QuickFix.TradSesMethod  value)
    { getField(value); return value; }
    public QuickFix.TradSesMethod getTradSesMethod()
    { QuickFix.TradSesMethod value = new QuickFix.TradSesMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesMethod field)
    { return isSetField(field); }
    public bool isSetTradSesMethod()
    { return isSetField(338); }

    public void set(QuickFix.TradSesMode value)
    { setField(value); }
    public QuickFix.TradSesMode get(QuickFix.TradSesMode  value)
    { getField(value); return value; }
    public QuickFix.TradSesMode getTradSesMode()
    { QuickFix.TradSesMode value = new QuickFix.TradSesMode();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesMode field)
    { return isSetField(field); }
    public bool isSetTradSesMode()
    { return isSetField(339); }

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

    public void set(QuickFix.TradSesStatus value)
    { setField(value); }
    public QuickFix.TradSesStatus get(QuickFix.TradSesStatus  value)
    { getField(value); return value; }
    public QuickFix.TradSesStatus getTradSesStatus()
    { QuickFix.TradSesStatus value = new QuickFix.TradSesStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStatus field)
    { return isSetField(field); }
    public bool isSetTradSesStatus()
    { return isSetField(340); }

    public void set(QuickFix.TradSesStatusRejReason value)
    { setField(value); }
    public QuickFix.TradSesStatusRejReason get(QuickFix.TradSesStatusRejReason  value)
    { getField(value); return value; }
    public QuickFix.TradSesStatusRejReason getTradSesStatusRejReason()
    { QuickFix.TradSesStatusRejReason value = new QuickFix.TradSesStatusRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStatusRejReason field)
    { return isSetField(field); }
    public bool isSetTradSesStatusRejReason()
    { return isSetField(567); }

    public void set(QuickFix.TradSesStartTime value)
    { setField(value); }
    public QuickFix.TradSesStartTime get(QuickFix.TradSesStartTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesStartTime getTradSesStartTime()
    { QuickFix.TradSesStartTime value = new QuickFix.TradSesStartTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesStartTime field)
    { return isSetField(field); }
    public bool isSetTradSesStartTime()
    { return isSetField(341); }

    public void set(QuickFix.TradSesOpenTime value)
    { setField(value); }
    public QuickFix.TradSesOpenTime get(QuickFix.TradSesOpenTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesOpenTime getTradSesOpenTime()
    { QuickFix.TradSesOpenTime value = new QuickFix.TradSesOpenTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesOpenTime field)
    { return isSetField(field); }
    public bool isSetTradSesOpenTime()
    { return isSetField(342); }

    public void set(QuickFix.TradSesPreCloseTime value)
    { setField(value); }
    public QuickFix.TradSesPreCloseTime get(QuickFix.TradSesPreCloseTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesPreCloseTime getTradSesPreCloseTime()
    { QuickFix.TradSesPreCloseTime value = new QuickFix.TradSesPreCloseTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesPreCloseTime field)
    { return isSetField(field); }
    public bool isSetTradSesPreCloseTime()
    { return isSetField(343); }

    public void set(QuickFix.TradSesCloseTime value)
    { setField(value); }
    public QuickFix.TradSesCloseTime get(QuickFix.TradSesCloseTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesCloseTime getTradSesCloseTime()
    { QuickFix.TradSesCloseTime value = new QuickFix.TradSesCloseTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesCloseTime field)
    { return isSetField(field); }
    public bool isSetTradSesCloseTime()
    { return isSetField(344); }

    public void set(QuickFix.TradSesEndTime value)
    { setField(value); }
    public QuickFix.TradSesEndTime get(QuickFix.TradSesEndTime  value)
    { getField(value); return value; }
    public QuickFix.TradSesEndTime getTradSesEndTime()
    { QuickFix.TradSesEndTime value = new QuickFix.TradSesEndTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesEndTime field)
    { return isSetField(field); }
    public bool isSetTradSesEndTime()
    { return isSetField(345); }

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

    public void set(QuickFix.OptPayoutAmount value)
    { setField(value); }
    public QuickFix.OptPayoutAmount get(QuickFix.OptPayoutAmount  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutAmount getOptPayoutAmount()
    { QuickFix.OptPayoutAmount value = new QuickFix.OptPayoutAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutAmount field)
    { return isSetField(field); }
    public bool isSetOptPayoutAmount()
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

    public void set(QuickFix.ValuationMethod value)
    { setField(value); }
    public QuickFix.ValuationMethod get(QuickFix.ValuationMethod  value)
    { getField(value); return value; }
    public QuickFix.ValuationMethod getValuationMethod()
    { QuickFix.ValuationMethod value = new QuickFix.ValuationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ValuationMethod field)
    { return isSetField(field); }
    public bool isSetValuationMethod()
    { return isSetField(1197); }

    public void set(QuickFix.ContractMultiplierUnit value)
    { setField(value); }
    public QuickFix.ContractMultiplierUnit get(QuickFix.ContractMultiplierUnit  value)
    { getField(value); return value; }
    public QuickFix.ContractMultiplierUnit getContractMultiplierUnit()
    { QuickFix.ContractMultiplierUnit value = new QuickFix.ContractMultiplierUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractMultiplierUnit field)
    { return isSetField(field); }
    public bool isSetContractMultiplierUnit()
    { return isSetField(1435); }

    public void set(QuickFix.FlowScheduleType value)
    { setField(value); }
    public QuickFix.FlowScheduleType get(QuickFix.FlowScheduleType  value)
    { getField(value); return value; }
    public QuickFix.FlowScheduleType getFlowScheduleType()
    { QuickFix.FlowScheduleType value = new QuickFix.FlowScheduleType();
      getField(value); return value; }
    public bool isSet(QuickFix.FlowScheduleType field)
    { return isSetField(field); }
    public bool isSetFlowScheduleType()
    { return isSetField(1439); }

    public void set(QuickFix.RestructuringType value)
    { setField(value); }
    public QuickFix.RestructuringType get(QuickFix.RestructuringType  value)
    { getField(value); return value; }
    public QuickFix.RestructuringType getRestructuringType()
    { QuickFix.RestructuringType value = new QuickFix.RestructuringType();
      getField(value); return value; }
    public bool isSet(QuickFix.RestructuringType field)
    { return isSetField(field); }
    public bool isSetRestructuringType()
    { return isSetField(1449); }

    public void set(QuickFix.Seniority value)
    { setField(value); }
    public QuickFix.Seniority get(QuickFix.Seniority  value)
    { getField(value); return value; }
    public QuickFix.Seniority getSeniority()
    { QuickFix.Seniority value = new QuickFix.Seniority();
      getField(value); return value; }
    public bool isSet(QuickFix.Seniority field)
    { return isSetField(field); }
    public bool isSetSeniority()
    { return isSetField(1450); }

    public void set(QuickFix.NotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.NotionalPercentageOutstanding get(QuickFix.NotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.NotionalPercentageOutstanding getNotionalPercentageOutstanding()
    { QuickFix.NotionalPercentageOutstanding value = new QuickFix.NotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.NotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetNotionalPercentageOutstanding()
    { return isSetField(1451); }

    public void set(QuickFix.OriginalNotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.OriginalNotionalPercentageOutstanding get(QuickFix.OriginalNotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.OriginalNotionalPercentageOutstanding getOriginalNotionalPercentageOutstanding()
    { QuickFix.OriginalNotionalPercentageOutstanding value = new QuickFix.OriginalNotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.OriginalNotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetOriginalNotionalPercentageOutstanding()
    { return isSetField(1452); }

    public void set(QuickFix.AttachmentPoint value)
    { setField(value); }
    public QuickFix.AttachmentPoint get(QuickFix.AttachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.AttachmentPoint getAttachmentPoint()
    { QuickFix.AttachmentPoint value = new QuickFix.AttachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.AttachmentPoint field)
    { return isSetField(field); }
    public bool isSetAttachmentPoint()
    { return isSetField(1457); }

    public void set(QuickFix.DetachmentPoint value)
    { setField(value); }
    public QuickFix.DetachmentPoint get(QuickFix.DetachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.DetachmentPoint getDetachmentPoint()
    { QuickFix.DetachmentPoint value = new QuickFix.DetachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.DetachmentPoint field)
    { return isSetField(field); }
    public bool isSetDetachmentPoint()
    { return isSetField(1458); }

    public void set(QuickFix.StrikePriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.StrikePriceDeterminationMethod get(QuickFix.StrikePriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceDeterminationMethod getStrikePriceDeterminationMethod()
    { QuickFix.StrikePriceDeterminationMethod value = new QuickFix.StrikePriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceDeterminationMethod()
    { return isSetField(1478); }

    public void set(QuickFix.StrikePriceBoundaryMethod value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryMethod get(QuickFix.StrikePriceBoundaryMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryMethod getStrikePriceBoundaryMethod()
    { QuickFix.StrikePriceBoundaryMethod value = new QuickFix.StrikePriceBoundaryMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryMethod()
    { return isSetField(1479); }

    public void set(QuickFix.StrikePriceBoundaryPrecision value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryPrecision get(QuickFix.StrikePriceBoundaryPrecision  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryPrecision getStrikePriceBoundaryPrecision()
    { QuickFix.StrikePriceBoundaryPrecision value = new QuickFix.StrikePriceBoundaryPrecision();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryPrecision field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryPrecision()
    { return isSetField(1480); }

    public void set(QuickFix.UnderlyingPriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.UnderlyingPriceDeterminationMethod get(QuickFix.UnderlyingPriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingPriceDeterminationMethod getUnderlyingPriceDeterminationMethod()
    { QuickFix.UnderlyingPriceDeterminationMethod value = new QuickFix.UnderlyingPriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingPriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetUnderlyingPriceDeterminationMethod()
    { return isSetField(1481); }

    public void set(QuickFix.OptPayoutType value)
    { setField(value); }
    public QuickFix.OptPayoutType get(QuickFix.OptPayoutType  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutType getOptPayoutType()
    { QuickFix.OptPayoutType value = new QuickFix.OptPayoutType();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutType field)
    { return isSetField(field); }
    public bool isSetOptPayoutType()
    { return isSetField(1482); }

    public void set(QuickFix.MarketID value)
    { setField(value); }
    public QuickFix.MarketID get(QuickFix.MarketID  value)
    { getField(value); return value; }
    public QuickFix.MarketID getMarketID()
    { QuickFix.MarketID value = new QuickFix.MarketID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketID field)
    { return isSetField(field); }
    public bool isSetMarketID()
    { return isSetField(1301); }

    public void set(QuickFix.MarketSegmentID value)
    { setField(value); }
    public QuickFix.MarketSegmentID get(QuickFix.MarketSegmentID  value)
    { getField(value); return value; }
    public QuickFix.MarketSegmentID getMarketSegmentID()
    { QuickFix.MarketSegmentID value = new QuickFix.MarketSegmentID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketSegmentID field)
    { return isSetField(field); }
    public bool isSetMarketSegmentID()
    { return isSetField(1300); }

    public void set(QuickFix.TradSesEvent value)
    { setField(value); }
    public QuickFix.TradSesEvent get(QuickFix.TradSesEvent  value)
    { getField(value); return value; }
    public QuickFix.TradSesEvent getTradSesEvent()
    { QuickFix.TradSesEvent value = new QuickFix.TradSesEvent();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesEvent field)
    { return isSetField(field); }
    public bool isSetTradSesEvent()
    { return isSetField(1368); }

    public void set(QuickFix.ApplID value)
    { setField(value); }
    public QuickFix.ApplID get(QuickFix.ApplID  value)
    { getField(value); return value; }
    public QuickFix.ApplID getApplID()
    { QuickFix.ApplID value = new QuickFix.ApplID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplID field)
    { return isSetField(field); }
    public bool isSetApplID()
    { return isSetField(1180); }

    public void set(QuickFix.ApplSeqNum value)
    { setField(value); }
    public QuickFix.ApplSeqNum get(QuickFix.ApplSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplSeqNum getApplSeqNum()
    { QuickFix.ApplSeqNum value = new QuickFix.ApplSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplSeqNum field)
    { return isSetField(field); }
    public bool isSetApplSeqNum()
    { return isSetField(1181); }

    public void set(QuickFix.ApplLastSeqNum value)
    { setField(value); }
    public QuickFix.ApplLastSeqNum get(QuickFix.ApplLastSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplLastSeqNum getApplLastSeqNum()
    { QuickFix.ApplLastSeqNum value = new QuickFix.ApplLastSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplLastSeqNum field)
    { return isSetField(field); }
    public bool isSetApplLastSeqNum()
    { return isSetField(1350); }

    public void set(QuickFix.ApplResendFlag value)
    { setField(value); }
    public QuickFix.ApplResendFlag get(QuickFix.ApplResendFlag  value)
    { getField(value); return value; }
    public QuickFix.ApplResendFlag getApplResendFlag()
    { QuickFix.ApplResendFlag value = new QuickFix.ApplResendFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResendFlag field)
    { return isSetField(field); }
    public bool isSetApplResendFlag()
    { return isSetField(1352); }

  };

}

