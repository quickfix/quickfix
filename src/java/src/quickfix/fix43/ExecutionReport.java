package quickfix.fix43;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class ExecutionReport extends Message
{
  public ExecutionReport()
  {
    getHeader().setField(new MsgType("8"));
  }
  public ExecutionReport(
    quickfix.field.OrderID aOrderID,
    quickfix.field.ExecID aExecID,
    quickfix.field.ExecType aExecType,
    quickfix.field.OrdStatus aOrdStatus,
    quickfix.field.Side aSide,
    quickfix.field.LeavesQty aLeavesQty,
    quickfix.field.CumQty aCumQty,
    quickfix.field.AvgPx aAvgPx ) {

    getHeader().setField(new MsgType("8"));
    set(aOrderID);
    set(aExecID);
    set(aExecType);
    set(aOrdStatus);
    set(aSide);
    set(aLeavesQty);
    set(aCumQty);
    set(aAvgPx);
  }

  public void set(quickfix.field.OrderID value)
  { setField(value); }
  public quickfix.field.OrderID get(quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderID getOrderID() throws FieldNotFound
  { quickfix.field.OrderID value = new quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public quickfix.field.SecondaryOrderID get(quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { quickfix.field.SecondaryOrderID value = new quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(quickfix.field.SecondaryClOrdID value)
  { setField(value); }
  public quickfix.field.SecondaryClOrdID get(quickfix.field.SecondaryClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound
  { quickfix.field.SecondaryClOrdID value = new quickfix.field.SecondaryClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryClOrdID field)
  { return isSetField(field); }
  public boolean isSetSecondaryClOrdID()
  { return isSetField(526); }
  public void set(quickfix.field.SecondaryExecID value)
  { setField(value); }
  public quickfix.field.SecondaryExecID get(quickfix.field.SecondaryExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryExecID getSecondaryExecID() throws FieldNotFound
  { quickfix.field.SecondaryExecID value = new quickfix.field.SecondaryExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryExecID field)
  { return isSetField(field); }
  public boolean isSetSecondaryExecID()
  { return isSetField(527); }
  public void set(quickfix.field.ClOrdID value)
  { setField(value); }
  public quickfix.field.ClOrdID get(quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { quickfix.field.ClOrdID value = new quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(quickfix.field.OrigClOrdID value)
  { setField(value); }
  public quickfix.field.OrigClOrdID get(quickfix.field.OrigClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound
  { quickfix.field.OrigClOrdID value = new quickfix.field.OrigClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigClOrdID field)
  { return isSetField(field); }
  public boolean isSetOrigClOrdID()
  { return isSetField(41); }
  public void set(quickfix.field.ClOrdLinkID value)
  { setField(value); }
  public quickfix.field.ClOrdLinkID get(quickfix.field.ClOrdLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound
  { quickfix.field.ClOrdLinkID value = new quickfix.field.ClOrdLinkID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdLinkID field)
  { return isSetField(field); }
  public boolean isSetClOrdLinkID()
  { return isSetField(583); }
  public void set(quickfix.field.NoPartyIDs value)
  { setField(value); }
  public quickfix.field.NoPartyIDs get(quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { quickfix.field.NoPartyIDs value = new quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,523,0 } ); }
  public void set(quickfix.field.PartyID value)
  { setField(value); }
  public quickfix.field.PartyID get(quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyID getPartyID() throws FieldNotFound
  { quickfix.field.PartyID value = new quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(quickfix.field.PartyIDSource value)
  { setField(value); }
  public quickfix.field.PartyIDSource get(quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { quickfix.field.PartyIDSource value = new quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(quickfix.field.PartyRole value)
  { setField(value); }
  public quickfix.field.PartyRole get(quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { quickfix.field.PartyRole value = new quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(quickfix.field.PartySubID value)
  { setField(value); }
  public quickfix.field.PartySubID get(quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { quickfix.field.PartySubID value = new quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
}
  public void set(quickfix.field.TradeOriginationDate value)
  { setField(value); }
  public quickfix.field.TradeOriginationDate get(quickfix.field.TradeOriginationDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound
  { quickfix.field.TradeOriginationDate value = new quickfix.field.TradeOriginationDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeOriginationDate field)
  { return isSetField(field); }
  public boolean isSetTradeOriginationDate()
  { return isSetField(229); }
  public void set(quickfix.field.ListID value)
  { setField(value); }
  public quickfix.field.ListID get(quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListID getListID() throws FieldNotFound
  { quickfix.field.ListID value = new quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(quickfix.field.CrossID value)
  { setField(value); }
  public quickfix.field.CrossID get(quickfix.field.CrossID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossID getCrossID() throws FieldNotFound
  { quickfix.field.CrossID value = new quickfix.field.CrossID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossID field)
  { return isSetField(field); }
  public boolean isSetCrossID()
  { return isSetField(548); }
  public void set(quickfix.field.OrigCrossID value)
  { setField(value); }
  public quickfix.field.OrigCrossID get(quickfix.field.OrigCrossID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigCrossID getOrigCrossID() throws FieldNotFound
  { quickfix.field.OrigCrossID value = new quickfix.field.OrigCrossID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigCrossID field)
  { return isSetField(field); }
  public boolean isSetOrigCrossID()
  { return isSetField(551); }
  public void set(quickfix.field.CrossType value)
  { setField(value); }
  public quickfix.field.CrossType get(quickfix.field.CrossType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CrossType getCrossType() throws FieldNotFound
  { quickfix.field.CrossType value = new quickfix.field.CrossType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CrossType field)
  { return isSetField(field); }
  public boolean isSetCrossType()
  { return isSetField(549); }
  public void set(quickfix.field.ExecID value)
  { setField(value); }
  public quickfix.field.ExecID get(quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecID getExecID() throws FieldNotFound
  { quickfix.field.ExecID value = new quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
  public void set(quickfix.field.ExecRefID value)
  { setField(value); }
  public quickfix.field.ExecRefID get(quickfix.field.ExecRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecRefID getExecRefID() throws FieldNotFound
  { quickfix.field.ExecRefID value = new quickfix.field.ExecRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecRefID field)
  { return isSetField(field); }
  public boolean isSetExecRefID()
  { return isSetField(19); }
  public void set(quickfix.field.ExecType value)
  { setField(value); }
  public quickfix.field.ExecType get(quickfix.field.ExecType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecType getExecType() throws FieldNotFound
  { quickfix.field.ExecType value = new quickfix.field.ExecType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecType field)
  { return isSetField(field); }
  public boolean isSetExecType()
  { return isSetField(150); }
  public void set(quickfix.field.OrdStatus value)
  { setField(value); }
  public quickfix.field.OrdStatus get(quickfix.field.OrdStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdStatus getOrdStatus() throws FieldNotFound
  { quickfix.field.OrdStatus value = new quickfix.field.OrdStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdStatus field)
  { return isSetField(field); }
  public boolean isSetOrdStatus()
  { return isSetField(39); }
  public void set(quickfix.field.WorkingIndicator value)
  { setField(value); }
  public quickfix.field.WorkingIndicator get(quickfix.field.WorkingIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.WorkingIndicator getWorkingIndicator() throws FieldNotFound
  { quickfix.field.WorkingIndicator value = new quickfix.field.WorkingIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.WorkingIndicator field)
  { return isSetField(field); }
  public boolean isSetWorkingIndicator()
  { return isSetField(636); }
  public void set(quickfix.field.OrdRejReason value)
  { setField(value); }
  public quickfix.field.OrdRejReason get(quickfix.field.OrdRejReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdRejReason getOrdRejReason() throws FieldNotFound
  { quickfix.field.OrdRejReason value = new quickfix.field.OrdRejReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdRejReason field)
  { return isSetField(field); }
  public boolean isSetOrdRejReason()
  { return isSetField(103); }
  public void set(quickfix.field.ExecRestatementReason value)
  { setField(value); }
  public quickfix.field.ExecRestatementReason get(quickfix.field.ExecRestatementReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecRestatementReason getExecRestatementReason() throws FieldNotFound
  { quickfix.field.ExecRestatementReason value = new quickfix.field.ExecRestatementReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecRestatementReason field)
  { return isSetField(field); }
  public boolean isSetExecRestatementReason()
  { return isSetField(378); }
  public void set(quickfix.field.Account value)
  { setField(value); }
  public quickfix.field.Account get(quickfix.field.Account  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Account getAccount() throws FieldNotFound
  { quickfix.field.Account value = new quickfix.field.Account();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Account field)
  { return isSetField(field); }
  public boolean isSetAccount()
  { return isSetField(1); }
  public void set(quickfix.field.AccountType value)
  { setField(value); }
  public quickfix.field.AccountType get(quickfix.field.AccountType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccountType getAccountType() throws FieldNotFound
  { quickfix.field.AccountType value = new quickfix.field.AccountType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccountType field)
  { return isSetField(field); }
  public boolean isSetAccountType()
  { return isSetField(581); }
  public void set(quickfix.field.DayBookingInst value)
  { setField(value); }
  public quickfix.field.DayBookingInst get(quickfix.field.DayBookingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DayBookingInst getDayBookingInst() throws FieldNotFound
  { quickfix.field.DayBookingInst value = new quickfix.field.DayBookingInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DayBookingInst field)
  { return isSetField(field); }
  public boolean isSetDayBookingInst()
  { return isSetField(589); }
  public void set(quickfix.field.BookingUnit value)
  { setField(value); }
  public quickfix.field.BookingUnit get(quickfix.field.BookingUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BookingUnit getBookingUnit() throws FieldNotFound
  { quickfix.field.BookingUnit value = new quickfix.field.BookingUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BookingUnit field)
  { return isSetField(field); }
  public boolean isSetBookingUnit()
  { return isSetField(590); }
  public void set(quickfix.field.PreallocMethod value)
  { setField(value); }
  public quickfix.field.PreallocMethod get(quickfix.field.PreallocMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound
  { quickfix.field.PreallocMethod value = new quickfix.field.PreallocMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PreallocMethod field)
  { return isSetField(field); }
  public boolean isSetPreallocMethod()
  { return isSetField(591); }
  public void set(quickfix.field.SettlmntTyp value)
  { setField(value); }
  public quickfix.field.SettlmntTyp get(quickfix.field.SettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { quickfix.field.SettlmntTyp value = new quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }
  public void set(quickfix.field.FutSettDate value)
  { setField(value); }
  public quickfix.field.FutSettDate get(quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { quickfix.field.FutSettDate value = new quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(quickfix.field.CashMargin value)
  { setField(value); }
  public quickfix.field.CashMargin get(quickfix.field.CashMargin  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashMargin getCashMargin() throws FieldNotFound
  { quickfix.field.CashMargin value = new quickfix.field.CashMargin();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashMargin field)
  { return isSetField(field); }
  public boolean isSetCashMargin()
  { return isSetField(544); }
  public void set(quickfix.field.ClearingFeeIndicator value)
  { setField(value); }
  public quickfix.field.ClearingFeeIndicator get(quickfix.field.ClearingFeeIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound
  { quickfix.field.ClearingFeeIndicator value = new quickfix.field.ClearingFeeIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingFeeIndicator field)
  { return isSetField(field); }
  public boolean isSetClearingFeeIndicator()
  { return isSetField(635); }
  public void set(quickfix.field.Symbol value)
  { setField(value); }
  public quickfix.field.Symbol get(quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Symbol getSymbol() throws FieldNotFound
  { quickfix.field.Symbol value = new quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(quickfix.field.SymbolSfx value)
  { setField(value); }
  public quickfix.field.SymbolSfx get(quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { quickfix.field.SymbolSfx value = new quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(quickfix.field.SecurityID value)
  { setField(value); }
  public quickfix.field.SecurityID get(quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { quickfix.field.SecurityID value = new quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(quickfix.field.SecurityIDSource value)
  { setField(value); }
  public quickfix.field.SecurityIDSource get(quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityIDSource getSecurityIDSource() throws FieldNotFound
  { quickfix.field.SecurityIDSource value = new quickfix.field.SecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityIDSource()
  { return isSetField(22); }
  public void set(quickfix.field.Product value)
  { setField(value); }
  public quickfix.field.Product get(quickfix.field.Product  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Product getProduct() throws FieldNotFound
  { quickfix.field.Product value = new quickfix.field.Product();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Product field)
  { return isSetField(field); }
  public boolean isSetProduct()
  { return isSetField(460); }
  public void set(quickfix.field.CFICode value)
  { setField(value); }
  public quickfix.field.CFICode get(quickfix.field.CFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CFICode getCFICode() throws FieldNotFound
  { quickfix.field.CFICode value = new quickfix.field.CFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CFICode field)
  { return isSetField(field); }
  public boolean isSetCFICode()
  { return isSetField(461); }
  public void set(quickfix.field.SecurityType value)
  { setField(value); }
  public quickfix.field.SecurityType get(quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { quickfix.field.SecurityType value = new quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public quickfix.field.MaturityMonthYear get(quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { quickfix.field.MaturityMonthYear value = new quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(quickfix.field.MaturityDate value)
  { setField(value); }
  public quickfix.field.MaturityDate get(quickfix.field.MaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityDate getMaturityDate() throws FieldNotFound
  { quickfix.field.MaturityDate value = new quickfix.field.MaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityDate field)
  { return isSetField(field); }
  public boolean isSetMaturityDate()
  { return isSetField(541); }
  public void set(quickfix.field.CouponPaymentDate value)
  { setField(value); }
  public quickfix.field.CouponPaymentDate get(quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponPaymentDate getCouponPaymentDate() throws FieldNotFound
  { quickfix.field.CouponPaymentDate value = new quickfix.field.CouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetCouponPaymentDate()
  { return isSetField(224); }
  public void set(quickfix.field.IssueDate value)
  { setField(value); }
  public quickfix.field.IssueDate get(quickfix.field.IssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IssueDate getIssueDate() throws FieldNotFound
  { quickfix.field.IssueDate value = new quickfix.field.IssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IssueDate field)
  { return isSetField(field); }
  public boolean isSetIssueDate()
  { return isSetField(225); }
  public void set(quickfix.field.RepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.RepoCollateralSecurityType get(quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepoCollateralSecurityType getRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.RepoCollateralSecurityType value = new quickfix.field.RepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetRepoCollateralSecurityType()
  { return isSetField(239); }
  public void set(quickfix.field.RepurchaseTerm value)
  { setField(value); }
  public quickfix.field.RepurchaseTerm get(quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseTerm getRepurchaseTerm() throws FieldNotFound
  { quickfix.field.RepurchaseTerm value = new quickfix.field.RepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetRepurchaseTerm()
  { return isSetField(226); }
  public void set(quickfix.field.RepurchaseRate value)
  { setField(value); }
  public quickfix.field.RepurchaseRate get(quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RepurchaseRate getRepurchaseRate() throws FieldNotFound
  { quickfix.field.RepurchaseRate value = new quickfix.field.RepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetRepurchaseRate()
  { return isSetField(227); }
  public void set(quickfix.field.Factor value)
  { setField(value); }
  public quickfix.field.Factor get(quickfix.field.Factor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Factor getFactor() throws FieldNotFound
  { quickfix.field.Factor value = new quickfix.field.Factor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Factor field)
  { return isSetField(field); }
  public boolean isSetFactor()
  { return isSetField(228); }
  public void set(quickfix.field.CreditRating value)
  { setField(value); }
  public quickfix.field.CreditRating get(quickfix.field.CreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CreditRating getCreditRating() throws FieldNotFound
  { quickfix.field.CreditRating value = new quickfix.field.CreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CreditRating field)
  { return isSetField(field); }
  public boolean isSetCreditRating()
  { return isSetField(255); }
  public void set(quickfix.field.InstrRegistry value)
  { setField(value); }
  public quickfix.field.InstrRegistry get(quickfix.field.InstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrRegistry getInstrRegistry() throws FieldNotFound
  { quickfix.field.InstrRegistry value = new quickfix.field.InstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrRegistry field)
  { return isSetField(field); }
  public boolean isSetInstrRegistry()
  { return isSetField(543); }
  public void set(quickfix.field.CountryOfIssue value)
  { setField(value); }
  public quickfix.field.CountryOfIssue get(quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CountryOfIssue getCountryOfIssue() throws FieldNotFound
  { quickfix.field.CountryOfIssue value = new quickfix.field.CountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetCountryOfIssue()
  { return isSetField(470); }
  public void set(quickfix.field.StateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.StateOrProvinceOfIssue get(quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StateOrProvinceOfIssue getStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.StateOrProvinceOfIssue value = new quickfix.field.StateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetStateOrProvinceOfIssue()
  { return isSetField(471); }
  public void set(quickfix.field.LocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LocaleOfIssue get(quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocaleOfIssue getLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LocaleOfIssue value = new quickfix.field.LocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLocaleOfIssue()
  { return isSetField(472); }
  public void set(quickfix.field.RedemptionDate value)
  { setField(value); }
  public quickfix.field.RedemptionDate get(quickfix.field.RedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RedemptionDate getRedemptionDate() throws FieldNotFound
  { quickfix.field.RedemptionDate value = new quickfix.field.RedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RedemptionDate field)
  { return isSetField(field); }
  public boolean isSetRedemptionDate()
  { return isSetField(240); }
  public void set(quickfix.field.StrikePrice value)
  { setField(value); }
  public quickfix.field.StrikePrice get(quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { quickfix.field.StrikePrice value = new quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(quickfix.field.OptAttribute value)
  { setField(value); }
  public quickfix.field.OptAttribute get(quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { quickfix.field.OptAttribute value = new quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(quickfix.field.ContractMultiplier value)
  { setField(value); }
  public quickfix.field.ContractMultiplier get(quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { quickfix.field.ContractMultiplier value = new quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(quickfix.field.CouponRate value)
  { setField(value); }
  public quickfix.field.CouponRate get(quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { quickfix.field.CouponRate value = new quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(quickfix.field.SecurityExchange value)
  { setField(value); }
  public quickfix.field.SecurityExchange get(quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { quickfix.field.SecurityExchange value = new quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(quickfix.field.Issuer value)
  { setField(value); }
  public quickfix.field.Issuer get(quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Issuer getIssuer() throws FieldNotFound
  { quickfix.field.Issuer value = new quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedIssuerLen get(quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedIssuerLen value = new quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(quickfix.field.EncodedIssuer value)
  { setField(value); }
  public quickfix.field.EncodedIssuer get(quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { quickfix.field.EncodedIssuer value = new quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(quickfix.field.SecurityDesc value)
  { setField(value); }
  public quickfix.field.SecurityDesc get(quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { quickfix.field.SecurityDesc value = new quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDescLen get(quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedSecurityDescLen value = new quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDesc get(quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedSecurityDesc value = new quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(quickfix.field.NoSecurityAltID value)
  { setField(value); }
  public quickfix.field.NoSecurityAltID get(quickfix.field.NoSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoSecurityAltID getNoSecurityAltID() throws FieldNotFound
  { quickfix.field.NoSecurityAltID value = new quickfix.field.NoSecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoSecurityAltID()
  { return isSetField(454); }
  public static class NoSecurityAltID extends Group {
    public NoSecurityAltID() {
      super(454,455,
      new int[] {455,456,0 } ); }
  public void set(quickfix.field.SecurityAltID value)
  { setField(value); }
  public quickfix.field.SecurityAltID get(quickfix.field.SecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityAltID getSecurityAltID() throws FieldNotFound
  { quickfix.field.SecurityAltID value = new quickfix.field.SecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityAltID field)
  { return isSetField(field); }
  public boolean isSetSecurityAltID()
  { return isSetField(455); }
  public void set(quickfix.field.SecurityAltIDSource value)
  { setField(value); }
  public quickfix.field.SecurityAltIDSource get(quickfix.field.SecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound
  { quickfix.field.SecurityAltIDSource value = new quickfix.field.SecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityAltIDSource()
  { return isSetField(456); }
}
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(quickfix.field.NoStipulations value)
  { setField(value); }
  public quickfix.field.NoStipulations get(quickfix.field.NoStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound
  { quickfix.field.NoStipulations value = new quickfix.field.NoStipulations();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoStipulations field)
  { return isSetField(field); }
  public boolean isSetNoStipulations()
  { return isSetField(232); }
  public static class NoStipulations extends Group {
    public NoStipulations() {
      super(232,233,
      new int[] {233,234,0 } ); }
  public void set(quickfix.field.StipulationType value)
  { setField(value); }
  public quickfix.field.StipulationType get(quickfix.field.StipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationType getStipulationType() throws FieldNotFound
  { quickfix.field.StipulationType value = new quickfix.field.StipulationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationType field)
  { return isSetField(field); }
  public boolean isSetStipulationType()
  { return isSetField(233); }
  public void set(quickfix.field.StipulationValue value)
  { setField(value); }
  public quickfix.field.StipulationValue get(quickfix.field.StipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound
  { quickfix.field.StipulationValue value = new quickfix.field.StipulationValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StipulationValue field)
  { return isSetField(field); }
  public boolean isSetStipulationValue()
  { return isSetField(234); }
}
  public void set(quickfix.field.QuantityType value)
  { setField(value); }
  public quickfix.field.QuantityType get(quickfix.field.QuantityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuantityType getQuantityType() throws FieldNotFound
  { quickfix.field.QuantityType value = new quickfix.field.QuantityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuantityType field)
  { return isSetField(field); }
  public boolean isSetQuantityType()
  { return isSetField(465); }
  public void set(quickfix.field.OrderQty value)
  { setField(value); }
  public quickfix.field.OrderQty get(quickfix.field.OrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty getOrderQty() throws FieldNotFound
  { quickfix.field.OrderQty value = new quickfix.field.OrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty field)
  { return isSetField(field); }
  public boolean isSetOrderQty()
  { return isSetField(38); }
  public void set(quickfix.field.CashOrderQty value)
  { setField(value); }
  public quickfix.field.CashOrderQty get(quickfix.field.CashOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound
  { quickfix.field.CashOrderQty value = new quickfix.field.CashOrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashOrderQty field)
  { return isSetField(field); }
  public boolean isSetCashOrderQty()
  { return isSetField(152); }
  public void set(quickfix.field.OrderPercent value)
  { setField(value); }
  public quickfix.field.OrderPercent get(quickfix.field.OrderPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderPercent getOrderPercent() throws FieldNotFound
  { quickfix.field.OrderPercent value = new quickfix.field.OrderPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderPercent field)
  { return isSetField(field); }
  public boolean isSetOrderPercent()
  { return isSetField(516); }
  public void set(quickfix.field.RoundingDirection value)
  { setField(value); }
  public quickfix.field.RoundingDirection get(quickfix.field.RoundingDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoundingDirection getRoundingDirection() throws FieldNotFound
  { quickfix.field.RoundingDirection value = new quickfix.field.RoundingDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoundingDirection field)
  { return isSetField(field); }
  public boolean isSetRoundingDirection()
  { return isSetField(468); }
  public void set(quickfix.field.RoundingModulus value)
  { setField(value); }
  public quickfix.field.RoundingModulus get(quickfix.field.RoundingModulus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound
  { quickfix.field.RoundingModulus value = new quickfix.field.RoundingModulus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoundingModulus field)
  { return isSetField(field); }
  public boolean isSetRoundingModulus()
  { return isSetField(469); }
  public void set(quickfix.field.OrdType value)
  { setField(value); }
  public quickfix.field.OrdType get(quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdType getOrdType() throws FieldNotFound
  { quickfix.field.OrdType value = new quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(quickfix.field.PriceType value)
  { setField(value); }
  public quickfix.field.PriceType get(quickfix.field.PriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriceType getPriceType() throws FieldNotFound
  { quickfix.field.PriceType value = new quickfix.field.PriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriceType field)
  { return isSetField(field); }
  public boolean isSetPriceType()
  { return isSetField(423); }
  public void set(quickfix.field.Price value)
  { setField(value); }
  public quickfix.field.Price get(quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Price getPrice() throws FieldNotFound
  { quickfix.field.Price value = new quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
  public void set(quickfix.field.StopPx value)
  { setField(value); }
  public quickfix.field.StopPx get(quickfix.field.StopPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StopPx getStopPx() throws FieldNotFound
  { quickfix.field.StopPx value = new quickfix.field.StopPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StopPx field)
  { return isSetField(field); }
  public boolean isSetStopPx()
  { return isSetField(99); }
  public void set(quickfix.field.PegDifference value)
  { setField(value); }
  public quickfix.field.PegDifference get(quickfix.field.PegDifference  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegDifference getPegDifference() throws FieldNotFound
  { quickfix.field.PegDifference value = new quickfix.field.PegDifference();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegDifference field)
  { return isSetField(field); }
  public boolean isSetPegDifference()
  { return isSetField(211); }
  public void set(quickfix.field.DiscretionInst value)
  { setField(value); }
  public quickfix.field.DiscretionInst get(quickfix.field.DiscretionInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound
  { quickfix.field.DiscretionInst value = new quickfix.field.DiscretionInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionInst field)
  { return isSetField(field); }
  public boolean isSetDiscretionInst()
  { return isSetField(388); }
  public void set(quickfix.field.DiscretionOffset value)
  { setField(value); }
  public quickfix.field.DiscretionOffset get(quickfix.field.DiscretionOffset  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionOffset getDiscretionOffset() throws FieldNotFound
  { quickfix.field.DiscretionOffset value = new quickfix.field.DiscretionOffset();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionOffset field)
  { return isSetField(field); }
  public boolean isSetDiscretionOffset()
  { return isSetField(389); }
  public void set(quickfix.field.Currency value)
  { setField(value); }
  public quickfix.field.Currency get(quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Currency getCurrency() throws FieldNotFound
  { quickfix.field.Currency value = new quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
  public void set(quickfix.field.ComplianceID value)
  { setField(value); }
  public quickfix.field.ComplianceID get(quickfix.field.ComplianceID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ComplianceID getComplianceID() throws FieldNotFound
  { quickfix.field.ComplianceID value = new quickfix.field.ComplianceID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ComplianceID field)
  { return isSetField(field); }
  public boolean isSetComplianceID()
  { return isSetField(376); }
  public void set(quickfix.field.SolicitedFlag value)
  { setField(value); }
  public quickfix.field.SolicitedFlag get(quickfix.field.SolicitedFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound
  { quickfix.field.SolicitedFlag value = new quickfix.field.SolicitedFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SolicitedFlag field)
  { return isSetField(field); }
  public boolean isSetSolicitedFlag()
  { return isSetField(377); }
  public void set(quickfix.field.TimeInForce value)
  { setField(value); }
  public quickfix.field.TimeInForce get(quickfix.field.TimeInForce  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound
  { quickfix.field.TimeInForce value = new quickfix.field.TimeInForce();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeInForce field)
  { return isSetField(field); }
  public boolean isSetTimeInForce()
  { return isSetField(59); }
  public void set(quickfix.field.EffectiveTime value)
  { setField(value); }
  public quickfix.field.EffectiveTime get(quickfix.field.EffectiveTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound
  { quickfix.field.EffectiveTime value = new quickfix.field.EffectiveTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EffectiveTime field)
  { return isSetField(field); }
  public boolean isSetEffectiveTime()
  { return isSetField(168); }
  public void set(quickfix.field.ExpireDate value)
  { setField(value); }
  public quickfix.field.ExpireDate get(quickfix.field.ExpireDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExpireDate getExpireDate() throws FieldNotFound
  { quickfix.field.ExpireDate value = new quickfix.field.ExpireDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExpireDate field)
  { return isSetField(field); }
  public boolean isSetExpireDate()
  { return isSetField(432); }
  public void set(quickfix.field.ExpireTime value)
  { setField(value); }
  public quickfix.field.ExpireTime get(quickfix.field.ExpireTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExpireTime getExpireTime() throws FieldNotFound
  { quickfix.field.ExpireTime value = new quickfix.field.ExpireTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExpireTime field)
  { return isSetField(field); }
  public boolean isSetExpireTime()
  { return isSetField(126); }
  public void set(quickfix.field.ExecInst value)
  { setField(value); }
  public quickfix.field.ExecInst get(quickfix.field.ExecInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecInst getExecInst() throws FieldNotFound
  { quickfix.field.ExecInst value = new quickfix.field.ExecInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecInst field)
  { return isSetField(field); }
  public boolean isSetExecInst()
  { return isSetField(18); }
  public void set(quickfix.field.OrderCapacity value)
  { setField(value); }
  public quickfix.field.OrderCapacity get(quickfix.field.OrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderCapacity getOrderCapacity() throws FieldNotFound
  { quickfix.field.OrderCapacity value = new quickfix.field.OrderCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderCapacity field)
  { return isSetField(field); }
  public boolean isSetOrderCapacity()
  { return isSetField(528); }
  public void set(quickfix.field.OrderRestrictions value)
  { setField(value); }
  public quickfix.field.OrderRestrictions get(quickfix.field.OrderRestrictions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderRestrictions getOrderRestrictions() throws FieldNotFound
  { quickfix.field.OrderRestrictions value = new quickfix.field.OrderRestrictions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderRestrictions field)
  { return isSetField(field); }
  public boolean isSetOrderRestrictions()
  { return isSetField(529); }
  public void set(quickfix.field.CustOrderCapacity value)
  { setField(value); }
  public quickfix.field.CustOrderCapacity get(quickfix.field.CustOrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound
  { quickfix.field.CustOrderCapacity value = new quickfix.field.CustOrderCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CustOrderCapacity field)
  { return isSetField(field); }
  public boolean isSetCustOrderCapacity()
  { return isSetField(582); }
  public void set(quickfix.field.Rule80A value)
  { setField(value); }
  public quickfix.field.Rule80A get(quickfix.field.Rule80A  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Rule80A getRule80A() throws FieldNotFound
  { quickfix.field.Rule80A value = new quickfix.field.Rule80A();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Rule80A field)
  { return isSetField(field); }
  public boolean isSetRule80A()
  { return isSetField(47); }
  public void set(quickfix.field.LastQty value)
  { setField(value); }
  public quickfix.field.LastQty get(quickfix.field.LastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastQty getLastQty() throws FieldNotFound
  { quickfix.field.LastQty value = new quickfix.field.LastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastQty field)
  { return isSetField(field); }
  public boolean isSetLastQty()
  { return isSetField(32); }
  public void set(quickfix.field.UnderlyingLastQty value)
  { setField(value); }
  public quickfix.field.UnderlyingLastQty get(quickfix.field.UnderlyingLastQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingLastQty getUnderlyingLastQty() throws FieldNotFound
  { quickfix.field.UnderlyingLastQty value = new quickfix.field.UnderlyingLastQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingLastQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLastQty()
  { return isSetField(652); }
  public void set(quickfix.field.LastPx value)
  { setField(value); }
  public quickfix.field.LastPx get(quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastPx getLastPx() throws FieldNotFound
  { quickfix.field.LastPx value = new quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
  public void set(quickfix.field.UnderlyingLastPx value)
  { setField(value); }
  public quickfix.field.UnderlyingLastPx get(quickfix.field.UnderlyingLastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingLastPx getUnderlyingLastPx() throws FieldNotFound
  { quickfix.field.UnderlyingLastPx value = new quickfix.field.UnderlyingLastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingLastPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLastPx()
  { return isSetField(651); }
  public void set(quickfix.field.LastSpotRate value)
  { setField(value); }
  public quickfix.field.LastSpotRate get(quickfix.field.LastSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastSpotRate getLastSpotRate() throws FieldNotFound
  { quickfix.field.LastSpotRate value = new quickfix.field.LastSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastSpotRate field)
  { return isSetField(field); }
  public boolean isSetLastSpotRate()
  { return isSetField(194); }
  public void set(quickfix.field.LastForwardPoints value)
  { setField(value); }
  public quickfix.field.LastForwardPoints get(quickfix.field.LastForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastForwardPoints getLastForwardPoints() throws FieldNotFound
  { quickfix.field.LastForwardPoints value = new quickfix.field.LastForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastForwardPoints field)
  { return isSetField(field); }
  public boolean isSetLastForwardPoints()
  { return isSetField(195); }
  public void set(quickfix.field.LastMkt value)
  { setField(value); }
  public quickfix.field.LastMkt get(quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { quickfix.field.LastMkt value = new quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(quickfix.field.TradingSessionID value)
  { setField(value); }
  public quickfix.field.TradingSessionID get(quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { quickfix.field.TradingSessionID value = new quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public quickfix.field.TradingSessionSubID get(quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { quickfix.field.TradingSessionSubID value = new quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
  public void set(quickfix.field.LastCapacity value)
  { setField(value); }
  public quickfix.field.LastCapacity get(quickfix.field.LastCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound
  { quickfix.field.LastCapacity value = new quickfix.field.LastCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastCapacity field)
  { return isSetField(field); }
  public boolean isSetLastCapacity()
  { return isSetField(29); }
  public void set(quickfix.field.LeavesQty value)
  { setField(value); }
  public quickfix.field.LeavesQty get(quickfix.field.LeavesQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound
  { quickfix.field.LeavesQty value = new quickfix.field.LeavesQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LeavesQty field)
  { return isSetField(field); }
  public boolean isSetLeavesQty()
  { return isSetField(151); }
  public void set(quickfix.field.CumQty value)
  { setField(value); }
  public quickfix.field.CumQty get(quickfix.field.CumQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CumQty getCumQty() throws FieldNotFound
  { quickfix.field.CumQty value = new quickfix.field.CumQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CumQty field)
  { return isSetField(field); }
  public boolean isSetCumQty()
  { return isSetField(14); }
  public void set(quickfix.field.AvgPx value)
  { setField(value); }
  public quickfix.field.AvgPx get(quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { quickfix.field.AvgPx value = new quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
  public void set(quickfix.field.DayOrderQty value)
  { setField(value); }
  public quickfix.field.DayOrderQty get(quickfix.field.DayOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DayOrderQty getDayOrderQty() throws FieldNotFound
  { quickfix.field.DayOrderQty value = new quickfix.field.DayOrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DayOrderQty field)
  { return isSetField(field); }
  public boolean isSetDayOrderQty()
  { return isSetField(424); }
  public void set(quickfix.field.DayCumQty value)
  { setField(value); }
  public quickfix.field.DayCumQty get(quickfix.field.DayCumQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DayCumQty getDayCumQty() throws FieldNotFound
  { quickfix.field.DayCumQty value = new quickfix.field.DayCumQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DayCumQty field)
  { return isSetField(field); }
  public boolean isSetDayCumQty()
  { return isSetField(425); }
  public void set(quickfix.field.DayAvgPx value)
  { setField(value); }
  public quickfix.field.DayAvgPx get(quickfix.field.DayAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DayAvgPx getDayAvgPx() throws FieldNotFound
  { quickfix.field.DayAvgPx value = new quickfix.field.DayAvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DayAvgPx field)
  { return isSetField(field); }
  public boolean isSetDayAvgPx()
  { return isSetField(426); }
  public void set(quickfix.field.GTBookingInst value)
  { setField(value); }
  public quickfix.field.GTBookingInst get(quickfix.field.GTBookingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GTBookingInst getGTBookingInst() throws FieldNotFound
  { quickfix.field.GTBookingInst value = new quickfix.field.GTBookingInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GTBookingInst field)
  { return isSetField(field); }
  public boolean isSetGTBookingInst()
  { return isSetField(427); }
  public void set(quickfix.field.TradeDate value)
  { setField(value); }
  public quickfix.field.TradeDate get(quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { quickfix.field.TradeDate value = new quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
  public void set(quickfix.field.TransactTime value)
  { setField(value); }
  public quickfix.field.TransactTime get(quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { quickfix.field.TransactTime value = new quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(quickfix.field.ReportToExch value)
  { setField(value); }
  public quickfix.field.ReportToExch get(quickfix.field.ReportToExch  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ReportToExch getReportToExch() throws FieldNotFound
  { quickfix.field.ReportToExch value = new quickfix.field.ReportToExch();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ReportToExch field)
  { return isSetField(field); }
  public boolean isSetReportToExch()
  { return isSetField(113); }
  public void set(quickfix.field.Commission value)
  { setField(value); }
  public quickfix.field.Commission get(quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Commission getCommission() throws FieldNotFound
  { quickfix.field.Commission value = new quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(quickfix.field.CommType value)
  { setField(value); }
  public quickfix.field.CommType get(quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommType getCommType() throws FieldNotFound
  { quickfix.field.CommType value = new quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(quickfix.field.CommCurrency value)
  { setField(value); }
  public quickfix.field.CommCurrency get(quickfix.field.CommCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound
  { quickfix.field.CommCurrency value = new quickfix.field.CommCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommCurrency field)
  { return isSetField(field); }
  public boolean isSetCommCurrency()
  { return isSetField(479); }
  public void set(quickfix.field.FundRenewWaiv value)
  { setField(value); }
  public quickfix.field.FundRenewWaiv get(quickfix.field.FundRenewWaiv  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound
  { quickfix.field.FundRenewWaiv value = new quickfix.field.FundRenewWaiv();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FundRenewWaiv field)
  { return isSetField(field); }
  public boolean isSetFundRenewWaiv()
  { return isSetField(497); }
  public void set(quickfix.field.Spread value)
  { setField(value); }
  public quickfix.field.Spread get(quickfix.field.Spread  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Spread getSpread() throws FieldNotFound
  { quickfix.field.Spread value = new quickfix.field.Spread();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Spread field)
  { return isSetField(field); }
  public boolean isSetSpread()
  { return isSetField(218); }
  public void set(quickfix.field.BenchmarkCurveCurrency value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveCurrency get(quickfix.field.BenchmarkCurveCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound
  { quickfix.field.BenchmarkCurveCurrency value = new quickfix.field.BenchmarkCurveCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveCurrency field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveCurrency()
  { return isSetField(220); }
  public void set(quickfix.field.BenchmarkCurveName value)
  { setField(value); }
  public quickfix.field.BenchmarkCurveName get(quickfix.field.BenchmarkCurveName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound
  { quickfix.field.BenchmarkCurveName value = new quickfix.field.BenchmarkCurveName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurveName field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveName()
  { return isSetField(221); }
  public void set(quickfix.field.BenchmarkCurvePoint value)
  { setField(value); }
  public quickfix.field.BenchmarkCurvePoint get(quickfix.field.BenchmarkCurvePoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound
  { quickfix.field.BenchmarkCurvePoint value = new quickfix.field.BenchmarkCurvePoint();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BenchmarkCurvePoint field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurvePoint()
  { return isSetField(222); }
  public void set(quickfix.field.YieldType value)
  { setField(value); }
  public quickfix.field.YieldType get(quickfix.field.YieldType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.YieldType getYieldType() throws FieldNotFound
  { quickfix.field.YieldType value = new quickfix.field.YieldType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.YieldType field)
  { return isSetField(field); }
  public boolean isSetYieldType()
  { return isSetField(235); }
  public void set(quickfix.field.Yield value)
  { setField(value); }
  public quickfix.field.Yield get(quickfix.field.Yield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Yield getYield() throws FieldNotFound
  { quickfix.field.Yield value = new quickfix.field.Yield();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Yield field)
  { return isSetField(field); }
  public boolean isSetYield()
  { return isSetField(236); }
  public void set(quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public quickfix.field.GrossTradeAmt get(quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { quickfix.field.GrossTradeAmt value = new quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(quickfix.field.NumDaysInterest value)
  { setField(value); }
  public quickfix.field.NumDaysInterest get(quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { quickfix.field.NumDaysInterest value = new quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(quickfix.field.ExDate value)
  { setField(value); }
  public quickfix.field.ExDate get(quickfix.field.ExDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExDate getExDate() throws FieldNotFound
  { quickfix.field.ExDate value = new quickfix.field.ExDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExDate field)
  { return isSetField(field); }
  public boolean isSetExDate()
  { return isSetField(230); }
  public void set(quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public quickfix.field.AccruedInterestRate get(quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { quickfix.field.AccruedInterestRate value = new quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.AccruedInterestAmt get(quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.AccruedInterestAmt value = new quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(quickfix.field.TradedFlatSwitch value)
  { setField(value); }
  public quickfix.field.TradedFlatSwitch get(quickfix.field.TradedFlatSwitch  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradedFlatSwitch getTradedFlatSwitch() throws FieldNotFound
  { quickfix.field.TradedFlatSwitch value = new quickfix.field.TradedFlatSwitch();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradedFlatSwitch field)
  { return isSetField(field); }
  public boolean isSetTradedFlatSwitch()
  { return isSetField(258); }
  public void set(quickfix.field.BasisFeatureDate value)
  { setField(value); }
  public quickfix.field.BasisFeatureDate get(quickfix.field.BasisFeatureDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BasisFeatureDate getBasisFeatureDate() throws FieldNotFound
  { quickfix.field.BasisFeatureDate value = new quickfix.field.BasisFeatureDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BasisFeatureDate field)
  { return isSetField(field); }
  public boolean isSetBasisFeatureDate()
  { return isSetField(259); }
  public void set(quickfix.field.BasisFeaturePrice value)
  { setField(value); }
  public quickfix.field.BasisFeaturePrice get(quickfix.field.BasisFeaturePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BasisFeaturePrice getBasisFeaturePrice() throws FieldNotFound
  { quickfix.field.BasisFeaturePrice value = new quickfix.field.BasisFeaturePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BasisFeaturePrice field)
  { return isSetField(field); }
  public boolean isSetBasisFeaturePrice()
  { return isSetField(260); }
  public void set(quickfix.field.Concession value)
  { setField(value); }
  public quickfix.field.Concession get(quickfix.field.Concession  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Concession getConcession() throws FieldNotFound
  { quickfix.field.Concession value = new quickfix.field.Concession();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Concession field)
  { return isSetField(field); }
  public boolean isSetConcession()
  { return isSetField(238); }
  public void set(quickfix.field.TotalTakedown value)
  { setField(value); }
  public quickfix.field.TotalTakedown get(quickfix.field.TotalTakedown  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound
  { quickfix.field.TotalTakedown value = new quickfix.field.TotalTakedown();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TotalTakedown field)
  { return isSetField(field); }
  public boolean isSetTotalTakedown()
  { return isSetField(237); }
  public void set(quickfix.field.NetMoney value)
  { setField(value); }
  public quickfix.field.NetMoney get(quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { quickfix.field.NetMoney value = new quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public quickfix.field.SettlCurrAmt get(quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { quickfix.field.SettlCurrAmt value = new quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(quickfix.field.SettlCurrency value)
  { setField(value); }
  public quickfix.field.SettlCurrency get(quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { quickfix.field.SettlCurrency value = new quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRate get(quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrFxRate value = new quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRateCalc get(quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { quickfix.field.SettlCurrFxRateCalc value = new quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(quickfix.field.HandlInst value)
  { setField(value); }
  public quickfix.field.HandlInst get(quickfix.field.HandlInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.HandlInst getHandlInst() throws FieldNotFound
  { quickfix.field.HandlInst value = new quickfix.field.HandlInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.HandlInst field)
  { return isSetField(field); }
  public boolean isSetHandlInst()
  { return isSetField(21); }
  public void set(quickfix.field.MinQty value)
  { setField(value); }
  public quickfix.field.MinQty get(quickfix.field.MinQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinQty getMinQty() throws FieldNotFound
  { quickfix.field.MinQty value = new quickfix.field.MinQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinQty field)
  { return isSetField(field); }
  public boolean isSetMinQty()
  { return isSetField(110); }
  public void set(quickfix.field.MaxFloor value)
  { setField(value); }
  public quickfix.field.MaxFloor get(quickfix.field.MaxFloor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound
  { quickfix.field.MaxFloor value = new quickfix.field.MaxFloor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaxFloor field)
  { return isSetField(field); }
  public boolean isSetMaxFloor()
  { return isSetField(111); }
  public void set(quickfix.field.PositionEffect value)
  { setField(value); }
  public quickfix.field.PositionEffect get(quickfix.field.PositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound
  { quickfix.field.PositionEffect value = new quickfix.field.PositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionEffect field)
  { return isSetField(field); }
  public boolean isSetPositionEffect()
  { return isSetField(77); }
  public void set(quickfix.field.MaxShow value)
  { setField(value); }
  public quickfix.field.MaxShow get(quickfix.field.MaxShow  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaxShow getMaxShow() throws FieldNotFound
  { quickfix.field.MaxShow value = new quickfix.field.MaxShow();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaxShow field)
  { return isSetField(field); }
  public boolean isSetMaxShow()
  { return isSetField(210); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
  public void set(quickfix.field.FutSettDate2 value)
  { setField(value); }
  public quickfix.field.FutSettDate2 get(quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { quickfix.field.FutSettDate2 value = new quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(quickfix.field.OrderQty2 value)
  { setField(value); }
  public quickfix.field.OrderQty2 get(quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { quickfix.field.OrderQty2 value = new quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
  public void set(quickfix.field.LastForwardPoints2 value)
  { setField(value); }
  public quickfix.field.LastForwardPoints2 get(quickfix.field.LastForwardPoints2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastForwardPoints2 getLastForwardPoints2() throws FieldNotFound
  { quickfix.field.LastForwardPoints2 value = new quickfix.field.LastForwardPoints2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastForwardPoints2 field)
  { return isSetField(field); }
  public boolean isSetLastForwardPoints2()
  { return isSetField(641); }
  public void set(quickfix.field.MultiLegReportingType value)
  { setField(value); }
  public quickfix.field.MultiLegReportingType get(quickfix.field.MultiLegReportingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MultiLegReportingType getMultiLegReportingType() throws FieldNotFound
  { quickfix.field.MultiLegReportingType value = new quickfix.field.MultiLegReportingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MultiLegReportingType field)
  { return isSetField(field); }
  public boolean isSetMultiLegReportingType()
  { return isSetField(442); }
  public void set(quickfix.field.CancellationRights value)
  { setField(value); }
  public quickfix.field.CancellationRights get(quickfix.field.CancellationRights  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CancellationRights getCancellationRights() throws FieldNotFound
  { quickfix.field.CancellationRights value = new quickfix.field.CancellationRights();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CancellationRights field)
  { return isSetField(field); }
  public boolean isSetCancellationRights()
  { return isSetField(480); }
  public void set(quickfix.field.MoneyLaunderingStatus value)
  { setField(value); }
  public quickfix.field.MoneyLaunderingStatus get(quickfix.field.MoneyLaunderingStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MoneyLaunderingStatus getMoneyLaunderingStatus() throws FieldNotFound
  { quickfix.field.MoneyLaunderingStatus value = new quickfix.field.MoneyLaunderingStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MoneyLaunderingStatus field)
  { return isSetField(field); }
  public boolean isSetMoneyLaunderingStatus()
  { return isSetField(481); }
  public void set(quickfix.field.RegistID value)
  { setField(value); }
  public quickfix.field.RegistID get(quickfix.field.RegistID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistID getRegistID() throws FieldNotFound
  { quickfix.field.RegistID value = new quickfix.field.RegistID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistID field)
  { return isSetField(field); }
  public boolean isSetRegistID()
  { return isSetField(513); }
  public void set(quickfix.field.Designation value)
  { setField(value); }
  public quickfix.field.Designation get(quickfix.field.Designation  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Designation getDesignation() throws FieldNotFound
  { quickfix.field.Designation value = new quickfix.field.Designation();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Designation field)
  { return isSetField(field); }
  public boolean isSetDesignation()
  { return isSetField(494); }
  public void set(quickfix.field.TransBkdTime value)
  { setField(value); }
  public quickfix.field.TransBkdTime get(quickfix.field.TransBkdTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransBkdTime getTransBkdTime() throws FieldNotFound
  { quickfix.field.TransBkdTime value = new quickfix.field.TransBkdTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransBkdTime field)
  { return isSetField(field); }
  public boolean isSetTransBkdTime()
  { return isSetField(483); }
  public void set(quickfix.field.ExecValuationPoint value)
  { setField(value); }
  public quickfix.field.ExecValuationPoint get(quickfix.field.ExecValuationPoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecValuationPoint getExecValuationPoint() throws FieldNotFound
  { quickfix.field.ExecValuationPoint value = new quickfix.field.ExecValuationPoint();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecValuationPoint field)
  { return isSetField(field); }
  public boolean isSetExecValuationPoint()
  { return isSetField(515); }
  public void set(quickfix.field.ExecPriceType value)
  { setField(value); }
  public quickfix.field.ExecPriceType get(quickfix.field.ExecPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecPriceType getExecPriceType() throws FieldNotFound
  { quickfix.field.ExecPriceType value = new quickfix.field.ExecPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecPriceType field)
  { return isSetField(field); }
  public boolean isSetExecPriceType()
  { return isSetField(484); }
  public void set(quickfix.field.ExecPriceAdjustment value)
  { setField(value); }
  public quickfix.field.ExecPriceAdjustment get(quickfix.field.ExecPriceAdjustment  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecPriceAdjustment getExecPriceAdjustment() throws FieldNotFound
  { quickfix.field.ExecPriceAdjustment value = new quickfix.field.ExecPriceAdjustment();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecPriceAdjustment field)
  { return isSetField(field); }
  public boolean isSetExecPriceAdjustment()
  { return isSetField(485); }
  public void set(quickfix.field.PriorityIndicator value)
  { setField(value); }
  public quickfix.field.PriorityIndicator get(quickfix.field.PriorityIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriorityIndicator getPriorityIndicator() throws FieldNotFound
  { quickfix.field.PriorityIndicator value = new quickfix.field.PriorityIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriorityIndicator field)
  { return isSetField(field); }
  public boolean isSetPriorityIndicator()
  { return isSetField(638); }
  public void set(quickfix.field.PriceImprovement value)
  { setField(value); }
  public quickfix.field.PriceImprovement get(quickfix.field.PriceImprovement  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriceImprovement getPriceImprovement() throws FieldNotFound
  { quickfix.field.PriceImprovement value = new quickfix.field.PriceImprovement();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriceImprovement field)
  { return isSetField(field); }
  public boolean isSetPriceImprovement()
  { return isSetField(639); }
  public void set(quickfix.field.NoContraBrokers value)
  { setField(value); }
  public quickfix.field.NoContraBrokers get(quickfix.field.NoContraBrokers  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoContraBrokers getNoContraBrokers() throws FieldNotFound
  { quickfix.field.NoContraBrokers value = new quickfix.field.NoContraBrokers();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoContraBrokers field)
  { return isSetField(field); }
  public boolean isSetNoContraBrokers()
  { return isSetField(382); }
  public static class NoContraBrokers extends Group {
    public NoContraBrokers() {
      super(382,375,
      new int[] {375,337,437,438,655,0 } ); }
  public void set(quickfix.field.ContraBroker value)
  { setField(value); }
  public quickfix.field.ContraBroker get(quickfix.field.ContraBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContraBroker getContraBroker() throws FieldNotFound
  { quickfix.field.ContraBroker value = new quickfix.field.ContraBroker();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContraBroker field)
  { return isSetField(field); }
  public boolean isSetContraBroker()
  { return isSetField(375); }
  public void set(quickfix.field.ContraTrader value)
  { setField(value); }
  public quickfix.field.ContraTrader get(quickfix.field.ContraTrader  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContraTrader getContraTrader() throws FieldNotFound
  { quickfix.field.ContraTrader value = new quickfix.field.ContraTrader();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContraTrader field)
  { return isSetField(field); }
  public boolean isSetContraTrader()
  { return isSetField(337); }
  public void set(quickfix.field.ContraTradeQty value)
  { setField(value); }
  public quickfix.field.ContraTradeQty get(quickfix.field.ContraTradeQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContraTradeQty getContraTradeQty() throws FieldNotFound
  { quickfix.field.ContraTradeQty value = new quickfix.field.ContraTradeQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContraTradeQty field)
  { return isSetField(field); }
  public boolean isSetContraTradeQty()
  { return isSetField(437); }
  public void set(quickfix.field.ContraTradeTime value)
  { setField(value); }
  public quickfix.field.ContraTradeTime get(quickfix.field.ContraTradeTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContraTradeTime getContraTradeTime() throws FieldNotFound
  { quickfix.field.ContraTradeTime value = new quickfix.field.ContraTradeTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContraTradeTime field)
  { return isSetField(field); }
  public boolean isSetContraTradeTime()
  { return isSetField(438); }
  public void set(quickfix.field.ContraLegRefID value)
  { setField(value); }
  public quickfix.field.ContraLegRefID get(quickfix.field.ContraLegRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContraLegRefID getContraLegRefID() throws FieldNotFound
  { quickfix.field.ContraLegRefID value = new quickfix.field.ContraLegRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContraLegRefID field)
  { return isSetField(field); }
  public boolean isSetContraLegRefID()
  { return isSetField(655); }
}
  public void set(quickfix.field.NoContAmts value)
  { setField(value); }
  public quickfix.field.NoContAmts get(quickfix.field.NoContAmts  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoContAmts getNoContAmts() throws FieldNotFound
  { quickfix.field.NoContAmts value = new quickfix.field.NoContAmts();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoContAmts field)
  { return isSetField(field); }
  public boolean isSetNoContAmts()
  { return isSetField(518); }
  public static class NoContAmts extends Group {
    public NoContAmts() {
      super(518,519,
      new int[] {519,520,521,0 } ); }
  public void set(quickfix.field.ContAmtType value)
  { setField(value); }
  public quickfix.field.ContAmtType get(quickfix.field.ContAmtType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtType getContAmtType() throws FieldNotFound
  { quickfix.field.ContAmtType value = new quickfix.field.ContAmtType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtType field)
  { return isSetField(field); }
  public boolean isSetContAmtType()
  { return isSetField(519); }
  public void set(quickfix.field.ContAmtValue value)
  { setField(value); }
  public quickfix.field.ContAmtValue get(quickfix.field.ContAmtValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtValue getContAmtValue() throws FieldNotFound
  { quickfix.field.ContAmtValue value = new quickfix.field.ContAmtValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtValue field)
  { return isSetField(field); }
  public boolean isSetContAmtValue()
  { return isSetField(520); }
  public void set(quickfix.field.ContAmtCurr value)
  { setField(value); }
  public quickfix.field.ContAmtCurr get(quickfix.field.ContAmtCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContAmtCurr getContAmtCurr() throws FieldNotFound
  { quickfix.field.ContAmtCurr value = new quickfix.field.ContAmtCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContAmtCurr field)
  { return isSetField(field); }
  public boolean isSetContAmtCurr()
  { return isSetField(521); }
}
  public void set(quickfix.field.NoLegs value)
  { setField(value); }
  public quickfix.field.NoLegs get(quickfix.field.NoLegs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegs getNoLegs() throws FieldNotFound
  { quickfix.field.NoLegs value = new quickfix.field.NoLegs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegs field)
  { return isSetField(field); }
  public boolean isSetNoLegs()
  { return isSetField(555); }
  public static class NoLegs extends Group {
    public NoLegs() {
      super(555,600,
      new int[] {600,601,602,603,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,564,565,654,566,587,588,637,0 } ); }
  public void set(quickfix.field.LegSymbol value)
  { setField(value); }
  public quickfix.field.LegSymbol get(quickfix.field.LegSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbol getLegSymbol() throws FieldNotFound
  { quickfix.field.LegSymbol value = new quickfix.field.LegSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbol field)
  { return isSetField(field); }
  public boolean isSetLegSymbol()
  { return isSetField(600); }
  public void set(quickfix.field.LegSymbolSfx value)
  { setField(value); }
  public quickfix.field.LegSymbolSfx get(quickfix.field.LegSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSymbolSfx getLegSymbolSfx() throws FieldNotFound
  { quickfix.field.LegSymbolSfx value = new quickfix.field.LegSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetLegSymbolSfx()
  { return isSetField(601); }
  public void set(quickfix.field.LegSecurityID value)
  { setField(value); }
  public quickfix.field.LegSecurityID get(quickfix.field.LegSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityID getLegSecurityID() throws FieldNotFound
  { quickfix.field.LegSecurityID value = new quickfix.field.LegSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityID()
  { return isSetField(602); }
  public void set(quickfix.field.LegSecurityIDSource value)
  { setField(value); }
  public quickfix.field.LegSecurityIDSource get(quickfix.field.LegSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityIDSource getLegSecurityIDSource() throws FieldNotFound
  { quickfix.field.LegSecurityIDSource value = new quickfix.field.LegSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityIDSource()
  { return isSetField(603); }
  public void set(quickfix.field.LegProduct value)
  { setField(value); }
  public quickfix.field.LegProduct get(quickfix.field.LegProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegProduct getLegProduct() throws FieldNotFound
  { quickfix.field.LegProduct value = new quickfix.field.LegProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegProduct field)
  { return isSetField(field); }
  public boolean isSetLegProduct()
  { return isSetField(607); }
  public void set(quickfix.field.LegCFICode value)
  { setField(value); }
  public quickfix.field.LegCFICode get(quickfix.field.LegCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCFICode getLegCFICode() throws FieldNotFound
  { quickfix.field.LegCFICode value = new quickfix.field.LegCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCFICode field)
  { return isSetField(field); }
  public boolean isSetLegCFICode()
  { return isSetField(608); }
  public void set(quickfix.field.LegSecurityType value)
  { setField(value); }
  public quickfix.field.LegSecurityType get(quickfix.field.LegSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityType getLegSecurityType() throws FieldNotFound
  { quickfix.field.LegSecurityType value = new quickfix.field.LegSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegSecurityType()
  { return isSetField(609); }
  public void set(quickfix.field.LegMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.LegMaturityMonthYear get(quickfix.field.LegMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityMonthYear getLegMaturityMonthYear() throws FieldNotFound
  { quickfix.field.LegMaturityMonthYear value = new quickfix.field.LegMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetLegMaturityMonthYear()
  { return isSetField(610); }
  public void set(quickfix.field.LegMaturityDate value)
  { setField(value); }
  public quickfix.field.LegMaturityDate get(quickfix.field.LegMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegMaturityDate getLegMaturityDate() throws FieldNotFound
  { quickfix.field.LegMaturityDate value = new quickfix.field.LegMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegMaturityDate field)
  { return isSetField(field); }
  public boolean isSetLegMaturityDate()
  { return isSetField(611); }
  public void set(quickfix.field.LegCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.LegCouponPaymentDate get(quickfix.field.LegCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponPaymentDate getLegCouponPaymentDate() throws FieldNotFound
  { quickfix.field.LegCouponPaymentDate value = new quickfix.field.LegCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetLegCouponPaymentDate()
  { return isSetField(248); }
  public void set(quickfix.field.LegIssueDate value)
  { setField(value); }
  public quickfix.field.LegIssueDate get(quickfix.field.LegIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssueDate getLegIssueDate() throws FieldNotFound
  { quickfix.field.LegIssueDate value = new quickfix.field.LegIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssueDate field)
  { return isSetField(field); }
  public boolean isSetLegIssueDate()
  { return isSetField(249); }
  public void set(quickfix.field.LegRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.LegRepoCollateralSecurityType get(quickfix.field.LegRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.LegRepoCollateralSecurityType value = new quickfix.field.LegRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetLegRepoCollateralSecurityType()
  { return isSetField(250); }
  public void set(quickfix.field.LegRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.LegRepurchaseTerm get(quickfix.field.LegRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseTerm getLegRepurchaseTerm() throws FieldNotFound
  { quickfix.field.LegRepurchaseTerm value = new quickfix.field.LegRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseTerm()
  { return isSetField(251); }
  public void set(quickfix.field.LegRepurchaseRate value)
  { setField(value); }
  public quickfix.field.LegRepurchaseRate get(quickfix.field.LegRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRepurchaseRate getLegRepurchaseRate() throws FieldNotFound
  { quickfix.field.LegRepurchaseRate value = new quickfix.field.LegRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetLegRepurchaseRate()
  { return isSetField(252); }
  public void set(quickfix.field.LegFactor value)
  { setField(value); }
  public quickfix.field.LegFactor get(quickfix.field.LegFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegFactor getLegFactor() throws FieldNotFound
  { quickfix.field.LegFactor value = new quickfix.field.LegFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegFactor field)
  { return isSetField(field); }
  public boolean isSetLegFactor()
  { return isSetField(253); }
  public void set(quickfix.field.LegCreditRating value)
  { setField(value); }
  public quickfix.field.LegCreditRating get(quickfix.field.LegCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCreditRating getLegCreditRating() throws FieldNotFound
  { quickfix.field.LegCreditRating value = new quickfix.field.LegCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCreditRating field)
  { return isSetField(field); }
  public boolean isSetLegCreditRating()
  { return isSetField(257); }
  public void set(quickfix.field.LegInstrRegistry value)
  { setField(value); }
  public quickfix.field.LegInstrRegistry get(quickfix.field.LegInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInstrRegistry getLegInstrRegistry() throws FieldNotFound
  { quickfix.field.LegInstrRegistry value = new quickfix.field.LegInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetLegInstrRegistry()
  { return isSetField(599); }
  public void set(quickfix.field.LegCountryOfIssue value)
  { setField(value); }
  public quickfix.field.LegCountryOfIssue get(quickfix.field.LegCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCountryOfIssue getLegCountryOfIssue() throws FieldNotFound
  { quickfix.field.LegCountryOfIssue value = new quickfix.field.LegCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegCountryOfIssue()
  { return isSetField(596); }
  public void set(quickfix.field.LegStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.LegStateOrProvinceOfIssue get(quickfix.field.LegStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.LegStateOrProvinceOfIssue value = new quickfix.field.LegStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegStateOrProvinceOfIssue()
  { return isSetField(597); }
  public void set(quickfix.field.LegLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.LegLocaleOfIssue get(quickfix.field.LegLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLocaleOfIssue getLegLocaleOfIssue() throws FieldNotFound
  { quickfix.field.LegLocaleOfIssue value = new quickfix.field.LegLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetLegLocaleOfIssue()
  { return isSetField(598); }
  public void set(quickfix.field.LegRedemptionDate value)
  { setField(value); }
  public quickfix.field.LegRedemptionDate get(quickfix.field.LegRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRedemptionDate getLegRedemptionDate() throws FieldNotFound
  { quickfix.field.LegRedemptionDate value = new quickfix.field.LegRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetLegRedemptionDate()
  { return isSetField(254); }
  public void set(quickfix.field.LegStrikePrice value)
  { setField(value); }
  public quickfix.field.LegStrikePrice get(quickfix.field.LegStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikePrice getLegStrikePrice() throws FieldNotFound
  { quickfix.field.LegStrikePrice value = new quickfix.field.LegStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikePrice field)
  { return isSetField(field); }
  public boolean isSetLegStrikePrice()
  { return isSetField(612); }
  public void set(quickfix.field.LegOptAttribute value)
  { setField(value); }
  public quickfix.field.LegOptAttribute get(quickfix.field.LegOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegOptAttribute getLegOptAttribute() throws FieldNotFound
  { quickfix.field.LegOptAttribute value = new quickfix.field.LegOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegOptAttribute field)
  { return isSetField(field); }
  public boolean isSetLegOptAttribute()
  { return isSetField(613); }
  public void set(quickfix.field.LegContractMultiplier value)
  { setField(value); }
  public quickfix.field.LegContractMultiplier get(quickfix.field.LegContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractMultiplier getLegContractMultiplier() throws FieldNotFound
  { quickfix.field.LegContractMultiplier value = new quickfix.field.LegContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetLegContractMultiplier()
  { return isSetField(614); }
  public void set(quickfix.field.LegCouponRate value)
  { setField(value); }
  public quickfix.field.LegCouponRate get(quickfix.field.LegCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCouponRate getLegCouponRate() throws FieldNotFound
  { quickfix.field.LegCouponRate value = new quickfix.field.LegCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCouponRate field)
  { return isSetField(field); }
  public boolean isSetLegCouponRate()
  { return isSetField(615); }
  public void set(quickfix.field.LegSecurityExchange value)
  { setField(value); }
  public quickfix.field.LegSecurityExchange get(quickfix.field.LegSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityExchange getLegSecurityExchange() throws FieldNotFound
  { quickfix.field.LegSecurityExchange value = new quickfix.field.LegSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetLegSecurityExchange()
  { return isSetField(616); }
  public void set(quickfix.field.LegIssuer value)
  { setField(value); }
  public quickfix.field.LegIssuer get(quickfix.field.LegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIssuer getLegIssuer() throws FieldNotFound
  { quickfix.field.LegIssuer value = new quickfix.field.LegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIssuer field)
  { return isSetField(field); }
  public boolean isSetLegIssuer()
  { return isSetField(617); }
  public void set(quickfix.field.EncodedLegIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuerLen get(quickfix.field.EncodedLegIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuerLen getEncodedLegIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedLegIssuerLen value = new quickfix.field.EncodedLegIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuerLen()
  { return isSetField(618); }
  public void set(quickfix.field.EncodedLegIssuer value)
  { setField(value); }
  public quickfix.field.EncodedLegIssuer get(quickfix.field.EncodedLegIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegIssuer getEncodedLegIssuer() throws FieldNotFound
  { quickfix.field.EncodedLegIssuer value = new quickfix.field.EncodedLegIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedLegIssuer()
  { return isSetField(619); }
  public void set(quickfix.field.LegSecurityDesc value)
  { setField(value); }
  public quickfix.field.LegSecurityDesc get(quickfix.field.LegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityDesc getLegSecurityDesc() throws FieldNotFound
  { quickfix.field.LegSecurityDesc value = new quickfix.field.LegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetLegSecurityDesc()
  { return isSetField(620); }
  public void set(quickfix.field.EncodedLegSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDescLen get(quickfix.field.EncodedLegSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDescLen value = new quickfix.field.EncodedLegSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDescLen()
  { return isSetField(621); }
  public void set(quickfix.field.EncodedLegSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedLegSecurityDesc get(quickfix.field.EncodedLegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedLegSecurityDesc getEncodedLegSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedLegSecurityDesc value = new quickfix.field.EncodedLegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedLegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedLegSecurityDesc()
  { return isSetField(622); }
  public void set(quickfix.field.LegRatioQty value)
  { setField(value); }
  public quickfix.field.LegRatioQty get(quickfix.field.LegRatioQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRatioQty getLegRatioQty() throws FieldNotFound
  { quickfix.field.LegRatioQty value = new quickfix.field.LegRatioQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRatioQty field)
  { return isSetField(field); }
  public boolean isSetLegRatioQty()
  { return isSetField(623); }
  public void set(quickfix.field.LegSide value)
  { setField(value); }
  public quickfix.field.LegSide get(quickfix.field.LegSide  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSide getLegSide() throws FieldNotFound
  { quickfix.field.LegSide value = new quickfix.field.LegSide();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSide field)
  { return isSetField(field); }
  public boolean isSetLegSide()
  { return isSetField(624); }
  public void set(quickfix.field.NoLegSecurityAltID value)
  { setField(value); }
  public quickfix.field.NoLegSecurityAltID get(quickfix.field.NoLegSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegSecurityAltID getNoLegSecurityAltID() throws FieldNotFound
  { quickfix.field.NoLegSecurityAltID value = new quickfix.field.NoLegSecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoLegSecurityAltID()
  { return isSetField(604); }
  public static class NoLegSecurityAltID extends Group {
    public NoLegSecurityAltID() {
      super(604,605,
      new int[] {605,606,0 } ); }
  public void set(quickfix.field.LegSecurityAltID value)
  { setField(value); }
  public quickfix.field.LegSecurityAltID get(quickfix.field.LegSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityAltID getLegSecurityAltID() throws FieldNotFound
  { quickfix.field.LegSecurityAltID value = new quickfix.field.LegSecurityAltID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetLegSecurityAltID()
  { return isSetField(605); }
  public void set(quickfix.field.LegSecurityAltIDSource value)
  { setField(value); }
  public quickfix.field.LegSecurityAltIDSource get(quickfix.field.LegSecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecurityAltIDSource getLegSecurityAltIDSource() throws FieldNotFound
  { quickfix.field.LegSecurityAltIDSource value = new quickfix.field.LegSecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityAltIDSource()
  { return isSetField(606); }
}
  public void set(quickfix.field.LegPositionEffect value)
  { setField(value); }
  public quickfix.field.LegPositionEffect get(quickfix.field.LegPositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPositionEffect getLegPositionEffect() throws FieldNotFound
  { quickfix.field.LegPositionEffect value = new quickfix.field.LegPositionEffect();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPositionEffect field)
  { return isSetField(field); }
  public boolean isSetLegPositionEffect()
  { return isSetField(564); }
  public void set(quickfix.field.LegCoveredOrUncovered value)
  { setField(value); }
  public quickfix.field.LegCoveredOrUncovered get(quickfix.field.LegCoveredOrUncovered  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCoveredOrUncovered getLegCoveredOrUncovered() throws FieldNotFound
  { quickfix.field.LegCoveredOrUncovered value = new quickfix.field.LegCoveredOrUncovered();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCoveredOrUncovered field)
  { return isSetField(field); }
  public boolean isSetLegCoveredOrUncovered()
  { return isSetField(565); }
  public void set(quickfix.field.NoNestedPartyIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartyIDs get(quickfix.field.NoNestedPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartyIDs value = new quickfix.field.NoNestedPartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartyIDs()
  { return isSetField(539); }
  public static class NoNestedPartyIDs extends Group {
    public NoNestedPartyIDs() {
      super(539,524,
      new int[] {524,525,538,545,0 } ); }
  public void set(quickfix.field.NestedPartyID value)
  { setField(value); }
  public quickfix.field.NestedPartyID get(quickfix.field.NestedPartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyID getNestedPartyID() throws FieldNotFound
  { quickfix.field.NestedPartyID value = new quickfix.field.NestedPartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyID field)
  { return isSetField(field); }
  public boolean isSetNestedPartyID()
  { return isSetField(524); }
  public void set(quickfix.field.NestedPartyIDSource value)
  { setField(value); }
  public quickfix.field.NestedPartyIDSource get(quickfix.field.NestedPartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound
  { quickfix.field.NestedPartyIDSource value = new quickfix.field.NestedPartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNestedPartyIDSource()
  { return isSetField(525); }
  public void set(quickfix.field.NestedPartyRole value)
  { setField(value); }
  public quickfix.field.NestedPartyRole get(quickfix.field.NestedPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound
  { quickfix.field.NestedPartyRole value = new quickfix.field.NestedPartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartyRole field)
  { return isSetField(field); }
  public boolean isSetNestedPartyRole()
  { return isSetField(538); }
  public void set(quickfix.field.NestedPartySubID value)
  { setField(value); }
  public quickfix.field.NestedPartySubID get(quickfix.field.NestedPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound
  { quickfix.field.NestedPartySubID value = new quickfix.field.NestedPartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubID field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubID()
  { return isSetField(545); }
}
  public void set(quickfix.field.LegRefID value)
  { setField(value); }
  public quickfix.field.LegRefID get(quickfix.field.LegRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegRefID getLegRefID() throws FieldNotFound
  { quickfix.field.LegRefID value = new quickfix.field.LegRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegRefID field)
  { return isSetField(field); }
  public boolean isSetLegRefID()
  { return isSetField(654); }
  public void set(quickfix.field.LegPrice value)
  { setField(value); }
  public quickfix.field.LegPrice get(quickfix.field.LegPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPrice getLegPrice() throws FieldNotFound
  { quickfix.field.LegPrice value = new quickfix.field.LegPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPrice field)
  { return isSetField(field); }
  public boolean isSetLegPrice()
  { return isSetField(566); }
  public void set(quickfix.field.LegSettlmntTyp value)
  { setField(value); }
  public quickfix.field.LegSettlmntTyp get(quickfix.field.LegSettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlmntTyp getLegSettlmntTyp() throws FieldNotFound
  { quickfix.field.LegSettlmntTyp value = new quickfix.field.LegSettlmntTyp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetLegSettlmntTyp()
  { return isSetField(587); }
  public void set(quickfix.field.LegFutSettDate value)
  { setField(value); }
  public quickfix.field.LegFutSettDate get(quickfix.field.LegFutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegFutSettDate getLegFutSettDate() throws FieldNotFound
  { quickfix.field.LegFutSettDate value = new quickfix.field.LegFutSettDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegFutSettDate field)
  { return isSetField(field); }
  public boolean isSetLegFutSettDate()
  { return isSetField(588); }
  public void set(quickfix.field.LegLastPx value)
  { setField(value); }
  public quickfix.field.LegLastPx get(quickfix.field.LegLastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegLastPx getLegLastPx() throws FieldNotFound
  { quickfix.field.LegLastPx value = new quickfix.field.LegLastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegLastPx field)
  { return isSetField(field); }
  public boolean isSetLegLastPx()
  { return isSetField(637); }
}
}

