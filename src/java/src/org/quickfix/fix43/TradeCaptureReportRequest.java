package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class TradeCaptureReportRequest extends Message 
{ 

  public TradeCaptureReportRequest() 
  { 
    getHeader().setField(new MsgType("AD")); 
  } 
  public TradeCaptureReportRequest(    
    org.quickfix.field.TradeRequestID aTradeRequestID,    
    org.quickfix.field.TradeRequestType aTradeRequestType ) 
  {  
    getHeader().setField(new MsgType("AD")); 
    set(aTradeRequestID); 
    set(aTradeRequestType);  
  } 

  public void set(org.quickfix.field.TradeRequestID value) 
  { setField(value); } 
  public org.quickfix.field.TradeRequestID get(org.quickfix.field.TradeRequestID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeRequestID getTradeRequestID() throws FieldNotFound 
  { org.quickfix.field.TradeRequestID value = new org.quickfix.field.TradeRequestID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeRequestType value) 
  { setField(value); } 
  public org.quickfix.field.TradeRequestType get(org.quickfix.field.TradeRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeRequestType getTradeRequestType() throws FieldNotFound 
  { org.quickfix.field.TradeRequestType value = new org.quickfix.field.TradeRequestType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MatchStatus value) 
  { setField(value); } 
  public org.quickfix.field.MatchStatus get(org.quickfix.field.MatchStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound 
  { org.quickfix.field.MatchStatus value = new org.quickfix.field.MatchStatus(); 
    getField(value); return value; } 

public static class NoDates extends Group { 
  public NoDates() { 
    super(580, 60, 
    new int[] { 
               75, 
               60, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound 
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
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

  public void set(org.quickfix.field.TradeInputSource value) 
  { setField(value); } 
  public org.quickfix.field.TradeInputSource get(org.quickfix.field.TradeInputSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeInputSource getTradeInputSource() throws FieldNotFound 
  { org.quickfix.field.TradeInputSource value = new org.quickfix.field.TradeInputSource(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeInputDevice value) 
  { setField(value); } 
  public org.quickfix.field.TradeInputDevice get(org.quickfix.field.TradeInputDevice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeInputDevice getTradeInputDevice() throws FieldNotFound 
  { org.quickfix.field.TradeInputDevice value = new org.quickfix.field.TradeInputDevice(); 
    getField(value); return value; } 
} 
