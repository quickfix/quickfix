package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class CrossOrderCancelRequest extends Message 
{ 

  public CrossOrderCancelRequest() 
  { 
    getHeader().setField(new MsgType("u")); 
  } 
  public CrossOrderCancelRequest(    
    org.quickfix.field.CrossID aCrossID,    
    org.quickfix.field.OrigCrossID aOrigCrossID,    
    org.quickfix.field.CrossType aCrossType,    
    org.quickfix.field.CrossPrioritization aCrossPrioritization,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("u")); 
    set(aCrossID); 
    set(aOrigCrossID); 
    set(aCrossType); 
    set(aCrossPrioritization); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CrossID value) 
  { setField(value); } 
  public org.quickfix.field.CrossID get(org.quickfix.field.CrossID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CrossID getCrossID() throws FieldNotFound 
  { org.quickfix.field.CrossID value = new org.quickfix.field.CrossID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrigCrossID value) 
  { setField(value); } 
  public org.quickfix.field.OrigCrossID get(org.quickfix.field.OrigCrossID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigCrossID getOrigCrossID() throws FieldNotFound 
  { org.quickfix.field.OrigCrossID value = new org.quickfix.field.OrigCrossID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CrossType value) 
  { setField(value); } 
  public org.quickfix.field.CrossType get(org.quickfix.field.CrossType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CrossType getCrossType() throws FieldNotFound 
  { org.quickfix.field.CrossType value = new org.quickfix.field.CrossType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CrossPrioritization value) 
  { setField(value); } 
  public org.quickfix.field.CrossPrioritization get(org.quickfix.field.CrossPrioritization value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CrossPrioritization getCrossPrioritization() throws FieldNotFound 
  { org.quickfix.field.CrossPrioritization value = new org.quickfix.field.CrossPrioritization(); 
    getField(value); return value; } 

public static class NoSides extends Group { 
  public NoSides() { 
    super(552, 11, 
    new int[] { 
               54, 
               41, 
               11, 
               526, 
               583, 
               586, 
               229, 
             38, 
             152, 
             516, 
             468, 
             469, 
               376, 
               58, 
               354, 
               355, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound 
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdLinkID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound 
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrigOrdModTime value) 
  { setField(value); } 
  public org.quickfix.field.OrigOrdModTime get(org.quickfix.field.OrigOrdModTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigOrdModTime getOrigOrdModTime() throws FieldNotFound 
  { org.quickfix.field.OrigOrdModTime value = new org.quickfix.field.OrigOrdModTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ComplianceID value) 
  { setField(value); } 
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound 
  { org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID(); 
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

  public void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound 
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.CashOrderQty value) 
  { setField(value); } 
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound 
  { org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.OrderPercent value) 
  { setField(value); } 
  public org.quickfix.field.OrderPercent get(org.quickfix.field.OrderPercent value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderPercent getOrderPercent() throws FieldNotFound 
  { org.quickfix.field.OrderPercent value = new org.quickfix.field.OrderPercent(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.RoundingDirection value) 
  { setField(value); } 
  public org.quickfix.field.RoundingDirection get(org.quickfix.field.RoundingDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoundingDirection getRoundingDirection() throws FieldNotFound 
  { org.quickfix.field.RoundingDirection value = new org.quickfix.field.RoundingDirection(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.RoundingModulus value) 
  { setField(value); } 
  public org.quickfix.field.RoundingModulus get(org.quickfix.field.RoundingModulus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound 
  { org.quickfix.field.RoundingModulus value = new org.quickfix.field.RoundingModulus(); 
    getField(value); return value; } 
} 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
} 
