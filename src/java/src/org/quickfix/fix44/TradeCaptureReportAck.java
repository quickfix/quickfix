package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class TradeCaptureReportAck extends Message 
{ 

  public TradeCaptureReportAck() 
  { 
    getHeader().setField(new MsgType("AR")); 
  } 
  public TradeCaptureReportAck(    
    org.quickfix.field.TradeReportID aTradeReportID,    
    org.quickfix.field.ExecType aExecType ) 
  {  
    getHeader().setField(new MsgType("AR")); 
    set(aTradeReportID); 
    set(aExecType);  
  } 

  public void set(org.quickfix.field.TradeReportID value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportID get(org.quickfix.field.TradeReportID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportID getTradeReportID() throws FieldNotFound 
  { org.quickfix.field.TradeReportID value = new org.quickfix.field.TradeReportID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeReportID field) 
  { return isSetField(field); } 
  public boolean isSetTradeReportID() 
  { return isSetField(571); } 

  public void set(org.quickfix.field.TradeReportTransType value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportTransType get(org.quickfix.field.TradeReportTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportTransType getTradeReportTransType() throws FieldNotFound 
  { org.quickfix.field.TradeReportTransType value = new org.quickfix.field.TradeReportTransType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeReportTransType field) 
  { return isSetField(field); } 
  public boolean isSetTradeReportTransType() 
  { return isSetField(487); } 

  public void set(org.quickfix.field.TradeReportType value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportType get(org.quickfix.field.TradeReportType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportType getTradeReportType() throws FieldNotFound 
  { org.quickfix.field.TradeReportType value = new org.quickfix.field.TradeReportType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeReportType field) 
  { return isSetField(field); } 
  public boolean isSetTradeReportType() 
  { return isSetField(856); } 

  public void set(org.quickfix.field.TrdType value) 
  { setField(value); } 
  public org.quickfix.field.TrdType get(org.quickfix.field.TrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdType getTrdType() throws FieldNotFound 
  { org.quickfix.field.TrdType value = new org.quickfix.field.TrdType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdType field) 
  { return isSetField(field); } 
  public boolean isSetTrdType() 
  { return isSetField(828); } 

  public void set(org.quickfix.field.TrdSubType value) 
  { setField(value); } 
  public org.quickfix.field.TrdSubType get(org.quickfix.field.TrdSubType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdSubType getTrdSubType() throws FieldNotFound 
  { org.quickfix.field.TrdSubType value = new org.quickfix.field.TrdSubType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdSubType field) 
  { return isSetField(field); } 
  public boolean isSetTrdSubType() 
  { return isSetField(829); } 

  public void set(org.quickfix.field.SecondaryTrdType value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryTrdType get(org.quickfix.field.SecondaryTrdType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryTrdType getSecondaryTrdType() throws FieldNotFound 
  { org.quickfix.field.SecondaryTrdType value = new org.quickfix.field.SecondaryTrdType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryTrdType field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryTrdType() 
  { return isSetField(855); } 

  public void set(org.quickfix.field.TransferReason value) 
  { setField(value); } 
  public org.quickfix.field.TransferReason get(org.quickfix.field.TransferReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransferReason getTransferReason() throws FieldNotFound 
  { org.quickfix.field.TransferReason value = new org.quickfix.field.TransferReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransferReason field) 
  { return isSetField(field); } 
  public boolean isSetTransferReason() 
  { return isSetField(830); } 

  public void set(org.quickfix.field.ExecType value) 
  { setField(value); } 
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound 
  { org.quickfix.field.ExecType value = new org.quickfix.field.ExecType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecType field) 
  { return isSetField(field); } 
  public boolean isSetExecType() 
  { return isSetField(150); } 

  public void set(org.quickfix.field.TradeReportRefID value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportRefID get(org.quickfix.field.TradeReportRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportRefID getTradeReportRefID() throws FieldNotFound 
  { org.quickfix.field.TradeReportRefID value = new org.quickfix.field.TradeReportRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeReportRefID field) 
  { return isSetField(field); } 
  public boolean isSetTradeReportRefID() 
  { return isSetField(572); } 

  public void set(org.quickfix.field.SecondaryTradeReportRefID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryTradeReportRefID get(org.quickfix.field.SecondaryTradeReportRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryTradeReportRefID getSecondaryTradeReportRefID() throws FieldNotFound 
  { org.quickfix.field.SecondaryTradeReportRefID value = new org.quickfix.field.SecondaryTradeReportRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryTradeReportRefID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryTradeReportRefID() 
  { return isSetField(881); } 

  public void set(org.quickfix.field.TrdRptStatus value) 
  { setField(value); } 
  public org.quickfix.field.TrdRptStatus get(org.quickfix.field.TrdRptStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdRptStatus getTrdRptStatus() throws FieldNotFound 
  { org.quickfix.field.TrdRptStatus value = new org.quickfix.field.TrdRptStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdRptStatus field) 
  { return isSetField(field); } 
  public boolean isSetTrdRptStatus() 
  { return isSetField(939); } 

  public void set(org.quickfix.field.TradeReportRejectReason value) 
  { setField(value); } 
  public org.quickfix.field.TradeReportRejectReason get(org.quickfix.field.TradeReportRejectReason value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeReportRejectReason getTradeReportRejectReason() throws FieldNotFound 
  { org.quickfix.field.TradeReportRejectReason value = new org.quickfix.field.TradeReportRejectReason(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeReportRejectReason field) 
  { return isSetField(field); } 
  public boolean isSetTradeReportRejectReason() 
  { return isSetField(751); } 

  public void set(org.quickfix.field.SecondaryTradeReportID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryTradeReportID get(org.quickfix.field.SecondaryTradeReportID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryTradeReportID getSecondaryTradeReportID() throws FieldNotFound 
  { org.quickfix.field.SecondaryTradeReportID value = new org.quickfix.field.SecondaryTradeReportID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryTradeReportID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryTradeReportID() 
  { return isSetField(818); } 

  public void set(org.quickfix.field.SubscriptionRequestType value) 
  { setField(value); } 
  public org.quickfix.field.SubscriptionRequestType get(org.quickfix.field.SubscriptionRequestType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SubscriptionRequestType getSubscriptionRequestType() throws FieldNotFound 
  { org.quickfix.field.SubscriptionRequestType value = new org.quickfix.field.SubscriptionRequestType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SubscriptionRequestType field) 
  { return isSetField(field); } 
  public boolean isSetSubscriptionRequestType() 
  { return isSetField(263); } 

  public void set(org.quickfix.field.TradeLinkID value) 
  { setField(value); } 
  public org.quickfix.field.TradeLinkID get(org.quickfix.field.TradeLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeLinkID getTradeLinkID() throws FieldNotFound 
  { org.quickfix.field.TradeLinkID value = new org.quickfix.field.TradeLinkID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeLinkID field) 
  { return isSetField(field); } 
  public boolean isSetTradeLinkID() 
  { return isSetField(820); } 

  public void set(org.quickfix.field.TrdMatchID value) 
  { setField(value); } 
  public org.quickfix.field.TrdMatchID get(org.quickfix.field.TrdMatchID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdMatchID getTrdMatchID() throws FieldNotFound 
  { org.quickfix.field.TrdMatchID value = new org.quickfix.field.TrdMatchID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdMatchID field) 
  { return isSetField(field); } 
  public boolean isSetTrdMatchID() 
  { return isSetField(880); } 

  public void set(org.quickfix.field.ExecID value) 
  { setField(value); } 
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound 
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExecID field) 
  { return isSetField(field); } 
  public boolean isSetExecID() 
  { return isSetField(17); } 

  public void set(org.quickfix.field.SecondaryExecID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryExecID get(org.quickfix.field.SecondaryExecID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound 
  { org.quickfix.field.SecondaryExecID value = new org.quickfix.field.SecondaryExecID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryExecID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryExecID() 
  { return isSetField(527); } 
  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound 
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Symbol field) 
  { return isSetField(field); } 
  public boolean isSetSymbol() 
  { return isSetField(55); } 
  public void set(org.quickfix.field.SymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SymbolSfx field) 
  { return isSetField(field); } 
  public boolean isSetSymbolSfx() 
  { return isSetField(65); } 
  public void set(org.quickfix.field.SecurityID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound 
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityID() 
  { return isSetField(48); } 
  public void set(org.quickfix.field.SecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.SecurityIDSource value = new org.quickfix.field.SecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetSecurityIDSource() 
  { return isSetField(22); } 
  public void set(org.quickfix.field.Product value) 
  { setField(value); } 
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Product getProduct() throws FieldNotFound 
  { org.quickfix.field.Product value = new org.quickfix.field.Product(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Product field) 
  { return isSetField(field); } 
  public boolean isSetProduct() 
  { return isSetField(460); } 
  public void set(org.quickfix.field.CFICode value) 
  { setField(value); } 
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound 
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CFICode field) 
  { return isSetField(field); } 
  public boolean isSetCFICode() 
  { return isSetField(461); } 
  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityType() 
  { return isSetField(167); } 
  public void set(org.quickfix.field.SecuritySubType value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySubType get(org.quickfix.field.SecuritySubType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySubType getSecuritySubType() throws FieldNotFound 
  { org.quickfix.field.SecuritySubType value = new org.quickfix.field.SecuritySubType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecuritySubType field) 
  { return isSetField(field); } 
  public boolean isSetSecuritySubType() 
  { return isSetField(762); } 
  public void set(org.quickfix.field.MaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetMaturityMonthYear() 
  { return isSetField(200); } 
  public void set(org.quickfix.field.MaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound 
  { org.quickfix.field.MaturityDate value = new org.quickfix.field.MaturityDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaturityDate field) 
  { return isSetField(field); } 
  public boolean isSetMaturityDate() 
  { return isSetField(541); } 
  public void set(org.quickfix.field.CouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.CouponPaymentDate value = new org.quickfix.field.CouponPaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CouponPaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetCouponPaymentDate() 
  { return isSetField(224); } 
  public void set(org.quickfix.field.IssueDate value) 
  { setField(value); } 
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IssueDate getIssueDate() throws FieldNotFound 
  { org.quickfix.field.IssueDate value = new org.quickfix.field.IssueDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IssueDate field) 
  { return isSetField(field); } 
  public boolean isSetIssueDate() 
  { return isSetField(225); } 
  public void set(org.quickfix.field.RepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.RepoCollateralSecurityType value = new org.quickfix.field.RepoCollateralSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepoCollateralSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetRepoCollateralSecurityType() 
  { return isSetField(239); } 
  public void set(org.quickfix.field.RepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.RepurchaseTerm value = new org.quickfix.field.RepurchaseTerm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepurchaseTerm field) 
  { return isSetField(field); } 
  public boolean isSetRepurchaseTerm() 
  { return isSetField(226); } 
  public void set(org.quickfix.field.RepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.RepurchaseRate value = new org.quickfix.field.RepurchaseRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RepurchaseRate field) 
  { return isSetField(field); } 
  public boolean isSetRepurchaseRate() 
  { return isSetField(227); } 
  public void set(org.quickfix.field.Factor value) 
  { setField(value); } 
  public org.quickfix.field.Factor get(org.quickfix.field.Factor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Factor getFactor() throws FieldNotFound 
  { org.quickfix.field.Factor value = new org.quickfix.field.Factor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Factor field) 
  { return isSetField(field); } 
  public boolean isSetFactor() 
  { return isSetField(228); } 
  public void set(org.quickfix.field.CreditRating value) 
  { setField(value); } 
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CreditRating getCreditRating() throws FieldNotFound 
  { org.quickfix.field.CreditRating value = new org.quickfix.field.CreditRating(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CreditRating field) 
  { return isSetField(field); } 
  public boolean isSetCreditRating() 
  { return isSetField(255); } 
  public void set(org.quickfix.field.InstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.InstrRegistry value = new org.quickfix.field.InstrRegistry(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.InstrRegistry field) 
  { return isSetField(field); } 
  public boolean isSetInstrRegistry() 
  { return isSetField(543); } 
  public void set(org.quickfix.field.CountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.CountryOfIssue value = new org.quickfix.field.CountryOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CountryOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetCountryOfIssue() 
  { return isSetField(470); } 
  public void set(org.quickfix.field.StateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.StateOrProvinceOfIssue value = new org.quickfix.field.StateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StateOrProvinceOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetStateOrProvinceOfIssue() 
  { return isSetField(471); } 
  public void set(org.quickfix.field.LocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.LocaleOfIssue value = new org.quickfix.field.LocaleOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LocaleOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetLocaleOfIssue() 
  { return isSetField(472); } 
  public void set(org.quickfix.field.RedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.RedemptionDate value = new org.quickfix.field.RedemptionDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RedemptionDate field) 
  { return isSetField(field); } 
  public boolean isSetRedemptionDate() 
  { return isSetField(240); } 
  public void set(org.quickfix.field.StrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound 
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetStrikePrice() 
  { return isSetField(202); } 
  public void set(org.quickfix.field.StrikeCurrency value) 
  { setField(value); } 
  public org.quickfix.field.StrikeCurrency get(org.quickfix.field.StrikeCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StrikeCurrency getStrikeCurrency() throws FieldNotFound 
  { org.quickfix.field.StrikeCurrency value = new org.quickfix.field.StrikeCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StrikeCurrency field) 
  { return isSetField(field); } 
  public boolean isSetStrikeCurrency() 
  { return isSetField(947); } 
  public void set(org.quickfix.field.OptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound 
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OptAttribute field) 
  { return isSetField(field); } 
  public boolean isSetOptAttribute() 
  { return isSetField(206); } 
  public void set(org.quickfix.field.ContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ContractMultiplier field) 
  { return isSetField(field); } 
  public boolean isSetContractMultiplier() 
  { return isSetField(231); } 
  public void set(org.quickfix.field.CouponRate value) 
  { setField(value); } 
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound 
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CouponRate field) 
  { return isSetField(field); } 
  public boolean isSetCouponRate() 
  { return isSetField(223); } 
  public void set(org.quickfix.field.SecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityExchange field) 
  { return isSetField(field); } 
  public boolean isSetSecurityExchange() 
  { return isSetField(207); } 
  public void set(org.quickfix.field.Issuer value) 
  { setField(value); } 
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound 
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Issuer field) 
  { return isSetField(field); } 
  public boolean isSetIssuer() 
  { return isSetField(106); } 
  public void set(org.quickfix.field.EncodedIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedIssuerLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedIssuerLen() 
  { return isSetField(348); } 
  public void set(org.quickfix.field.EncodedIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedIssuer field) 
  { return isSetField(field); } 
  public boolean isSetEncodedIssuer() 
  { return isSetField(349); } 
  public void set(org.quickfix.field.SecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetSecurityDesc() 
  { return isSetField(107); } 
  public void set(org.quickfix.field.EncodedSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedSecurityDescLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedSecurityDescLen() 
  { return isSetField(350); } 
  public void set(org.quickfix.field.EncodedSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedSecurityDesc() 
  { return isSetField(351); } 
  public void set(org.quickfix.field.Pool value) 
  { setField(value); } 
  public org.quickfix.field.Pool get(org.quickfix.field.Pool value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Pool getPool() throws FieldNotFound 
  { org.quickfix.field.Pool value = new org.quickfix.field.Pool(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Pool field) 
  { return isSetField(field); } 
  public boolean isSetPool() 
  { return isSetField(691); } 
  public void set(org.quickfix.field.ContractSettlMonth value) 
  { setField(value); } 
  public org.quickfix.field.ContractSettlMonth get(org.quickfix.field.ContractSettlMonth value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ContractSettlMonth getContractSettlMonth() throws FieldNotFound 
  { org.quickfix.field.ContractSettlMonth value = new org.quickfix.field.ContractSettlMonth(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ContractSettlMonth field) 
  { return isSetField(field); } 
  public boolean isSetContractSettlMonth() 
  { return isSetField(667); } 
  public void set(org.quickfix.field.CPProgram value) 
  { setField(value); } 
  public org.quickfix.field.CPProgram get(org.quickfix.field.CPProgram value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CPProgram getCPProgram() throws FieldNotFound 
  { org.quickfix.field.CPProgram value = new org.quickfix.field.CPProgram(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CPProgram field) 
  { return isSetField(field); } 
  public boolean isSetCPProgram() 
  { return isSetField(875); } 
  public void set(org.quickfix.field.CPRegType value) 
  { setField(value); } 
  public org.quickfix.field.CPRegType get(org.quickfix.field.CPRegType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CPRegType getCPRegType() throws FieldNotFound 
  { org.quickfix.field.CPRegType value = new org.quickfix.field.CPRegType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CPRegType field) 
  { return isSetField(field); } 
  public boolean isSetCPRegType() 
  { return isSetField(876); } 
  public void set(org.quickfix.field.DatedDate value) 
  { setField(value); } 
  public org.quickfix.field.DatedDate get(org.quickfix.field.DatedDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DatedDate getDatedDate() throws FieldNotFound 
  { org.quickfix.field.DatedDate value = new org.quickfix.field.DatedDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DatedDate field) 
  { return isSetField(field); } 
  public boolean isSetDatedDate() 
  { return isSetField(873); } 
  public void set(org.quickfix.field.InterestAccrualDate value) 
  { setField(value); } 
  public org.quickfix.field.InterestAccrualDate get(org.quickfix.field.InterestAccrualDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InterestAccrualDate getInterestAccrualDate() throws FieldNotFound 
  { org.quickfix.field.InterestAccrualDate value = new org.quickfix.field.InterestAccrualDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.InterestAccrualDate field) 
  { return isSetField(field); } 
  public boolean isSetInterestAccrualDate() 
  { return isSetField(874); } 
  public void set(org.quickfix.field.NoSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.NoSecurityAltID value = new org.quickfix.field.NoSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetNoSecurityAltID() 
  { return isSetField(454); } 

public static class NoSecurityAltID extends Group { 
  public NoSecurityAltID() { 
    super(454, 455, 
    new int[] { 
               455, 
               456, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.SecurityAltID value = new org.quickfix.field.SecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetSecurityAltID() 
  { return isSetField(455); } 

  public void set(org.quickfix.field.SecurityAltIDSource value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetSecurityAltIDSource() 
  { return isSetField(456); } 

} 
  public void set(org.quickfix.field.NoEvents value) 
  { setField(value); } 
  public org.quickfix.field.NoEvents get(org.quickfix.field.NoEvents value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoEvents getNoEvents() throws FieldNotFound 
  { org.quickfix.field.NoEvents value = new org.quickfix.field.NoEvents(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoEvents field) 
  { return isSetField(field); } 
  public boolean isSetNoEvents() 
  { return isSetField(864); } 

public static class NoEvents extends Group { 
  public NoEvents() { 
    super(864, 865, 
    new int[] { 
               865, 
               866, 
               867, 
               868, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.EventType value) 
  { setField(value); } 
  public org.quickfix.field.EventType get(org.quickfix.field.EventType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EventType getEventType() throws FieldNotFound 
  { org.quickfix.field.EventType value = new org.quickfix.field.EventType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EventType field) 
  { return isSetField(field); } 
  public boolean isSetEventType() 
  { return isSetField(865); } 

  public void set(org.quickfix.field.EventDate value) 
  { setField(value); } 
  public org.quickfix.field.EventDate get(org.quickfix.field.EventDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EventDate getEventDate() throws FieldNotFound 
  { org.quickfix.field.EventDate value = new org.quickfix.field.EventDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EventDate field) 
  { return isSetField(field); } 
  public boolean isSetEventDate() 
  { return isSetField(866); } 

  public void set(org.quickfix.field.EventPx value) 
  { setField(value); } 
  public org.quickfix.field.EventPx get(org.quickfix.field.EventPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EventPx getEventPx() throws FieldNotFound 
  { org.quickfix.field.EventPx value = new org.quickfix.field.EventPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EventPx field) 
  { return isSetField(field); } 
  public boolean isSetEventPx() 
  { return isSetField(867); } 

  public void set(org.quickfix.field.EventText value) 
  { setField(value); } 
  public org.quickfix.field.EventText get(org.quickfix.field.EventText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EventText getEventText() throws FieldNotFound 
  { org.quickfix.field.EventText value = new org.quickfix.field.EventText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EventText field) 
  { return isSetField(field); } 
  public boolean isSetEventText() 
  { return isSetField(868); } 

} 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransactTime field) 
  { return isSetField(field); } 
  public boolean isSetTransactTime() 
  { return isSetField(60); } 
  public void set(org.quickfix.field.NoTrdRegTimestamps value) 
  { setField(value); } 
  public org.quickfix.field.NoTrdRegTimestamps get(org.quickfix.field.NoTrdRegTimestamps value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoTrdRegTimestamps getNoTrdRegTimestamps() throws FieldNotFound 
  { org.quickfix.field.NoTrdRegTimestamps value = new org.quickfix.field.NoTrdRegTimestamps(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoTrdRegTimestamps field) 
  { return isSetField(field); } 
  public boolean isSetNoTrdRegTimestamps() 
  { return isSetField(768); } 

public static class NoTrdRegTimestamps extends Group { 
  public NoTrdRegTimestamps() { 
    super(768, 769, 
    new int[] { 
               769, 
               770, 
               771, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.TrdRegTimestamp value) 
  { setField(value); } 
  public org.quickfix.field.TrdRegTimestamp get(org.quickfix.field.TrdRegTimestamp value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdRegTimestamp getTrdRegTimestamp() throws FieldNotFound 
  { org.quickfix.field.TrdRegTimestamp value = new org.quickfix.field.TrdRegTimestamp(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdRegTimestamp field) 
  { return isSetField(field); } 
  public boolean isSetTrdRegTimestamp() 
  { return isSetField(769); } 

  public void set(org.quickfix.field.TrdRegTimestampType value) 
  { setField(value); } 
  public org.quickfix.field.TrdRegTimestampType get(org.quickfix.field.TrdRegTimestampType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdRegTimestampType getTrdRegTimestampType() throws FieldNotFound 
  { org.quickfix.field.TrdRegTimestampType value = new org.quickfix.field.TrdRegTimestampType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdRegTimestampType field) 
  { return isSetField(field); } 
  public boolean isSetTrdRegTimestampType() 
  { return isSetField(770); } 

  public void set(org.quickfix.field.TrdRegTimestampOrigin value) 
  { setField(value); } 
  public org.quickfix.field.TrdRegTimestampOrigin get(org.quickfix.field.TrdRegTimestampOrigin value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TrdRegTimestampOrigin getTrdRegTimestampOrigin() throws FieldNotFound 
  { org.quickfix.field.TrdRegTimestampOrigin value = new org.quickfix.field.TrdRegTimestampOrigin(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TrdRegTimestampOrigin field) 
  { return isSetField(field); } 
  public boolean isSetTrdRegTimestampOrigin() 
  { return isSetField(771); } 

} 

  public void set(org.quickfix.field.ResponseTransportType value) 
  { setField(value); } 
  public org.quickfix.field.ResponseTransportType get(org.quickfix.field.ResponseTransportType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ResponseTransportType getResponseTransportType() throws FieldNotFound 
  { org.quickfix.field.ResponseTransportType value = new org.quickfix.field.ResponseTransportType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ResponseTransportType field) 
  { return isSetField(field); } 
  public boolean isSetResponseTransportType() 
  { return isSetField(725); } 

  public void set(org.quickfix.field.ResponseDestination value) 
  { setField(value); } 
  public org.quickfix.field.ResponseDestination get(org.quickfix.field.ResponseDestination value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ResponseDestination getResponseDestination() throws FieldNotFound 
  { org.quickfix.field.ResponseDestination value = new org.quickfix.field.ResponseDestination(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ResponseDestination field) 
  { return isSetField(field); } 
  public boolean isSetResponseDestination() 
  { return isSetField(726); } 

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
  public void set(org.quickfix.field.NoLegs value) 
  { setField(value); } 
  public org.quickfix.field.NoLegs get(org.quickfix.field.NoLegs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoLegs getNoLegs() throws FieldNotFound 
  { org.quickfix.field.NoLegs value = new org.quickfix.field.NoLegs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoLegs field) 
  { return isSetField(field); } 
  public boolean isSetNoLegs() 
  { return isSetField(555); } 

public static class NoLegs extends Group { 
  public NoLegs() { 
    super(555, 564, 
    new int[] { 
             600, 
             601, 
             602, 
             603, 
             607, 
             608, 
             609, 
             764, 
             610, 
             611, 
             248, 
             249, 
             250, 
             251, 
             252, 
             253, 
             257, 
             599, 
             596, 
             597, 
             598, 
             254, 
             612, 
             942, 
             613, 
             614, 
             615, 
             616, 
             617, 
             618, 
             619, 
             620, 
             621, 
             622, 
             623, 
             624, 
             556, 
             740, 
             739, 
             955, 
             956, 
               687, 
               690, 
               564, 
               565, 
               654, 
               566, 
               587, 
               588, 
               637, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LegQty value) 
  { setField(value); } 
  public org.quickfix.field.LegQty get(org.quickfix.field.LegQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegQty getLegQty() throws FieldNotFound 
  { org.quickfix.field.LegQty value = new org.quickfix.field.LegQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegQty field) 
  { return isSetField(field); } 
  public boolean isSetLegQty() 
  { return isSetField(687); } 

  public void set(org.quickfix.field.LegSwapType value) 
  { setField(value); } 
  public org.quickfix.field.LegSwapType get(org.quickfix.field.LegSwapType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSwapType getLegSwapType() throws FieldNotFound 
  { org.quickfix.field.LegSwapType value = new org.quickfix.field.LegSwapType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSwapType field) 
  { return isSetField(field); } 
  public boolean isSetLegSwapType() 
  { return isSetField(690); } 

  public void set(org.quickfix.field.LegPositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.LegPositionEffect get(org.quickfix.field.LegPositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegPositionEffect getLegPositionEffect() throws FieldNotFound 
  { org.quickfix.field.LegPositionEffect value = new org.quickfix.field.LegPositionEffect(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegPositionEffect field) 
  { return isSetField(field); } 
  public boolean isSetLegPositionEffect() 
  { return isSetField(564); } 

  public void set(org.quickfix.field.LegCoveredOrUncovered value) 
  { setField(value); } 
  public org.quickfix.field.LegCoveredOrUncovered get(org.quickfix.field.LegCoveredOrUncovered value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCoveredOrUncovered getLegCoveredOrUncovered() throws FieldNotFound 
  { org.quickfix.field.LegCoveredOrUncovered value = new org.quickfix.field.LegCoveredOrUncovered(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCoveredOrUncovered field) 
  { return isSetField(field); } 
  public boolean isSetLegCoveredOrUncovered() 
  { return isSetField(565); } 

  public void set(org.quickfix.field.LegRefID value) 
  { setField(value); } 
  public org.quickfix.field.LegRefID get(org.quickfix.field.LegRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRefID getLegRefID() throws FieldNotFound 
  { org.quickfix.field.LegRefID value = new org.quickfix.field.LegRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRefID field) 
  { return isSetField(field); } 
  public boolean isSetLegRefID() 
  { return isSetField(654); } 

  public void set(org.quickfix.field.LegPrice value) 
  { setField(value); } 
  public org.quickfix.field.LegPrice get(org.quickfix.field.LegPrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegPrice getLegPrice() throws FieldNotFound 
  { org.quickfix.field.LegPrice value = new org.quickfix.field.LegPrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegPrice field) 
  { return isSetField(field); } 
  public boolean isSetLegPrice() 
  { return isSetField(566); } 

  public void set(org.quickfix.field.LegSettlType value) 
  { setField(value); } 
  public org.quickfix.field.LegSettlType get(org.quickfix.field.LegSettlType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSettlType getLegSettlType() throws FieldNotFound 
  { org.quickfix.field.LegSettlType value = new org.quickfix.field.LegSettlType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSettlType field) 
  { return isSetField(field); } 
  public boolean isSetLegSettlType() 
  { return isSetField(587); } 

  public void set(org.quickfix.field.LegSettlDate value) 
  { setField(value); } 
  public org.quickfix.field.LegSettlDate get(org.quickfix.field.LegSettlDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSettlDate getLegSettlDate() throws FieldNotFound 
  { org.quickfix.field.LegSettlDate value = new org.quickfix.field.LegSettlDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSettlDate field) 
  { return isSetField(field); } 
  public boolean isSetLegSettlDate() 
  { return isSetField(588); } 

  public void set(org.quickfix.field.LegLastPx value) 
  { setField(value); } 
  public org.quickfix.field.LegLastPx get(org.quickfix.field.LegLastPx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound 
  { org.quickfix.field.LegLastPx value = new org.quickfix.field.LegLastPx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegLastPx field) 
  { return isSetField(field); } 
  public boolean isSetLegLastPx() 
  { return isSetField(637); } 

  public void set(org.quickfix.field.LegSymbol value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbol get(org.quickfix.field.LegSymbol value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound 
  { org.quickfix.field.LegSymbol value = new org.quickfix.field.LegSymbol(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSymbol field) 
  { return isSetField(field); } 
  public boolean isSetLegSymbol() 
  { return isSetField(600); } 
  public void set(org.quickfix.field.LegSymbolSfx value) 
  { setField(value); } 
  public org.quickfix.field.LegSymbolSfx get(org.quickfix.field.LegSymbolSfx value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound 
  { org.quickfix.field.LegSymbolSfx value = new org.quickfix.field.LegSymbolSfx(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSymbolSfx field) 
  { return isSetField(field); } 
  public boolean isSetLegSymbolSfx() 
  { return isSetField(601); } 
  public void set(org.quickfix.field.LegSecurityID value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityID get(org.quickfix.field.LegSecurityID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound 
  { org.quickfix.field.LegSecurityID value = new org.quickfix.field.LegSecurityID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityID field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityID() 
  { return isSetField(602); } 
  public void set(org.quickfix.field.LegSecurityIDSource value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityIDSource get(org.quickfix.field.LegSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.LegSecurityIDSource value = new org.quickfix.field.LegSecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityIDSource() 
  { return isSetField(603); } 
  public void set(org.quickfix.field.LegProduct value) 
  { setField(value); } 
  public org.quickfix.field.LegProduct get(org.quickfix.field.LegProduct value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegProduct getLegProduct() throws FieldNotFound 
  { org.quickfix.field.LegProduct value = new org.quickfix.field.LegProduct(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegProduct field) 
  { return isSetField(field); } 
  public boolean isSetLegProduct() 
  { return isSetField(607); } 
  public void set(org.quickfix.field.LegCFICode value) 
  { setField(value); } 
  public org.quickfix.field.LegCFICode get(org.quickfix.field.LegCFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound 
  { org.quickfix.field.LegCFICode value = new org.quickfix.field.LegCFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCFICode field) 
  { return isSetField(field); } 
  public boolean isSetLegCFICode() 
  { return isSetField(608); } 
  public void set(org.quickfix.field.LegSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityType get(org.quickfix.field.LegSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegSecurityType value = new org.quickfix.field.LegSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityType() 
  { return isSetField(609); } 
  public void set(org.quickfix.field.LegSecuritySubType value) 
  { setField(value); } 
  public org.quickfix.field.LegSecuritySubType get(org.quickfix.field.LegSecuritySubType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecuritySubType getLegSecuritySubType() throws FieldNotFound 
  { org.quickfix.field.LegSecuritySubType value = new org.quickfix.field.LegSecuritySubType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecuritySubType field) 
  { return isSetField(field); } 
  public boolean isSetLegSecuritySubType() 
  { return isSetField(764); } 
  public void set(org.quickfix.field.LegMaturityMonthYear value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityMonthYear get(org.quickfix.field.LegMaturityMonthYear value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound 
  { org.quickfix.field.LegMaturityMonthYear value = new org.quickfix.field.LegMaturityMonthYear(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegMaturityMonthYear field) 
  { return isSetField(field); } 
  public boolean isSetLegMaturityMonthYear() 
  { return isSetField(610); } 
  public void set(org.quickfix.field.LegMaturityDate value) 
  { setField(value); } 
  public org.quickfix.field.LegMaturityDate get(org.quickfix.field.LegMaturityDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound 
  { org.quickfix.field.LegMaturityDate value = new org.quickfix.field.LegMaturityDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegMaturityDate field) 
  { return isSetField(field); } 
  public boolean isSetLegMaturityDate() 
  { return isSetField(611); } 
  public void set(org.quickfix.field.LegCouponPaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponPaymentDate get(org.quickfix.field.LegCouponPaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound 
  { org.quickfix.field.LegCouponPaymentDate value = new org.quickfix.field.LegCouponPaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCouponPaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetLegCouponPaymentDate() 
  { return isSetField(248); } 
  public void set(org.quickfix.field.LegIssueDate value) 
  { setField(value); } 
  public org.quickfix.field.LegIssueDate get(org.quickfix.field.LegIssueDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound 
  { org.quickfix.field.LegIssueDate value = new org.quickfix.field.LegIssueDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegIssueDate field) 
  { return isSetField(field); } 
  public boolean isSetLegIssueDate() 
  { return isSetField(249); } 
  public void set(org.quickfix.field.LegRepoCollateralSecurityType value) 
  { setField(value); } 
  public org.quickfix.field.LegRepoCollateralSecurityType get(org.quickfix.field.LegRepoCollateralSecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound 
  { org.quickfix.field.LegRepoCollateralSecurityType value = new org.quickfix.field.LegRepoCollateralSecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRepoCollateralSecurityType field) 
  { return isSetField(field); } 
  public boolean isSetLegRepoCollateralSecurityType() 
  { return isSetField(250); } 
  public void set(org.quickfix.field.LegRepurchaseTerm value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseTerm get(org.quickfix.field.LegRepurchaseTerm value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseTerm value = new org.quickfix.field.LegRepurchaseTerm(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRepurchaseTerm field) 
  { return isSetField(field); } 
  public boolean isSetLegRepurchaseTerm() 
  { return isSetField(251); } 
  public void set(org.quickfix.field.LegRepurchaseRate value) 
  { setField(value); } 
  public org.quickfix.field.LegRepurchaseRate get(org.quickfix.field.LegRepurchaseRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound 
  { org.quickfix.field.LegRepurchaseRate value = new org.quickfix.field.LegRepurchaseRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRepurchaseRate field) 
  { return isSetField(field); } 
  public boolean isSetLegRepurchaseRate() 
  { return isSetField(252); } 
  public void set(org.quickfix.field.LegFactor value) 
  { setField(value); } 
  public org.quickfix.field.LegFactor get(org.quickfix.field.LegFactor value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegFactor getLegFactor() throws FieldNotFound 
  { org.quickfix.field.LegFactor value = new org.quickfix.field.LegFactor(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegFactor field) 
  { return isSetField(field); } 
  public boolean isSetLegFactor() 
  { return isSetField(253); } 
  public void set(org.quickfix.field.LegCreditRating value) 
  { setField(value); } 
  public org.quickfix.field.LegCreditRating get(org.quickfix.field.LegCreditRating value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound 
  { org.quickfix.field.LegCreditRating value = new org.quickfix.field.LegCreditRating(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCreditRating field) 
  { return isSetField(field); } 
  public boolean isSetLegCreditRating() 
  { return isSetField(257); } 
  public void set(org.quickfix.field.LegInstrRegistry value) 
  { setField(value); } 
  public org.quickfix.field.LegInstrRegistry get(org.quickfix.field.LegInstrRegistry value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound 
  { org.quickfix.field.LegInstrRegistry value = new org.quickfix.field.LegInstrRegistry(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegInstrRegistry field) 
  { return isSetField(field); } 
  public boolean isSetLegInstrRegistry() 
  { return isSetField(599); } 
  public void set(org.quickfix.field.LegCountryOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegCountryOfIssue get(org.quickfix.field.LegCountryOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegCountryOfIssue value = new org.quickfix.field.LegCountryOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCountryOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetLegCountryOfIssue() 
  { return isSetField(596); } 
  public void set(org.quickfix.field.LegStateOrProvinceOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegStateOrProvinceOfIssue get(org.quickfix.field.LegStateOrProvinceOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegStateOrProvinceOfIssue value = new org.quickfix.field.LegStateOrProvinceOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegStateOrProvinceOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetLegStateOrProvinceOfIssue() 
  { return isSetField(597); } 
  public void set(org.quickfix.field.LegLocaleOfIssue value) 
  { setField(value); } 
  public org.quickfix.field.LegLocaleOfIssue get(org.quickfix.field.LegLocaleOfIssue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound 
  { org.quickfix.field.LegLocaleOfIssue value = new org.quickfix.field.LegLocaleOfIssue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegLocaleOfIssue field) 
  { return isSetField(field); } 
  public boolean isSetLegLocaleOfIssue() 
  { return isSetField(598); } 
  public void set(org.quickfix.field.LegRedemptionDate value) 
  { setField(value); } 
  public org.quickfix.field.LegRedemptionDate get(org.quickfix.field.LegRedemptionDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound 
  { org.quickfix.field.LegRedemptionDate value = new org.quickfix.field.LegRedemptionDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRedemptionDate field) 
  { return isSetField(field); } 
  public boolean isSetLegRedemptionDate() 
  { return isSetField(254); } 
  public void set(org.quickfix.field.LegStrikePrice value) 
  { setField(value); } 
  public org.quickfix.field.LegStrikePrice get(org.quickfix.field.LegStrikePrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound 
  { org.quickfix.field.LegStrikePrice value = new org.quickfix.field.LegStrikePrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegStrikePrice field) 
  { return isSetField(field); } 
  public boolean isSetLegStrikePrice() 
  { return isSetField(612); } 
  public void set(org.quickfix.field.LegStrikeCurrency value) 
  { setField(value); } 
  public org.quickfix.field.LegStrikeCurrency get(org.quickfix.field.LegStrikeCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStrikeCurrency getLegStrikeCurrency() throws FieldNotFound 
  { org.quickfix.field.LegStrikeCurrency value = new org.quickfix.field.LegStrikeCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegStrikeCurrency field) 
  { return isSetField(field); } 
  public boolean isSetLegStrikeCurrency() 
  { return isSetField(942); } 
  public void set(org.quickfix.field.LegOptAttribute value) 
  { setField(value); } 
  public org.quickfix.field.LegOptAttribute get(org.quickfix.field.LegOptAttribute value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound 
  { org.quickfix.field.LegOptAttribute value = new org.quickfix.field.LegOptAttribute(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegOptAttribute field) 
  { return isSetField(field); } 
  public boolean isSetLegOptAttribute() 
  { return isSetField(613); } 
  public void set(org.quickfix.field.LegContractMultiplier value) 
  { setField(value); } 
  public org.quickfix.field.LegContractMultiplier get(org.quickfix.field.LegContractMultiplier value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound 
  { org.quickfix.field.LegContractMultiplier value = new org.quickfix.field.LegContractMultiplier(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegContractMultiplier field) 
  { return isSetField(field); } 
  public boolean isSetLegContractMultiplier() 
  { return isSetField(614); } 
  public void set(org.quickfix.field.LegCouponRate value) 
  { setField(value); } 
  public org.quickfix.field.LegCouponRate get(org.quickfix.field.LegCouponRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound 
  { org.quickfix.field.LegCouponRate value = new org.quickfix.field.LegCouponRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCouponRate field) 
  { return isSetField(field); } 
  public boolean isSetLegCouponRate() 
  { return isSetField(615); } 
  public void set(org.quickfix.field.LegSecurityExchange value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityExchange get(org.quickfix.field.LegSecurityExchange value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound 
  { org.quickfix.field.LegSecurityExchange value = new org.quickfix.field.LegSecurityExchange(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityExchange field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityExchange() 
  { return isSetField(616); } 
  public void set(org.quickfix.field.LegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.LegIssuer get(org.quickfix.field.LegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound 
  { org.quickfix.field.LegIssuer value = new org.quickfix.field.LegIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegIssuer field) 
  { return isSetField(field); } 
  public boolean isSetLegIssuer() 
  { return isSetField(617); } 
  public void set(org.quickfix.field.EncodedLegIssuerLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuerLen get(org.quickfix.field.EncodedLegIssuerLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuerLen value = new org.quickfix.field.EncodedLegIssuerLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedLegIssuerLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedLegIssuerLen() 
  { return isSetField(618); } 
  public void set(org.quickfix.field.EncodedLegIssuer value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegIssuer get(org.quickfix.field.EncodedLegIssuer value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound 
  { org.quickfix.field.EncodedLegIssuer value = new org.quickfix.field.EncodedLegIssuer(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedLegIssuer field) 
  { return isSetField(field); } 
  public boolean isSetEncodedLegIssuer() 
  { return isSetField(619); } 
  public void set(org.quickfix.field.LegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityDesc get(org.quickfix.field.LegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.LegSecurityDesc value = new org.quickfix.field.LegSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityDesc() 
  { return isSetField(620); } 
  public void set(org.quickfix.field.EncodedLegSecurityDescLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDescLen get(org.quickfix.field.EncodedLegSecurityDescLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDescLen value = new org.quickfix.field.EncodedLegSecurityDescLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedLegSecurityDescLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedLegSecurityDescLen() 
  { return isSetField(621); } 
  public void set(org.quickfix.field.EncodedLegSecurityDesc value) 
  { setField(value); } 
  public org.quickfix.field.EncodedLegSecurityDesc get(org.quickfix.field.EncodedLegSecurityDesc value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound 
  { org.quickfix.field.EncodedLegSecurityDesc value = new org.quickfix.field.EncodedLegSecurityDesc(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedLegSecurityDesc field) 
  { return isSetField(field); } 
  public boolean isSetEncodedLegSecurityDesc() 
  { return isSetField(622); } 
  public void set(org.quickfix.field.LegRatioQty value) 
  { setField(value); } 
  public org.quickfix.field.LegRatioQty get(org.quickfix.field.LegRatioQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound 
  { org.quickfix.field.LegRatioQty value = new org.quickfix.field.LegRatioQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegRatioQty field) 
  { return isSetField(field); } 
  public boolean isSetLegRatioQty() 
  { return isSetField(623); } 
  public void set(org.quickfix.field.LegSide value) 
  { setField(value); } 
  public org.quickfix.field.LegSide get(org.quickfix.field.LegSide value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSide getLegSide() throws FieldNotFound 
  { org.quickfix.field.LegSide value = new org.quickfix.field.LegSide(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSide field) 
  { return isSetField(field); } 
  public boolean isSetLegSide() 
  { return isSetField(624); } 
  public void set(org.quickfix.field.LegCurrency value) 
  { setField(value); } 
  public org.quickfix.field.LegCurrency get(org.quickfix.field.LegCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound 
  { org.quickfix.field.LegCurrency value = new org.quickfix.field.LegCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegCurrency field) 
  { return isSetField(field); } 
  public boolean isSetLegCurrency() 
  { return isSetField(556); } 
  public void set(org.quickfix.field.LegPool value) 
  { setField(value); } 
  public org.quickfix.field.LegPool get(org.quickfix.field.LegPool value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegPool getLegPool() throws FieldNotFound 
  { org.quickfix.field.LegPool value = new org.quickfix.field.LegPool(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegPool field) 
  { return isSetField(field); } 
  public boolean isSetLegPool() 
  { return isSetField(740); } 
  public void set(org.quickfix.field.LegDatedDate value) 
  { setField(value); } 
  public org.quickfix.field.LegDatedDate get(org.quickfix.field.LegDatedDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegDatedDate getLegDatedDate() throws FieldNotFound 
  { org.quickfix.field.LegDatedDate value = new org.quickfix.field.LegDatedDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegDatedDate field) 
  { return isSetField(field); } 
  public boolean isSetLegDatedDate() 
  { return isSetField(739); } 
  public void set(org.quickfix.field.LegContractSettlMonth value) 
  { setField(value); } 
  public org.quickfix.field.LegContractSettlMonth get(org.quickfix.field.LegContractSettlMonth value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegContractSettlMonth getLegContractSettlMonth() throws FieldNotFound 
  { org.quickfix.field.LegContractSettlMonth value = new org.quickfix.field.LegContractSettlMonth(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegContractSettlMonth field) 
  { return isSetField(field); } 
  public boolean isSetLegContractSettlMonth() 
  { return isSetField(955); } 
  public void set(org.quickfix.field.LegInterestAccrualDate value) 
  { setField(value); } 
  public org.quickfix.field.LegInterestAccrualDate get(org.quickfix.field.LegInterestAccrualDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegInterestAccrualDate getLegInterestAccrualDate() throws FieldNotFound 
  { org.quickfix.field.LegInterestAccrualDate value = new org.quickfix.field.LegInterestAccrualDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegInterestAccrualDate field) 
  { return isSetField(field); } 
  public boolean isSetLegInterestAccrualDate() 
  { return isSetField(956); } 
  public void set(org.quickfix.field.NoLegSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.NoLegSecurityAltID get(org.quickfix.field.NoLegSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoLegSecurityAltID getNoLegSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.NoLegSecurityAltID value = new org.quickfix.field.NoLegSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoLegSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetNoLegSecurityAltID() 
  { return isSetField(604); } 

public static class NoLegSecurityAltID extends Group { 
  public NoLegSecurityAltID() { 
    super(604, 605, 
    new int[] { 
               605, 
               606, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LegSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityAltID get(org.quickfix.field.LegSecurityAltID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityAltID getLegSecurityAltID() throws FieldNotFound 
  { org.quickfix.field.LegSecurityAltID value = new org.quickfix.field.LegSecurityAltID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityAltID field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityAltID() 
  { return isSetField(605); } 

  public void set(org.quickfix.field.LegSecurityAltIDSource value) 
  { setField(value); } 
  public org.quickfix.field.LegSecurityAltIDSource get(org.quickfix.field.LegSecurityAltIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegSecurityAltIDSource getLegSecurityAltIDSource() throws FieldNotFound 
  { org.quickfix.field.LegSecurityAltIDSource value = new org.quickfix.field.LegSecurityAltIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegSecurityAltIDSource field) 
  { return isSetField(field); } 
  public boolean isSetLegSecurityAltIDSource() 
  { return isSetField(606); } 

} 
  public void set(org.quickfix.field.NoLegStipulations value) 
  { setField(value); } 
  public org.quickfix.field.NoLegStipulations get(org.quickfix.field.NoLegStipulations value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoLegStipulations getNoLegStipulations() throws FieldNotFound 
  { org.quickfix.field.NoLegStipulations value = new org.quickfix.field.NoLegStipulations(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoLegStipulations field) 
  { return isSetField(field); } 
  public boolean isSetNoLegStipulations() 
  { return isSetField(683); } 

public static class NoLegStipulations extends Group { 
  public NoLegStipulations() { 
    super(683, 688, 
    new int[] { 
               688, 
               689, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.LegStipulationType value) 
  { setField(value); } 
  public org.quickfix.field.LegStipulationType get(org.quickfix.field.LegStipulationType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStipulationType getLegStipulationType() throws FieldNotFound 
  { org.quickfix.field.LegStipulationType value = new org.quickfix.field.LegStipulationType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegStipulationType field) 
  { return isSetField(field); } 
  public boolean isSetLegStipulationType() 
  { return isSetField(688); } 

  public void set(org.quickfix.field.LegStipulationValue value) 
  { setField(value); } 
  public org.quickfix.field.LegStipulationValue get(org.quickfix.field.LegStipulationValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LegStipulationValue getLegStipulationValue() throws FieldNotFound 
  { org.quickfix.field.LegStipulationValue value = new org.quickfix.field.LegStipulationValue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LegStipulationValue field) 
  { return isSetField(field); } 
  public boolean isSetLegStipulationValue() 
  { return isSetField(689); } 

} 
  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNestedPartyIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNestedPartyIDs() 
  { return isSetField(539); } 

public static class NoNestedPartyIDs extends Group { 
  public NoNestedPartyIDs() { 
    super(539, 524, 
    new int[] { 
               524, 
               525, 
               538, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.NestedPartyID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound 
  { org.quickfix.field.NestedPartyID value = new org.quickfix.field.NestedPartyID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyID field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyID() 
  { return isSetField(524); } 

  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyIDSource field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyIDSource() 
  { return isSetField(525); } 

  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartyRole field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartyRole() 
  { return isSetField(538); } 

  public void set(org.quickfix.field.NoNestedPartySubIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartySubIDs get(org.quickfix.field.NoNestedPartySubIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartySubIDs getNoNestedPartySubIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartySubIDs value = new org.quickfix.field.NoNestedPartySubIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNestedPartySubIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNestedPartySubIDs() 
  { return isSetField(804); } 

public static class NoNestedPartySubIDs extends Group { 
  public NoNestedPartySubIDs() { 
    super(804, 545, 
    new int[] { 
               545, 
               805, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartySubID field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartySubID() 
  { return isSetField(545); } 

  public void set(org.quickfix.field.NestedPartySubIDType value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubIDType get(org.quickfix.field.NestedPartySubIDType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubIDType getNestedPartySubIDType() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubIDType value = new org.quickfix.field.NestedPartySubIDType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NestedPartySubIDType field) 
  { return isSetField(field); } 
  public boolean isSetNestedPartySubIDType() 
  { return isSetField(805); } 

} 
} 
} 

  public void set(org.quickfix.field.ClearingFeeIndicator value) 
  { setField(value); } 
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound 
  { org.quickfix.field.ClearingFeeIndicator value = new org.quickfix.field.ClearingFeeIndicator(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClearingFeeIndicator field) 
  { return isSetField(field); } 
  public boolean isSetClearingFeeIndicator() 
  { return isSetField(635); } 

  public void set(org.quickfix.field.OrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.OrderCapacity value = new org.quickfix.field.OrderCapacity(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderCapacity field) 
  { return isSetField(field); } 
  public boolean isSetOrderCapacity() 
  { return isSetField(528); } 

  public void set(org.quickfix.field.OrderRestrictions value) 
  { setField(value); } 
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound 
  { org.quickfix.field.OrderRestrictions value = new org.quickfix.field.OrderRestrictions(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderRestrictions field) 
  { return isSetField(field); } 
  public boolean isSetOrderRestrictions() 
  { return isSetField(529); } 

  public void set(org.quickfix.field.CustOrderCapacity value) 
  { setField(value); } 
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CustOrderCapacity field) 
  { return isSetField(field); } 
  public boolean isSetCustOrderCapacity() 
  { return isSetField(582); } 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Account field) 
  { return isSetField(field); } 
  public boolean isSetAccount() 
  { return isSetField(1); } 

  public void set(org.quickfix.field.AcctIDSource value) 
  { setField(value); } 
  public org.quickfix.field.AcctIDSource get(org.quickfix.field.AcctIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AcctIDSource getAcctIDSource() throws FieldNotFound 
  { org.quickfix.field.AcctIDSource value = new org.quickfix.field.AcctIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AcctIDSource field) 
  { return isSetField(field); } 
  public boolean isSetAcctIDSource() 
  { return isSetField(660); } 

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound 
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AccountType field) 
  { return isSetField(field); } 
  public boolean isSetAccountType() 
  { return isSetField(581); } 

  public void set(org.quickfix.field.PositionEffect value) 
  { setField(value); } 
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound 
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PositionEffect field) 
  { return isSetField(field); } 
  public boolean isSetPositionEffect() 
  { return isSetField(77); } 

  public void set(org.quickfix.field.PreallocMethod value) 
  { setField(value); } 
  public org.quickfix.field.PreallocMethod get(org.quickfix.field.PreallocMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound 
  { org.quickfix.field.PreallocMethod value = new org.quickfix.field.PreallocMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PreallocMethod field) 
  { return isSetField(field); } 
  public boolean isSetPreallocMethod() 
  { return isSetField(591); } 
  public void set(org.quickfix.field.NoAllocs value) 
  { setField(value); } 
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound 
  { org.quickfix.field.NoAllocs value = new org.quickfix.field.NoAllocs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoAllocs field) 
  { return isSetField(field); } 
  public boolean isSetNoAllocs() 
  { return isSetField(78); } 

public static class NoAllocs extends Group { 
  public NoAllocs() { 
    super(78, 79, 
    new int[] { 
               79, 
               661, 
               736, 
               467, 
               80, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound 
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAccount field) 
  { return isSetField(field); } 
  public boolean isSetAllocAccount() 
  { return isSetField(79); } 

  public void set(org.quickfix.field.AllocAcctIDSource value) 
  { setField(value); } 
  public org.quickfix.field.AllocAcctIDSource get(org.quickfix.field.AllocAcctIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound 
  { org.quickfix.field.AllocAcctIDSource value = new org.quickfix.field.AllocAcctIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAcctIDSource field) 
  { return isSetField(field); } 
  public boolean isSetAllocAcctIDSource() 
  { return isSetField(661); } 

  public void set(org.quickfix.field.AllocSettlCurrency value) 
  { setField(value); } 
  public org.quickfix.field.AllocSettlCurrency get(org.quickfix.field.AllocSettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocSettlCurrency getAllocSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.AllocSettlCurrency value = new org.quickfix.field.AllocSettlCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocSettlCurrency field) 
  { return isSetField(field); } 
  public boolean isSetAllocSettlCurrency() 
  { return isSetField(736); } 

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IndividualAllocID field) 
  { return isSetField(field); } 
  public boolean isSetIndividualAllocID() 
  { return isSetField(467); } 

  public void set(org.quickfix.field.AllocQty value) 
  { setField(value); } 
  public org.quickfix.field.AllocQty get(org.quickfix.field.AllocQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocQty getAllocQty() throws FieldNotFound 
  { org.quickfix.field.AllocQty value = new org.quickfix.field.AllocQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocQty field) 
  { return isSetField(field); } 
  public boolean isSetAllocQty() 
  { return isSetField(80); } 

  public void set(org.quickfix.field.NoNested2PartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNested2PartyIDs get(org.quickfix.field.NoNested2PartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNested2PartyIDs getNoNested2PartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNested2PartyIDs value = new org.quickfix.field.NoNested2PartyIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNested2PartyIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNested2PartyIDs() 
  { return isSetField(756); } 

public static class NoNested2PartyIDs extends Group { 
  public NoNested2PartyIDs() { 
    super(756, 757, 
    new int[] { 
               757, 
               758, 
               759, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.Nested2PartyID value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyID get(org.quickfix.field.Nested2PartyID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyID getNested2PartyID() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyID value = new org.quickfix.field.Nested2PartyID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyID field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyID() 
  { return isSetField(757); } 

  public void set(org.quickfix.field.Nested2PartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyIDSource get(org.quickfix.field.Nested2PartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyIDSource getNested2PartyIDSource() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyIDSource value = new org.quickfix.field.Nested2PartyIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyIDSource field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyIDSource() 
  { return isSetField(758); } 

  public void set(org.quickfix.field.Nested2PartyRole value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartyRole get(org.quickfix.field.Nested2PartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartyRole getNested2PartyRole() throws FieldNotFound 
  { org.quickfix.field.Nested2PartyRole value = new org.quickfix.field.Nested2PartyRole(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartyRole field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartyRole() 
  { return isSetField(759); } 

  public void set(org.quickfix.field.NoNested2PartySubIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNested2PartySubIDs get(org.quickfix.field.NoNested2PartySubIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNested2PartySubIDs getNoNested2PartySubIDs() throws FieldNotFound 
  { org.quickfix.field.NoNested2PartySubIDs value = new org.quickfix.field.NoNested2PartySubIDs(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoNested2PartySubIDs field) 
  { return isSetField(field); } 
  public boolean isSetNoNested2PartySubIDs() 
  { return isSetField(806); } 

public static class NoNested2PartySubIDs extends Group { 
  public NoNested2PartySubIDs() { 
    super(806, 760, 
    new int[] { 
               760, 
               807, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.Nested2PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartySubID get(org.quickfix.field.Nested2PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartySubID getNested2PartySubID() throws FieldNotFound 
  { org.quickfix.field.Nested2PartySubID value = new org.quickfix.field.Nested2PartySubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartySubID field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartySubID() 
  { return isSetField(760); } 

  public void set(org.quickfix.field.Nested2PartySubIDType value) 
  { setField(value); } 
  public org.quickfix.field.Nested2PartySubIDType get(org.quickfix.field.Nested2PartySubIDType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Nested2PartySubIDType getNested2PartySubIDType() throws FieldNotFound 
  { org.quickfix.field.Nested2PartySubIDType value = new org.quickfix.field.Nested2PartySubIDType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Nested2PartySubIDType field) 
  { return isSetField(field); } 
  public boolean isSetNested2PartySubIDType() 
  { return isSetField(807); } 

} 
} 
} 
} 
