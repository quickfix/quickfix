package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class MarketDataSnapshotFullRefresh extends Message 
{ 

  public MarketDataSnapshotFullRefresh() 
  { 
    getHeader().setField(new MsgType("W")); 
  } 

  public void set(org.quickfix.field.MDReqID value) 
  { setField(value); } 
  public org.quickfix.field.MDReqID get(org.quickfix.field.MDReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDReqID getMDReqID() throws FieldNotFound 
  { org.quickfix.field.MDReqID value = new org.quickfix.field.MDReqID(); 
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

  public void set(org.quickfix.field.TotalVolumeTraded value) 
  { setField(value); } 
  public org.quickfix.field.TotalVolumeTraded get(org.quickfix.field.TotalVolumeTraded value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalVolumeTraded getTotalVolumeTraded() throws FieldNotFound 
  { org.quickfix.field.TotalVolumeTraded value = new org.quickfix.field.TotalVolumeTraded(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalVolumeTradedDate value) 
  { setField(value); } 
  public org.quickfix.field.TotalVolumeTradedDate get(org.quickfix.field.TotalVolumeTradedDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalVolumeTradedDate getTotalVolumeTradedDate() throws FieldNotFound 
  { org.quickfix.field.TotalVolumeTradedDate value = new org.quickfix.field.TotalVolumeTradedDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalVolumeTradedTime value) 
  { setField(value); } 
  public org.quickfix.field.TotalVolumeTradedTime get(org.quickfix.field.TotalVolumeTradedTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalVolumeTradedTime getTotalVolumeTradedTime() throws FieldNotFound 
  { org.quickfix.field.TotalVolumeTradedTime value = new org.quickfix.field.TotalVolumeTradedTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NetChgPrevDay value) 
  { setField(value); } 
  public org.quickfix.field.NetChgPrevDay get(org.quickfix.field.NetChgPrevDay value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetChgPrevDay getNetChgPrevDay() throws FieldNotFound 
  { org.quickfix.field.NetChgPrevDay value = new org.quickfix.field.NetChgPrevDay(); 
    getField(value); return value; } 

public static class NoMDEntries extends Group { 
  public NoMDEntries() { 
    super(268, 15, 
    new int[] { 
               269, 
               270, 
               15, 
               271, 
               272, 
               273, 
               274, 
               275, 
               336, 
               625, 
               276, 
               277, 
               282, 
               283, 
               284, 
               286, 
               59, 
               432, 
               126, 
               110, 
               18, 
               287, 
               37, 
               299, 
               288, 
               289, 
               346, 
               290, 
               546, 
               58, 
               354, 
               355, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.MDEntryType value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryType get(org.quickfix.field.MDEntryType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryType getMDEntryType() throws FieldNotFound 
  { org.quickfix.field.MDEntryType value = new org.quickfix.field.MDEntryType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryPx value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryPx get(org.quickfix.field.MDEntryPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryPx getMDEntryPx() throws FieldNotFound 
  { org.quickfix.field.MDEntryPx value = new org.quickfix.field.MDEntryPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntrySize value) 
  { setField(value); } 
  public org.quickfix.field.MDEntrySize get(org.quickfix.field.MDEntrySize value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntrySize getMDEntrySize() throws FieldNotFound 
  { org.quickfix.field.MDEntrySize value = new org.quickfix.field.MDEntrySize(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryDate value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryDate get(org.quickfix.field.MDEntryDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryDate getMDEntryDate() throws FieldNotFound 
  { org.quickfix.field.MDEntryDate value = new org.quickfix.field.MDEntryDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryTime value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryTime get(org.quickfix.field.MDEntryTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryTime getMDEntryTime() throws FieldNotFound 
  { org.quickfix.field.MDEntryTime value = new org.quickfix.field.MDEntryTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TickDirection value) 
  { setField(value); } 
  public org.quickfix.field.TickDirection get(org.quickfix.field.TickDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TickDirection getTickDirection() throws FieldNotFound 
  { org.quickfix.field.TickDirection value = new org.quickfix.field.TickDirection(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDMkt value) 
  { setField(value); } 
  public org.quickfix.field.MDMkt get(org.quickfix.field.MDMkt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDMkt getMDMkt() throws FieldNotFound 
  { org.quickfix.field.MDMkt value = new org.quickfix.field.MDMkt(); 
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

  public void set(org.quickfix.field.QuoteCondition value) 
  { setField(value); } 
  public org.quickfix.field.QuoteCondition get(org.quickfix.field.QuoteCondition value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteCondition getQuoteCondition() throws FieldNotFound 
  { org.quickfix.field.QuoteCondition value = new org.quickfix.field.QuoteCondition(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeCondition value) 
  { setField(value); } 
  public org.quickfix.field.TradeCondition get(org.quickfix.field.TradeCondition value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeCondition getTradeCondition() throws FieldNotFound 
  { org.quickfix.field.TradeCondition value = new org.quickfix.field.TradeCondition(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryOriginator value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryOriginator get(org.quickfix.field.MDEntryOriginator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryOriginator getMDEntryOriginator() throws FieldNotFound 
  { org.quickfix.field.MDEntryOriginator value = new org.quickfix.field.MDEntryOriginator(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LocationID value) 
  { setField(value); } 
  public org.quickfix.field.LocationID get(org.quickfix.field.LocationID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocationID getLocationID() throws FieldNotFound 
  { org.quickfix.field.LocationID value = new org.quickfix.field.LocationID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DeskID value) 
  { setField(value); } 
  public org.quickfix.field.DeskID get(org.quickfix.field.DeskID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DeskID getDeskID() throws FieldNotFound 
  { org.quickfix.field.DeskID value = new org.quickfix.field.DeskID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OpenCloseSettleFlag value) 
  { setField(value); } 
  public org.quickfix.field.OpenCloseSettleFlag get(org.quickfix.field.OpenCloseSettleFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OpenCloseSettleFlag getOpenCloseSettleFlag() throws FieldNotFound 
  { org.quickfix.field.OpenCloseSettleFlag value = new org.quickfix.field.OpenCloseSettleFlag(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TimeInForce value) 
  { setField(value); } 
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound 
  { org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExpireDate value) 
  { setField(value); } 
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound 
  { org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MinQty value) 
  { setField(value); } 
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound 
  { org.quickfix.field.MinQty value = new org.quickfix.field.MinQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecInst value) 
  { setField(value); } 
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound 
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SellerDays value) 
  { setField(value); } 
  public org.quickfix.field.SellerDays get(org.quickfix.field.SellerDays value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SellerDays getSellerDays() throws FieldNotFound 
  { org.quickfix.field.SellerDays value = new org.quickfix.field.SellerDays(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.QuoteEntryID value) 
  { setField(value); } 
  public org.quickfix.field.QuoteEntryID get(org.quickfix.field.QuoteEntryID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QuoteEntryID getQuoteEntryID() throws FieldNotFound 
  { org.quickfix.field.QuoteEntryID value = new org.quickfix.field.QuoteEntryID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryBuyer value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryBuyer get(org.quickfix.field.MDEntryBuyer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryBuyer getMDEntryBuyer() throws FieldNotFound 
  { org.quickfix.field.MDEntryBuyer value = new org.quickfix.field.MDEntryBuyer(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntrySeller value) 
  { setField(value); } 
  public org.quickfix.field.MDEntrySeller get(org.quickfix.field.MDEntrySeller value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntrySeller getMDEntrySeller() throws FieldNotFound 
  { org.quickfix.field.MDEntrySeller value = new org.quickfix.field.MDEntrySeller(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NumberOfOrders value) 
  { setField(value); } 
  public org.quickfix.field.NumberOfOrders get(org.quickfix.field.NumberOfOrders value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NumberOfOrders getNumberOfOrders() throws FieldNotFound 
  { org.quickfix.field.NumberOfOrders value = new org.quickfix.field.NumberOfOrders(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MDEntryPositionNo value) 
  { setField(value); } 
  public org.quickfix.field.MDEntryPositionNo get(org.quickfix.field.MDEntryPositionNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MDEntryPositionNo getMDEntryPositionNo() throws FieldNotFound 
  { org.quickfix.field.MDEntryPositionNo value = new org.quickfix.field.MDEntryPositionNo(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Scope value) 
  { setField(value); } 
  public org.quickfix.field.Scope get(org.quickfix.field.Scope value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Scope getScope() throws FieldNotFound 
  { org.quickfix.field.Scope value = new org.quickfix.field.Scope(); 
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
} 
