package org.quickfix.fix42; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class News extends Message 
{ 

  public News() 
  { 
    getHeader().setField(new MsgType("B")); 
  } 
  public News(    
    org.quickfix.field.Headline aHeadline ) 
  {  
    getHeader().setField(new MsgType("B")); 
    set(aHeadline);  
  } 

  public void set(org.quickfix.field.OrigTime value) 
  { setField(value); } 
  public org.quickfix.field.OrigTime get(org.quickfix.field.OrigTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigTime getOrigTime() throws FieldNotFound 
  { org.quickfix.field.OrigTime value = new org.quickfix.field.OrigTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigTime field) 
  { return isSetField(field); } 
  public boolean isSetOrigTime() 
  { return isSetField(42); } 

  public void set(org.quickfix.field.Urgency value) 
  { setField(value); } 
  public org.quickfix.field.Urgency get(org.quickfix.field.Urgency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Urgency getUrgency() throws FieldNotFound 
  { org.quickfix.field.Urgency value = new org.quickfix.field.Urgency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Urgency field) 
  { return isSetField(field); } 
  public boolean isSetUrgency() 
  { return isSetField(61); } 

  public void set(org.quickfix.field.Headline value) 
  { setField(value); } 
  public org.quickfix.field.Headline get(org.quickfix.field.Headline value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Headline getHeadline() throws FieldNotFound 
  { org.quickfix.field.Headline value = new org.quickfix.field.Headline(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Headline field) 
  { return isSetField(field); } 
  public boolean isSetHeadline() 
  { return isSetField(148); } 

  public void set(org.quickfix.field.EncodedHeadlineLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedHeadlineLen get(org.quickfix.field.EncodedHeadlineLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedHeadlineLen getEncodedHeadlineLen() throws FieldNotFound 
  { org.quickfix.field.EncodedHeadlineLen value = new org.quickfix.field.EncodedHeadlineLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedHeadlineLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedHeadlineLen() 
  { return isSetField(358); } 

  public void set(org.quickfix.field.EncodedHeadline value) 
  { setField(value); } 
  public org.quickfix.field.EncodedHeadline get(org.quickfix.field.EncodedHeadline value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedHeadline getEncodedHeadline() throws FieldNotFound 
  { org.quickfix.field.EncodedHeadline value = new org.quickfix.field.EncodedHeadline(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedHeadline field) 
  { return isSetField(field); } 
  public boolean isSetEncodedHeadline() 
  { return isSetField(359); } 
  public void set(org.quickfix.field.NoRoutingIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoRoutingIDs get(org.quickfix.field.NoRoutingIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoRoutingIDs getNoRoutingIDs() throws FieldNotFound 
  { org.quickfix.field.NoRoutingIDs value = new org.quickfix.field.NoRoutingIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoRoutingIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoRoutingIDs() 
  { return isSetField(215); } 

public static class NoRoutingIDs extends Group { 
  public NoRoutingIDs() { 
    super(215, 216, 
    new int[] { 
               216, 
               217, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.RoutingType value) 
  { setField(value); } 
  public org.quickfix.field.RoutingType get(org.quickfix.field.RoutingType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoutingType getRoutingType() throws FieldNotFound 
  { org.quickfix.field.RoutingType value = new org.quickfix.field.RoutingType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RoutingType field) 
  { return isSetField(field); } 
  public boolean isSetRoutingType() 
  { return isSetField(216); } 

  public void set(org.quickfix.field.RoutingID value) 
  { setField(value); } 
  public org.quickfix.field.RoutingID get(org.quickfix.field.RoutingID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoutingID getRoutingID() throws FieldNotFound 
  { org.quickfix.field.RoutingID value = new org.quickfix.field.RoutingID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RoutingID field) 
  { return isSetField(field); } 
  public boolean isSetRoutingID() 
  { return isSetField(217); } 

} 
  public void set(org.quickfix.field.NoRelatedSym value) 
  { setField(value); } 
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym value) throws FieldNotFound 
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
    super(146, 22, 
    new int[] { 
               46, 
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
               0 } 
); 
  } 
  public void set(org.quickfix.field.RelatdSym value) 
  { setField(value); } 
  public org.quickfix.field.RelatdSym get(org.quickfix.field.RelatdSym value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound 
  { org.quickfix.field.RelatdSym value = new org.quickfix.field.RelatdSym(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RelatdSym field) 
  { return isSetField(field); } 
  public boolean isSetRelatdSym() 
  { return isSetField(46); } 

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

} 
  public void set(org.quickfix.field.LinesOfText value) 
  { setField(value); } 
  public org.quickfix.field.LinesOfText get(org.quickfix.field.LinesOfText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound 
  { org.quickfix.field.LinesOfText value = new org.quickfix.field.LinesOfText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LinesOfText field) 
  { return isSetField(field); } 
  public boolean isSetLinesOfText() 
  { return isSetField(33); } 

public static class LinesOfText extends Group { 
  public LinesOfText() { 
    super(33, 58, 
    new int[] { 
               58, 
               354, 
               355, 
               0 } 
); 
  } 
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

  public void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedText() 
  { return isSetField(355); } 

} 

  public void set(org.quickfix.field.URLLink value) 
  { setField(value); } 
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound 
  { org.quickfix.field.URLLink value = new org.quickfix.field.URLLink(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.URLLink field) 
  { return isSetField(field); } 
  public boolean isSetURLLink() 
  { return isSetField(149); } 

  public void set(org.quickfix.field.RawDataLength value) 
  { setField(value); } 
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound 
  { org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RawDataLength field) 
  { return isSetField(field); } 
  public boolean isSetRawDataLength() 
  { return isSetField(95); } 

  public void set(org.quickfix.field.RawData value) 
  { setField(value); } 
  public org.quickfix.field.RawData get(org.quickfix.field.RawData value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RawData getRawData() throws FieldNotFound 
  { org.quickfix.field.RawData value = new org.quickfix.field.RawData(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RawData field) 
  { return isSetField(field); } 
  public boolean isSetRawData() 
  { return isSetField(96); } 
} 
