package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SecurityStatus extends Message 
{ 

  public SecurityStatus() 
  { 
    getHeader().setField(new MsgType("f")); 
  } 

  public void set(org.quickfix.field.SecurityStatusReqID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityStatusReqID get(org.quickfix.field.SecurityStatusReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityStatusReqID getSecurityStatusReqID() throws FieldNotFound 
  { org.quickfix.field.SecurityStatusReqID value = new org.quickfix.field.SecurityStatusReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
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

  public void set(org.quickfix.field.UnsolicitedIndicator value) 
  { setField(value); } 
  public org.quickfix.field.UnsolicitedIndicator get(org.quickfix.field.UnsolicitedIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.UnsolicitedIndicator getUnsolicitedIndicator() throws FieldNotFound 
  { org.quickfix.field.UnsolicitedIndicator value = new org.quickfix.field.UnsolicitedIndicator(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityTradingStatus value) 
  { setField(value); } 
  public org.quickfix.field.SecurityTradingStatus get(org.quickfix.field.SecurityTradingStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityTradingStatus getSecurityTradingStatus() throws FieldNotFound 
  { org.quickfix.field.SecurityTradingStatus value = new org.quickfix.field.SecurityTradingStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.FinancialStatus value) 
  { setField(value); } 
  public org.quickfix.field.FinancialStatus get(org.quickfix.field.FinancialStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FinancialStatus getFinancialStatus() throws FieldNotFound 
  { org.quickfix.field.FinancialStatus value = new org.quickfix.field.FinancialStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CorporateAction value) 
  { setField(value); } 
  public org.quickfix.field.CorporateAction get(org.quickfix.field.CorporateAction value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CorporateAction getCorporateAction() throws FieldNotFound 
  { org.quickfix.field.CorporateAction value = new org.quickfix.field.CorporateAction(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.HaltReason value) 
  { setField(value); } 
  public org.quickfix.field.HaltReason get(org.quickfix.field.HaltReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HaltReason getHaltReason() throws FieldNotFound 
  { org.quickfix.field.HaltReason value = new org.quickfix.field.HaltReason(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.InViewOfCommon value) 
  { setField(value); } 
  public org.quickfix.field.InViewOfCommon get(org.quickfix.field.InViewOfCommon value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InViewOfCommon getInViewOfCommon() throws FieldNotFound 
  { org.quickfix.field.InViewOfCommon value = new org.quickfix.field.InViewOfCommon(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DueToRelated value) 
  { setField(value); } 
  public org.quickfix.field.DueToRelated get(org.quickfix.field.DueToRelated value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DueToRelated getDueToRelated() throws FieldNotFound 
  { org.quickfix.field.DueToRelated value = new org.quickfix.field.DueToRelated(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BuyVolume value) 
  { setField(value); } 
  public org.quickfix.field.BuyVolume get(org.quickfix.field.BuyVolume value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BuyVolume getBuyVolume() throws FieldNotFound 
  { org.quickfix.field.BuyVolume value = new org.quickfix.field.BuyVolume(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SellVolume value) 
  { setField(value); } 
  public org.quickfix.field.SellVolume get(org.quickfix.field.SellVolume value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SellVolume getSellVolume() throws FieldNotFound 
  { org.quickfix.field.SellVolume value = new org.quickfix.field.SellVolume(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.HighPx value) 
  { setField(value); } 
  public org.quickfix.field.HighPx get(org.quickfix.field.HighPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.HighPx getHighPx() throws FieldNotFound 
  { org.quickfix.field.HighPx value = new org.quickfix.field.HighPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LowPx value) 
  { setField(value); } 
  public org.quickfix.field.LowPx get(org.quickfix.field.LowPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LowPx getLowPx() throws FieldNotFound 
  { org.quickfix.field.LowPx value = new org.quickfix.field.LowPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Adjustment value) 
  { setField(value); } 
  public org.quickfix.field.Adjustment get(org.quickfix.field.Adjustment value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Adjustment getAdjustment() throws FieldNotFound 
  { org.quickfix.field.Adjustment value = new org.quickfix.field.Adjustment(); 
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
} 
