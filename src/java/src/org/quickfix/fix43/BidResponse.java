package org.quickfix.fix43; 
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

  public void set(org.quickfix.field.ClientBidID value) 
  { setField(value); } 
  public org.quickfix.field.ClientBidID get(org.quickfix.field.ClientBidID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClientBidID getClientBidID() throws FieldNotFound 
  { org.quickfix.field.ClientBidID value = new org.quickfix.field.ClientBidID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NoBidComponents value) 
  { setField(value); } 
  public org.quickfix.field.NoBidComponents get(org.quickfix.field.NoBidComponents value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoBidComponents getNoBidComponents() throws FieldNotFound 
  { org.quickfix.field.NoBidComponents value = new org.quickfix.field.NoBidComponents(); 
    getField(value); return value; } 

public static class NoBidComponents extends Group { 
  public NoBidComponents() { 
    super(420, 44, 
    new int[] { 
             12, 
             13, 
             479, 
             497, 
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

  public void set(org.quickfix.field.Country value) 
  { setField(value); } 
  public org.quickfix.field.Country get(org.quickfix.field.Country value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Country getCountry() throws FieldNotFound 
  { org.quickfix.field.Country value = new org.quickfix.field.Country(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Price value) 
  { setField(value); } 
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price getPrice() throws FieldNotFound 
  { org.quickfix.field.Price value = new org.quickfix.field.Price(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PriceType value) 
  { setField(value); } 
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound 
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.FairValue value) 
  { setField(value); } 
  public org.quickfix.field.FairValue get(org.quickfix.field.FairValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FairValue getFairValue() throws FieldNotFound 
  { org.quickfix.field.FairValue value = new org.quickfix.field.FairValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NetGrossInd value) 
  { setField(value); } 
  public org.quickfix.field.NetGrossInd get(org.quickfix.field.NetGrossInd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetGrossInd getNetGrossInd() throws FieldNotFound 
  { org.quickfix.field.NetGrossInd value = new org.quickfix.field.NetGrossInd(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlmntTyp value) 
  { setField(value); } 
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound 
  { org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.FutSettDate value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound 
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate(); 
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

  public void set(org.quickfix.field.Commission value) 
  { setField(value); } 
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Commission getCommission() throws FieldNotFound 
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.CommType value) 
  { setField(value); } 
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CommType getCommType() throws FieldNotFound 
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.CommCurrency value) 
  { setField(value); } 
  public org.quickfix.field.CommCurrency get(org.quickfix.field.CommCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound 
  { org.quickfix.field.CommCurrency value = new org.quickfix.field.CommCurrency(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.FundRenewWaiv value) 
  { setField(value); } 
  public org.quickfix.field.FundRenewWaiv get(org.quickfix.field.FundRenewWaiv value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound 
  { org.quickfix.field.FundRenewWaiv value = new org.quickfix.field.FundRenewWaiv(); 
    getField(value); return value; } 
} 
} 
