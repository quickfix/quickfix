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
    org.quickfix.field.Headline aHeadline,    
    org.quickfix.field.LinesOfText aLinesOfText ) 
  {  
    getHeader().setField(new MsgType("B")); 
    set(aHeadline); 
    set(aLinesOfText);  
  } 

  public void set(org.quickfix.field.OrigTime value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.OrigTime get(org.quickfix.field.OrigTime value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.OrigTime getOrigTime() throws FieldNotFound
  { 
    org.quickfix.field.OrigTime value = new org.quickfix.field.OrigTime();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Urgency value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Urgency get(org.quickfix.field.Urgency value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Urgency getUrgency() throws FieldNotFound
  { 
    org.quickfix.field.Urgency value = new org.quickfix.field.Urgency();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.Headline value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.Headline get(org.quickfix.field.Headline value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.Headline getHeadline() throws FieldNotFound
  { 
    org.quickfix.field.Headline value = new org.quickfix.field.Headline();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedHeadlineLen value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedHeadlineLen get(org.quickfix.field.EncodedHeadlineLen value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedHeadlineLen getEncodedHeadlineLen() throws FieldNotFound
  { 
    org.quickfix.field.EncodedHeadlineLen value = new org.quickfix.field.EncodedHeadlineLen();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.EncodedHeadline value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.EncodedHeadline get(org.quickfix.field.EncodedHeadline value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.EncodedHeadline getEncodedHeadline() throws FieldNotFound
  { 
    org.quickfix.field.EncodedHeadline value = new org.quickfix.field.EncodedHeadline();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.NoRoutingIDs value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoRoutingIDs get(org.quickfix.field.NoRoutingIDs value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoRoutingIDs getNoRoutingIDs() throws FieldNotFound
  { 
    org.quickfix.field.NoRoutingIDs value = new org.quickfix.field.NoRoutingIDs();  
    getField(value);  
    return value;  
  } 

public class NoRoutingIDs extends Group { 
  public NoRoutingIDs() { 
    super(215,216, new int[]{216,217,0}); 
  } 
  void set(org.quickfix.field.RoutingType value) 
  { setField(value); } 
  org.quickfix.field.RoutingType get(org.quickfix.field.RoutingType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.RoutingType getRoutingType() throws FieldNotFound 
  { org.quickfix.field.RoutingType value = new org.quickfix.field.RoutingType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.RoutingID value) 
  { setField(value); } 
  org.quickfix.field.RoutingID get(org.quickfix.field.RoutingID value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.RoutingID getRoutingID() throws FieldNotFound 
  { org.quickfix.field.RoutingID value = new org.quickfix.field.RoutingID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.NoRelatedSym value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { 
    org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym();  
    getField(value);  
    return value;  
  } 

public class NoRelatedSym extends Group { 
  public NoRelatedSym() { 
    super(146,46, new int[]{46,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,0}); 
  } 
  void set(org.quickfix.field.RelatdSym value) 
  { setField(value); } 
  org.quickfix.field.RelatdSym get(org.quickfix.field.RelatdSym value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound 
  { org.quickfix.field.RelatdSym value = new org.quickfix.field.RelatdSym(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SymbolSfx value) 
  { setField(value); } 
  org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityID value) 
  { setField(value); } 
  org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 

  void set(org.quickfix.field.IDSource value) 
  { setField(value); } 
  org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.IDSource getIDSource() throws FieldNotFound 
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 

  void set(org.quickfix.field.MaturityMonthYear value) 
  { setField(value); } 
  org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear(); 
    getField(value); return value; } 

  void set(org.quickfix.field.MaturityDay value) 
  { setField(value); } 
  org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound 
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay(); 
    getField(value); return value; } 

  void set(org.quickfix.field.PutOrCall value) 
  { setField(value); } 
  org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound 
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall(); 
    getField(value); return value; } 

  void set(org.quickfix.field.StrikePrice value) 
  { setField(value); } 
  org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound 
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice(); 
    getField(value); return value; } 

  void set(org.quickfix.field.OptAttribute value) 
  { setField(value); } 
  org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound 
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute(); 
    getField(value); return value; } 

  void set(org.quickfix.field.ContractMultiplier value) 
  { setField(value); } 
  org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier(); 
    getField(value); return value; } 

  void set(org.quickfix.field.CouponRate value) 
  { setField(value); } 
  org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound 
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityExchange value) 
  { setField(value); } 
  org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange(); 
    getField(value); return value; } 

  void set(org.quickfix.field.Issuer value) 
  { setField(value); } 
  org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Issuer getIssuer() throws FieldNotFound 
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedIssuerLen value) 
  { setField(value); } 
  org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedIssuer value) 
  { setField(value); } 
  org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer(); 
    getField(value); return value; } 

  void set(org.quickfix.field.SecurityDesc value) 
  { setField(value); } 
  org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedSecurityDescLen value) 
  { setField(value); } 
  org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedSecurityDesc value) 
  { setField(value); } 
  org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.LinesOfText value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.LinesOfText get(org.quickfix.field.LinesOfText value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound
  { 
    org.quickfix.field.LinesOfText value = new org.quickfix.field.LinesOfText();  
    getField(value);  
    return value;  
  } 

public class LinesOfText extends Group { 
  public LinesOfText() { 
    super(33,58, new int[]{58,354,355,0}); 
  } 
  void set(org.quickfix.field.Text value) 
  { setField(value); } 
  org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.Text getText() throws FieldNotFound 
  { org.quickfix.field.Text value = new org.quickfix.field.Text(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedTextLen value) 
  { setField(value); } 
  org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen(); 
    getField(value); return value; } 

  void set(org.quickfix.field.EncodedText value) 
  { setField(value); } 
  org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.URLLink value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound
  { 
    org.quickfix.field.URLLink value = new org.quickfix.field.URLLink();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.RawDataLength value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { 
    org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength();  
    getField(value);  
    return value;  
  } 

  public void set(org.quickfix.field.RawData value) 
  { 
    setField(value); 
  } 
  public org.quickfix.field.RawData get(org.quickfix.field.RawData value) throws FieldNotFound
  { 
    getField(value); 
    return value; 
  } 
  public org.quickfix.field.RawData getRawData() throws FieldNotFound
  { 
    org.quickfix.field.RawData value = new org.quickfix.field.RawData();  
    getField(value);  
    return value;  
  } 
} 
