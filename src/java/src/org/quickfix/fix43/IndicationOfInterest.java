package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class IndicationOfInterest extends Message 
{ 

  public IndicationOfInterest() 
  { 
    getHeader().setField(new MsgType("6")); 
  } 
  public IndicationOfInterest(    
    org.quickfix.field.IOIid aIOIid,    
    org.quickfix.field.IOITransType aIOITransType,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.IOIQty aIOIQty ) 
  {  
    getHeader().setField(new MsgType("6")); 
    set(aIOIid); 
    set(aIOITransType); 
    set(aSide); 
    set(aIOIQty);  
  } 

  public void set(org.quickfix.field.IOIid value) 
  { setField(value); } 
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound 
  { org.quickfix.field.IOIid value = new org.quickfix.field.IOIid(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOITransType value) 
  { setField(value); } 
  public org.quickfix.field.IOITransType get(org.quickfix.field.IOITransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOITransType getIOITransType() throws FieldNotFound 
  { org.quickfix.field.IOITransType value = new org.quickfix.field.IOITransType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOIRefID value) 
  { setField(value); } 
  public org.quickfix.field.IOIRefID get(org.quickfix.field.IOIRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIRefID getIOIRefID() throws FieldNotFound 
  { org.quickfix.field.IOIRefID value = new org.quickfix.field.IOIRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuantityType value) 
  { setField(value); } 
  public org.quickfix.field.QuantityType get(org.quickfix.field.QuantityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuantityType getQuantityType() throws FieldNotFound 
  { org.quickfix.field.QuantityType value = new org.quickfix.field.QuantityType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOIQty value) 
  { setField(value); } 
  public org.quickfix.field.IOIQty get(org.quickfix.field.IOIQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIQty getIOIQty() throws FieldNotFound 
  { org.quickfix.field.IOIQty value = new org.quickfix.field.IOIQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PriceType value) 
  { setField(value); } 
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound 
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ValidUntilTime value) 
  { setField(value); } 
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound 
  { org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOIQltyInd value) 
  { setField(value); } 
  public org.quickfix.field.IOIQltyInd get(org.quickfix.field.IOIQltyInd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIQltyInd getIOIQltyInd() throws FieldNotFound 
  { org.quickfix.field.IOIQltyInd value = new org.quickfix.field.IOIQltyInd(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IOINaturalFlag value) 
  { setField(value); } 
  public org.quickfix.field.IOINaturalFlag get(org.quickfix.field.IOINaturalFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOINaturalFlag getIOINaturalFlag() throws FieldNotFound 
  { org.quickfix.field.IOINaturalFlag value = new org.quickfix.field.IOINaturalFlag(); 
    getField(value); return value; } 

public static class NoIOIQualifiers extends Group { 
  public NoIOIQualifiers() { 
    super(199, 104, 
    new int[] { 
               104, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.IOIQualifier value) 
  { setField(value); } 
  public org.quickfix.field.IOIQualifier get(org.quickfix.field.IOIQualifier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IOIQualifier getIOIQualifier() throws FieldNotFound 
  { org.quickfix.field.IOIQualifier value = new org.quickfix.field.IOIQualifier(); 
    getField(value); return value; } 

} 

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

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.URLLink value) 
  { setField(value); } 
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound 
  { org.quickfix.field.URLLink value = new org.quickfix.field.URLLink(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.RoutingID value) 
  { setField(value); } 
  public org.quickfix.field.RoutingID get(org.quickfix.field.RoutingID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoutingID getRoutingID() throws FieldNotFound 
  { org.quickfix.field.RoutingID value = new org.quickfix.field.RoutingID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.Benchmark value) 
  { setField(value); } 
  public org.quickfix.field.Benchmark get(org.quickfix.field.Benchmark value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Benchmark getBenchmark() throws FieldNotFound 
  { org.quickfix.field.Benchmark value = new org.quickfix.field.Benchmark(); 
    getField(value); return value; } 
} 
