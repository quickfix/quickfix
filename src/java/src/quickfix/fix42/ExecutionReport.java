package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class ExecutionReport extends Message
{
  public ExecutionReport()
  {
    getHeader().setField(new MsgType("8"));
  }
  public ExecutionReport(
    org.quickfix.field.OrderID aOrderID,
    org.quickfix.field.ExecID aExecID,
    org.quickfix.field.ExecTransType aExecTransType,
    org.quickfix.field.ExecType aExecType,
    org.quickfix.field.OrdStatus aOrdStatus,
    org.quickfix.field.Symbol aSymbol,
    org.quickfix.field.Side aSide,
    org.quickfix.field.LeavesQty aLeavesQty,
    org.quickfix.field.CumQty aCumQty,
    org.quickfix.field.AvgPx aAvgPx ) {

    getHeader().setField(new MsgType("8"));
    set(aOrderID);
    set(aExecID);
    set(aExecTransType);
    set(aExecType);
    set(aOrdStatus);
    set(aSymbol);
    set(aSide);
    set(aLeavesQty);
    set(aCumQty);
    set(aAvgPx);
  }

  public void set(org.quickfix.field.OrderID value)
  { setField(value); }
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(org.quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public org.quickfix.field.SecondaryOrderID get(org.quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { org.quickfix.field.SecondaryOrderID value = new org.quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(org.quickfix.field.ClOrdID value)
  { setField(value); }
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(org.quickfix.field.OrigClOrdID value)
  { setField(value); }
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrigClOrdID field)
  { return isSetField(field); }
  public boolean isSetOrigClOrdID()
  { return isSetField(41); }
  public void set(org.quickfix.field.ClientID value)
  { setField(value); }
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound
  { org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClientID field)
  { return isSetField(field); }
  public boolean isSetClientID()
  { return isSetField(109); }
  public void set(org.quickfix.field.ExecBroker value)
  { setField(value); }
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecBroker field)
  { return isSetField(field); }
  public boolean isSetExecBroker()
  { return isSetField(76); }
  public void set(org.quickfix.field.ListID value)
  { setField(value); }
  public org.quickfix.field.ListID get(org.quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ListID getListID() throws FieldNotFound
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(org.quickfix.field.ExecID value)
  { setField(value); }
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(org.quickfix.field.ExecTransType value)
  { setField(value); }
  public org.quickfix.field.ExecTransType get(org.quickfix.field.ExecTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecTransType getExecTransType() throws FieldNotFound
  { org.quickfix.field.ExecTransType value = new org.quickfix.field.ExecTransType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecTransType field)
  { return isSetField(field); }
  public boolean isSetExecTransType()
  { return isSetField(20); }
  public void set(org.quickfix.field.ExecRefID value)
  { setField(value); }
  public org.quickfix.field.ExecRefID get(org.quickfix.field.ExecRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecRefID getExecRefID() throws FieldNotFound
  { org.quickfix.field.ExecRefID value = new org.quickfix.field.ExecRefID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecRefID field)
  { return isSetField(field); }
  public boolean isSetExecRefID()
  { return isSetField(19); }
  public void set(org.quickfix.field.ExecType value)
  { setField(value); }
  public org.quickfix.field.ExecType get(org.quickfix.field.ExecType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecType getExecType() throws FieldNotFound
  { org.quickfix.field.ExecType value = new org.quickfix.field.ExecType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecType field)
  { return isSetField(field); }
  public boolean isSetExecType()
  { return isSetField(150); }
  public void set(org.quickfix.field.OrdStatus value)
  { setField(value); }
  public org.quickfix.field.OrdStatus get(org.quickfix.field.OrdStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound
  { org.quickfix.field.OrdStatus value = new org.quickfix.field.OrdStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrdStatus field)
  { return isSetField(field); }
  public boolean isSetOrdStatus()
  { return isSetField(39); }
  public void set(org.quickfix.field.OrdRejReason value)
  { setField(value); }
  public org.quickfix.field.OrdRejReason get(org.quickfix.field.OrdRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound
  { org.quickfix.field.OrdRejReason value = new org.quickfix.field.OrdRejReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrdRejReason field)
  { return isSetField(field); }
  public boolean isSetOrdRejReason()
  { return isSetField(103); }
  public void set(org.quickfix.field.ExecRestatementReason value)
  { setField(value); }
  public org.quickfix.field.ExecRestatementReason get(org.quickfix.field.ExecRestatementReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound
  { org.quickfix.field.ExecRestatementReason value = new org.quickfix.field.ExecRestatementReason();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecRestatementReason field)
  { return isSetField(field); }
  public boolean isSetExecRestatementReason()
  { return isSetField(378); }
  public void set(org.quickfix.field.Account value)
  { setField(value); }
  public org.quickfix.field.Account get(org.quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Account getAccount() throws FieldNotFound
  { org.quickfix.field.Account value = new org.quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
  public void set(org.quickfix.field.SettlmntTyp value)
  { setField(value); }
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }
  public void set(org.quickfix.field.FutSettDate value)
  { setField(value); }
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(org.quickfix.field.Symbol value)
  { setField(value); }
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol  value)
    throws FieldNotFound
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
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx  value)
    throws FieldNotFound
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
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(org.quickfix.field.IDSource value)
  { setField(value); }
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IDSource field)
  { return isSetField(field); }
  public boolean isSetIDSource()
  { return isSetField(22); }
  public void set(org.quickfix.field.SecurityType value)
  { setField(value); }
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(org.quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(org.quickfix.field.MaturityDay value)
  { setField(value); }
  public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityDay field)
  { return isSetField(field); }
  public boolean isSetMaturityDay()
  { return isSetField(205); }
  public void set(org.quickfix.field.PutOrCall value)
  { setField(value); }
  public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PutOrCall field)
  { return isSetField(field); }
  public boolean isSetPutOrCall()
  { return isSetField(201); }
  public void set(org.quickfix.field.StrikePrice value)
  { setField(value); }
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(org.quickfix.field.OptAttribute value)
  { setField(value); }
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute  value)
    throws FieldNotFound
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
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
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
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate  value)
    throws FieldNotFound
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
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange  value)
    throws FieldNotFound
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
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
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
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(org.quickfix.field.Side value)
  { setField(value); }
  public org.quickfix.field.Side get(org.quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Side getSide() throws FieldNotFound
  { org.quickfix.field.Side value = new org.quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(org.quickfix.field.OrderQty value)
  { setField(value); }
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty  value)
    throws FieldNotFound
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
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound
  { org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CashOrderQty field)
  { return isSetField(field); }
  public boolean isSetCashOrderQty()
  { return isSetField(152); }
  public void set(org.quickfix.field.OrdType value)
  { setField(value); }
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(org.quickfix.field.Price value)
  { setField(value); }
  public org.quickfix.field.Price get(org.quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Price getPrice() throws FieldNotFound
  { org.quickfix.field.Price value = new org.quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
  public void set(org.quickfix.field.StopPx value)
  { setField(value); }
  public org.quickfix.field.StopPx get(org.quickfix.field.StopPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StopPx getStopPx() throws FieldNotFound
  { org.quickfix.field.StopPx value = new org.quickfix.field.StopPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StopPx field)
  { return isSetField(field); }
  public boolean isSetStopPx()
  { return isSetField(99); }
  public void set(org.quickfix.field.PegDifference value)
  { setField(value); }
  public org.quickfix.field.PegDifference get(org.quickfix.field.PegDifference  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PegDifference getPegDifference() throws FieldNotFound
  { org.quickfix.field.PegDifference value = new org.quickfix.field.PegDifference();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PegDifference field)
  { return isSetField(field); }
  public boolean isSetPegDifference()
  { return isSetField(211); }
  public void set(org.quickfix.field.DiscretionInst value)
  { setField(value); }
  public org.quickfix.field.DiscretionInst get(org.quickfix.field.DiscretionInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound
  { org.quickfix.field.DiscretionInst value = new org.quickfix.field.DiscretionInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DiscretionInst field)
  { return isSetField(field); }
  public boolean isSetDiscretionInst()
  { return isSetField(388); }
  public void set(org.quickfix.field.DiscretionOffset value)
  { setField(value); }
  public org.quickfix.field.DiscretionOffset get(org.quickfix.field.DiscretionOffset  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DiscretionOffset getDiscretionOffset() throws FieldNotFound
  { org.quickfix.field.DiscretionOffset value = new org.quickfix.field.DiscretionOffset();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DiscretionOffset field)
  { return isSetField(field); }
  public boolean isSetDiscretionOffset()
  { return isSetField(389); }
  public void set(org.quickfix.field.Currency value)
  { setField(value); }
  public org.quickfix.field.Currency get(org.quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(org.quickfix.field.ComplianceID value)
  { setField(value); }
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ComplianceID getComplianceID() throws FieldNotFound
  { org.quickfix.field.ComplianceID value = new org.quickfix.field.ComplianceID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ComplianceID field)
  { return isSetField(field); }
  public boolean isSetComplianceID()
  { return isSetField(376); }
  public void set(org.quickfix.field.SolicitedFlag value)
  { setField(value); }
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound
  { org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SolicitedFlag field)
  { return isSetField(field); }
  public boolean isSetSolicitedFlag()
  { return isSetField(377); }
  public void set(org.quickfix.field.TimeInForce value)
  { setField(value); }
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound
  { org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TimeInForce field)
  { return isSetField(field); }
  public boolean isSetTimeInForce()
  { return isSetField(59); }
  public void set(org.quickfix.field.EffectiveTime value)
  { setField(value); }
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound
  { org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EffectiveTime field)
  { return isSetField(field); }
  public boolean isSetEffectiveTime()
  { return isSetField(168); }
  public void set(org.quickfix.field.ExpireDate value)
  { setField(value); }
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExpireDate getExpireDate() throws FieldNotFound
  { org.quickfix.field.ExpireDate value = new org.quickfix.field.ExpireDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExpireDate field)
  { return isSetField(field); }
  public boolean isSetExpireDate()
  { return isSetField(432); }
  public void set(org.quickfix.field.ExpireTime value)
  { setField(value); }
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExpireTime field)
  { return isSetField(field); }
  public boolean isSetExpireTime()
  { return isSetField(126); }
  public void set(org.quickfix.field.ExecInst value)
  { setField(value); }
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound
  { org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecInst field)
  { return isSetField(field); }
  public boolean isSetExecInst()
  { return isSetField(18); }
  public void set(org.quickfix.field.Rule80A value)
  { setField(value); }
  public org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Rule80A getRule80A() throws FieldNotFound
  { org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Rule80A field)
  { return isSetField(field); }
  public boolean isSetRule80A()
  { return isSetField(47); }
  public void set(org.quickfix.field.LastShares value)
  { setField(value); }
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound
  { org.quickfix.field.LastShares value = new org.quickfix.field.LastShares();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastShares field)
  { return isSetField(field); }
  public boolean isSetLastShares()
  { return isSetField(32); }
  public void set(org.quickfix.field.LastPx value)
  { setField(value); }
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
  public void set(org.quickfix.field.LastSpotRate value)
  { setField(value); }
  public org.quickfix.field.LastSpotRate get(org.quickfix.field.LastSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound
  { org.quickfix.field.LastSpotRate value = new org.quickfix.field.LastSpotRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastSpotRate field)
  { return isSetField(field); }
  public boolean isSetLastSpotRate()
  { return isSetField(194); }
  public void set(org.quickfix.field.LastForwardPoints value)
  { setField(value); }
  public org.quickfix.field.LastForwardPoints get(org.quickfix.field.LastForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound
  { org.quickfix.field.LastForwardPoints value = new org.quickfix.field.LastForwardPoints();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastForwardPoints field)
  { return isSetField(field); }
  public boolean isSetLastForwardPoints()
  { return isSetField(195); }
  public void set(org.quickfix.field.LastMkt value)
  { setField(value); }
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(org.quickfix.field.TradingSessionID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(org.quickfix.field.LastCapacity value)
  { setField(value); }
  public org.quickfix.field.LastCapacity get(org.quickfix.field.LastCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound
  { org.quickfix.field.LastCapacity value = new org.quickfix.field.LastCapacity();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastCapacity field)
  { return isSetField(field); }
  public boolean isSetLastCapacity()
  { return isSetField(29); }
  public void set(org.quickfix.field.LeavesQty value)
  { setField(value); }
  public org.quickfix.field.LeavesQty get(org.quickfix.field.LeavesQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound
  { org.quickfix.field.LeavesQty value = new org.quickfix.field.LeavesQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LeavesQty field)
  { return isSetField(field); }
  public boolean isSetLeavesQty()
  { return isSetField(151); }
  public void set(org.quickfix.field.CumQty value)
  { setField(value); }
  public org.quickfix.field.CumQty get(org.quickfix.field.CumQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CumQty getCumQty() throws FieldNotFound
  { org.quickfix.field.CumQty value = new org.quickfix.field.CumQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CumQty field)
  { return isSetField(field); }
  public boolean isSetCumQty()
  { return isSetField(14); }
  public void set(org.quickfix.field.AvgPx value)
  { setField(value); }
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
  public void set(org.quickfix.field.DayOrderQty value)
  { setField(value); }
  public org.quickfix.field.DayOrderQty get(org.quickfix.field.DayOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DayOrderQty getDayOrderQty() throws FieldNotFound
  { org.quickfix.field.DayOrderQty value = new org.quickfix.field.DayOrderQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DayOrderQty field)
  { return isSetField(field); }
  public boolean isSetDayOrderQty()
  { return isSetField(424); }
  public void set(org.quickfix.field.DayCumQty value)
  { setField(value); }
  public org.quickfix.field.DayCumQty get(org.quickfix.field.DayCumQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DayCumQty getDayCumQty() throws FieldNotFound
  { org.quickfix.field.DayCumQty value = new org.quickfix.field.DayCumQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DayCumQty field)
  { return isSetField(field); }
  public boolean isSetDayCumQty()
  { return isSetField(425); }
  public void set(org.quickfix.field.DayAvgPx value)
  { setField(value); }
  public org.quickfix.field.DayAvgPx get(org.quickfix.field.DayAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DayAvgPx getDayAvgPx() throws FieldNotFound
  { org.quickfix.field.DayAvgPx value = new org.quickfix.field.DayAvgPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DayAvgPx field)
  { return isSetField(field); }
  public boolean isSetDayAvgPx()
  { return isSetField(426); }
  public void set(org.quickfix.field.GTBookingInst value)
  { setField(value); }
  public org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound
  { org.quickfix.field.GTBookingInst value = new org.quickfix.field.GTBookingInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.GTBookingInst field)
  { return isSetField(field); }
  public boolean isSetGTBookingInst()
  { return isSetField(427); }
  public void set(org.quickfix.field.TradeDate value)
  { setField(value); }
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(org.quickfix.field.TransactTime value)
  { setField(value); }
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(org.quickfix.field.ReportToExch value)
  { setField(value); }
  public org.quickfix.field.ReportToExch get(org.quickfix.field.ReportToExch  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ReportToExch getReportToExch() throws FieldNotFound
  { org.quickfix.field.ReportToExch value = new org.quickfix.field.ReportToExch();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ReportToExch field)
  { return isSetField(field); }
  public boolean isSetReportToExch()
  { return isSetField(113); }
  public void set(org.quickfix.field.Commission value)
  { setField(value); }
  public org.quickfix.field.Commission get(org.quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Commission getCommission() throws FieldNotFound
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(org.quickfix.field.CommType value)
  { setField(value); }
  public org.quickfix.field.CommType get(org.quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CommType getCommType() throws FieldNotFound
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(org.quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public org.quickfix.field.GrossTradeAmt get(org.quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { org.quickfix.field.GrossTradeAmt value = new org.quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(org.quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(org.quickfix.field.SettlCurrency value)
  { setField(value); }
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(org.quickfix.field.HandlInst value)
  { setField(value); }
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound
  { org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.HandlInst field)
  { return isSetField(field); }
  public boolean isSetHandlInst()
  { return isSetField(21); }
  public void set(org.quickfix.field.MinQty value)
  { setField(value); }
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MinQty getMinQty() throws FieldNotFound
  { org.quickfix.field.MinQty value = new org.quickfix.field.MinQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MinQty field)
  { return isSetField(field); }
  public boolean isSetMinQty()
  { return isSetField(110); }
  public void set(org.quickfix.field.MaxFloor value)
  { setField(value); }
  public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound
  { org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaxFloor field)
  { return isSetField(field); }
  public boolean isSetMaxFloor()
  { return isSetField(111); }
  public void set(org.quickfix.field.OpenClose value)
  { setField(value); }
  public org.quickfix.field.OpenClose get(org.quickfix.field.OpenClose  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OpenClose getOpenClose() throws FieldNotFound
  { org.quickfix.field.OpenClose value = new org.quickfix.field.OpenClose();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OpenClose field)
  { return isSetField(field); }
  public boolean isSetOpenClose()
  { return isSetField(77); }
  public void set(org.quickfix.field.MaxShow value)
  { setField(value); }
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound
  { org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaxShow field)
  { return isSetField(field); }
  public boolean isSetMaxShow()
  { return isSetField(210); }
  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(org.quickfix.field.FutSettDate2 value)
  { setField(value); }
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(org.quickfix.field.OrderQty2 value)
  { setField(value); }
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
  public void set(org.quickfix.field.ClearingFirm value)
  { setField(value); }
  public org.quickfix.field.ClearingFirm get(org.quickfix.field.ClearingFirm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClearingFirm getClearingFirm() throws FieldNotFound
  { org.quickfix.field.ClearingFirm value = new org.quickfix.field.ClearingFirm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClearingFirm field)
  { return isSetField(field); }
  public boolean isSetClearingFirm()
  { return isSetField(439); }
  public void set(org.quickfix.field.ClearingAccount value)
  { setField(value); }
  public org.quickfix.field.ClearingAccount get(org.quickfix.field.ClearingAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClearingAccount getClearingAccount() throws FieldNotFound
  { org.quickfix.field.ClearingAccount value = new org.quickfix.field.ClearingAccount();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClearingAccount field)
  { return isSetField(field); }
  public boolean isSetClearingAccount()
  { return isSetField(440); }
  public void set(org.quickfix.field.MultiLegReportingType value)
  { setField(value); }
  public org.quickfix.field.MultiLegReportingType get(org.quickfix.field.MultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { org.quickfix.field.MultiLegReportingType value = new org.quickfix.field.MultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetMultiLegReportingType()
  { return isSetField(442); }
  public void set(org.quickfix.field.NoContraBrokers value)
  { setField(value); }
  public org.quickfix.field.NoContraBrokers get(org.quickfix.field.NoContraBrokers  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoContraBrokers getNoContraBrokers() throws FieldNotFound
  { org.quickfix.field.NoContraBrokers value = new org.quickfix.field.NoContraBrokers();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoContraBrokers field)
  { return isSetField(field); }
  public boolean isSetNoContraBrokers()
  { return isSetField(382); }
  public static class NoContraBrokers extends Group {
    public NoContraBrokers() {
      super(382,375,
      new int[] {375,337,437,438,0 } ); }
  public void set(org.quickfix.field.ContraBroker value)
  { setField(value); }
  public org.quickfix.field.ContraBroker get(org.quickfix.field.ContraBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContraBroker getContraBroker() throws FieldNotFound
  { org.quickfix.field.ContraBroker value = new org.quickfix.field.ContraBroker();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContraBroker field)
  { return isSetField(field); }
  public boolean isSetContraBroker()
  { return isSetField(375); }
  public void set(org.quickfix.field.ContraTrader value)
  { setField(value); }
  public org.quickfix.field.ContraTrader get(org.quickfix.field.ContraTrader  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContraTrader getContraTrader() throws FieldNotFound
  { org.quickfix.field.ContraTrader value = new org.quickfix.field.ContraTrader();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContraTrader field)
  { return isSetField(field); }
  public boolean isSetContraTrader()
  { return isSetField(337); }
  public void set(org.quickfix.field.ContraTradeQty value)
  { setField(value); }
  public org.quickfix.field.ContraTradeQty get(org.quickfix.field.ContraTradeQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound
  { org.quickfix.field.ContraTradeQty value = new org.quickfix.field.ContraTradeQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContraTradeQty field)
  { return isSetField(field); }
  public boolean isSetContraTradeQty()
  { return isSetField(437); }
  public void set(org.quickfix.field.ContraTradeTime value)
  { setField(value); }
  public org.quickfix.field.ContraTradeTime get(org.quickfix.field.ContraTradeTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound
  { org.quickfix.field.ContraTradeTime value = new org.quickfix.field.ContraTradeTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContraTradeTime field)
  { return isSetField(field); }
  public boolean isSetContraTradeTime()
  { return isSetField(438); }
}
}

