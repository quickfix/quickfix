package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class BidResponse extends Message 
{ 

  public BidResponse() 
  { 
    getHeader().setField(new MsgType("l")); 
  } 

  public void set(org.quickfix.field.BidID value) 
  { setField(value); } 
  public org.quickfix.field.BidID get(org.quickfix.field.BidID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidID getBidID() throws FieldNotFound 
  { org.quickfix.field.BidID value = new org.quickfix.field.BidID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BidID field) 
  { return isSetField(field); } 
  public boolean isSetBidID() 
  { return isSetField(390); } 

  public void set(org.quickfix.field.ClientBidID value) 
  { setField(value); } 
  public org.quickfix.field.ClientBidID get(org.quickfix.field.ClientBidID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClientBidID getClientBidID() throws FieldNotFound 
  { org.quickfix.field.ClientBidID value = new org.quickfix.field.ClientBidID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClientBidID field) 
  { return isSetField(field); } 
  public boolean isSetClientBidID() 
  { return isSetField(391); } 
  public void set(org.quickfix.field.NoBidComponents value) 
  { setField(value); } 
  public org.quickfix.field.NoBidComponents get(org.quickfix.field.NoBidComponents value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoBidComponents getNoBidComponents() throws FieldNotFound 
  { org.quickfix.field.NoBidComponents value = new org.quickfix.field.NoBidComponents(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoBidComponents field) 
  { return isSetField(field); } 
  public boolean isSetNoBidComponents() 
  { return isSetField(420); } 

public static class NoBidComponents extends Group { 
  public NoBidComponents() { 
    super(420, 44, 
    new int[] { 
             38, 
             152, 
             516, 
             468, 
             469, 
               66, 
               421, 
               54, 
               44, 
               423, 
               406, 
               430, 
               63, 
               64, 
               336, 
               625, 
               58, 
               354, 
               355, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ListID field) 
  { return isSetField(field); } 
  public boolean isSetListID() 
  { return isSetField(66); } 

  public void set(org.quickfix.field.Country value) 
  { setField(value); } 
  public org.quickfix.field.Country get(org.quickfix.field.Country value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Country getCountry() throws FieldNotFound 
  { org.quickfix.field.Country value = new org.quickfix.field.Country(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Country field) 
  { return isSetField(field); } 
  public boolean isSetCountry() 
  { return isSetField(421); } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Side field) 
  { return isSetField(field); } 
  public boolean isSetSide() 
  { return isSetField(54); } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Price field) 
  { return isSetField(field); } 
  public boolean isSetPrice() 
  { return isSetField(44); } 

  public void set(org.quickfix.field.PriceType value) 
  { setField(value); } 
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound 
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PriceType field) 
  { return isSetField(field); } 
  public boolean isSetPriceType() 
  { return isSetField(423); } 

  public void set(org.quickfix.field.FairValue value) 
  { setField(value); } 
  public org.quickfix.field.FairValue get(org.quickfix.field.FairValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FairValue getFairValue() throws FieldNotFound 
  { org.quickfix.field.FairValue value = new org.quickfix.field.FairValue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.FairValue field) 
  { return isSetField(field); } 
  public boolean isSetFairValue() 
  { return isSetField(406); } 

  public void set(org.quickfix.field.NetGrossInd value) 
  { setField(value); } 
  public org.quickfix.field.NetGrossInd get(org.quickfix.field.NetGrossInd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetGrossInd getNetGrossInd() throws FieldNotFound 
  { org.quickfix.field.NetGrossInd value = new org.quickfix.field.NetGrossInd(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NetGrossInd field) 
  { return isSetField(field); } 
  public boolean isSetNetGrossInd() 
  { return isSetField(430); } 

  public void set(org.quickfix.field.SettlType value) 
  { setField(value); } 
  public org.quickfix.field.SettlType get(org.quickfix.field.SettlType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlType getSettlType() throws FieldNotFound 
  { org.quickfix.field.SettlType value = new org.quickfix.field.SettlType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlType field) 
  { return isSetField(field); } 
  public boolean isSetSettlType() 
  { return isSetField(63); } 

  public void set(org.quickfix.field.SettlDate value) 
  { setField(value); } 
  public org.quickfix.field.SettlDate get(org.quickfix.field.SettlDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlDate getSettlDate() throws FieldNotFound 
  { org.quickfix.field.SettlDate value = new org.quickfix.field.SettlDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlDate field) 
  { return isSetField(field); } 
  public boolean isSetSettlDate() 
  { return isSetField(64); } 

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

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
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

  public void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound 
  { org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderQty field) 
  { return isSetField(field); } 
  public boolean isSetOrderQty() 
  { return isSetField(38); } 
  public void set(org.quickfix.field.CashOrderQty value) 
  { setField(value); } 
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound 
  { org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashOrderQty field) 
  { return isSetField(field); } 
  public boolean isSetCashOrderQty() 
  { return isSetField(152); } 
  public void set(org.quickfix.field.OrderPercent value) 
  { setField(value); } 
  public org.quickfix.field.OrderPercent get(org.quickfix.field.OrderPercent value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderPercent getOrderPercent() throws FieldNotFound 
  { org.quickfix.field.OrderPercent value = new org.quickfix.field.OrderPercent(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderPercent field) 
  { return isSetField(field); } 
  public boolean isSetOrderPercent() 
  { return isSetField(516); } 
  public void set(org.quickfix.field.RoundingDirection value) 
  { setField(value); } 
  public org.quickfix.field.RoundingDirection get(org.quickfix.field.RoundingDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoundingDirection getRoundingDirection() throws FieldNotFound 
  { org.quickfix.field.RoundingDirection value = new org.quickfix.field.RoundingDirection(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RoundingDirection field) 
  { return isSetField(field); } 
  public boolean isSetRoundingDirection() 
  { return isSetField(468); } 
  public void set(org.quickfix.field.RoundingModulus value) 
  { setField(value); } 
  public org.quickfix.field.RoundingModulus get(org.quickfix.field.RoundingModulus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound 
  { org.quickfix.field.RoundingModulus value = new org.quickfix.field.RoundingModulus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RoundingModulus field) 
  { return isSetField(field); } 
  public boolean isSetRoundingModulus() 
  { return isSetField(469); } 
} 
} 
