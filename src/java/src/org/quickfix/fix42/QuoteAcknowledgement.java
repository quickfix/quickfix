package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class QuoteAcknowledgement extends Message 
{ 

  public QuoteAcknowledgement() 
  { 
    getHeader().setField(new MsgType("b")); 
  } 
  public QuoteAcknowledgement(    
    org.quickfix.field.QuoteAckStatus aQuoteAckStatus ) 
  {  
    getHeader().setField(new MsgType("b")); 
    set(aQuoteAckStatus);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound 
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteReqID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteReqID() 
  { return isSetField(131); } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteID() 
  { return isSetField(117); } 

  public void set(org.quickfix.field.QuoteAckStatus value) 
  { setField(value); } 
  public org.quickfix.field.QuoteAckStatus get(org.quickfix.field.QuoteAckStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteAckStatus getQuoteAckStatus() throws FieldNotFound 
  { org.quickfix.field.QuoteAckStatus value = new org.quickfix.field.QuoteAckStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteAckStatus field) 
  { return isSetField(field); } 
  public boolean isSetQuoteAckStatus() 
  { return isSetField(297); } 

  public void set(org.quickfix.field.QuoteRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.QuoteRejectReason get(org.quickfix.field.QuoteRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteRejectReason getQuoteRejectReason() throws FieldNotFound 
  { org.quickfix.field.QuoteRejectReason value = new org.quickfix.field.QuoteRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetQuoteRejectReason() 
  { return isSetField(300); } 

  public void set(org.quickfix.field.QuoteResponseLevel value) 
  { setField(value); } 
  public org.quickfix.field.QuoteResponseLevel get(org.quickfix.field.QuoteResponseLevel value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteResponseLevel getQuoteResponseLevel() throws FieldNotFound 
  { org.quickfix.field.QuoteResponseLevel value = new org.quickfix.field.QuoteResponseLevel(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteResponseLevel field) 
  { return isSetField(field); } 
  public boolean isSetQuoteResponseLevel() 
  { return isSetField(301); } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionID() 
  { return isSetField(336); } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Text field) 
  { return isSetField(field); } 
  public boolean isSetText() 
  { return isSetField(58); } 
  public void set(org.quickfix.field.NoQuoteSets value) 
  { setField(value); } 
  public org.quickfix.field.NoQuoteSets get(org.quickfix.field.NoQuoteSets value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoQuoteSets getNoQuoteSets() throws FieldNotFound 
  { org.quickfix.field.NoQuoteSets value = new org.quickfix.field.NoQuoteSets(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoQuoteSets field) 
  { return isSetField(field); } 
  public boolean isSetNoQuoteSets() 
  { return isSetField(296); } 

public static class NoQuoteSets extends Group { 
  public NoQuoteSets() { 
    super(296, 302, 
    new int[] { 
               302, 
               311, 
               312, 
               309, 
               305, 
               310, 
               313, 
               314, 
               315, 
               316, 
               317, 
               436, 
               435, 
               308, 
               306, 
               362, 
               363, 
               307, 
               364, 
               365, 
               304, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.QuoteSetID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteSetID get(org.quickfix.field.QuoteSetID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteSetID getQuoteSetID() throws FieldNotFound 
  { org.quickfix.field.QuoteSetID value = new org.quickfix.field.QuoteSetID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteSetID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteSetID() 
  { return isSetField(302); } 

  public void set(org.quickfix.field.UnderlyingSymbol value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityID value = new org.quickfix.field.UnderlyingSecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityID field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityID() 
  { return isSetField(309); } 

  public void set(org.quickfix.field.UnderlyingIDSource value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingIDSource get(org.quickfix.field.UnderlyingIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingIDSource getUnderlyingIDSource() throws FieldNotFound 
  { org.quickfix.field.UnderlyingIDSource value = new org.quickfix.field.UnderlyingIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingIDSource field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingIDSource() 
  { return isSetField(305); } 

  public void set(org.quickfix.field.UnderlyingSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound 
  { org.quickfix.field.UnderlyingSecurityType value = new org.quickfix.field.UnderlyingSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingSecurityType() 
  { return isSetField(310); } 

  public void set(org.quickfix.field.UnderlyingMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityMonthYear value = new org.quickfix.field.UnderlyingMaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityMonthYear() 
  { return isSetField(313); } 

  public void set(org.quickfix.field.UnderlyingMaturityDay value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingMaturityDay get(org.quickfix.field.UnderlyingMaturityDay value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingMaturityDay getUnderlyingMaturityDay() throws FieldNotFound 
  { org.quickfix.field.UnderlyingMaturityDay value = new org.quickfix.field.UnderlyingMaturityDay(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingMaturityDay field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingMaturityDay() 
  { return isSetField(314); } 

  public void set(org.quickfix.field.UnderlyingPutOrCall value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingPutOrCall get(org.quickfix.field.UnderlyingPutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingPutOrCall getUnderlyingPutOrCall() throws FieldNotFound 
  { org.quickfix.field.UnderlyingPutOrCall value = new org.quickfix.field.UnderlyingPutOrCall(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingPutOrCall field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingPutOrCall() 
  { return isSetField(315); } 

  public void set(org.quickfix.field.UnderlyingStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound 
  { org.quickfix.field.UnderlyingStrikePrice value = new org.quickfix.field.UnderlyingStrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.UnderlyingStrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetUnderlyingStrikePrice() 
  { return isSetField(316); } 

  public void set(org.quickfix.field.UnderlyingOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedUnderlyingSecurityDesc value = new org.quickfix.field.EncodedUnderlyingSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedUnderlyingSecurityDesc() 
  { return isSetField(365); } 

  public void set(org.quickfix.field.TotQuoteEntries value) 
  { setField(value); } 
  public org.quickfix.field.TotQuoteEntries get(org.quickfix.field.TotQuoteEntries value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotQuoteEntries getTotQuoteEntries() throws FieldNotFound 
  { org.quickfix.field.TotQuoteEntries value = new org.quickfix.field.TotQuoteEntries(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TotQuoteEntries field) 
  { return isSetField(field); } 
  public boolean isSetTotQuoteEntries() 
  { return isSetField(304); } 

  public void set(org.quickfix.field.NoQuoteEntries value) 
  { setField(value); } 
  public org.quickfix.field.NoQuoteEntries get(org.quickfix.field.NoQuoteEntries value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoQuoteEntries getNoQuoteEntries() throws FieldNotFound 
  { org.quickfix.field.NoQuoteEntries value = new org.quickfix.field.NoQuoteEntries(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoQuoteEntries field) 
  { return isSetField(field); } 
  public boolean isSetNoQuoteEntries() 
  { return isSetField(295); } 

public static class NoQuoteEntries extends Group { 
  public NoQuoteEntries() { 
    super(295, 22, 
    new int[] { 
               299, 
               55, 
               65, 
               48, 
               22, 
               167, 
               200, 
               205, 
               201, 
               202, 
               206, 
               231, 
               223, 
               207, 
               106, 
               348, 
               349, 
               107, 
               350, 
               351, 
               368, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.QuoteEntryID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteEntryID get(org.quickfix.field.QuoteEntryID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteEntryID getQuoteEntryID() throws FieldNotFound 
  { org.quickfix.field.QuoteEntryID value = new org.quickfix.field.QuoteEntryID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteEntryID field) 
  { return isSetField(field); } 
  public boolean isSetQuoteEntryID() 
  { return isSetField(299); } 

  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
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
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityID() 
  { return isSetField(48); } 

  public void set(org.quickfix.field.IDSource value) 
  { setField(value); } 
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound 
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IDSource field) 
  { return isSetField(field); } 
  public boolean isSetIDSource() 
  { return isSetField(22); } 

  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityType() 
  { return isSetField(167); } 

  public void set(org.quickfix.field.MaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetMaturityMonthYear() 
  { return isSetField(200); } 

  public void set(org.quickfix.field.MaturityDay value) 
  { setField(value); } 
  public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound 
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityDay field) 
  { return isSetField(field); } 
  public boolean isSetMaturityDay() 
  { return isSetField(205); } 

  public void set(org.quickfix.field.PutOrCall value) 
  { setField(value); } 
  public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound 
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PutOrCall field) 
  { return isSetField(field); } 
  public boolean isSetPutOrCall() 
  { return isSetField(201); } 

  public void set(org.quickfix.field.StrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound 
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetStrikePrice() 
  { return isSetField(202); } 

  public void set(org.quickfix.field.OptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
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
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
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
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
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
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedSecurityDesc() 
  { return isSetField(351); } 

  public void set(org.quickfix.field.QuoteEntryRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.QuoteEntryRejectReason get(org.quickfix.field.QuoteEntryRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteEntryRejectReason getQuoteEntryRejectReason() throws FieldNotFound 
  { org.quickfix.field.QuoteEntryRejectReason value = new org.quickfix.field.QuoteEntryRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QuoteEntryRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetQuoteEntryRejectReason() 
  { return isSetField(368); } 

} 
} 
} 
