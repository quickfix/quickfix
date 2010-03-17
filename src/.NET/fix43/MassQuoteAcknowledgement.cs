namespace QuickFix43
{

  public class MassQuoteAcknowledgement : Message
  {
    public MassQuoteAcknowledgement() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("b"); }

    public MassQuoteAcknowledgement(
      QuickFix.QuoteStatus aQuoteStatus )
    : base(MsgType()) {
      set(aQuoteStatus);
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

    public void set(QuickFix.QuoteRejectReason value)
    { setField(value); }
    public QuickFix.QuoteRejectReason get(QuickFix.QuoteRejectReason  value)
    { getField(value); return value; }
    public QuickFix.QuoteRejectReason getQuoteRejectReason()
    { QuickFix.QuoteRejectReason value = new QuickFix.QuoteRejectReason();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteRejectReason field)
    { return isSetField(field); }
    public bool isSetQuoteRejectReason()
    { return isSetField(300); }

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

    public void set(QuickFix.NoQuoteSets value)
    { setField(value); }
    public QuickFix.NoQuoteSets get(QuickFix.NoQuoteSets  value)
    { getField(value); return value; }
    public QuickFix.NoQuoteSets getNoQuoteSets()
    { QuickFix.NoQuoteSets value = new QuickFix.NoQuoteSets();
      getField(value); return value; }
    public bool isSet(QuickFix.NoQuoteSets field)
    { return isSetField(field); }
    public bool isSetNoQuoteSets()
    { return isSetField(296); }

    public class NoQuoteSets: QuickFix.Group
    {
    public NoQuoteSets() : base(296,302,message_order ) {}
    static int[] message_order = new int[] {302,311,312,309,305,457,462,463,310,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,317,436,435,308,306,362,363,307,364,365,304,295,0};
      public void set(QuickFix.QuoteSetID value)
      { setField(value); }
      public QuickFix.QuoteSetID get(QuickFix.QuoteSetID  value)
      { getField(value); return value; }
      public QuickFix.QuoteSetID getQuoteSetID()
      { QuickFix.QuoteSetID value = new QuickFix.QuoteSetID();
        getField(value); return value; }
      public bool isSet(QuickFix.QuoteSetID field)
      { return isSetField(field); }
      public bool isSetQuoteSetID()
      { return isSetField(302); }

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
      public void set(QuickFix.TotQuoteEntries value)
      { setField(value); }
      public QuickFix.TotQuoteEntries get(QuickFix.TotQuoteEntries  value)
      { getField(value); return value; }
      public QuickFix.TotQuoteEntries getTotQuoteEntries()
      { QuickFix.TotQuoteEntries value = new QuickFix.TotQuoteEntries();
        getField(value); return value; }
      public bool isSet(QuickFix.TotQuoteEntries field)
      { return isSetField(field); }
      public bool isSetTotQuoteEntries()
      { return isSetField(304); }

      public void set(QuickFix.NoQuoteEntries value)
      { setField(value); }
      public QuickFix.NoQuoteEntries get(QuickFix.NoQuoteEntries  value)
      { getField(value); return value; }
      public QuickFix.NoQuoteEntries getNoQuoteEntries()
      { QuickFix.NoQuoteEntries value = new QuickFix.NoQuoteEntries();
        getField(value); return value; }
      public bool isSet(QuickFix.NoQuoteEntries field)
      { return isSetField(field); }
      public bool isSetNoQuoteEntries()
      { return isSetField(295); }

      public class NoQuoteEntries: QuickFix.Group
      {
      public NoQuoteEntries() : base(295,299,message_order ) {}
      static int[] message_order = new int[] {299,55,65,48,22,454,460,461,167,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,206,231,223,207,106,348,349,107,350,351,132,133,134,135,62,188,190,189,191,631,632,633,634,60,336,625,64,40,193,192,642,643,15,368,0};
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

        public void set(QuickFix.QuoteEntryRejectReason value)
        { setField(value); }
        public QuickFix.QuoteEntryRejectReason get(QuickFix.QuoteEntryRejectReason  value)
        { getField(value); return value; }
        public QuickFix.QuoteEntryRejectReason getQuoteEntryRejectReason()
        { QuickFix.QuoteEntryRejectReason value = new QuickFix.QuoteEntryRejectReason();
          getField(value); return value; }
        public bool isSet(QuickFix.QuoteEntryRejectReason field)
        { return isSetField(field); }
        public bool isSetQuoteEntryRejectReason()
        { return isSetField(368); }

      };
    };
  };

}

