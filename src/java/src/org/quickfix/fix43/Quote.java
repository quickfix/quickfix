package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class Quote extends Message 
{ 

  public Quote() 
  { 
    getHeader().setField(new MsgType("S")); 
  } 
  public Quote(    
    org.quickfix.field.QuoteID aQuoteID ) 
  {  
    getHeader().setField(new MsgType("S")); 
    set(aQuoteID);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound 
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound 
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteType value) 
  { setField(value); } 
  public org.quickfix.field.QuoteType get(org.quickfix.field.QuoteType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteType getQuoteType() throws FieldNotFound 
  { org.quickfix.field.QuoteType value = new org.quickfix.field.QuoteType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteResponseLevel value) 
  { setField(value); } 
  public org.quickfix.field.QuoteResponseLevel get(org.quickfix.field.QuoteResponseLevel value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteResponseLevel getQuoteResponseLevel() throws FieldNotFound 
  { org.quickfix.field.QuoteResponseLevel value = new org.quickfix.field.QuoteResponseLevel(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound 
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType(); 
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

  public void set(org.quickfix.field.BidPx value) 
  { setField(value); } 
  public org.quickfix.field.BidPx get(org.quickfix.field.BidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidPx getBidPx() throws FieldNotFound 
  { org.quickfix.field.BidPx value = new org.quickfix.field.BidPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferPx value) 
  { setField(value); } 
  public org.quickfix.field.OfferPx get(org.quickfix.field.OfferPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferPx getOfferPx() throws FieldNotFound 
  { org.quickfix.field.OfferPx value = new org.quickfix.field.OfferPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MktBidPx value) 
  { setField(value); } 
  public org.quickfix.field.MktBidPx get(org.quickfix.field.MktBidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MktBidPx getMktBidPx() throws FieldNotFound 
  { org.quickfix.field.MktBidPx value = new org.quickfix.field.MktBidPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MktOfferPx value) 
  { setField(value); } 
  public org.quickfix.field.MktOfferPx get(org.quickfix.field.MktOfferPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MktOfferPx getMktOfferPx() throws FieldNotFound 
  { org.quickfix.field.MktOfferPx value = new org.quickfix.field.MktOfferPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MinBidSize value) 
  { setField(value); } 
  public org.quickfix.field.MinBidSize get(org.quickfix.field.MinBidSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MinBidSize getMinBidSize() throws FieldNotFound 
  { org.quickfix.field.MinBidSize value = new org.quickfix.field.MinBidSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidSize value) 
  { setField(value); } 
  public org.quickfix.field.BidSize get(org.quickfix.field.BidSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidSize getBidSize() throws FieldNotFound 
  { org.quickfix.field.BidSize value = new org.quickfix.field.BidSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MinOfferSize value) 
  { setField(value); } 
  public org.quickfix.field.MinOfferSize get(org.quickfix.field.MinOfferSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MinOfferSize getMinOfferSize() throws FieldNotFound 
  { org.quickfix.field.MinOfferSize value = new org.quickfix.field.MinOfferSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferSize value) 
  { setField(value); } 
  public org.quickfix.field.OfferSize get(org.quickfix.field.OfferSize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferSize getOfferSize() throws FieldNotFound 
  { org.quickfix.field.OfferSize value = new org.quickfix.field.OfferSize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ValidUntilTime value) 
  { setField(value); } 
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound 
  { org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.BidSpotRate get(org.quickfix.field.BidSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound 
  { org.quickfix.field.BidSpotRate value = new org.quickfix.field.BidSpotRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.OfferSpotRate get(org.quickfix.field.OfferSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound 
  { org.quickfix.field.OfferSpotRate value = new org.quickfix.field.OfferSpotRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.BidForwardPoints get(org.quickfix.field.BidForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound 
  { org.quickfix.field.BidForwardPoints value = new org.quickfix.field.BidForwardPoints(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.OfferForwardPoints get(org.quickfix.field.OfferForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound 
  { org.quickfix.field.OfferForwardPoints value = new org.quickfix.field.OfferForwardPoints(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MidPx value) 
  { setField(value); } 
  public org.quickfix.field.MidPx get(org.quickfix.field.MidPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MidPx getMidPx() throws FieldNotFound 
  { org.quickfix.field.MidPx value = new org.quickfix.field.MidPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidYield value) 
  { setField(value); } 
  public org.quickfix.field.BidYield get(org.quickfix.field.BidYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidYield getBidYield() throws FieldNotFound 
  { org.quickfix.field.BidYield value = new org.quickfix.field.BidYield(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MidYield value) 
  { setField(value); } 
  public org.quickfix.field.MidYield get(org.quickfix.field.MidYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MidYield getMidYield() throws FieldNotFound 
  { org.quickfix.field.MidYield value = new org.quickfix.field.MidYield(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferYield value) 
  { setField(value); } 
  public org.quickfix.field.OfferYield get(org.quickfix.field.OfferYield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferYield getOfferYield() throws FieldNotFound 
  { org.quickfix.field.OfferYield value = new org.quickfix.field.OfferYield(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
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

  public void set(org.quickfix.field.OrdType value) 
  { setField(value); } 
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound 
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.FutSettDate2 value) 
  { setField(value); } 
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound 
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderQty2 value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound 
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.BidForwardPoints2 value) 
  { setField(value); } 
  public org.quickfix.field.BidForwardPoints2 get(org.quickfix.field.BidForwardPoints2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BidForwardPoints2 getBidForwardPoints2() throws FieldNotFound 
  { org.quickfix.field.BidForwardPoints2 value = new org.quickfix.field.BidForwardPoints2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OfferForwardPoints2 value) 
  { setField(value); } 
  public org.quickfix.field.OfferForwardPoints2 get(org.quickfix.field.OfferForwardPoints2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OfferForwardPoints2 getOfferForwardPoints2() throws FieldNotFound 
  { org.quickfix.field.OfferForwardPoints2 value = new org.quickfix.field.OfferForwardPoints2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrBidFxRate value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrBidFxRate get(org.quickfix.field.SettlCurrBidFxRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrBidFxRate getSettlCurrBidFxRate() throws FieldNotFound 
  { org.quickfix.field.SettlCurrBidFxRate value = new org.quickfix.field.SettlCurrBidFxRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrOfferFxRate value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrOfferFxRate get(org.quickfix.field.SettlCurrOfferFxRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrOfferFxRate getSettlCurrOfferFxRate() throws FieldNotFound 
  { org.quickfix.field.SettlCurrOfferFxRate value = new org.quickfix.field.SettlCurrOfferFxRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrFxRateCalc value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CommType value) 
  { setField(value); } 
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CommType getCommType() throws FieldNotFound 
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Commission value) 
  { setField(value); } 
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Commission getCommission() throws FieldNotFound 
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CustOrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExDestination value) 
  { setField(value); } 
  public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound 
  { org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination(); 
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
