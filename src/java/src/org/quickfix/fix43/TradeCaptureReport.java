package org.quickfix.fix43; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class TradeCaptureReport extends Message 
{ 

  public TradeCaptureReport() 
  { 
    getHeader().setField(new MsgType("AE")); 
  } 
  public TradeCaptureReport(    
    org.quickfix.field.TradeReportID aTradeReportID,    
    org.quickfix.field.ExecType aExecType,    
    org.quickfix.field.PreviouslyReported aPreviouslyReported,    
    org.quickfix.field.LastQty aLastQty,    
    org.quickfix.field.LastPx aLastPx,    
    org.quickfix.field.TradeDate aTradeDate,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("AE")); 
    set(aTradeReportID); 
    set(aExecType); 
    set(aPreviouslyReported); 
    set(aLastQty); 
    set(aLastPx); 
    set(aTradeDate); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.TradeReportID value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportID get(org.quickfix.field.TradeReportID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportID getTradeReportID() throws FieldNotFound 
  { org.quickfix.field.TradeReportID value = new org.quickfix.field.TradeReportID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeReportTransType value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportTransType get(org.quickfix.field.TradeReportTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportTransType getTradeReportTransType() throws FieldNotFound 
  { org.quickfix.field.TradeReportTransType value = new org.quickfix.field.TradeReportTransType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeRequestID value) 
  { setField(value); } 
  public org.quickfix.field.TradeRequestID get(org.quickfix.field.TradeRequestID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeRequestID getTradeRequestID() throws FieldNotFound 
  { org.quickfix.field.TradeRequestID value = new org.quickfix.field.TradeRequestID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecType value) 
  { setField(value); } 
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound 
  { org.quickfix.field.ExecType value = new org.quickfix.field.ExecType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeReportRefID value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportRefID get(org.quickfix.field.TradeReportRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportRefID getTradeReportRefID() throws FieldNotFound 
  { org.quickfix.field.TradeReportRefID value = new org.quickfix.field.TradeReportRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryExecID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryExecID get(org.quickfix.field.SecondaryExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound 
  { org.quickfix.field.SecondaryExecID value = new org.quickfix.field.SecondaryExecID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExecRestatementReason value) 
  { setField(value); } 
  public org.quickfix.field.ExecRestatementReason get(org.quickfix.field.ExecRestatementReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound 
  { org.quickfix.field.ExecRestatementReason value = new org.quickfix.field.ExecRestatementReason(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PreviouslyReported value) 
  { setField(value); } 
  public org.quickfix.field.PreviouslyReported get(org.quickfix.field.PreviouslyReported value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PreviouslyReported getPreviouslyReported() throws FieldNotFound 
  { org.quickfix.field.PreviouslyReported value = new org.quickfix.field.PreviouslyReported(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastQty value) 
  { setField(value); } 
  public org.quickfix.field.LastQty get(org.quickfix.field.LastQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastQty getLastQty() throws FieldNotFound 
  { org.quickfix.field.LastQty value = new org.quickfix.field.LastQty(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastPx value) 
  { setField(value); } 
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound 
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastSpotRate value) 
  { setField(value); } 
  public org.quickfix.field.LastSpotRate get(org.quickfix.field.LastSpotRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound 
  { org.quickfix.field.LastSpotRate value = new org.quickfix.field.LastSpotRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastForwardPoints value) 
  { setField(value); } 
  public org.quickfix.field.LastForwardPoints get(org.quickfix.field.LastForwardPoints value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound 
  { org.quickfix.field.LastForwardPoints value = new org.quickfix.field.LastForwardPoints(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastMkt value) 
  { setField(value); } 
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound 
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.MatchStatus value) 
  { setField(value); } 
  public org.quickfix.field.MatchStatus get(org.quickfix.field.MatchStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound 
  { org.quickfix.field.MatchStatus value = new org.quickfix.field.MatchStatus(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MatchType value) 
  { setField(value); } 
  public org.quickfix.field.MatchType get(org.quickfix.field.MatchType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MatchType getMatchType() throws FieldNotFound 
  { org.quickfix.field.MatchType value = new org.quickfix.field.MatchType(); 
    getField(value); return value; } 

public static class NoSides extends Group { 
  public NoSides() { 
    super(552, 1, 
    new int[] { 
               54, 
               37, 
               198, 
               11, 
             453, 
             448, 
             447, 
             452, 
             523, 
               1, 
               581, 
               63, 
               64, 
               81, 
               575, 
               635, 
               578, 
               579, 
               15, 
               376, 
               377, 
               528, 
               529, 
               582, 
               483, 
               336, 
               625, 
             12, 
             13, 
             479, 
             497, 
               381, 
               157, 
               230, 
               158, 
               159, 
               238, 
               237, 
               118, 
               119, 
               120, 
               155, 
               156, 
               77, 
               58, 
               354, 
               355, 
               442, 
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

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecondaryOrderID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound 
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
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

  public void set(org.quickfix.field.ProcessCode value) 
  { setField(value); } 
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound 
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OddLot value) 
  { setField(value); } 
  public org.quickfix.field.OddLot get(org.quickfix.field.OddLot value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OddLot getOddLot() throws FieldNotFound 
  { org.quickfix.field.OddLot value = new org.quickfix.field.OddLot(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClearingFeeIndicator value) 
  { setField(value); } 
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound 
  { org.quickfix.field.ClearingFeeIndicator value = new org.quickfix.field.ClearingFeeIndicator(); 
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

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ComplianceID value) 
  { setField(value); } 
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound 
  { org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SolicitedFlag value) 
  { setField(value); } 
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound 
  { org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.OrderCapacity value = new org.quickfix.field.OrderCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OrderRestrictions value) 
  { setField(value); } 
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound 
  { org.quickfix.field.OrderRestrictions value = new org.quickfix.field.OrderRestrictions(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CustOrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransBkdTime value) 
  { setField(value); } 
  public org.quickfix.field.TransBkdTime get(org.quickfix.field.TransBkdTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransBkdTime getTransBkdTime() throws FieldNotFound 
  { org.quickfix.field.TransBkdTime value = new org.quickfix.field.TransBkdTime(); 
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

  public void set(org.quickfix.field.GrossTradeAmt value) 
  { setField(value); } 
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound 
  { org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NumDaysInterest value) 
  { setField(value); } 
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound 
  { org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ExDate value) 
  { setField(value); } 
  public org.quickfix.field.ExDate get(org.quickfix.field.ExDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDate getExDate() throws FieldNotFound 
  { org.quickfix.field.ExDate value = new org.quickfix.field.ExDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccruedInterestRate value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AccruedInterestAmt value) 
  { setField(value); } 
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound 
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Concession value) 
  { setField(value); } 
  public org.quickfix.field.Concession get(org.quickfix.field.Concession value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Concession getConcession() throws FieldNotFound 
  { org.quickfix.field.Concession value = new org.quickfix.field.Concession(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TotalTakedown value) 
  { setField(value); } 
  public org.quickfix.field.TotalTakedown get(org.quickfix.field.TotalTakedown value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound 
  { org.quickfix.field.TotalTakedown value = new org.quickfix.field.TotalTakedown(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NetMoney value) 
  { setField(value); } 
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound 
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrAmt value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound 
  { org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrency value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrFxRate value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrFxRate get(org.quickfix.field.SettlCurrFxRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRate value = new org.quickfix.field.SettlCurrFxRate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlCurrFxRateCalc value) 
  { setField(value); } 
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound 
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound 
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect(); 
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

  public void set(org.quickfix.field.MultiLegReportingType value) 
  { setField(value); } 
  public org.quickfix.field.MultiLegReportingType get(org.quickfix.field.MultiLegReportingType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound 
  { org.quickfix.field.MultiLegReportingType value = new org.quickfix.field.MultiLegReportingType(); 
    getField(value); return value; } 


public static class NoClearingInstructions extends Group { 
  public NoClearingInstructions() { 
    super(576, 137, 
    new int[] { 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ClearingInstruction value) 
  { setField(value); } 
  public org.quickfix.field.ClearingInstruction get(org.quickfix.field.ClearingInstruction value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound 
  { org.quickfix.field.ClearingInstruction value = new org.quickfix.field.ClearingInstruction(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeAmt value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound 
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeCurr value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound 
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeType value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound 
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType(); 
    getField(value); return value; } 

} 

public static class NoContAmts extends Group { 
  public NoContAmts() { 
    super(518, 137, 
    new int[] { 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ClearingInstruction value) 
  { setField(value); } 
  public org.quickfix.field.ClearingInstruction get(org.quickfix.field.ClearingInstruction value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound 
  { org.quickfix.field.ClearingInstruction value = new org.quickfix.field.ClearingInstruction(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeAmt value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound 
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeCurr value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound 
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeType value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound 
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType(); 
    getField(value); return value; } 

} 

public static class NoMiscFees extends Group { 
  public NoMiscFees() { 
    super(136, 137, 
    new int[] { 
               0 } 
); 
  } 
  public void set(org.quickfix.field.ClearingInstruction value) 
  { setField(value); } 
  public org.quickfix.field.ClearingInstruction get(org.quickfix.field.ClearingInstruction value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingInstruction getClearingInstruction() throws FieldNotFound 
  { org.quickfix.field.ClearingInstruction value = new org.quickfix.field.ClearingInstruction(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtType value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtType get(org.quickfix.field.ContAmtType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtType getContAmtType() throws FieldNotFound 
  { org.quickfix.field.ContAmtType value = new org.quickfix.field.ContAmtType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtValue value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtValue get(org.quickfix.field.ContAmtValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound 
  { org.quickfix.field.ContAmtValue value = new org.quickfix.field.ContAmtValue(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ContAmtCurr value) 
  { setField(value); } 
  public org.quickfix.field.ContAmtCurr get(org.quickfix.field.ContAmtCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound 
  { org.quickfix.field.ContAmtCurr value = new org.quickfix.field.ContAmtCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeAmt value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound 
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeCurr value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound 
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MiscFeeType value) 
  { setField(value); } 
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound 
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType(); 
    getField(value); return value; } 

} 
  public void set(org.quickfix.field.NoPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.PartyID value) 
  { setField(value); } 
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyID getPartyID() throws FieldNotFound 
  { org.quickfix.field.PartyID value = new org.quickfix.field.PartyID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.PartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.PartyRole value) 
  { setField(value); } 
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound 
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound 
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID(); 
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
