package org.quickfix.fix44;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class DerivativeSecurityList extends Message
{
  public DerivativeSecurityList()
  {
    getHeader().setField(new MsgType("AA"));
  }
  public DerivativeSecurityList(
    org.quickfix.field.SecurityReqID aSecurityReqID,
    org.quickfix.field.SecurityResponseID aSecurityResponseID,
    org.quickfix.field.SecurityRequestResult aSecurityRequestResult ) {

    getHeader().setField(new MsgType("AA"));
    set(aSecurityReqID);
    set(aSecurityResponseID);
    set(aSecurityRequestResult);
  }

  public void set(org.quickfix.field.SecurityReqID value)
  { setField(value); }
  public org.quickfix.field.SecurityReqID get(org.quickfix.field.SecurityReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityReqID getSecurityReqID() throws FieldNotFound
  { org.quickfix.field.SecurityReqID value = new org.quickfix.field.SecurityReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityReqID field)
  { return isSetField(field); }
  public boolean isSetSecurityReqID()
  { return isSetField(320); }
  public void set(org.quickfix.field.SecurityResponseID value)
  { setField(value); }
  public org.quickfix.field.SecurityResponseID get(org.quickfix.field.SecurityResponseID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityResponseID getSecurityResponseID() throws FieldNotFound
  { org.quickfix.field.SecurityResponseID value = new org.quickfix.field.SecurityResponseID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityResponseID field)
  { return isSetField(field); }
  public boolean isSetSecurityResponseID()
  { return isSetField(322); }
  public void set(org.quickfix.field.SecurityRequestResult value)
  { setField(value); }
  public org.quickfix.field.SecurityRequestResult get(org.quickfix.field.SecurityRequestResult  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityRequestResult getSecurityRequestResult() throws FieldNotFound
  { org.quickfix.field.SecurityRequestResult value = new org.quickfix.field.SecurityRequestResult();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityRequestResult field)
  { return isSetField(field); }
  public boolean isSetSecurityRequestResult()
  { return isSetField(560); }
  public void set(org.quickfix.field.UnderlyingSymbol value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound
  { org.quickfix.field.UnderlyingSymbol value = new org.quickfix.field.UnderlyingSymbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSymbol field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbol()
  { return isSetField(311); }
  public void set(org.quickfix.field.UnderlyingSymbolSfx value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound
  { org.quickfix.field.UnderlyingSymbolSfx value = new org.quickfix.field.UnderlyingSymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbolSfx()
  { return isSetField(312); }
  public void set(org.quickfix.field.UnderlyingSecurityID value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityID value = new org.quickfix.field.UnderlyingSecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityID()
  { return isSetField(309); }
  public void set(org.quickfix.field.UnderlyingSecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityIDSource get(org.quickfix.field.UnderlyingSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityIDSource value = new org.quickfix.field.UnderlyingSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityIDSource()
  { return isSetField(305); }
  public void set(org.quickfix.field.UnderlyingProduct value)
  { setField(value); }
  public org.quickfix.field.UnderlyingProduct get(org.quickfix.field.UnderlyingProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound
  { org.quickfix.field.UnderlyingProduct value = new org.quickfix.field.UnderlyingProduct();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingProduct field)
  { return isSetField(field); }
  public boolean isSetUnderlyingProduct()
  { return isSetField(462); }
  public void set(org.quickfix.field.UnderlyingCFICode value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCFICode get(org.quickfix.field.UnderlyingCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound
  { org.quickfix.field.UnderlyingCFICode value = new org.quickfix.field.UnderlyingCFICode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCFICode field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCFICode()
  { return isSetField(463); }
  public void set(org.quickfix.field.UnderlyingSecurityType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityType value = new org.quickfix.field.UnderlyingSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityType()
  { return isSetField(310); }
  public void set(org.quickfix.field.UnderlyingSecuritySubType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecuritySubType get(org.quickfix.field.UnderlyingSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecuritySubType getUnderlyingSecuritySubType() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecuritySubType value = new org.quickfix.field.UnderlyingSecuritySubType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecuritySubType()
  { return isSetField(763); }
  public void set(org.quickfix.field.UnderlyingMaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.UnderlyingMaturityMonthYear value = new org.quickfix.field.UnderlyingMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityMonthYear()
  { return isSetField(313); }
  public void set(org.quickfix.field.UnderlyingMaturityDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingMaturityDate get(org.quickfix.field.UnderlyingMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingMaturityDate value = new org.quickfix.field.UnderlyingMaturityDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingMaturityDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityDate()
  { return isSetField(542); }
  public void set(org.quickfix.field.UnderlyingCouponPaymentDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCouponPaymentDate get(org.quickfix.field.UnderlyingCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingCouponPaymentDate value = new org.quickfix.field.UnderlyingCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponPaymentDate()
  { return isSetField(241); }
  public void set(org.quickfix.field.UnderlyingIssueDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingIssueDate get(org.quickfix.field.UnderlyingIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingIssueDate value = new org.quickfix.field.UnderlyingIssueDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingIssueDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssueDate()
  { return isSetField(242); }
  public void set(org.quickfix.field.UnderlyingRepoCollateralSecurityType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType get(org.quickfix.field.UnderlyingRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepoCollateralSecurityType value = new org.quickfix.field.UnderlyingRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepoCollateralSecurityType()
  { return isSetField(243); }
  public void set(org.quickfix.field.UnderlyingRepurchaseTerm value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepurchaseTerm get(org.quickfix.field.UnderlyingRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepurchaseTerm value = new org.quickfix.field.UnderlyingRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseTerm()
  { return isSetField(244); }
  public void set(org.quickfix.field.UnderlyingRepurchaseRate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepurchaseRate get(org.quickfix.field.UnderlyingRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepurchaseRate value = new org.quickfix.field.UnderlyingRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseRate()
  { return isSetField(245); }
  public void set(org.quickfix.field.UnderlyingFactor value)
  { setField(value); }
  public org.quickfix.field.UnderlyingFactor get(org.quickfix.field.UnderlyingFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound
  { org.quickfix.field.UnderlyingFactor value = new org.quickfix.field.UnderlyingFactor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingFactor field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFactor()
  { return isSetField(246); }
  public void set(org.quickfix.field.UnderlyingCreditRating value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCreditRating get(org.quickfix.field.UnderlyingCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound
  { org.quickfix.field.UnderlyingCreditRating value = new org.quickfix.field.UnderlyingCreditRating();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCreditRating field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCreditRating()
  { return isSetField(256); }
  public void set(org.quickfix.field.UnderlyingInstrRegistry value)
  { setField(value); }
  public org.quickfix.field.UnderlyingInstrRegistry get(org.quickfix.field.UnderlyingInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound
  { org.quickfix.field.UnderlyingInstrRegistry value = new org.quickfix.field.UnderlyingInstrRegistry();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetUnderlyingInstrRegistry()
  { return isSetField(595); }
  public void set(org.quickfix.field.UnderlyingCountryOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCountryOfIssue get(org.quickfix.field.UnderlyingCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingCountryOfIssue value = new org.quickfix.field.UnderlyingCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCountryOfIssue()
  { return isSetField(592); }
  public void set(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue get(org.quickfix.field.UnderlyingStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingStateOrProvinceOfIssue value = new org.quickfix.field.UnderlyingStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStateOrProvinceOfIssue()
  { return isSetField(593); }
  public void set(org.quickfix.field.UnderlyingLocaleOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingLocaleOfIssue get(org.quickfix.field.UnderlyingLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingLocaleOfIssue value = new org.quickfix.field.UnderlyingLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLocaleOfIssue()
  { return isSetField(594); }
  public void set(org.quickfix.field.UnderlyingRedemptionDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRedemptionDate get(org.quickfix.field.UnderlyingRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingRedemptionDate value = new org.quickfix.field.UnderlyingRedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRedemptionDate()
  { return isSetField(247); }
  public void set(org.quickfix.field.UnderlyingStrikePrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingStrikePrice value = new org.quickfix.field.UnderlyingStrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStrikePrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikePrice()
  { return isSetField(316); }
  public void set(org.quickfix.field.UnderlyingStrikeCurrency value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStrikeCurrency get(org.quickfix.field.UnderlyingStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency() throws FieldNotFound
  { org.quickfix.field.UnderlyingStrikeCurrency value = new org.quickfix.field.UnderlyingStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikeCurrency()
  { return isSetField(941); }
  public void set(org.quickfix.field.UnderlyingOptAttribute value)
  { setField(value); }
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound
  { org.quickfix.field.UnderlyingOptAttribute value = new org.quickfix.field.UnderlyingOptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingOptAttribute field)
  { return isSetField(field); }
  public boolean isSetUnderlyingOptAttribute()
  { return isSetField(317); }
  public void set(org.quickfix.field.UnderlyingContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound
  { org.quickfix.field.UnderlyingContractMultiplier value = new org.quickfix.field.UnderlyingContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetUnderlyingContractMultiplier()
  { return isSetField(436); }
  public void set(org.quickfix.field.UnderlyingCouponRate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound
  { org.quickfix.field.UnderlyingCouponRate value = new org.quickfix.field.UnderlyingCouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCouponRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponRate()
  { return isSetField(435); }
  public void set(org.quickfix.field.UnderlyingSecurityExchange value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityExchange value = new org.quickfix.field.UnderlyingSecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityExchange()
  { return isSetField(308); }
  public void set(org.quickfix.field.UnderlyingIssuer value)
  { setField(value); }
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound
  { org.quickfix.field.UnderlyingIssuer value = new org.quickfix.field.UnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssuer()
  { return isSetField(306); }
  public void set(org.quickfix.field.EncodedUnderlyingIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingIssuerLen value = new org.quickfix.field.EncodedUnderlyingIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuerLen()
  { return isSetField(362); }
  public void set(org.quickfix.field.EncodedUnderlyingIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingIssuer value = new org.quickfix.field.EncodedUnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuer()
  { return isSetField(363); }
  public void set(org.quickfix.field.UnderlyingSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityDesc value = new org.quickfix.field.UnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityDesc()
  { return isSetField(307); }
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingSecurityDescLen value = new org.quickfix.field.EncodedUnderlyingSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDescLen()
  { return isSetField(364); }
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingSecurityDesc value = new org.quickfix.field.EncodedUnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDesc()
  { return isSetField(365); }
  public void set(org.quickfix.field.UnderlyingCPProgram value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCPProgram get(org.quickfix.field.UnderlyingCPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCPProgram getUnderlyingCPProgram() throws FieldNotFound
  { org.quickfix.field.UnderlyingCPProgram value = new org.quickfix.field.UnderlyingCPProgram();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCPProgram field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPProgram()
  { return isSetField(877); }
  public void set(org.quickfix.field.UnderlyingCPRegType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCPRegType get(org.quickfix.field.UnderlyingCPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCPRegType getUnderlyingCPRegType() throws FieldNotFound
  { org.quickfix.field.UnderlyingCPRegType value = new org.quickfix.field.UnderlyingCPRegType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCPRegType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPRegType()
  { return isSetField(878); }
  public void set(org.quickfix.field.UnderlyingCurrency value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCurrency get(org.quickfix.field.UnderlyingCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCurrency getUnderlyingCurrency() throws FieldNotFound
  { org.quickfix.field.UnderlyingCurrency value = new org.quickfix.field.UnderlyingCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrency()
  { return isSetField(318); }
  public void set(org.quickfix.field.UnderlyingQty value)
  { setField(value); }
  public org.quickfix.field.UnderlyingQty get(org.quickfix.field.UnderlyingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingQty getUnderlyingQty() throws FieldNotFound
  { org.quickfix.field.UnderlyingQty value = new org.quickfix.field.UnderlyingQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingQty()
  { return isSetField(879); }
  public void set(org.quickfix.field.UnderlyingPx value)
  { setField(value); }
  public org.quickfix.field.UnderlyingPx get(org.quickfix.field.UnderlyingPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingPx getUnderlyingPx() throws FieldNotFound
  { org.quickfix.field.UnderlyingPx value = new org.quickfix.field.UnderlyingPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingPx()
  { return isSetField(810); }
  public void set(org.quickfix.field.UnderlyingDirtyPrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingDirtyPrice get(org.quickfix.field.UnderlyingDirtyPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingDirtyPrice getUnderlyingDirtyPrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingDirtyPrice value = new org.quickfix.field.UnderlyingDirtyPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingDirtyPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingDirtyPrice()
  { return isSetField(882); }
  public void set(org.quickfix.field.UnderlyingEndPrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingEndPrice get(org.quickfix.field.UnderlyingEndPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingEndPrice getUnderlyingEndPrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingEndPrice value = new org.quickfix.field.UnderlyingEndPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingEndPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndPrice()
  { return isSetField(883); }
  public void set(org.quickfix.field.UnderlyingStartValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStartValue get(org.quickfix.field.UnderlyingStartValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStartValue getUnderlyingStartValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingStartValue value = new org.quickfix.field.UnderlyingStartValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStartValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStartValue()
  { return isSetField(884); }
  public void set(org.quickfix.field.UnderlyingCurrentValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCurrentValue get(org.quickfix.field.UnderlyingCurrentValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCurrentValue getUnderlyingCurrentValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingCurrentValue value = new org.quickfix.field.UnderlyingCurrentValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCurrentValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrentValue()
  { return isSetField(885); }
  public void set(org.quickfix.field.UnderlyingEndValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingEndValue get(org.quickfix.field.UnderlyingEndValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingEndValue getUnderlyingEndValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingEndValue value = new org.quickfix.field.UnderlyingEndValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingEndValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndValue()
  { return isSetField(886); }
  public void set(org.quickfix.field.NoUnderlyingSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoUnderlyingSecurityAltID get(org.quickfix.field.NoUnderlyingSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID() throws FieldNotFound
  { org.quickfix.field.NoUnderlyingSecurityAltID value = new org.quickfix.field.NoUnderlyingSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoUnderlyingSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyingSecurityAltID()
  { return isSetField(457); }
  public static class NoUnderlyingSecurityAltID extends Group {
    public NoUnderlyingSecurityAltID() {
      super(457,458,
      new int[] {458,459,0 } ); }
  public void set(org.quickfix.field.UnderlyingSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityAltID get(org.quickfix.field.UnderlyingSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityAltID getUnderlyingSecurityAltID() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityAltID value = new org.quickfix.field.UnderlyingSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityAltID()
  { return isSetField(458); }
  public void set(org.quickfix.field.UnderlyingSecurityAltIDSource value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityAltIDSource get(org.quickfix.field.UnderlyingSecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityAltIDSource value = new org.quickfix.field.UnderlyingSecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityAltIDSource()
  { return isSetField(459); }
}
  public void set(org.quickfix.field.TotNoRelatedSym value)
  { setField(value); }
  public org.quickfix.field.TotNoRelatedSym get(org.quickfix.field.TotNoRelatedSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotNoRelatedSym getTotNoRelatedSym() throws FieldNotFound
  { org.quickfix.field.TotNoRelatedSym value = new org.quickfix.field.TotNoRelatedSym();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotNoRelatedSym field)
  { return isSetField(field); }
  public boolean isSetTotNoRelatedSym()
  { return isSetField(393); }
  public void set(org.quickfix.field.LastFragment value)
  { setField(value); }
  public org.quickfix.field.LastFragment get(org.quickfix.field.LastFragment  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastFragment getLastFragment() throws FieldNotFound
  { org.quickfix.field.LastFragment value = new org.quickfix.field.LastFragment();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastFragment field)
  { return isSetField(field); }
  public boolean isSetLastFragment()
  { return isSetField(893); }
  public void set(org.quickfix.field.NoRelatedSym value)
  { setField(value); }
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoRelatedSym field)
  { return isSetField(field); }
  public boolean isSetNoRelatedSym()
  { return isSetField(146); }
  public static class NoRelatedSym extends Group {
    public NoRelatedSym() {
      super(146,55,
      new int[] {55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,15,827,668,869,336,625,58,354,355,0 } ); }
  public void set(org.quickfix.field.Symbol value)
  { setField(value); }
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(org.quickfix.field.SymbolSfx value)
  { setField(value); }
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(org.quickfix.field.SecurityID value)
  { setField(value); }
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(org.quickfix.field.SecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.SecurityIDSource value = new org.quickfix.field.SecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityIDSource()
  { return isSetField(22); }
  public void set(org.quickfix.field.Product value)
  { setField(value); }
  public org.quickfix.field.Product get(org.quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Product getProduct() throws FieldNotFound
  { org.quickfix.field.Product value = new org.quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(org.quickfix.field.CFICode value)
  { setField(value); }
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
  public void set(org.quickfix.field.SecurityType value)
  { setField(value); }
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(org.quickfix.field.SecuritySubType value)
  { setField(value); }
  public org.quickfix.field.SecuritySubType get(org.quickfix.field.SecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecuritySubType getSecuritySubType() throws FieldNotFound
  { org.quickfix.field.SecuritySubType value = new org.quickfix.field.SecuritySubType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecuritySubType field)
  { return isSetField(field); }
  public boolean isSetSecuritySubType()
  { return isSetField(762); }
  public void set(org.quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(org.quickfix.field.MaturityDate value)
  { setField(value); }
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound
  { org.quickfix.field.MaturityDate value = new org.quickfix.field.MaturityDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityDate field)
  { return isSetField(field); }
  public boolean isSetMaturityDate()
  { return isSetField(541); }
  public void set(org.quickfix.field.CouponPaymentDate value)
  { setField(value); }
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound
  { org.quickfix.field.CouponPaymentDate value = new org.quickfix.field.CouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetCouponPaymentDate()
  { return isSetField(224); }
  public void set(org.quickfix.field.IssueDate value)
  { setField(value); }
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IssueDate getIssueDate() throws FieldNotFound
  { org.quickfix.field.IssueDate value = new org.quickfix.field.IssueDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IssueDate field)
  { return isSetField(field); }
  public boolean isSetIssueDate()
  { return isSetField(225); }
  public void set(org.quickfix.field.RepoCollateralSecurityType value)
  { setField(value); }
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound
  { org.quickfix.field.RepoCollateralSecurityType value = new org.quickfix.field.RepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetRepoCollateralSecurityType()
  { return isSetField(239); }
  public void set(org.quickfix.field.RepurchaseTerm value)
  { setField(value); }
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound
  { org.quickfix.field.RepurchaseTerm value = new org.quickfix.field.RepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetRepurchaseTerm()
  { return isSetField(226); }
  public void set(org.quickfix.field.RepurchaseRate value)
  { setField(value); }
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound
  { org.quickfix.field.RepurchaseRate value = new org.quickfix.field.RepurchaseRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetRepurchaseRate()
  { return isSetField(227); }
  public void set(org.quickfix.field.Factor value)
  { setField(value); }
  public org.quickfix.field.Factor get(org.quickfix.field.Factor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Factor getFactor() throws FieldNotFound
  { org.quickfix.field.Factor value = new org.quickfix.field.Factor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Factor field)
  { return isSetField(field); }
  public boolean isSetFactor()
  { return isSetField(228); }
  public void set(org.quickfix.field.CreditRating value)
  { setField(value); }
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CreditRating getCreditRating() throws FieldNotFound
  { org.quickfix.field.CreditRating value = new org.quickfix.field.CreditRating();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CreditRating field)
  { return isSetField(field); }
  public boolean isSetCreditRating()
  { return isSetField(255); }
  public void set(org.quickfix.field.InstrRegistry value)
  { setField(value); }
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound
  { org.quickfix.field.InstrRegistry value = new org.quickfix.field.InstrRegistry();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrRegistry field)
  { return isSetField(field); }
  public boolean isSetInstrRegistry()
  { return isSetField(543); }
  public void set(org.quickfix.field.CountryOfIssue value)
  { setField(value); }
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound
  { org.quickfix.field.CountryOfIssue value = new org.quickfix.field.CountryOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetCountryOfIssue()
  { return isSetField(470); }
  public void set(org.quickfix.field.StateOrProvinceOfIssue value)
  { setField(value); }
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound
  { org.quickfix.field.StateOrProvinceOfIssue value = new org.quickfix.field.StateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetStateOrProvinceOfIssue()
  { return isSetField(471); }
  public void set(org.quickfix.field.LocaleOfIssue value)
  { setField(value); }
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound
  { org.quickfix.field.LocaleOfIssue value = new org.quickfix.field.LocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLocaleOfIssue()
  { return isSetField(472); }
  public void set(org.quickfix.field.RedemptionDate value)
  { setField(value); }
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound
  { org.quickfix.field.RedemptionDate value = new org.quickfix.field.RedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RedemptionDate field)
  { return isSetField(field); }
  public boolean isSetRedemptionDate()
  { return isSetField(240); }
  public void set(org.quickfix.field.StrikePrice value)
  { setField(value); }
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(org.quickfix.field.StrikeCurrency value)
  { setField(value); }
  public org.quickfix.field.StrikeCurrency get(org.quickfix.field.StrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StrikeCurrency getStrikeCurrency() throws FieldNotFound
  { org.quickfix.field.StrikeCurrency value = new org.quickfix.field.StrikeCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetStrikeCurrency()
  { return isSetField(947); }
  public void set(org.quickfix.field.OptAttribute value)
  { setField(value); }
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(org.quickfix.field.ContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(org.quickfix.field.CouponRate value)
  { setField(value); }
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(org.quickfix.field.SecurityExchange value)
  { setField(value); }
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(org.quickfix.field.Issuer value)
  { setField(value); }
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(org.quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(org.quickfix.field.EncodedIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(org.quickfix.field.SecurityDesc value)
  { setField(value); }
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(org.quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(org.quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(org.quickfix.field.Pool value)
  { setField(value); }
  public org.quickfix.field.Pool get(org.quickfix.field.Pool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Pool getPool() throws FieldNotFound
  { org.quickfix.field.Pool value = new org.quickfix.field.Pool();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Pool field)
  { return isSetField(field); }
  public boolean isSetPool()
  { return isSetField(691); }
  public void set(org.quickfix.field.ContractSettlMonth value)
  { setField(value); }
  public org.quickfix.field.ContractSettlMonth get(org.quickfix.field.ContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContractSettlMonth getContractSettlMonth() throws FieldNotFound
  { org.quickfix.field.ContractSettlMonth value = new org.quickfix.field.ContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetContractSettlMonth()
  { return isSetField(667); }
  public void set(org.quickfix.field.CPProgram value)
  { setField(value); }
  public org.quickfix.field.CPProgram get(org.quickfix.field.CPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CPProgram getCPProgram() throws FieldNotFound
  { org.quickfix.field.CPProgram value = new org.quickfix.field.CPProgram();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CPProgram field)
  { return isSetField(field); }
  public boolean isSetCPProgram()
  { return isSetField(875); }
  public void set(org.quickfix.field.CPRegType value)
  { setField(value); }
  public org.quickfix.field.CPRegType get(org.quickfix.field.CPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CPRegType getCPRegType() throws FieldNotFound
  { org.quickfix.field.CPRegType value = new org.quickfix.field.CPRegType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CPRegType field)
  { return isSetField(field); }
  public boolean isSetCPRegType()
  { return isSetField(876); }
  public void set(org.quickfix.field.DatedDate value)
  { setField(value); }
  public org.quickfix.field.DatedDate get(org.quickfix.field.DatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DatedDate getDatedDate() throws FieldNotFound
  { org.quickfix.field.DatedDate value = new org.quickfix.field.DatedDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DatedDate field)
  { return isSetField(field); }
  public boolean isSetDatedDate()
  { return isSetField(873); }
  public void set(org.quickfix.field.InterestAccrualDate value)
  { setField(value); }
  public org.quickfix.field.InterestAccrualDate get(org.quickfix.field.InterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InterestAccrualDate getInterestAccrualDate() throws FieldNotFound
  { org.quickfix.field.InterestAccrualDate value = new org.quickfix.field.InterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetInterestAccrualDate()
  { return isSetField(874); }
  public void set(org.quickfix.field.NoSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound
  { org.quickfix.field.NoSecurityAltID value = new org.quickfix.field.NoSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoSecurityAltID()
  { return isSetField(454); }
  public static class NoSecurityAltID extends Group {
    public NoSecurityAltID() {
      super(454,455,
      new int[] {455,456,0 } ); }
  public void set(org.quickfix.field.SecurityAltID value)
  { setField(value); }
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound
  { org.quickfix.field.SecurityAltID value = new org.quickfix.field.SecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityAltID field)
  { return isSetField(field); }
  public boolean isSetSecurityAltID()
  { return isSetField(455); }
  public void set(org.quickfix.field.SecurityAltIDSource value)
  { setField(value); }
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityAltIDSource()
  { return isSetField(456); }
}
  public void set(org.quickfix.field.NoEvents value)
  { setField(value); }
  public org.quickfix.field.NoEvents get(org.quickfix.field.NoEvents  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoEvents getNoEvents() throws FieldNotFound
  { org.quickfix.field.NoEvents value = new org.quickfix.field.NoEvents();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoEvents field)
  { return isSetField(field); }
  public boolean isSetNoEvents()
  { return isSetField(864); }
  public static class NoEvents extends Group {
    public NoEvents() {
      super(864,865,
      new int[] {865,866,867,868,0 } ); }
  public void set(org.quickfix.field.EventType value)
  { setField(value); }
  public org.quickfix.field.EventType get(org.quickfix.field.EventType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EventType getEventType() throws FieldNotFound
  { org.quickfix.field.EventType value = new org.quickfix.field.EventType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EventType field)
  { return isSetField(field); }
  public boolean isSetEventType()
  { return isSetField(865); }
  public void set(org.quickfix.field.EventDate value)
  { setField(value); }
  public org.quickfix.field.EventDate get(org.quickfix.field.EventDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EventDate getEventDate() throws FieldNotFound
  { org.quickfix.field.EventDate value = new org.quickfix.field.EventDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EventDate field)
  { return isSetField(field); }
  public boolean isSetEventDate()
  { return isSetField(866); }
  public void set(org.quickfix.field.EventPx value)
  { setField(value); }
  public org.quickfix.field.EventPx get(org.quickfix.field.EventPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EventPx getEventPx() throws FieldNotFound
  { org.quickfix.field.EventPx value = new org.quickfix.field.EventPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EventPx field)
  { return isSetField(field); }
  public boolean isSetEventPx()
  { return isSetField(867); }
  public void set(org.quickfix.field.EventText value)
  { setField(value); }
  public org.quickfix.field.EventText get(org.quickfix.field.EventText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EventText getEventText() throws FieldNotFound
  { org.quickfix.field.EventText value = new org.quickfix.field.EventText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EventText field)
  { return isSetField(field); }
  public boolean isSetEventText()
  { return isSetField(868); }
}
  public void set(org.quickfix.field.Currency value)
  { setField(value); }
  public org.quickfix.field.Currency get(org.quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(org.quickfix.field.ExpirationCycle value)
  { setField(value); }
  public org.quickfix.field.ExpirationCycle get(org.quickfix.field.ExpirationCycle  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExpirationCycle getExpirationCycle() throws FieldNotFound
  { org.quickfix.field.ExpirationCycle value = new org.quickfix.field.ExpirationCycle();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExpirationCycle field)
  { return isSetField(field); }
  public boolean isSetExpirationCycle()
  { return isSetField(827); }
  public void set(org.quickfix.field.DeliveryForm value)
  { setField(value); }
  public org.quickfix.field.DeliveryForm get(org.quickfix.field.DeliveryForm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DeliveryForm getDeliveryForm() throws FieldNotFound
  { org.quickfix.field.DeliveryForm value = new org.quickfix.field.DeliveryForm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DeliveryForm field)
  { return isSetField(field); }
  public boolean isSetDeliveryForm()
  { return isSetField(668); }
  public void set(org.quickfix.field.PctAtRisk value)
  { setField(value); }
  public org.quickfix.field.PctAtRisk get(org.quickfix.field.PctAtRisk  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PctAtRisk getPctAtRisk() throws FieldNotFound
  { org.quickfix.field.PctAtRisk value = new org.quickfix.field.PctAtRisk();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PctAtRisk field)
  { return isSetField(field); }
  public boolean isSetPctAtRisk()
  { return isSetField(869); }
  public void set(org.quickfix.field.NoInstrAttrib value)
  { setField(value); }
  public org.quickfix.field.NoInstrAttrib get(org.quickfix.field.NoInstrAttrib  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoInstrAttrib getNoInstrAttrib() throws FieldNotFound
  { org.quickfix.field.NoInstrAttrib value = new org.quickfix.field.NoInstrAttrib();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoInstrAttrib field)
  { return isSetField(field); }
  public boolean isSetNoInstrAttrib()
  { return isSetField(870); }
  public static class NoInstrAttrib extends Group {
    public NoInstrAttrib() {
      super(870,871,
      new int[] {871,872,0 } ); }
  public void set(org.quickfix.field.InstrAttribType value)
  { setField(value); }
  public org.quickfix.field.InstrAttribType get(org.quickfix.field.InstrAttribType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrAttribType getInstrAttribType() throws FieldNotFound
  { org.quickfix.field.InstrAttribType value = new org.quickfix.field.InstrAttribType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrAttribType field)
  { return isSetField(field); }
  public boolean isSetInstrAttribType()
  { return isSetField(871); }
  public void set(org.quickfix.field.InstrAttribValue value)
  { setField(value); }
  public org.quickfix.field.InstrAttribValue get(org.quickfix.field.InstrAttribValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrAttribValue getInstrAttribValue() throws FieldNotFound
  { org.quickfix.field.InstrAttribValue value = new org.quickfix.field.InstrAttribValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrAttribValue field)
  { return isSetField(field); }
  public boolean isSetInstrAttribValue()
  { return isSetField(872); }
}
  public void set(org.quickfix.field.TradingSessionID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(org.quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Text getText() throws FieldNotFound
  { org.quickfix.field.Text value = new org.quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(org.quickfix.field.EncodedTextLen value)
  { setField(value); }
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(org.quickfix.field.EncodedText value)
  { setField(value); }
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(org.quickfix.field.NoLegs value)
  { setField(value); }
  public org.quickfix.field.NoLegs get(org.quickfix.field.NoLegs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoLegs getNoLegs() throws FieldNotFound
  { org.quickfix.field.NoLegs value = new org.quickfix.field.NoLegs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoLegs field)
  { return isSetField(field); }
  public boolean isSetNoLegs()
  { return isSetField(555); }
  public static class NoLegs extends Group {
    public NoLegs() {
      super(555,600,
      new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,0 } ); }
  public void set(org.quickfix.field.LegSymbol value)
  { setField(value); }
  public org.quickfix.field.LegSymbol get(org.quickfix.field.LegSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound
  { org.quickfix.field.LegSymbol value = new org.quickfix.field.LegSymbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSymbol field)
  { return isSetField(field); }
  public boolean isSetLegSymbol()
  { return isSetField(600); }
  public void set(org.quickfix.field.LegSymbolSfx value)
  { setField(value); }
  public org.quickfix.field.LegSymbolSfx get(org.quickfix.field.LegSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound
  { org.quickfix.field.LegSymbolSfx value = new org.quickfix.field.LegSymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetLegSymbolSfx()
  { return isSetField(601); }
  public void set(org.quickfix.field.LegSecurityID value)
  { setField(value); }
  public org.quickfix.field.LegSecurityID get(org.quickfix.field.LegSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound
  { org.quickfix.field.LegSecurityID value = new org.quickfix.field.LegSecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityID()
  { return isSetField(602); }
  public void set(org.quickfix.field.LegSecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.LegSecurityIDSource get(org.quickfix.field.LegSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.LegSecurityIDSource value = new org.quickfix.field.LegSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityIDSource()
  { return isSetField(603); }
  public void set(org.quickfix.field.LegProduct value)
  { setField(value); }
  public org.quickfix.field.LegProduct get(org.quickfix.field.LegProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegProduct getLegProduct() throws FieldNotFound
  { org.quickfix.field.LegProduct value = new org.quickfix.field.LegProduct();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegProduct field)
  { return isSetField(field); }
  public boolean isSetLegProduct()
  { return isSetField(607); }
  public void set(org.quickfix.field.LegCFICode value)
  { setField(value); }
  public org.quickfix.field.LegCFICode get(org.quickfix.field.LegCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound
  { org.quickfix.field.LegCFICode value = new org.quickfix.field.LegCFICode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCFICode field)
  { return isSetField(field); }
  public boolean isSetLegCFICode()
  { return isSetField(608); }
  public void set(org.quickfix.field.LegSecurityType value)
  { setField(value); }
  public org.quickfix.field.LegSecurityType get(org.quickfix.field.LegSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound
  { org.quickfix.field.LegSecurityType value = new org.quickfix.field.LegSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegSecurityType()
  { return isSetField(609); }
  public void set(org.quickfix.field.LegSecuritySubType value)
  { setField(value); }
  public org.quickfix.field.LegSecuritySubType get(org.quickfix.field.LegSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecuritySubType getLegSecuritySubType() throws FieldNotFound
  { org.quickfix.field.LegSecuritySubType value = new org.quickfix.field.LegSecuritySubType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetLegSecuritySubType()
  { return isSetField(764); }
  public void set(org.quickfix.field.LegMaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.LegMaturityMonthYear get(org.quickfix.field.LegMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.LegMaturityMonthYear value = new org.quickfix.field.LegMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetLegMaturityMonthYear()
  { return isSetField(610); }
  public void set(org.quickfix.field.LegMaturityDate value)
  { setField(value); }
  public org.quickfix.field.LegMaturityDate get(org.quickfix.field.LegMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound
  { org.quickfix.field.LegMaturityDate value = new org.quickfix.field.LegMaturityDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegMaturityDate field)
  { return isSetField(field); }
  public boolean isSetLegMaturityDate()
  { return isSetField(611); }
  public void set(org.quickfix.field.LegCouponPaymentDate value)
  { setField(value); }
  public org.quickfix.field.LegCouponPaymentDate get(org.quickfix.field.LegCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound
  { org.quickfix.field.LegCouponPaymentDate value = new org.quickfix.field.LegCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetLegCouponPaymentDate()
  { return isSetField(248); }
  public void set(org.quickfix.field.LegIssueDate value)
  { setField(value); }
  public org.quickfix.field.LegIssueDate get(org.quickfix.field.LegIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound
  { org.quickfix.field.LegIssueDate value = new org.quickfix.field.LegIssueDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegIssueDate field)
  { return isSetField(field); }
  public boolean isSetLegIssueDate()
  { return isSetField(249); }
  public void set(org.quickfix.field.LegRepoCollateralSecurityType value)
  { setField(value); }
  public org.quickfix.field.LegRepoCollateralSecurityType get(org.quickfix.field.LegRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound
  { org.quickfix.field.LegRepoCollateralSecurityType value = new org.quickfix.field.LegRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegRepoCollateralSecurityType()
  { return isSetField(250); }
  public void set(org.quickfix.field.LegRepurchaseTerm value)
  { setField(value); }
  public org.quickfix.field.LegRepurchaseTerm get(org.quickfix.field.LegRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound
  { org.quickfix.field.LegRepurchaseTerm value = new org.quickfix.field.LegRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseTerm()
  { return isSetField(251); }
  public void set(org.quickfix.field.LegRepurchaseRate value)
  { setField(value); }
  public org.quickfix.field.LegRepurchaseRate get(org.quickfix.field.LegRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound
  { org.quickfix.field.LegRepurchaseRate value = new org.quickfix.field.LegRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseRate()
  { return isSetField(252); }
  public void set(org.quickfix.field.LegFactor value)
  { setField(value); }
  public org.quickfix.field.LegFactor get(org.quickfix.field.LegFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegFactor getLegFactor() throws FieldNotFound
  { org.quickfix.field.LegFactor value = new org.quickfix.field.LegFactor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegFactor field)
  { return isSetField(field); }
  public boolean isSetLegFactor()
  { return isSetField(253); }
  public void set(org.quickfix.field.LegCreditRating value)
  { setField(value); }
  public org.quickfix.field.LegCreditRating get(org.quickfix.field.LegCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound
  { org.quickfix.field.LegCreditRating value = new org.quickfix.field.LegCreditRating();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCreditRating field)
  { return isSetField(field); }
  public boolean isSetLegCreditRating()
  { return isSetField(257); }
  public void set(org.quickfix.field.LegInstrRegistry value)
  { setField(value); }
  public org.quickfix.field.LegInstrRegistry get(org.quickfix.field.LegInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound
  { org.quickfix.field.LegInstrRegistry value = new org.quickfix.field.LegInstrRegistry();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetLegInstrRegistry()
  { return isSetField(599); }
  public void set(org.quickfix.field.LegCountryOfIssue value)
  { setField(value); }
  public org.quickfix.field.LegCountryOfIssue get(org.quickfix.field.LegCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound
  { org.quickfix.field.LegCountryOfIssue value = new org.quickfix.field.LegCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegCountryOfIssue()
  { return isSetField(596); }
  public void set(org.quickfix.field.LegStateOrProvinceOfIssue value)
  { setField(value); }
  public org.quickfix.field.LegStateOrProvinceOfIssue get(org.quickfix.field.LegStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound
  { org.quickfix.field.LegStateOrProvinceOfIssue value = new org.quickfix.field.LegStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegStateOrProvinceOfIssue()
  { return isSetField(597); }
  public void set(org.quickfix.field.LegLocaleOfIssue value)
  { setField(value); }
  public org.quickfix.field.LegLocaleOfIssue get(org.quickfix.field.LegLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound
  { org.quickfix.field.LegLocaleOfIssue value = new org.quickfix.field.LegLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegLocaleOfIssue()
  { return isSetField(598); }
  public void set(org.quickfix.field.LegRedemptionDate value)
  { setField(value); }
  public org.quickfix.field.LegRedemptionDate get(org.quickfix.field.LegRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound
  { org.quickfix.field.LegRedemptionDate value = new org.quickfix.field.LegRedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetLegRedemptionDate()
  { return isSetField(254); }
  public void set(org.quickfix.field.LegStrikePrice value)
  { setField(value); }
  public org.quickfix.field.LegStrikePrice get(org.quickfix.field.LegStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound
  { org.quickfix.field.LegStrikePrice value = new org.quickfix.field.LegStrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegStrikePrice field)
  { return isSetField(field); }
  public boolean isSetLegStrikePrice()
  { return isSetField(612); }
  public void set(org.quickfix.field.LegStrikeCurrency value)
  { setField(value); }
  public org.quickfix.field.LegStrikeCurrency get(org.quickfix.field.LegStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegStrikeCurrency getLegStrikeCurrency() throws FieldNotFound
  { org.quickfix.field.LegStrikeCurrency value = new org.quickfix.field.LegStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetLegStrikeCurrency()
  { return isSetField(942); }
  public void set(org.quickfix.field.LegOptAttribute value)
  { setField(value); }
  public org.quickfix.field.LegOptAttribute get(org.quickfix.field.LegOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound
  { org.quickfix.field.LegOptAttribute value = new org.quickfix.field.LegOptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegOptAttribute field)
  { return isSetField(field); }
  public boolean isSetLegOptAttribute()
  { return isSetField(613); }
  public void set(org.quickfix.field.LegContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.LegContractMultiplier get(org.quickfix.field.LegContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound
  { org.quickfix.field.LegContractMultiplier value = new org.quickfix.field.LegContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetLegContractMultiplier()
  { return isSetField(614); }
  public void set(org.quickfix.field.LegCouponRate value)
  { setField(value); }
  public org.quickfix.field.LegCouponRate get(org.quickfix.field.LegCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound
  { org.quickfix.field.LegCouponRate value = new org.quickfix.field.LegCouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCouponRate field)
  { return isSetField(field); }
  public boolean isSetLegCouponRate()
  { return isSetField(615); }
  public void set(org.quickfix.field.LegSecurityExchange value)
  { setField(value); }
  public org.quickfix.field.LegSecurityExchange get(org.quickfix.field.LegSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound
  { org.quickfix.field.LegSecurityExchange value = new org.quickfix.field.LegSecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetLegSecurityExchange()
  { return isSetField(616); }
  public void set(org.quickfix.field.LegIssuer value)
  { setField(value); }
  public org.quickfix.field.LegIssuer get(org.quickfix.field.LegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound
  { org.quickfix.field.LegIssuer value = new org.quickfix.field.LegIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegIssuer field)
  { return isSetField(field); }
  public boolean isSetLegIssuer()
  { return isSetField(617); }
  public void set(org.quickfix.field.EncodedLegIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedLegIssuerLen get(org.quickfix.field.EncodedLegIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedLegIssuerLen value = new org.quickfix.field.EncodedLegIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedLegIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuerLen()
  { return isSetField(618); }
  public void set(org.quickfix.field.EncodedLegIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedLegIssuer get(org.quickfix.field.EncodedLegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedLegIssuer value = new org.quickfix.field.EncodedLegIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedLegIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuer()
  { return isSetField(619); }
  public void set(org.quickfix.field.LegSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.LegSecurityDesc get(org.quickfix.field.LegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound
  { org.quickfix.field.LegSecurityDesc value = new org.quickfix.field.LegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetLegSecurityDesc()
  { return isSetField(620); }
  public void set(org.quickfix.field.EncodedLegSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedLegSecurityDescLen get(org.quickfix.field.EncodedLegSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedLegSecurityDescLen value = new org.quickfix.field.EncodedLegSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedLegSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDescLen()
  { return isSetField(621); }
  public void set(org.quickfix.field.EncodedLegSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedLegSecurityDesc get(org.quickfix.field.EncodedLegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedLegSecurityDesc value = new org.quickfix.field.EncodedLegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedLegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDesc()
  { return isSetField(622); }
  public void set(org.quickfix.field.LegRatioQty value)
  { setField(value); }
  public org.quickfix.field.LegRatioQty get(org.quickfix.field.LegRatioQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound
  { org.quickfix.field.LegRatioQty value = new org.quickfix.field.LegRatioQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegRatioQty field)
  { return isSetField(field); }
  public boolean isSetLegRatioQty()
  { return isSetField(623); }
  public void set(org.quickfix.field.LegSide value)
  { setField(value); }
  public org.quickfix.field.LegSide get(org.quickfix.field.LegSide  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSide getLegSide() throws FieldNotFound
  { org.quickfix.field.LegSide value = new org.quickfix.field.LegSide();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSide field)
  { return isSetField(field); }
  public boolean isSetLegSide()
  { return isSetField(624); }
  public void set(org.quickfix.field.LegCurrency value)
  { setField(value); }
  public org.quickfix.field.LegCurrency get(org.quickfix.field.LegCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound
  { org.quickfix.field.LegCurrency value = new org.quickfix.field.LegCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegCurrency field)
  { return isSetField(field); }
  public boolean isSetLegCurrency()
  { return isSetField(556); }
  public void set(org.quickfix.field.LegPool value)
  { setField(value); }
  public org.quickfix.field.LegPool get(org.quickfix.field.LegPool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegPool getLegPool() throws FieldNotFound
  { org.quickfix.field.LegPool value = new org.quickfix.field.LegPool();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegPool field)
  { return isSetField(field); }
  public boolean isSetLegPool()
  { return isSetField(740); }
  public void set(org.quickfix.field.LegDatedDate value)
  { setField(value); }
  public org.quickfix.field.LegDatedDate get(org.quickfix.field.LegDatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegDatedDate getLegDatedDate() throws FieldNotFound
  { org.quickfix.field.LegDatedDate value = new org.quickfix.field.LegDatedDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegDatedDate field)
  { return isSetField(field); }
  public boolean isSetLegDatedDate()
  { return isSetField(739); }
  public void set(org.quickfix.field.LegContractSettlMonth value)
  { setField(value); }
  public org.quickfix.field.LegContractSettlMonth get(org.quickfix.field.LegContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegContractSettlMonth getLegContractSettlMonth() throws FieldNotFound
  { org.quickfix.field.LegContractSettlMonth value = new org.quickfix.field.LegContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetLegContractSettlMonth()
  { return isSetField(955); }
  public void set(org.quickfix.field.LegInterestAccrualDate value)
  { setField(value); }
  public org.quickfix.field.LegInterestAccrualDate get(org.quickfix.field.LegInterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegInterestAccrualDate getLegInterestAccrualDate() throws FieldNotFound
  { org.quickfix.field.LegInterestAccrualDate value = new org.quickfix.field.LegInterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegInterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetLegInterestAccrualDate()
  { return isSetField(956); }
  public void set(org.quickfix.field.NoLegSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoLegSecurityAltID get(org.quickfix.field.NoLegSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoLegSecurityAltID getNoLegSecurityAltID() throws FieldNotFound
  { org.quickfix.field.NoLegSecurityAltID value = new org.quickfix.field.NoLegSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoLegSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoLegSecurityAltID()
  { return isSetField(604); }
  public static class NoLegSecurityAltID extends Group {
    public NoLegSecurityAltID() {
      super(604,605,
      new int[] {605,606,0 } ); }
  public void set(org.quickfix.field.LegSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.LegSecurityAltID get(org.quickfix.field.LegSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityAltID getLegSecurityAltID() throws FieldNotFound
  { org.quickfix.field.LegSecurityAltID value = new org.quickfix.field.LegSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityAltID()
  { return isSetField(605); }
  public void set(org.quickfix.field.LegSecurityAltIDSource value)
  { setField(value); }
  public org.quickfix.field.LegSecurityAltIDSource get(org.quickfix.field.LegSecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityAltIDSource getLegSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.LegSecurityAltIDSource value = new org.quickfix.field.LegSecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityAltIDSource()
  { return isSetField(606); }
}
}
}
}

