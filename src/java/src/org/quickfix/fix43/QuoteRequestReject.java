package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class QuoteRequestReject extends Message 
{ 

  public QuoteRequestReject() 
  { 
    getHeader().setField(new MsgType("AG")); 
  } 
  public QuoteRequestReject(    
    org.quickfix.field.QuoteReqID aQuoteReqID,    
    org.quickfix.field.QuoteRequestRejectReason aQuoteRequestRejectReason ) 
  {  
    getHeader().setField(new MsgType("AG")); 
    set(aQuoteReqID); 
    set(aQuoteRequestRejectReason);  
  } 

  public void set(org.quickfix.field.QuoteReqID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound 
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RFQReqID value) 
  { setField(value); } 
  public org.quickfix.field.RFQReqID get(org.quickfix.field.RFQReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RFQReqID getRFQReqID() throws FieldNotFound 
  { org.quickfix.field.RFQReqID value = new org.quickfix.field.RFQReqID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteRequestRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.QuoteRequestRejectReason get(org.quickfix.field.QuoteRequestRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteRequestRejectReason getQuoteRequestRejectReason() throws FieldNotFound 
  { org.quickfix.field.QuoteRequestRejectReason value = new org.quickfix.field.QuoteRequestRejectReason(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NoRelatedSym value) 
  { setField(value); } 
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound 
  { org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym(); 
    getField(value); return value; } 

public static class NoRelatedSym extends Group { 
  public NoRelatedSym() { 
    super(146, 15, 
    new int[] { 
               140, 
               303, 
               537, 
               336, 
               625, 
               229, 
               54, 
               465, 
               38, 
               152, 
               63, 
               64, 
               40, 
               193, 
               192, 
               126, 
               60, 
               15, 
             218, 
             220, 
             221, 
             222, 
               423, 
               44, 
               640, 
             235, 
             236, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.PrevClosePx value) 
  { setField(value); } 
  public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound 
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteRequestType value) 
  { setField(value); } 
  public org.quickfix.field.QuoteRequestType get(org.quickfix.field.QuoteRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteRequestType getQuoteRequestType() throws FieldNotFound 
  { org.quickfix.field.QuoteRequestType value = new org.quickfix.field.QuoteRequestType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteType value) 
  { setField(value); } 
  public org.quickfix.field.QuoteType get(org.quickfix.field.QuoteType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteType getQuoteType() throws FieldNotFound 
  { org.quickfix.field.QuoteType value = new org.quickfix.field.QuoteType(); 
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

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
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

  public void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
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

  public void set(org.quickfix.field.Price2 value) 
  { setField(value); } 
  public org.quickfix.field.Price2 get(org.quickfix.field.Price2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Price2 getPrice2() throws FieldNotFound 
  { org.quickfix.field.Price2 value = new org.quickfix.field.Price2(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoStipulations value) 
  { setField(value); } 
  public org.quickfix.field.NoStipulations get(org.quickfix.field.NoStipulations value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound 
  { org.quickfix.field.NoStipulations value = new org.quickfix.field.NoStipulations(); 
    getField(value); return value; } 

public static class NoStipulations extends Group { 
  public NoStipulations() { 
    super(232, 233, 
    new int[] { 
               233, 
               234, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.StipulationType value) 
  { setField(value); } 
  public org.quickfix.field.StipulationType get(org.quickfix.field.StipulationType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StipulationType getStipulationType() throws FieldNotFound 
  { org.quickfix.field.StipulationType value = new org.quickfix.field.StipulationType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.StipulationValue value) 
  { setField(value); } 
  public org.quickfix.field.StipulationValue get(org.quickfix.field.StipulationValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound 
  { org.quickfix.field.StipulationValue value = new org.quickfix.field.StipulationValue(); 
    getField(value); return value; } 

} 
  public void set(org.quickfix.field.Spread value) 
  { setField(value); } 
  public org.quickfix.field.Spread get(org.quickfix.field.Spread value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Spread getSpread() throws FieldNotFound 
  { org.quickfix.field.Spread value = new org.quickfix.field.Spread(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.BenchmarkCurveCurrency value) 
  { setField(value); } 
  public org.quickfix.field.BenchmarkCurveCurrency get(org.quickfix.field.BenchmarkCurveCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound 
  { org.quickfix.field.BenchmarkCurveCurrency value = new org.quickfix.field.BenchmarkCurveCurrency(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.BenchmarkCurveName value) 
  { setField(value); } 
  public org.quickfix.field.BenchmarkCurveName get(org.quickfix.field.BenchmarkCurveName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound 
  { org.quickfix.field.BenchmarkCurveName value = new org.quickfix.field.BenchmarkCurveName(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.BenchmarkCurvePoint value) 
  { setField(value); } 
  public org.quickfix.field.BenchmarkCurvePoint get(org.quickfix.field.BenchmarkCurvePoint value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound 
  { org.quickfix.field.BenchmarkCurvePoint value = new org.quickfix.field.BenchmarkCurvePoint(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.YieldType value) 
  { setField(value); } 
  public org.quickfix.field.YieldType get(org.quickfix.field.YieldType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.YieldType getYieldType() throws FieldNotFound 
  { org.quickfix.field.YieldType value = new org.quickfix.field.YieldType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.Yield value) 
  { setField(value); } 
  public org.quickfix.field.Yield get(org.quickfix.field.Yield value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Yield getYield() throws FieldNotFound 
  { org.quickfix.field.Yield value = new org.quickfix.field.Yield(); 
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
} 
