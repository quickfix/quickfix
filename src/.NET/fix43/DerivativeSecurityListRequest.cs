namespace QuickFix43
{

  public class DerivativeSecurityListRequest : Message
  {
    public DerivativeSecurityListRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("z"); }

    public DerivativeSecurityListRequest(
      QuickFix.SecurityReqID aSecurityReqID,
      QuickFix.SecurityListRequestType aSecurityListRequestType )
    : base(MsgType()) {
      set(aSecurityReqID);
      set(aSecurityListRequestType);
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

    public void set(QuickFix.SecurityListRequestType value)
    { setField(value); }
    public QuickFix.SecurityListRequestType get(QuickFix.SecurityListRequestType  value)
    { getField(value); return value; }
    public QuickFix.SecurityListRequestType getSecurityListRequestType()
    { QuickFix.SecurityListRequestType value = new QuickFix.SecurityListRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityListRequestType field)
    { return isSetField(field); }
    public bool isSetSecurityListRequestType()
    { return isSetField(559); }

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

    public void set(QuickFix.NoUnderlyingSecurityAltID value)
    { setField(value); }
    public QuickFix.NoUnderlyingSecurityAltID get(QuickFix.NoUnderlyingSecurityAltID  value)
    { getField(value); return value; }
    public QuickFix.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID()
    { QuickFix.NoUnderlyingSecurityAltID value = new QuickFix.NoUnderlyingSecurityAltID();
      getField(value); return value; }
    public bool isSet(QuickFix.NoUnderlyingSecurityAltID field)
    { return isSetField(field); }
    public bool isSetNoUnderlyingSecurityAltID()
    { return isSetField(457); }

    public class NoUnderlyingSecurityAltID: QuickFix.Group
    {
    public NoUnderlyingSecurityAltID() : base(457,458,message_order ) {}
    static int[] message_order = new int[] {458,459,0};
      public void set(QuickFix.UnderlyingSecurityAltID value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityAltID get(QuickFix.UnderlyingSecurityAltID  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityAltID getUnderlyingSecurityAltID()
      { QuickFix.UnderlyingSecurityAltID value = new QuickFix.UnderlyingSecurityAltID();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityAltID field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityAltID()
      { return isSetField(458); }

      public void set(QuickFix.UnderlyingSecurityAltIDSource value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityAltIDSource get(QuickFix.UnderlyingSecurityAltIDSource  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource()
      { QuickFix.UnderlyingSecurityAltIDSource value = new QuickFix.UnderlyingSecurityAltIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityAltIDSource field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityAltIDSource()
      { return isSetField(459); }

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

    public void set(QuickFix.SubscriptionRequestType value)
    { setField(value); }
    public QuickFix.SubscriptionRequestType get(QuickFix.SubscriptionRequestType  value)
    { getField(value); return value; }
    public QuickFix.SubscriptionRequestType getSubscriptionRequestType()
    { QuickFix.SubscriptionRequestType value = new QuickFix.SubscriptionRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SubscriptionRequestType field)
    { return isSetField(field); }
    public bool isSetSubscriptionRequestType()
    { return isSetField(263); }

  };

}

