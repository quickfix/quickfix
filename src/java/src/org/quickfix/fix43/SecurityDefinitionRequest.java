package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SecurityDefinitionRequest extends Message 
{ 

  public SecurityDefinitionRequest() 
  { 
    getHeader().setField(new MsgType("c")); 
  } 
  public SecurityDefinitionRequest(    
    org.quickfix.field.SecurityReqID aSecurityReqID,    
    org.quickfix.field.SecurityRequestType aSecurityRequestType ) 
  {  
    getHeader().setField(new MsgType("c")); 
    set(aSecurityReqID); 
    set(aSecurityRequestType);  
  } 

  public void set(org.quickfix.field.SecurityReqID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityReqID get(org.quickfix.field.SecurityReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityReqID getSecurityReqID() throws FieldNotFound 
  { org.quickfix.field.SecurityReqID value = new org.quickfix.field.SecurityReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityRequestType get(org.quickfix.field.SecurityRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityRequestType getSecurityRequestType() throws FieldNotFound 
  { org.quickfix.field.SecurityRequestType value = new org.quickfix.field.SecurityRequestType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EncodedText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 

public static class NoLegs extends Group { 
  public NoLegs() { 
    super(555, 556, 
    new int[] { 
             600, 
             601, 
             602, 
             603, 
             607, 
             608, 
             609, 
             610, 
             611, 
             248, 
             249, 
             250, 
             251, 
             252, 
             253, 
             257, 
             599, 
             596, 
             597, 
             598, 
             254, 
             612, 
             613, 
             614, 
             615, 
             616, 
             617, 
             618, 
             619, 
             620, 
             621, 
             622, 
             623, 
             624, 
               556, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LegCurrency value) 
  { setField(value); } 
  public org.quickfix.field.LegCurrency get(org.quickfix.field.LegCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound 
  { org.quickfix.field.LegCurrency value = new org.quickfix.field.LegCurrency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LegSymbol value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbol get(org.quickfix.field.LegSymbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound 
  { org.quickfix.field.LegSymbol value = new org.quickfix.field.LegSymbol(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbolSfx get(org.quickfix.field.LegSymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.LegSymbolSfx value = new org.quickfix.field.LegSymbolSfx(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityID value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityID get(org.quickfix.field.LegSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound 
  { org.quickfix.field.LegSecurityID value = new org.quickfix.field.LegSecurityID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityIDSource get(org.quickfix.field.LegSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.LegSecurityIDSource value = new org.quickfix.field.LegSecurityIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegProduct value) 
  { setField(value); } 
  public org.quickfix.field.LegProduct get(org.quickfix.field.LegProduct value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegProduct getLegProduct() throws FieldNotFound 
  { org.quickfix.field.LegProduct value = new org.quickfix.field.LegProduct(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCFICode value) 
  { setField(value); } 
  public org.quickfix.field.LegCFICode get(org.quickfix.field.LegCFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound 
  { org.quickfix.field.LegCFICode value = new org.quickfix.field.LegCFICode(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityType get(org.quickfix.field.LegSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegSecurityType value = new org.quickfix.field.LegSecurityType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityMonthYear get(org.quickfix.field.LegMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.LegMaturityMonthYear value = new org.quickfix.field.LegMaturityMonthYear(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegMaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityDate get(org.quickfix.field.LegMaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound 
  { org.quickfix.field.LegMaturityDate value = new org.quickfix.field.LegMaturityDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponPaymentDate get(org.quickfix.field.LegCouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.LegCouponPaymentDate value = new org.quickfix.field.LegCouponPaymentDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegIssueDate value) 
  { setField(value); } 
  public org.quickfix.field.LegIssueDate get(org.quickfix.field.LegIssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound 
  { org.quickfix.field.LegIssueDate value = new org.quickfix.field.LegIssueDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegRepoCollateralSecurityType get(org.quickfix.field.LegRepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegRepoCollateralSecurityType value = new org.quickfix.field.LegRepoCollateralSecurityType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseTerm get(org.quickfix.field.LegRepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseTerm value = new org.quickfix.field.LegRepurchaseTerm(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseRate get(org.quickfix.field.LegRepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseRate value = new org.quickfix.field.LegRepurchaseRate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegFactor value) 
  { setField(value); } 
  public org.quickfix.field.LegFactor get(org.quickfix.field.LegFactor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegFactor getLegFactor() throws FieldNotFound 
  { org.quickfix.field.LegFactor value = new org.quickfix.field.LegFactor(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCreditRating value) 
  { setField(value); } 
  public org.quickfix.field.LegCreditRating get(org.quickfix.field.LegCreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound 
  { org.quickfix.field.LegCreditRating value = new org.quickfix.field.LegCreditRating(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegInstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.LegInstrRegistry get(org.quickfix.field.LegInstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.LegInstrRegistry value = new org.quickfix.field.LegInstrRegistry(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegCountryOfIssue get(org.quickfix.field.LegCountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegCountryOfIssue value = new org.quickfix.field.LegCountryOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegStateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegStateOrProvinceOfIssue get(org.quickfix.field.LegStateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegStateOrProvinceOfIssue value = new org.quickfix.field.LegStateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegLocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegLocaleOfIssue get(org.quickfix.field.LegLocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegLocaleOfIssue value = new org.quickfix.field.LegLocaleOfIssue(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.LegRedemptionDate get(org.quickfix.field.LegRedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.LegRedemptionDate value = new org.quickfix.field.LegRedemptionDate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.LegStrikePrice get(org.quickfix.field.LegStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound 
  { org.quickfix.field.LegStrikePrice value = new org.quickfix.field.LegStrikePrice(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.LegOptAttribute get(org.quickfix.field.LegOptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound 
  { org.quickfix.field.LegOptAttribute value = new org.quickfix.field.LegOptAttribute(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.LegContractMultiplier get(org.quickfix.field.LegContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.LegContractMultiplier value = new org.quickfix.field.LegContractMultiplier(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegCouponRate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponRate get(org.quickfix.field.LegCouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound 
  { org.quickfix.field.LegCouponRate value = new org.quickfix.field.LegCouponRate(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityExchange get(org.quickfix.field.LegSecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.LegSecurityExchange value = new org.quickfix.field.LegSecurityExchange(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.LegIssuer get(org.quickfix.field.LegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound 
  { org.quickfix.field.LegIssuer value = new org.quickfix.field.LegIssuer(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuerLen get(org.quickfix.field.EncodedLegIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuerLen value = new org.quickfix.field.EncodedLegIssuerLen(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuer get(org.quickfix.field.EncodedLegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuer value = new org.quickfix.field.EncodedLegIssuer(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityDesc get(org.quickfix.field.LegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.LegSecurityDesc value = new org.quickfix.field.LegSecurityDesc(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDescLen get(org.quickfix.field.EncodedLegSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDescLen value = new org.quickfix.field.EncodedLegSecurityDescLen(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.EncodedLegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDesc get(org.quickfix.field.EncodedLegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDesc value = new org.quickfix.field.EncodedLegSecurityDesc(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegRatioQty value) 
  { setField(value); } 
  public org.quickfix.field.LegRatioQty get(org.quickfix.field.LegRatioQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound 
  { org.quickfix.field.LegRatioQty value = new org.quickfix.field.LegRatioQty(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.LegSide value) 
  { setField(value); } 
  public org.quickfix.field.LegSide get(org.quickfix.field.LegSide value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSide getLegSide() throws FieldNotFound 
  { org.quickfix.field.LegSide value = new org.quickfix.field.LegSide(); 
    getField(value); return value; } 
} 

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
    getField(value); return value; } 
} 
