package quickfix.fix50;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class NewOrderMultileg extends Message
{
  public NewOrderMultileg()
  {
    getHeader().setField(new MsgType("AB"));
  }
  public NewOrderMultileg(
    quickfix.field.ClOrdID aClOrdID,
    quickfix.field.Side aSide,
    quickfix.field.TransactTime aTransactTime,
    quickfix.field.OrdType aOrdType ) {

    getHeader().setField(new MsgType("AB"));
    set(aClOrdID);
    set(aSide);
    set(aTransactTime);
    set(aOrdType);
  }

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
      new int[] {448,447,452,802,0 } ); }
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
  public void set(quickfix.field.NoPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoPartySubIDs get(quickfix.field.NoPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPartySubIDs getNoPartySubIDs() throws FieldNotFound
  { quickfix.field.NoPartySubIDs value = new quickfix.field.NoPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartySubIDs()
  { return isSetField(802); }
  public static class NoPartySubIDs extends Group {
    public NoPartySubIDs() {
      super(802,523,
      new int[] {523,803,0 } ); }
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
  public void set(quickfix.field.PartySubIDType value)
  { setField(value); }
  public quickfix.field.PartySubIDType get(quickfix.field.PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PartySubIDType getPartySubIDType() throws FieldNotFound
  { quickfix.field.PartySubIDType value = new quickfix.field.PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetPartySubIDType()
  { return isSetField(803); }
}
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
  public void set(quickfix.field.AcctIDSource value)
  { setField(value); }
  public quickfix.field.AcctIDSource get(quickfix.field.AcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AcctIDSource getAcctIDSource() throws FieldNotFound
  { quickfix.field.AcctIDSource value = new quickfix.field.AcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAcctIDSource()
  { return isSetField(660); }
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
  public void set(quickfix.field.AllocID value)
  { setField(value); }
  public quickfix.field.AllocID get(quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocID getAllocID() throws FieldNotFound
  { quickfix.field.AllocID value = new quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(quickfix.field.NoAllocs value)
  { setField(value); }
  public quickfix.field.NoAllocs get(quickfix.field.NoAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { quickfix.field.NoAllocs value = new quickfix.field.NoAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoAllocs field)
  { return isSetField(field); }
  public boolean isSetNoAllocs()
  { return isSetField(78); }
  public static class NoAllocs extends Group {
    public NoAllocs() {
      super(78,79,
      new int[] {79,661,736,467,948,80,0 } ); }
  public void set(quickfix.field.AllocAccount value)
  { setField(value); }
  public quickfix.field.AllocAccount get(quickfix.field.AllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { quickfix.field.AllocAccount value = new quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }
  public void set(quickfix.field.AllocAcctIDSource value)
  { setField(value); }
  public quickfix.field.AllocAcctIDSource get(quickfix.field.AllocAcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound
  { quickfix.field.AllocAcctIDSource value = new quickfix.field.AllocAcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAllocAcctIDSource()
  { return isSetField(661); }
  public void set(quickfix.field.AllocSettlCurrency value)
  { setField(value); }
  public quickfix.field.AllocSettlCurrency get(quickfix.field.AllocSettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocSettlCurrency getAllocSettlCurrency() throws FieldNotFound
  { quickfix.field.AllocSettlCurrency value = new quickfix.field.AllocSettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocSettlCurrency field)
  { return isSetField(field); }
  public boolean isSetAllocSettlCurrency()
  { return isSetField(736); }
  public void set(quickfix.field.IndividualAllocID value)
  { setField(value); }
  public quickfix.field.IndividualAllocID get(quickfix.field.IndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound
  { quickfix.field.IndividualAllocID value = new quickfix.field.IndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocID()
  { return isSetField(467); }
  public void set(quickfix.field.NoNested3PartyIDs value)
  { setField(value); }
  public quickfix.field.NoNested3PartyIDs get(quickfix.field.NoNested3PartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested3PartyIDs getNoNested3PartyIDs() throws FieldNotFound
  { quickfix.field.NoNested3PartyIDs value = new quickfix.field.NoNested3PartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested3PartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested3PartyIDs()
  { return isSetField(948); }
  public static class NoNested3PartyIDs extends Group {
    public NoNested3PartyIDs() {
      super(948,949,
      new int[] {949,950,951,952,0 } ); }
  public void set(quickfix.field.Nested3PartyID value)
  { setField(value); }
  public quickfix.field.Nested3PartyID get(quickfix.field.Nested3PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested3PartyID getNested3PartyID() throws FieldNotFound
  { quickfix.field.Nested3PartyID value = new quickfix.field.Nested3PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested3PartyID field)
  { return isSetField(field); }
  public boolean isSetNested3PartyID()
  { return isSetField(949); }
  public void set(quickfix.field.Nested3PartyIDSource value)
  { setField(value); }
  public quickfix.field.Nested3PartyIDSource get(quickfix.field.Nested3PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested3PartyIDSource getNested3PartyIDSource() throws FieldNotFound
  { quickfix.field.Nested3PartyIDSource value = new quickfix.field.Nested3PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested3PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNested3PartyIDSource()
  { return isSetField(950); }
  public void set(quickfix.field.Nested3PartyRole value)
  { setField(value); }
  public quickfix.field.Nested3PartyRole get(quickfix.field.Nested3PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested3PartyRole getNested3PartyRole() throws FieldNotFound
  { quickfix.field.Nested3PartyRole value = new quickfix.field.Nested3PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested3PartyRole field)
  { return isSetField(field); }
  public boolean isSetNested3PartyRole()
  { return isSetField(951); }
  public void set(quickfix.field.NoNested3PartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNested3PartySubIDs get(quickfix.field.NoNested3PartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested3PartySubIDs getNoNested3PartySubIDs() throws FieldNotFound
  { quickfix.field.NoNested3PartySubIDs value = new quickfix.field.NoNested3PartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested3PartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested3PartySubIDs()
  { return isSetField(952); }
  public static class NoNested3PartySubIDs extends Group {
    public NoNested3PartySubIDs() {
      super(952,953,
      new int[] {953,954,0 } ); }
  public void set(quickfix.field.Nested3PartySubID value)
  { setField(value); }
  public quickfix.field.Nested3PartySubID get(quickfix.field.Nested3PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested3PartySubID getNested3PartySubID() throws FieldNotFound
  { quickfix.field.Nested3PartySubID value = new quickfix.field.Nested3PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested3PartySubID field)
  { return isSetField(field); }
  public boolean isSetNested3PartySubID()
  { return isSetField(953); }
  public void set(quickfix.field.Nested3PartySubIDType value)
  { setField(value); }
  public quickfix.field.Nested3PartySubIDType get(quickfix.field.Nested3PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested3PartySubIDType getNested3PartySubIDType() throws FieldNotFound
  { quickfix.field.Nested3PartySubIDType value = new quickfix.field.Nested3PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested3PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNested3PartySubIDType()
  { return isSetField(954); }
}
}
  public void set(quickfix.field.AllocQty value)
  { setField(value); }
  public quickfix.field.AllocQty get(quickfix.field.AllocQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocQty getAllocQty() throws FieldNotFound
  { quickfix.field.AllocQty value = new quickfix.field.AllocQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocQty field)
  { return isSetField(field); }
  public boolean isSetAllocQty()
  { return isSetField(80); }
}
  public void set(quickfix.field.SettlType value)
  { setField(value); }
  public quickfix.field.SettlType get(quickfix.field.SettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlType getSettlType() throws FieldNotFound
  { quickfix.field.SettlType value = new quickfix.field.SettlType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlType field)
  { return isSetField(field); }
  public boolean isSetSettlType()
  { return isSetField(63); }
  public void set(quickfix.field.SettlDate value)
  { setField(value); }
  public quickfix.field.SettlDate get(quickfix.field.SettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDate getSettlDate() throws FieldNotFound
  { quickfix.field.SettlDate value = new quickfix.field.SettlDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDate field)
  { return isSetField(field); }
  public boolean isSetSettlDate()
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
  public void set(quickfix.field.ExDestination value)
  { setField(value); }
  public quickfix.field.ExDestination get(quickfix.field.ExDestination  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExDestination getExDestination() throws FieldNotFound
  { quickfix.field.ExDestination value = new quickfix.field.ExDestination();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExDestination field)
  { return isSetField(field); }
  public boolean isSetExDestination()
  { return isSetField(100); }
  public void set(quickfix.field.NoTradingSessions value)
  { setField(value); }
  public quickfix.field.NoTradingSessions get(quickfix.field.NoTradingSessions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoTradingSessions getNoTradingSessions() throws FieldNotFound
  { quickfix.field.NoTradingSessions value = new quickfix.field.NoTradingSessions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoTradingSessions field)
  { return isSetField(field); }
  public boolean isSetNoTradingSessions()
  { return isSetField(386); }
  public static class NoTradingSessions extends Group {
    public NoTradingSessions() {
      super(386,336,
      new int[] {336,625,0 } ); }
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
}
  public void set(quickfix.field.ProcessCode value)
  { setField(value); }
  public quickfix.field.ProcessCode get(quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { quickfix.field.ProcessCode value = new quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
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
  public void set(quickfix.field.SecuritySubType value)
  { setField(value); }
  public quickfix.field.SecuritySubType get(quickfix.field.SecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySubType getSecuritySubType() throws FieldNotFound
  { quickfix.field.SecuritySubType value = new quickfix.field.SecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySubType field)
  { return isSetField(field); }
  public boolean isSetSecuritySubType()
  { return isSetField(762); }
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
  public void set(quickfix.field.StrikeCurrency value)
  { setField(value); }
  public quickfix.field.StrikeCurrency get(quickfix.field.StrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeCurrency getStrikeCurrency() throws FieldNotFound
  { quickfix.field.StrikeCurrency value = new quickfix.field.StrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetStrikeCurrency()
  { return isSetField(947); }
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
  public void set(quickfix.field.Pool value)
  { setField(value); }
  public quickfix.field.Pool get(quickfix.field.Pool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Pool getPool() throws FieldNotFound
  { quickfix.field.Pool value = new quickfix.field.Pool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Pool field)
  { return isSetField(field); }
  public boolean isSetPool()
  { return isSetField(691); }
  public void set(quickfix.field.ContractSettlMonth value)
  { setField(value); }
  public quickfix.field.ContractSettlMonth get(quickfix.field.ContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractSettlMonth getContractSettlMonth() throws FieldNotFound
  { quickfix.field.ContractSettlMonth value = new quickfix.field.ContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetContractSettlMonth()
  { return isSetField(667); }
  public void set(quickfix.field.CPProgram value)
  { setField(value); }
  public quickfix.field.CPProgram get(quickfix.field.CPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPProgram getCPProgram() throws FieldNotFound
  { quickfix.field.CPProgram value = new quickfix.field.CPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPProgram field)
  { return isSetField(field); }
  public boolean isSetCPProgram()
  { return isSetField(875); }
  public void set(quickfix.field.CPRegType value)
  { setField(value); }
  public quickfix.field.CPRegType get(quickfix.field.CPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CPRegType getCPRegType() throws FieldNotFound
  { quickfix.field.CPRegType value = new quickfix.field.CPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CPRegType field)
  { return isSetField(field); }
  public boolean isSetCPRegType()
  { return isSetField(876); }
  public void set(quickfix.field.DatedDate value)
  { setField(value); }
  public quickfix.field.DatedDate get(quickfix.field.DatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DatedDate getDatedDate() throws FieldNotFound
  { quickfix.field.DatedDate value = new quickfix.field.DatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DatedDate field)
  { return isSetField(field); }
  public boolean isSetDatedDate()
  { return isSetField(873); }
  public void set(quickfix.field.InterestAccrualDate value)
  { setField(value); }
  public quickfix.field.InterestAccrualDate get(quickfix.field.InterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InterestAccrualDate getInterestAccrualDate() throws FieldNotFound
  { quickfix.field.InterestAccrualDate value = new quickfix.field.InterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetInterestAccrualDate()
  { return isSetField(874); }
  public void set(quickfix.field.SecurityStatus value)
  { setField(value); }
  public quickfix.field.SecurityStatus get(quickfix.field.SecurityStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityStatus getSecurityStatus() throws FieldNotFound
  { quickfix.field.SecurityStatus value = new quickfix.field.SecurityStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityStatus field)
  { return isSetField(field); }
  public boolean isSetSecurityStatus()
  { return isSetField(965); }
  public void set(quickfix.field.SettleOnOpenFlag value)
  { setField(value); }
  public quickfix.field.SettleOnOpenFlag get(quickfix.field.SettleOnOpenFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettleOnOpenFlag getSettleOnOpenFlag() throws FieldNotFound
  { quickfix.field.SettleOnOpenFlag value = new quickfix.field.SettleOnOpenFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettleOnOpenFlag field)
  { return isSetField(field); }
  public boolean isSetSettleOnOpenFlag()
  { return isSetField(966); }
  public void set(quickfix.field.InstrmtAssignmentMethod value)
  { setField(value); }
  public quickfix.field.InstrmtAssignmentMethod get(quickfix.field.InstrmtAssignmentMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InstrmtAssignmentMethod getInstrmtAssignmentMethod() throws FieldNotFound
  { quickfix.field.InstrmtAssignmentMethod value = new quickfix.field.InstrmtAssignmentMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InstrmtAssignmentMethod field)
  { return isSetField(field); }
  public boolean isSetInstrmtAssignmentMethod()
  { return isSetField(1049); }
  public void set(quickfix.field.StrikeMultiplier value)
  { setField(value); }
  public quickfix.field.StrikeMultiplier get(quickfix.field.StrikeMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeMultiplier getStrikeMultiplier() throws FieldNotFound
  { quickfix.field.StrikeMultiplier value = new quickfix.field.StrikeMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeMultiplier field)
  { return isSetField(field); }
  public boolean isSetStrikeMultiplier()
  { return isSetField(967); }
  public void set(quickfix.field.StrikeValue value)
  { setField(value); }
  public quickfix.field.StrikeValue get(quickfix.field.StrikeValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikeValue getStrikeValue() throws FieldNotFound
  { quickfix.field.StrikeValue value = new quickfix.field.StrikeValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikeValue field)
  { return isSetField(field); }
  public boolean isSetStrikeValue()
  { return isSetField(968); }
  public void set(quickfix.field.MinPriceIncrement value)
  { setField(value); }
  public quickfix.field.MinPriceIncrement get(quickfix.field.MinPriceIncrement  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MinPriceIncrement getMinPriceIncrement() throws FieldNotFound
  { quickfix.field.MinPriceIncrement value = new quickfix.field.MinPriceIncrement();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MinPriceIncrement field)
  { return isSetField(field); }
  public boolean isSetMinPriceIncrement()
  { return isSetField(969); }
  public void set(quickfix.field.PositionLimit value)
  { setField(value); }
  public quickfix.field.PositionLimit get(quickfix.field.PositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PositionLimit getPositionLimit() throws FieldNotFound
  { quickfix.field.PositionLimit value = new quickfix.field.PositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PositionLimit field)
  { return isSetField(field); }
  public boolean isSetPositionLimit()
  { return isSetField(970); }
  public void set(quickfix.field.NTPositionLimit value)
  { setField(value); }
  public quickfix.field.NTPositionLimit get(quickfix.field.NTPositionLimit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NTPositionLimit getNTPositionLimit() throws FieldNotFound
  { quickfix.field.NTPositionLimit value = new quickfix.field.NTPositionLimit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NTPositionLimit field)
  { return isSetField(field); }
  public boolean isSetNTPositionLimit()
  { return isSetField(971); }
  public void set(quickfix.field.UnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnitofMeasure get(quickfix.field.UnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnitofMeasure getUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnitofMeasure value = new quickfix.field.UnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnitofMeasure()
  { return isSetField(996); }
  public void set(quickfix.field.TimeUnit value)
  { setField(value); }
  public quickfix.field.TimeUnit get(quickfix.field.TimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TimeUnit getTimeUnit() throws FieldNotFound
  { quickfix.field.TimeUnit value = new quickfix.field.TimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TimeUnit field)
  { return isSetField(field); }
  public boolean isSetTimeUnit()
  { return isSetField(997); }
  public void set(quickfix.field.MaturityTime value)
  { setField(value); }
  public quickfix.field.MaturityTime get(quickfix.field.MaturityTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityTime getMaturityTime() throws FieldNotFound
  { quickfix.field.MaturityTime value = new quickfix.field.MaturityTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityTime field)
  { return isSetField(field); }
  public boolean isSetMaturityTime()
  { return isSetField(1079); }
  public void set(quickfix.field.NoUnderlyings value)
  { setField(value); }
  public quickfix.field.NoUnderlyings get(quickfix.field.NoUnderlyings  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoUnderlyings getNoUnderlyings() throws FieldNotFound
  { quickfix.field.NoUnderlyings value = new quickfix.field.NoUnderlyings();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoUnderlyings field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyings()
  { return isSetField(711); }
  public static class NoUnderlyings extends Group {
    public NoUnderlyings() {
      super(711,311,
      new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,0 } ); }
  public void set(quickfix.field.UnderlyingSymbol value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbol get(quickfix.field.UnderlyingSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound
  { quickfix.field.UnderlyingSymbol value = new quickfix.field.UnderlyingSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbol field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbol()
  { return isSetField(311); }
  public void set(quickfix.field.UnderlyingSymbolSfx value)
  { setField(value); }
  public quickfix.field.UnderlyingSymbolSfx get(quickfix.field.UnderlyingSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound
  { quickfix.field.UnderlyingSymbolSfx value = new quickfix.field.UnderlyingSymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbolSfx()
  { return isSetField(312); }
  public void set(quickfix.field.UnderlyingSecurityID value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityID get(quickfix.field.UnderlyingSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityID value = new quickfix.field.UnderlyingSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityID()
  { return isSetField(309); }
  public void set(quickfix.field.UnderlyingSecurityIDSource value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityIDSource get(quickfix.field.UnderlyingSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityIDSource value = new quickfix.field.UnderlyingSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityIDSource()
  { return isSetField(305); }
  public void set(quickfix.field.UnderlyingProduct value)
  { setField(value); }
  public quickfix.field.UnderlyingProduct get(quickfix.field.UnderlyingProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound
  { quickfix.field.UnderlyingProduct value = new quickfix.field.UnderlyingProduct();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingProduct field)
  { return isSetField(field); }
  public boolean isSetUnderlyingProduct()
  { return isSetField(462); }
  public void set(quickfix.field.UnderlyingCFICode value)
  { setField(value); }
  public quickfix.field.UnderlyingCFICode get(quickfix.field.UnderlyingCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound
  { quickfix.field.UnderlyingCFICode value = new quickfix.field.UnderlyingCFICode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCFICode field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCFICode()
  { return isSetField(463); }
  public void set(quickfix.field.UnderlyingSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityType get(quickfix.field.UnderlyingSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityType value = new quickfix.field.UnderlyingSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityType()
  { return isSetField(310); }
  public void set(quickfix.field.UnderlyingSecuritySubType value)
  { setField(value); }
  public quickfix.field.UnderlyingSecuritySubType get(quickfix.field.UnderlyingSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecuritySubType getUnderlyingSecuritySubType() throws FieldNotFound
  { quickfix.field.UnderlyingSecuritySubType value = new quickfix.field.UnderlyingSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecuritySubType()
  { return isSetField(763); }
  public void set(quickfix.field.UnderlyingMaturityMonthYear value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityMonthYear get(quickfix.field.UnderlyingMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityMonthYear value = new quickfix.field.UnderlyingMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityMonthYear()
  { return isSetField(313); }
  public void set(quickfix.field.UnderlyingMaturityDate value)
  { setField(value); }
  public quickfix.field.UnderlyingMaturityDate get(quickfix.field.UnderlyingMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound
  { quickfix.field.UnderlyingMaturityDate value = new quickfix.field.UnderlyingMaturityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingMaturityDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityDate()
  { return isSetField(542); }
  public void set(quickfix.field.UnderlyingCouponPaymentDate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponPaymentDate get(quickfix.field.UnderlyingCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponPaymentDate value = new quickfix.field.UnderlyingCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponPaymentDate()
  { return isSetField(241); }
  public void set(quickfix.field.UnderlyingIssueDate value)
  { setField(value); }
  public quickfix.field.UnderlyingIssueDate get(quickfix.field.UnderlyingIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound
  { quickfix.field.UnderlyingIssueDate value = new quickfix.field.UnderlyingIssueDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssueDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssueDate()
  { return isSetField(242); }
  public void set(quickfix.field.UnderlyingRepoCollateralSecurityType value)
  { setField(value); }
  public quickfix.field.UnderlyingRepoCollateralSecurityType get(quickfix.field.UnderlyingRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound
  { quickfix.field.UnderlyingRepoCollateralSecurityType value = new quickfix.field.UnderlyingRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepoCollateralSecurityType()
  { return isSetField(243); }
  public void set(quickfix.field.UnderlyingRepurchaseTerm value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseTerm get(quickfix.field.UnderlyingRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseTerm value = new quickfix.field.UnderlyingRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseTerm()
  { return isSetField(244); }
  public void set(quickfix.field.UnderlyingRepurchaseRate value)
  { setField(value); }
  public quickfix.field.UnderlyingRepurchaseRate get(quickfix.field.UnderlyingRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound
  { quickfix.field.UnderlyingRepurchaseRate value = new quickfix.field.UnderlyingRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseRate()
  { return isSetField(245); }
  public void set(quickfix.field.UnderlyingFactor value)
  { setField(value); }
  public quickfix.field.UnderlyingFactor get(quickfix.field.UnderlyingFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound
  { quickfix.field.UnderlyingFactor value = new quickfix.field.UnderlyingFactor();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFactor field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFactor()
  { return isSetField(246); }
  public void set(quickfix.field.UnderlyingCreditRating value)
  { setField(value); }
  public quickfix.field.UnderlyingCreditRating get(quickfix.field.UnderlyingCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound
  { quickfix.field.UnderlyingCreditRating value = new quickfix.field.UnderlyingCreditRating();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCreditRating field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCreditRating()
  { return isSetField(256); }
  public void set(quickfix.field.UnderlyingInstrRegistry value)
  { setField(value); }
  public quickfix.field.UnderlyingInstrRegistry get(quickfix.field.UnderlyingInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound
  { quickfix.field.UnderlyingInstrRegistry value = new quickfix.field.UnderlyingInstrRegistry();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetUnderlyingInstrRegistry()
  { return isSetField(595); }
  public void set(quickfix.field.UnderlyingCountryOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingCountryOfIssue get(quickfix.field.UnderlyingCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingCountryOfIssue value = new quickfix.field.UnderlyingCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCountryOfIssue()
  { return isSetField(592); }
  public void set(quickfix.field.UnderlyingStateOrProvinceOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue get(quickfix.field.UnderlyingStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingStateOrProvinceOfIssue value = new quickfix.field.UnderlyingStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStateOrProvinceOfIssue()
  { return isSetField(593); }
  public void set(quickfix.field.UnderlyingLocaleOfIssue value)
  { setField(value); }
  public quickfix.field.UnderlyingLocaleOfIssue get(quickfix.field.UnderlyingLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound
  { quickfix.field.UnderlyingLocaleOfIssue value = new quickfix.field.UnderlyingLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLocaleOfIssue()
  { return isSetField(594); }
  public void set(quickfix.field.UnderlyingRedemptionDate value)
  { setField(value); }
  public quickfix.field.UnderlyingRedemptionDate get(quickfix.field.UnderlyingRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound
  { quickfix.field.UnderlyingRedemptionDate value = new quickfix.field.UnderlyingRedemptionDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRedemptionDate()
  { return isSetField(247); }
  public void set(quickfix.field.UnderlyingStrikePrice value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikePrice get(quickfix.field.UnderlyingStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound
  { quickfix.field.UnderlyingStrikePrice value = new quickfix.field.UnderlyingStrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikePrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikePrice()
  { return isSetField(316); }
  public void set(quickfix.field.UnderlyingStrikeCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingStrikeCurrency get(quickfix.field.UnderlyingStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingStrikeCurrency value = new quickfix.field.UnderlyingStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikeCurrency()
  { return isSetField(941); }
  public void set(quickfix.field.UnderlyingOptAttribute value)
  { setField(value); }
  public quickfix.field.UnderlyingOptAttribute get(quickfix.field.UnderlyingOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound
  { quickfix.field.UnderlyingOptAttribute value = new quickfix.field.UnderlyingOptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingOptAttribute field)
  { return isSetField(field); }
  public boolean isSetUnderlyingOptAttribute()
  { return isSetField(317); }
  public void set(quickfix.field.UnderlyingContractMultiplier value)
  { setField(value); }
  public quickfix.field.UnderlyingContractMultiplier get(quickfix.field.UnderlyingContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound
  { quickfix.field.UnderlyingContractMultiplier value = new quickfix.field.UnderlyingContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetUnderlyingContractMultiplier()
  { return isSetField(436); }
  public void set(quickfix.field.UnderlyingCouponRate value)
  { setField(value); }
  public quickfix.field.UnderlyingCouponRate get(quickfix.field.UnderlyingCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound
  { quickfix.field.UnderlyingCouponRate value = new quickfix.field.UnderlyingCouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCouponRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponRate()
  { return isSetField(435); }
  public void set(quickfix.field.UnderlyingSecurityExchange value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityExchange get(quickfix.field.UnderlyingSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityExchange value = new quickfix.field.UnderlyingSecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityExchange()
  { return isSetField(308); }
  public void set(quickfix.field.UnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.UnderlyingIssuer get(quickfix.field.UnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.UnderlyingIssuer value = new quickfix.field.UnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssuer()
  { return isSetField(306); }
  public void set(quickfix.field.EncodedUnderlyingIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuerLen get(quickfix.field.EncodedUnderlyingIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuerLen value = new quickfix.field.EncodedUnderlyingIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuerLen()
  { return isSetField(362); }
  public void set(quickfix.field.EncodedUnderlyingIssuer value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingIssuer get(quickfix.field.EncodedUnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingIssuer value = new quickfix.field.EncodedUnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuer()
  { return isSetField(363); }
  public void set(quickfix.field.UnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.UnderlyingSecurityDesc get(quickfix.field.UnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.UnderlyingSecurityDesc value = new quickfix.field.UnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityDesc()
  { return isSetField(307); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDescLen get(quickfix.field.EncodedUnderlyingSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDescLen value = new quickfix.field.EncodedUnderlyingSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDescLen()
  { return isSetField(364); }
  public void set(quickfix.field.EncodedUnderlyingSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedUnderlyingSecurityDesc get(quickfix.field.EncodedUnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedUnderlyingSecurityDesc value = new quickfix.field.EncodedUnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedUnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDesc()
  { return isSetField(365); }
  public void set(quickfix.field.UnderlyingCPProgram value)
  { setField(value); }
  public quickfix.field.UnderlyingCPProgram get(quickfix.field.UnderlyingCPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPProgram getUnderlyingCPProgram() throws FieldNotFound
  { quickfix.field.UnderlyingCPProgram value = new quickfix.field.UnderlyingCPProgram();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPProgram field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPProgram()
  { return isSetField(877); }
  public void set(quickfix.field.UnderlyingCPRegType value)
  { setField(value); }
  public quickfix.field.UnderlyingCPRegType get(quickfix.field.UnderlyingCPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCPRegType getUnderlyingCPRegType() throws FieldNotFound
  { quickfix.field.UnderlyingCPRegType value = new quickfix.field.UnderlyingCPRegType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCPRegType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPRegType()
  { return isSetField(878); }
  public void set(quickfix.field.UnderlyingCurrency value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrency get(quickfix.field.UnderlyingCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrency getUnderlyingCurrency() throws FieldNotFound
  { quickfix.field.UnderlyingCurrency value = new quickfix.field.UnderlyingCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrency()
  { return isSetField(318); }
  public void set(quickfix.field.UnderlyingQty value)
  { setField(value); }
  public quickfix.field.UnderlyingQty get(quickfix.field.UnderlyingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingQty getUnderlyingQty() throws FieldNotFound
  { quickfix.field.UnderlyingQty value = new quickfix.field.UnderlyingQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingQty()
  { return isSetField(879); }
  public void set(quickfix.field.UnderlyingPx value)
  { setField(value); }
  public quickfix.field.UnderlyingPx get(quickfix.field.UnderlyingPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingPx getUnderlyingPx() throws FieldNotFound
  { quickfix.field.UnderlyingPx value = new quickfix.field.UnderlyingPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingPx()
  { return isSetField(810); }
  public void set(quickfix.field.UnderlyingDirtyPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingDirtyPrice get(quickfix.field.UnderlyingDirtyPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingDirtyPrice getUnderlyingDirtyPrice() throws FieldNotFound
  { quickfix.field.UnderlyingDirtyPrice value = new quickfix.field.UnderlyingDirtyPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingDirtyPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingDirtyPrice()
  { return isSetField(882); }
  public void set(quickfix.field.UnderlyingEndPrice value)
  { setField(value); }
  public quickfix.field.UnderlyingEndPrice get(quickfix.field.UnderlyingEndPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndPrice getUnderlyingEndPrice() throws FieldNotFound
  { quickfix.field.UnderlyingEndPrice value = new quickfix.field.UnderlyingEndPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndPrice()
  { return isSetField(883); }
  public void set(quickfix.field.UnderlyingStartValue value)
  { setField(value); }
  public quickfix.field.UnderlyingStartValue get(quickfix.field.UnderlyingStartValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingStartValue getUnderlyingStartValue() throws FieldNotFound
  { quickfix.field.UnderlyingStartValue value = new quickfix.field.UnderlyingStartValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingStartValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStartValue()
  { return isSetField(884); }
  public void set(quickfix.field.UnderlyingCurrentValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCurrentValue get(quickfix.field.UnderlyingCurrentValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCurrentValue getUnderlyingCurrentValue() throws FieldNotFound
  { quickfix.field.UnderlyingCurrentValue value = new quickfix.field.UnderlyingCurrentValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCurrentValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrentValue()
  { return isSetField(885); }
  public void set(quickfix.field.UnderlyingEndValue value)
  { setField(value); }
  public quickfix.field.UnderlyingEndValue get(quickfix.field.UnderlyingEndValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingEndValue getUnderlyingEndValue() throws FieldNotFound
  { quickfix.field.UnderlyingEndValue value = new quickfix.field.UnderlyingEndValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingEndValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndValue()
  { return isSetField(886); }
  public void set(quickfix.field.UnderlyingAllocationPercent value)
  { setField(value); }
  public quickfix.field.UnderlyingAllocationPercent get(quickfix.field.UnderlyingAllocationPercent  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAllocationPercent getUnderlyingAllocationPercent() throws FieldNotFound
  { quickfix.field.UnderlyingAllocationPercent value = new quickfix.field.UnderlyingAllocationPercent();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAllocationPercent field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAllocationPercent()
  { return isSetField(972); }
  public void set(quickfix.field.UnderlyingSettlementType value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlementType get(quickfix.field.UnderlyingSettlementType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlementType getUnderlyingSettlementType() throws FieldNotFound
  { quickfix.field.UnderlyingSettlementType value = new quickfix.field.UnderlyingSettlementType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlementType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlementType()
  { return isSetField(975); }
  public void set(quickfix.field.UnderlyingCashAmount value)
  { setField(value); }
  public quickfix.field.UnderlyingCashAmount get(quickfix.field.UnderlyingCashAmount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashAmount getUnderlyingCashAmount() throws FieldNotFound
  { quickfix.field.UnderlyingCashAmount value = new quickfix.field.UnderlyingCashAmount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashAmount field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashAmount()
  { return isSetField(973); }
  public void set(quickfix.field.UnderlyingCashType value)
  { setField(value); }
  public quickfix.field.UnderlyingCashType get(quickfix.field.UnderlyingCashType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCashType getUnderlyingCashType() throws FieldNotFound
  { quickfix.field.UnderlyingCashType value = new quickfix.field.UnderlyingCashType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCashType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCashType()
  { return isSetField(974); }
  public void set(quickfix.field.UnderlyingUnitofMeasure value)
  { setField(value); }
  public quickfix.field.UnderlyingUnitofMeasure get(quickfix.field.UnderlyingUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingUnitofMeasure getUnderlyingUnitofMeasure() throws FieldNotFound
  { quickfix.field.UnderlyingUnitofMeasure value = new quickfix.field.UnderlyingUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetUnderlyingUnitofMeasure()
  { return isSetField(998); }
  public void set(quickfix.field.UnderlyingTimeUnit value)
  { setField(value); }
  public quickfix.field.UnderlyingTimeUnit get(quickfix.field.UnderlyingTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingTimeUnit getUnderlyingTimeUnit() throws FieldNotFound
  { quickfix.field.UnderlyingTimeUnit value = new quickfix.field.UnderlyingTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingTimeUnit field)
  { return isSetField(field); }
  public boolean isSetUnderlyingTimeUnit()
  { return isSetField(1000); }
  public void set(quickfix.field.UnderlyingCapValue value)
  { setField(value); }
  public quickfix.field.UnderlyingCapValue get(quickfix.field.UnderlyingCapValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingCapValue getUnderlyingCapValue() throws FieldNotFound
  { quickfix.field.UnderlyingCapValue value = new quickfix.field.UnderlyingCapValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingCapValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCapValue()
  { return isSetField(1038); }
  public void set(quickfix.field.UnderlyingSettlMethod value)
  { setField(value); }
  public quickfix.field.UnderlyingSettlMethod get(quickfix.field.UnderlyingSettlMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingSettlMethod getUnderlyingSettlMethod() throws FieldNotFound
  { quickfix.field.UnderlyingSettlMethod value = new quickfix.field.UnderlyingSettlMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingSettlMethod field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSettlMethod()
  { return isSetField(1039); }
  public void set(quickfix.field.UnderlyingAdjustedQuantity value)
  { setField(value); }
  public quickfix.field.UnderlyingAdjustedQuantity get(quickfix.field.UnderlyingAdjustedQuantity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity() throws FieldNotFound
  { quickfix.field.UnderlyingAdjustedQuantity value = new quickfix.field.UnderlyingAdjustedQuantity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingAdjustedQuantity field)
  { return isSetField(field); }
  public boolean isSetUnderlyingAdjustedQuantity()
  { return isSetField(1044); }
  public void set(quickfix.field.UnderlyingFXRate value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRate get(quickfix.field.UnderlyingFXRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRate getUnderlyingFXRate() throws FieldNotFound
  { quickfix.field.UnderlyingFXRate value = new quickfix.field.UnderlyingFXRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRate()
  { return isSetField(1045); }
  public void set(quickfix.field.UnderlyingFXRateCalc value)
  { setField(value); }
  public quickfix.field.UnderlyingFXRateCalc get(quickfix.field.UnderlyingFXRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnderlyingFXRateCalc getUnderlyingFXRateCalc() throws FieldNotFound
  { quickfix.field.UnderlyingFXRateCalc value = new quickfix.field.UnderlyingFXRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnderlyingFXRateCalc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFXRateCalc()
  { return isSetField(1046); }
}
  public void set(quickfix.field.PrevClosePx value)
  { setField(value); }
  public quickfix.field.PrevClosePx get(quickfix.field.PrevClosePx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound
  { quickfix.field.PrevClosePx value = new quickfix.field.PrevClosePx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PrevClosePx field)
  { return isSetField(field); }
  public boolean isSetPrevClosePx()
  { return isSetField(140); }
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
      new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,687,690,683,670,564,565,539,654,566,587,588,1017,685,0 } ); }
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
  public void set(quickfix.field.LegSecuritySubType value)
  { setField(value); }
  public quickfix.field.LegSecuritySubType get(quickfix.field.LegSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSecuritySubType getLegSecuritySubType() throws FieldNotFound
  { quickfix.field.LegSecuritySubType value = new quickfix.field.LegSecuritySubType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetLegSecuritySubType()
  { return isSetField(764); }
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
  public void set(quickfix.field.LegStrikeCurrency value)
  { setField(value); }
  public quickfix.field.LegStrikeCurrency get(quickfix.field.LegStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStrikeCurrency getLegStrikeCurrency() throws FieldNotFound
  { quickfix.field.LegStrikeCurrency value = new quickfix.field.LegStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetLegStrikeCurrency()
  { return isSetField(942); }
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
  public void set(quickfix.field.LegCurrency value)
  { setField(value); }
  public quickfix.field.LegCurrency get(quickfix.field.LegCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegCurrency getLegCurrency() throws FieldNotFound
  { quickfix.field.LegCurrency value = new quickfix.field.LegCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegCurrency field)
  { return isSetField(field); }
  public boolean isSetLegCurrency()
  { return isSetField(556); }
  public void set(quickfix.field.LegPool value)
  { setField(value); }
  public quickfix.field.LegPool get(quickfix.field.LegPool  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegPool getLegPool() throws FieldNotFound
  { quickfix.field.LegPool value = new quickfix.field.LegPool();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegPool field)
  { return isSetField(field); }
  public boolean isSetLegPool()
  { return isSetField(740); }
  public void set(quickfix.field.LegDatedDate value)
  { setField(value); }
  public quickfix.field.LegDatedDate get(quickfix.field.LegDatedDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegDatedDate getLegDatedDate() throws FieldNotFound
  { quickfix.field.LegDatedDate value = new quickfix.field.LegDatedDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegDatedDate field)
  { return isSetField(field); }
  public boolean isSetLegDatedDate()
  { return isSetField(739); }
  public void set(quickfix.field.LegContractSettlMonth value)
  { setField(value); }
  public quickfix.field.LegContractSettlMonth get(quickfix.field.LegContractSettlMonth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegContractSettlMonth getLegContractSettlMonth() throws FieldNotFound
  { quickfix.field.LegContractSettlMonth value = new quickfix.field.LegContractSettlMonth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegContractSettlMonth field)
  { return isSetField(field); }
  public boolean isSetLegContractSettlMonth()
  { return isSetField(955); }
  public void set(quickfix.field.LegInterestAccrualDate value)
  { setField(value); }
  public quickfix.field.LegInterestAccrualDate get(quickfix.field.LegInterestAccrualDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegInterestAccrualDate getLegInterestAccrualDate() throws FieldNotFound
  { quickfix.field.LegInterestAccrualDate value = new quickfix.field.LegInterestAccrualDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegInterestAccrualDate field)
  { return isSetField(field); }
  public boolean isSetLegInterestAccrualDate()
  { return isSetField(956); }
  public void set(quickfix.field.LegUnitofMeasure value)
  { setField(value); }
  public quickfix.field.LegUnitofMeasure get(quickfix.field.LegUnitofMeasure  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegUnitofMeasure getLegUnitofMeasure() throws FieldNotFound
  { quickfix.field.LegUnitofMeasure value = new quickfix.field.LegUnitofMeasure();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegUnitofMeasure field)
  { return isSetField(field); }
  public boolean isSetLegUnitofMeasure()
  { return isSetField(999); }
  public void set(quickfix.field.LegTimeUnit value)
  { setField(value); }
  public quickfix.field.LegTimeUnit get(quickfix.field.LegTimeUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegTimeUnit getLegTimeUnit() throws FieldNotFound
  { quickfix.field.LegTimeUnit value = new quickfix.field.LegTimeUnit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegTimeUnit field)
  { return isSetField(field); }
  public boolean isSetLegTimeUnit()
  { return isSetField(1001); }
  public void set(quickfix.field.LegQty value)
  { setField(value); }
  public quickfix.field.LegQty get(quickfix.field.LegQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegQty getLegQty() throws FieldNotFound
  { quickfix.field.LegQty value = new quickfix.field.LegQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegQty field)
  { return isSetField(field); }
  public boolean isSetLegQty()
  { return isSetField(687); }
  public void set(quickfix.field.LegSwapType value)
  { setField(value); }
  public quickfix.field.LegSwapType get(quickfix.field.LegSwapType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSwapType getLegSwapType() throws FieldNotFound
  { quickfix.field.LegSwapType value = new quickfix.field.LegSwapType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSwapType field)
  { return isSetField(field); }
  public boolean isSetLegSwapType()
  { return isSetField(690); }
  public void set(quickfix.field.NoLegStipulations value)
  { setField(value); }
  public quickfix.field.NoLegStipulations get(quickfix.field.NoLegStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegStipulations getNoLegStipulations() throws FieldNotFound
  { quickfix.field.NoLegStipulations value = new quickfix.field.NoLegStipulations();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegStipulations field)
  { return isSetField(field); }
  public boolean isSetNoLegStipulations()
  { return isSetField(683); }
  public static class NoLegStipulations extends Group {
    public NoLegStipulations() {
      super(683,688,
      new int[] {688,689,0 } ); }
  public void set(quickfix.field.LegStipulationType value)
  { setField(value); }
  public quickfix.field.LegStipulationType get(quickfix.field.LegStipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStipulationType getLegStipulationType() throws FieldNotFound
  { quickfix.field.LegStipulationType value = new quickfix.field.LegStipulationType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStipulationType field)
  { return isSetField(field); }
  public boolean isSetLegStipulationType()
  { return isSetField(688); }
  public void set(quickfix.field.LegStipulationValue value)
  { setField(value); }
  public quickfix.field.LegStipulationValue get(quickfix.field.LegStipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegStipulationValue getLegStipulationValue() throws FieldNotFound
  { quickfix.field.LegStipulationValue value = new quickfix.field.LegStipulationValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegStipulationValue field)
  { return isSetField(field); }
  public boolean isSetLegStipulationValue()
  { return isSetField(689); }
}
  public void set(quickfix.field.NoLegAllocs value)
  { setField(value); }
  public quickfix.field.NoLegAllocs get(quickfix.field.NoLegAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoLegAllocs getNoLegAllocs() throws FieldNotFound
  { quickfix.field.NoLegAllocs value = new quickfix.field.NoLegAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoLegAllocs field)
  { return isSetField(field); }
  public boolean isSetNoLegAllocs()
  { return isSetField(670); }
  public static class NoLegAllocs extends Group {
    public NoLegAllocs() {
      super(670,671,
      new int[] {671,672,756,673,674,675,0 } ); }
  public void set(quickfix.field.LegAllocAccount value)
  { setField(value); }
  public quickfix.field.LegAllocAccount get(quickfix.field.LegAllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegAllocAccount getLegAllocAccount() throws FieldNotFound
  { quickfix.field.LegAllocAccount value = new quickfix.field.LegAllocAccount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegAllocAccount field)
  { return isSetField(field); }
  public boolean isSetLegAllocAccount()
  { return isSetField(671); }
  public void set(quickfix.field.LegIndividualAllocID value)
  { setField(value); }
  public quickfix.field.LegIndividualAllocID get(quickfix.field.LegIndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegIndividualAllocID getLegIndividualAllocID() throws FieldNotFound
  { quickfix.field.LegIndividualAllocID value = new quickfix.field.LegIndividualAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegIndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetLegIndividualAllocID()
  { return isSetField(672); }
  public void set(quickfix.field.NoNested2PartyIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartyIDs get(quickfix.field.NoNested2PartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartyIDs getNoNested2PartyIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartyIDs value = new quickfix.field.NoNested2PartyIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartyIDs()
  { return isSetField(756); }
  public static class NoNested2PartyIDs extends Group {
    public NoNested2PartyIDs() {
      super(756,757,
      new int[] {757,758,759,806,0 } ); }
  public void set(quickfix.field.Nested2PartyID value)
  { setField(value); }
  public quickfix.field.Nested2PartyID get(quickfix.field.Nested2PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyID getNested2PartyID() throws FieldNotFound
  { quickfix.field.Nested2PartyID value = new quickfix.field.Nested2PartyID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyID field)
  { return isSetField(field); }
  public boolean isSetNested2PartyID()
  { return isSetField(757); }
  public void set(quickfix.field.Nested2PartyIDSource value)
  { setField(value); }
  public quickfix.field.Nested2PartyIDSource get(quickfix.field.Nested2PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyIDSource getNested2PartyIDSource() throws FieldNotFound
  { quickfix.field.Nested2PartyIDSource value = new quickfix.field.Nested2PartyIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetNested2PartyIDSource()
  { return isSetField(758); }
  public void set(quickfix.field.Nested2PartyRole value)
  { setField(value); }
  public quickfix.field.Nested2PartyRole get(quickfix.field.Nested2PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartyRole getNested2PartyRole() throws FieldNotFound
  { quickfix.field.Nested2PartyRole value = new quickfix.field.Nested2PartyRole();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartyRole field)
  { return isSetField(field); }
  public boolean isSetNested2PartyRole()
  { return isSetField(759); }
  public void set(quickfix.field.NoNested2PartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNested2PartySubIDs get(quickfix.field.NoNested2PartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNested2PartySubIDs getNoNested2PartySubIDs() throws FieldNotFound
  { quickfix.field.NoNested2PartySubIDs value = new quickfix.field.NoNested2PartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNested2PartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNested2PartySubIDs()
  { return isSetField(806); }
  public static class NoNested2PartySubIDs extends Group {
    public NoNested2PartySubIDs() {
      super(806,760,
      new int[] {760,807,0 } ); }
  public void set(quickfix.field.Nested2PartySubID value)
  { setField(value); }
  public quickfix.field.Nested2PartySubID get(quickfix.field.Nested2PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubID getNested2PartySubID() throws FieldNotFound
  { quickfix.field.Nested2PartySubID value = new quickfix.field.Nested2PartySubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubID field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubID()
  { return isSetField(760); }
  public void set(quickfix.field.Nested2PartySubIDType value)
  { setField(value); }
  public quickfix.field.Nested2PartySubIDType get(quickfix.field.Nested2PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Nested2PartySubIDType getNested2PartySubIDType() throws FieldNotFound
  { quickfix.field.Nested2PartySubIDType value = new quickfix.field.Nested2PartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Nested2PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNested2PartySubIDType()
  { return isSetField(807); }
}
}
  public void set(quickfix.field.LegAllocQty value)
  { setField(value); }
  public quickfix.field.LegAllocQty get(quickfix.field.LegAllocQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegAllocQty getLegAllocQty() throws FieldNotFound
  { quickfix.field.LegAllocQty value = new quickfix.field.LegAllocQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegAllocQty field)
  { return isSetField(field); }
  public boolean isSetLegAllocQty()
  { return isSetField(673); }
  public void set(quickfix.field.LegAllocAcctIDSource value)
  { setField(value); }
  public quickfix.field.LegAllocAcctIDSource get(quickfix.field.LegAllocAcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegAllocAcctIDSource getLegAllocAcctIDSource() throws FieldNotFound
  { quickfix.field.LegAllocAcctIDSource value = new quickfix.field.LegAllocAcctIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegAllocAcctIDSource field)
  { return isSetField(field); }
  public boolean isSetLegAllocAcctIDSource()
  { return isSetField(674); }
  public void set(quickfix.field.LegSettlCurrency value)
  { setField(value); }
  public quickfix.field.LegSettlCurrency get(quickfix.field.LegSettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlCurrency getLegSettlCurrency() throws FieldNotFound
  { quickfix.field.LegSettlCurrency value = new quickfix.field.LegSettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlCurrency field)
  { return isSetField(field); }
  public boolean isSetLegSettlCurrency()
  { return isSetField(675); }
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
      new int[] {524,525,538,804,0 } ); }
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
  public void set(quickfix.field.NoNestedPartySubIDs value)
  { setField(value); }
  public quickfix.field.NoNestedPartySubIDs get(quickfix.field.NoNestedPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoNestedPartySubIDs getNoNestedPartySubIDs() throws FieldNotFound
  { quickfix.field.NoNestedPartySubIDs value = new quickfix.field.NoNestedPartySubIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoNestedPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoNestedPartySubIDs()
  { return isSetField(804); }
  public static class NoNestedPartySubIDs extends Group {
    public NoNestedPartySubIDs() {
      super(804,545,
      new int[] {545,805,0 } ); }
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
  public void set(quickfix.field.NestedPartySubIDType value)
  { setField(value); }
  public quickfix.field.NestedPartySubIDType get(quickfix.field.NestedPartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NestedPartySubIDType getNestedPartySubIDType() throws FieldNotFound
  { quickfix.field.NestedPartySubIDType value = new quickfix.field.NestedPartySubIDType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NestedPartySubIDType field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubIDType()
  { return isSetField(805); }
}
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
  public void set(quickfix.field.LegSettlType value)
  { setField(value); }
  public quickfix.field.LegSettlType get(quickfix.field.LegSettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlType getLegSettlType() throws FieldNotFound
  { quickfix.field.LegSettlType value = new quickfix.field.LegSettlType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlType field)
  { return isSetField(field); }
  public boolean isSetLegSettlType()
  { return isSetField(587); }
  public void set(quickfix.field.LegSettlDate value)
  { setField(value); }
  public quickfix.field.LegSettlDate get(quickfix.field.LegSettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegSettlDate getLegSettlDate() throws FieldNotFound
  { quickfix.field.LegSettlDate value = new quickfix.field.LegSettlDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegSettlDate field)
  { return isSetField(field); }
  public boolean isSetLegSettlDate()
  { return isSetField(588); }
  public void set(quickfix.field.LegOptionRatio value)
  { setField(value); }
  public quickfix.field.LegOptionRatio get(quickfix.field.LegOptionRatio  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegOptionRatio getLegOptionRatio() throws FieldNotFound
  { quickfix.field.LegOptionRatio value = new quickfix.field.LegOptionRatio();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegOptionRatio field)
  { return isSetField(field); }
  public boolean isSetLegOptionRatio()
  { return isSetField(1017); }
  public void set(quickfix.field.LegOrderQty value)
  { setField(value); }
  public quickfix.field.LegOrderQty get(quickfix.field.LegOrderQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LegOrderQty getLegOrderQty() throws FieldNotFound
  { quickfix.field.LegOrderQty value = new quickfix.field.LegOrderQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LegOrderQty field)
  { return isSetField(field); }
  public boolean isSetLegOrderQty()
  { return isSetField(685); }
}
  public void set(quickfix.field.LocateReqd value)
  { setField(value); }
  public quickfix.field.LocateReqd get(quickfix.field.LocateReqd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound
  { quickfix.field.LocateReqd value = new quickfix.field.LocateReqd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LocateReqd field)
  { return isSetField(field); }
  public boolean isSetLocateReqd()
  { return isSetField(114); }
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
  public void set(quickfix.field.QtyType value)
  { setField(value); }
  public quickfix.field.QtyType get(quickfix.field.QtyType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QtyType getQtyType() throws FieldNotFound
  { quickfix.field.QtyType value = new quickfix.field.QtyType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QtyType field)
  { return isSetField(field); }
  public boolean isSetQtyType()
  { return isSetField(854); }
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
  public void set(quickfix.field.IOIid value)
  { setField(value); }
  public quickfix.field.IOIid get(quickfix.field.IOIid  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIid getIOIid() throws FieldNotFound
  { quickfix.field.IOIid value = new quickfix.field.IOIid();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIid field)
  { return isSetField(field); }
  public boolean isSetIOIid()
  { return isSetField(23); }
  public void set(quickfix.field.QuoteID value)
  { setField(value); }
  public quickfix.field.QuoteID get(quickfix.field.QuoteID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { quickfix.field.QuoteID value = new quickfix.field.QuoteID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteID field)
  { return isSetField(field); }
  public boolean isSetQuoteID()
  { return isSetField(117); }
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
  public void set(quickfix.field.ForexReq value)
  { setField(value); }
  public quickfix.field.ForexReq get(quickfix.field.ForexReq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ForexReq getForexReq() throws FieldNotFound
  { quickfix.field.ForexReq value = new quickfix.field.ForexReq();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ForexReq field)
  { return isSetField(field); }
  public boolean isSetForexReq()
  { return isSetField(121); }
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
  public void set(quickfix.field.BookingType value)
  { setField(value); }
  public quickfix.field.BookingType get(quickfix.field.BookingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BookingType getBookingType() throws FieldNotFound
  { quickfix.field.BookingType value = new quickfix.field.BookingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BookingType field)
  { return isSetField(field); }
  public boolean isSetBookingType()
  { return isSetField(775); }
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
  public void set(quickfix.field.CoveredOrUncovered value)
  { setField(value); }
  public quickfix.field.CoveredOrUncovered get(quickfix.field.CoveredOrUncovered  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CoveredOrUncovered getCoveredOrUncovered() throws FieldNotFound
  { quickfix.field.CoveredOrUncovered value = new quickfix.field.CoveredOrUncovered();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CoveredOrUncovered field)
  { return isSetField(field); }
  public boolean isSetCoveredOrUncovered()
  { return isSetField(203); }
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
  public void set(quickfix.field.PegOffsetValue value)
  { setField(value); }
  public quickfix.field.PegOffsetValue get(quickfix.field.PegOffsetValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegOffsetValue getPegOffsetValue() throws FieldNotFound
  { quickfix.field.PegOffsetValue value = new quickfix.field.PegOffsetValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegOffsetValue field)
  { return isSetField(field); }
  public boolean isSetPegOffsetValue()
  { return isSetField(211); }
  public void set(quickfix.field.PegMoveType value)
  { setField(value); }
  public quickfix.field.PegMoveType get(quickfix.field.PegMoveType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegMoveType getPegMoveType() throws FieldNotFound
  { quickfix.field.PegMoveType value = new quickfix.field.PegMoveType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegMoveType field)
  { return isSetField(field); }
  public boolean isSetPegMoveType()
  { return isSetField(835); }
  public void set(quickfix.field.PegOffsetType value)
  { setField(value); }
  public quickfix.field.PegOffsetType get(quickfix.field.PegOffsetType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegOffsetType getPegOffsetType() throws FieldNotFound
  { quickfix.field.PegOffsetType value = new quickfix.field.PegOffsetType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegOffsetType field)
  { return isSetField(field); }
  public boolean isSetPegOffsetType()
  { return isSetField(836); }
  public void set(quickfix.field.PegLimitType value)
  { setField(value); }
  public quickfix.field.PegLimitType get(quickfix.field.PegLimitType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegLimitType getPegLimitType() throws FieldNotFound
  { quickfix.field.PegLimitType value = new quickfix.field.PegLimitType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegLimitType field)
  { return isSetField(field); }
  public boolean isSetPegLimitType()
  { return isSetField(837); }
  public void set(quickfix.field.PegRoundDirection value)
  { setField(value); }
  public quickfix.field.PegRoundDirection get(quickfix.field.PegRoundDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegRoundDirection getPegRoundDirection() throws FieldNotFound
  { quickfix.field.PegRoundDirection value = new quickfix.field.PegRoundDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegRoundDirection field)
  { return isSetField(field); }
  public boolean isSetPegRoundDirection()
  { return isSetField(838); }
  public void set(quickfix.field.PegScope value)
  { setField(value); }
  public quickfix.field.PegScope get(quickfix.field.PegScope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegScope getPegScope() throws FieldNotFound
  { quickfix.field.PegScope value = new quickfix.field.PegScope();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegScope field)
  { return isSetField(field); }
  public boolean isSetPegScope()
  { return isSetField(840); }
  public void set(quickfix.field.PegPriceType value)
  { setField(value); }
  public quickfix.field.PegPriceType get(quickfix.field.PegPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegPriceType getPegPriceType() throws FieldNotFound
  { quickfix.field.PegPriceType value = new quickfix.field.PegPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegPriceType field)
  { return isSetField(field); }
  public boolean isSetPegPriceType()
  { return isSetField(1094); }
  public void set(quickfix.field.PegSecurityIDSource value)
  { setField(value); }
  public quickfix.field.PegSecurityIDSource get(quickfix.field.PegSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegSecurityIDSource getPegSecurityIDSource() throws FieldNotFound
  { quickfix.field.PegSecurityIDSource value = new quickfix.field.PegSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetPegSecurityIDSource()
  { return isSetField(1096); }
  public void set(quickfix.field.PegSecurityID value)
  { setField(value); }
  public quickfix.field.PegSecurityID get(quickfix.field.PegSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegSecurityID getPegSecurityID() throws FieldNotFound
  { quickfix.field.PegSecurityID value = new quickfix.field.PegSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegSecurityID field)
  { return isSetField(field); }
  public boolean isSetPegSecurityID()
  { return isSetField(1097); }
  public void set(quickfix.field.PegSymbol value)
  { setField(value); }
  public quickfix.field.PegSymbol get(quickfix.field.PegSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegSymbol getPegSymbol() throws FieldNotFound
  { quickfix.field.PegSymbol value = new quickfix.field.PegSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegSymbol field)
  { return isSetField(field); }
  public boolean isSetPegSymbol()
  { return isSetField(1098); }
  public void set(quickfix.field.PegSecurityDesc value)
  { setField(value); }
  public quickfix.field.PegSecurityDesc get(quickfix.field.PegSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PegSecurityDesc getPegSecurityDesc() throws FieldNotFound
  { quickfix.field.PegSecurityDesc value = new quickfix.field.PegSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PegSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetPegSecurityDesc()
  { return isSetField(1099); }
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
  public void set(quickfix.field.DiscretionOffsetValue value)
  { setField(value); }
  public quickfix.field.DiscretionOffsetValue get(quickfix.field.DiscretionOffsetValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionOffsetValue getDiscretionOffsetValue() throws FieldNotFound
  { quickfix.field.DiscretionOffsetValue value = new quickfix.field.DiscretionOffsetValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionOffsetValue field)
  { return isSetField(field); }
  public boolean isSetDiscretionOffsetValue()
  { return isSetField(389); }
  public void set(quickfix.field.DiscretionMoveType value)
  { setField(value); }
  public quickfix.field.DiscretionMoveType get(quickfix.field.DiscretionMoveType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionMoveType getDiscretionMoveType() throws FieldNotFound
  { quickfix.field.DiscretionMoveType value = new quickfix.field.DiscretionMoveType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionMoveType field)
  { return isSetField(field); }
  public boolean isSetDiscretionMoveType()
  { return isSetField(841); }
  public void set(quickfix.field.DiscretionOffsetType value)
  { setField(value); }
  public quickfix.field.DiscretionOffsetType get(quickfix.field.DiscretionOffsetType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionOffsetType getDiscretionOffsetType() throws FieldNotFound
  { quickfix.field.DiscretionOffsetType value = new quickfix.field.DiscretionOffsetType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionOffsetType field)
  { return isSetField(field); }
  public boolean isSetDiscretionOffsetType()
  { return isSetField(842); }
  public void set(quickfix.field.DiscretionLimitType value)
  { setField(value); }
  public quickfix.field.DiscretionLimitType get(quickfix.field.DiscretionLimitType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionLimitType getDiscretionLimitType() throws FieldNotFound
  { quickfix.field.DiscretionLimitType value = new quickfix.field.DiscretionLimitType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionLimitType field)
  { return isSetField(field); }
  public boolean isSetDiscretionLimitType()
  { return isSetField(843); }
  public void set(quickfix.field.DiscretionRoundDirection value)
  { setField(value); }
  public quickfix.field.DiscretionRoundDirection get(quickfix.field.DiscretionRoundDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionRoundDirection getDiscretionRoundDirection() throws FieldNotFound
  { quickfix.field.DiscretionRoundDirection value = new quickfix.field.DiscretionRoundDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionRoundDirection field)
  { return isSetField(field); }
  public boolean isSetDiscretionRoundDirection()
  { return isSetField(844); }
  public void set(quickfix.field.DiscretionScope value)
  { setField(value); }
  public quickfix.field.DiscretionScope get(quickfix.field.DiscretionScope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DiscretionScope getDiscretionScope() throws FieldNotFound
  { quickfix.field.DiscretionScope value = new quickfix.field.DiscretionScope();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DiscretionScope field)
  { return isSetField(field); }
  public boolean isSetDiscretionScope()
  { return isSetField(846); }
  public void set(quickfix.field.TargetStrategy value)
  { setField(value); }
  public quickfix.field.TargetStrategy get(quickfix.field.TargetStrategy  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TargetStrategy getTargetStrategy() throws FieldNotFound
  { quickfix.field.TargetStrategy value = new quickfix.field.TargetStrategy();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TargetStrategy field)
  { return isSetField(field); }
  public boolean isSetTargetStrategy()
  { return isSetField(847); }
  public void set(quickfix.field.TargetStrategyParameters value)
  { setField(value); }
  public quickfix.field.TargetStrategyParameters get(quickfix.field.TargetStrategyParameters  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TargetStrategyParameters getTargetStrategyParameters() throws FieldNotFound
  { quickfix.field.TargetStrategyParameters value = new quickfix.field.TargetStrategyParameters();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TargetStrategyParameters field)
  { return isSetField(field); }
  public boolean isSetTargetStrategyParameters()
  { return isSetField(848); }
  public void set(quickfix.field.ParticipationRate value)
  { setField(value); }
  public quickfix.field.ParticipationRate get(quickfix.field.ParticipationRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ParticipationRate getParticipationRate() throws FieldNotFound
  { quickfix.field.ParticipationRate value = new quickfix.field.ParticipationRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ParticipationRate field)
  { return isSetField(field); }
  public boolean isSetParticipationRate()
  { return isSetField(849); }
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
  public void set(quickfix.field.MultiLegRptTypeReq value)
  { setField(value); }
  public quickfix.field.MultiLegRptTypeReq get(quickfix.field.MultiLegRptTypeReq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MultiLegRptTypeReq getMultiLegRptTypeReq() throws FieldNotFound
  { quickfix.field.MultiLegRptTypeReq value = new quickfix.field.MultiLegRptTypeReq();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MultiLegRptTypeReq field)
  { return isSetField(field); }
  public boolean isSetMultiLegRptTypeReq()
  { return isSetField(563); }
  public void set(quickfix.field.NoStrategyParameters value)
  { setField(value); }
  public quickfix.field.NoStrategyParameters get(quickfix.field.NoStrategyParameters  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoStrategyParameters getNoStrategyParameters() throws FieldNotFound
  { quickfix.field.NoStrategyParameters value = new quickfix.field.NoStrategyParameters();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoStrategyParameters field)
  { return isSetField(field); }
  public boolean isSetNoStrategyParameters()
  { return isSetField(957); }
  public static class NoStrategyParameters extends Group {
    public NoStrategyParameters() {
      super(957,958,
      new int[] {958,959,960,0 } ); }
  public void set(quickfix.field.StrategyParameterName value)
  { setField(value); }
  public quickfix.field.StrategyParameterName get(quickfix.field.StrategyParameterName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrategyParameterName getStrategyParameterName() throws FieldNotFound
  { quickfix.field.StrategyParameterName value = new quickfix.field.StrategyParameterName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrategyParameterName field)
  { return isSetField(field); }
  public boolean isSetStrategyParameterName()
  { return isSetField(958); }
  public void set(quickfix.field.StrategyParameterType value)
  { setField(value); }
  public quickfix.field.StrategyParameterType get(quickfix.field.StrategyParameterType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrategyParameterType getStrategyParameterType() throws FieldNotFound
  { quickfix.field.StrategyParameterType value = new quickfix.field.StrategyParameterType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrategyParameterType field)
  { return isSetField(field); }
  public boolean isSetStrategyParameterType()
  { return isSetField(959); }
  public void set(quickfix.field.StrategyParameterValue value)
  { setField(value); }
  public quickfix.field.StrategyParameterValue get(quickfix.field.StrategyParameterValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrategyParameterValue getStrategyParameterValue() throws FieldNotFound
  { quickfix.field.StrategyParameterValue value = new quickfix.field.StrategyParameterValue();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrategyParameterValue field)
  { return isSetField(field); }
  public boolean isSetStrategyParameterValue()
  { return isSetField(960); }
}
  public void set(quickfix.field.SwapPoints value)
  { setField(value); }
  public quickfix.field.SwapPoints get(quickfix.field.SwapPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SwapPoints getSwapPoints() throws FieldNotFound
  { quickfix.field.SwapPoints value = new quickfix.field.SwapPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SwapPoints field)
  { return isSetField(field); }
  public boolean isSetSwapPoints()
  { return isSetField(1069); }
  public void set(quickfix.field.MatchIncrement value)
  { setField(value); }
  public quickfix.field.MatchIncrement get(quickfix.field.MatchIncrement  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchIncrement getMatchIncrement() throws FieldNotFound
  { quickfix.field.MatchIncrement value = new quickfix.field.MatchIncrement();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchIncrement field)
  { return isSetField(field); }
  public boolean isSetMatchIncrement()
  { return isSetField(1089); }
  public void set(quickfix.field.MaxPriceLevels value)
  { setField(value); }
  public quickfix.field.MaxPriceLevels get(quickfix.field.MaxPriceLevels  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaxPriceLevels getMaxPriceLevels() throws FieldNotFound
  { quickfix.field.MaxPriceLevels value = new quickfix.field.MaxPriceLevels();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaxPriceLevels field)
  { return isSetField(field); }
  public boolean isSetMaxPriceLevels()
  { return isSetField(1090); }
  public void set(quickfix.field.SecondaryDisplayQty value)
  { setField(value); }
  public quickfix.field.SecondaryDisplayQty get(quickfix.field.SecondaryDisplayQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryDisplayQty getSecondaryDisplayQty() throws FieldNotFound
  { quickfix.field.SecondaryDisplayQty value = new quickfix.field.SecondaryDisplayQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryDisplayQty field)
  { return isSetField(field); }
  public boolean isSetSecondaryDisplayQty()
  { return isSetField(1082); }
  public void set(quickfix.field.DisplayWhen value)
  { setField(value); }
  public quickfix.field.DisplayWhen get(quickfix.field.DisplayWhen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayWhen getDisplayWhen() throws FieldNotFound
  { quickfix.field.DisplayWhen value = new quickfix.field.DisplayWhen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayWhen field)
  { return isSetField(field); }
  public boolean isSetDisplayWhen()
  { return isSetField(1083); }
  public void set(quickfix.field.DisplayMethod value)
  { setField(value); }
  public quickfix.field.DisplayMethod get(quickfix.field.DisplayMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayMethod getDisplayMethod() throws FieldNotFound
  { quickfix.field.DisplayMethod value = new quickfix.field.DisplayMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayMethod field)
  { return isSetField(field); }
  public boolean isSetDisplayMethod()
  { return isSetField(1084); }
  public void set(quickfix.field.DisplayLowQty value)
  { setField(value); }
  public quickfix.field.DisplayLowQty get(quickfix.field.DisplayLowQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayLowQty getDisplayLowQty() throws FieldNotFound
  { quickfix.field.DisplayLowQty value = new quickfix.field.DisplayLowQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayLowQty field)
  { return isSetField(field); }
  public boolean isSetDisplayLowQty()
  { return isSetField(1085); }
  public void set(quickfix.field.DisplayHighQty value)
  { setField(value); }
  public quickfix.field.DisplayHighQty get(quickfix.field.DisplayHighQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayHighQty getDisplayHighQty() throws FieldNotFound
  { quickfix.field.DisplayHighQty value = new quickfix.field.DisplayHighQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayHighQty field)
  { return isSetField(field); }
  public boolean isSetDisplayHighQty()
  { return isSetField(1086); }
  public void set(quickfix.field.DisplayMinIncr value)
  { setField(value); }
  public quickfix.field.DisplayMinIncr get(quickfix.field.DisplayMinIncr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayMinIncr getDisplayMinIncr() throws FieldNotFound
  { quickfix.field.DisplayMinIncr value = new quickfix.field.DisplayMinIncr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayMinIncr field)
  { return isSetField(field); }
  public boolean isSetDisplayMinIncr()
  { return isSetField(1087); }
  public void set(quickfix.field.RefreshQty value)
  { setField(value); }
  public quickfix.field.RefreshQty get(quickfix.field.RefreshQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefreshQty getRefreshQty() throws FieldNotFound
  { quickfix.field.RefreshQty value = new quickfix.field.RefreshQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefreshQty field)
  { return isSetField(field); }
  public boolean isSetRefreshQty()
  { return isSetField(1088); }
  public void set(quickfix.field.DisplayQty value)
  { setField(value); }
  public quickfix.field.DisplayQty get(quickfix.field.DisplayQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DisplayQty getDisplayQty() throws FieldNotFound
  { quickfix.field.DisplayQty value = new quickfix.field.DisplayQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DisplayQty field)
  { return isSetField(field); }
  public boolean isSetDisplayQty()
  { return isSetField(1138); }
  public void set(quickfix.field.PriceProtectionScope value)
  { setField(value); }
  public quickfix.field.PriceProtectionScope get(quickfix.field.PriceProtectionScope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriceProtectionScope getPriceProtectionScope() throws FieldNotFound
  { quickfix.field.PriceProtectionScope value = new quickfix.field.PriceProtectionScope();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriceProtectionScope field)
  { return isSetField(field); }
  public boolean isSetPriceProtectionScope()
  { return isSetField(1092); }
  public void set(quickfix.field.TriggerType value)
  { setField(value); }
  public quickfix.field.TriggerType get(quickfix.field.TriggerType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerType getTriggerType() throws FieldNotFound
  { quickfix.field.TriggerType value = new quickfix.field.TriggerType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerType field)
  { return isSetField(field); }
  public boolean isSetTriggerType()
  { return isSetField(1100); }
  public void set(quickfix.field.TriggerAction value)
  { setField(value); }
  public quickfix.field.TriggerAction get(quickfix.field.TriggerAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerAction getTriggerAction() throws FieldNotFound
  { quickfix.field.TriggerAction value = new quickfix.field.TriggerAction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerAction field)
  { return isSetField(field); }
  public boolean isSetTriggerAction()
  { return isSetField(1101); }
  public void set(quickfix.field.TriggerPrice value)
  { setField(value); }
  public quickfix.field.TriggerPrice get(quickfix.field.TriggerPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerPrice getTriggerPrice() throws FieldNotFound
  { quickfix.field.TriggerPrice value = new quickfix.field.TriggerPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerPrice field)
  { return isSetField(field); }
  public boolean isSetTriggerPrice()
  { return isSetField(1102); }
  public void set(quickfix.field.TriggerSymbol value)
  { setField(value); }
  public quickfix.field.TriggerSymbol get(quickfix.field.TriggerSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerSymbol getTriggerSymbol() throws FieldNotFound
  { quickfix.field.TriggerSymbol value = new quickfix.field.TriggerSymbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerSymbol field)
  { return isSetField(field); }
  public boolean isSetTriggerSymbol()
  { return isSetField(1103); }
  public void set(quickfix.field.TriggerSecurityID value)
  { setField(value); }
  public quickfix.field.TriggerSecurityID get(quickfix.field.TriggerSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerSecurityID getTriggerSecurityID() throws FieldNotFound
  { quickfix.field.TriggerSecurityID value = new quickfix.field.TriggerSecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerSecurityID field)
  { return isSetField(field); }
  public boolean isSetTriggerSecurityID()
  { return isSetField(1104); }
  public void set(quickfix.field.TriggerSecurityIDSource value)
  { setField(value); }
  public quickfix.field.TriggerSecurityIDSource get(quickfix.field.TriggerSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerSecurityIDSource getTriggerSecurityIDSource() throws FieldNotFound
  { quickfix.field.TriggerSecurityIDSource value = new quickfix.field.TriggerSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetTriggerSecurityIDSource()
  { return isSetField(1105); }
  public void set(quickfix.field.TriggerSecurityDesc value)
  { setField(value); }
  public quickfix.field.TriggerSecurityDesc get(quickfix.field.TriggerSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerSecurityDesc getTriggerSecurityDesc() throws FieldNotFound
  { quickfix.field.TriggerSecurityDesc value = new quickfix.field.TriggerSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetTriggerSecurityDesc()
  { return isSetField(1106); }
  public void set(quickfix.field.TriggerPriceType value)
  { setField(value); }
  public quickfix.field.TriggerPriceType get(quickfix.field.TriggerPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerPriceType getTriggerPriceType() throws FieldNotFound
  { quickfix.field.TriggerPriceType value = new quickfix.field.TriggerPriceType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerPriceType field)
  { return isSetField(field); }
  public boolean isSetTriggerPriceType()
  { return isSetField(1107); }
  public void set(quickfix.field.TriggerPriceTypeScope value)
  { setField(value); }
  public quickfix.field.TriggerPriceTypeScope get(quickfix.field.TriggerPriceTypeScope  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerPriceTypeScope getTriggerPriceTypeScope() throws FieldNotFound
  { quickfix.field.TriggerPriceTypeScope value = new quickfix.field.TriggerPriceTypeScope();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerPriceTypeScope field)
  { return isSetField(field); }
  public boolean isSetTriggerPriceTypeScope()
  { return isSetField(1108); }
  public void set(quickfix.field.TriggerPriceDirection value)
  { setField(value); }
  public quickfix.field.TriggerPriceDirection get(quickfix.field.TriggerPriceDirection  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerPriceDirection getTriggerPriceDirection() throws FieldNotFound
  { quickfix.field.TriggerPriceDirection value = new quickfix.field.TriggerPriceDirection();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerPriceDirection field)
  { return isSetField(field); }
  public boolean isSetTriggerPriceDirection()
  { return isSetField(1109); }
  public void set(quickfix.field.TriggerNewPrice value)
  { setField(value); }
  public quickfix.field.TriggerNewPrice get(quickfix.field.TriggerNewPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerNewPrice getTriggerNewPrice() throws FieldNotFound
  { quickfix.field.TriggerNewPrice value = new quickfix.field.TriggerNewPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerNewPrice field)
  { return isSetField(field); }
  public boolean isSetTriggerNewPrice()
  { return isSetField(1110); }
  public void set(quickfix.field.TriggerOrderType value)
  { setField(value); }
  public quickfix.field.TriggerOrderType get(quickfix.field.TriggerOrderType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerOrderType getTriggerOrderType() throws FieldNotFound
  { quickfix.field.TriggerOrderType value = new quickfix.field.TriggerOrderType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerOrderType field)
  { return isSetField(field); }
  public boolean isSetTriggerOrderType()
  { return isSetField(1111); }
  public void set(quickfix.field.TriggerNewQty value)
  { setField(value); }
  public quickfix.field.TriggerNewQty get(quickfix.field.TriggerNewQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerNewQty getTriggerNewQty() throws FieldNotFound
  { quickfix.field.TriggerNewQty value = new quickfix.field.TriggerNewQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerNewQty field)
  { return isSetField(field); }
  public boolean isSetTriggerNewQty()
  { return isSetField(1112); }
  public void set(quickfix.field.TriggerTradingSessionID value)
  { setField(value); }
  public quickfix.field.TriggerTradingSessionID get(quickfix.field.TriggerTradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerTradingSessionID getTriggerTradingSessionID() throws FieldNotFound
  { quickfix.field.TriggerTradingSessionID value = new quickfix.field.TriggerTradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerTradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTriggerTradingSessionID()
  { return isSetField(1113); }
  public void set(quickfix.field.TriggerTradingSessionSubID value)
  { setField(value); }
  public quickfix.field.TriggerTradingSessionSubID get(quickfix.field.TriggerTradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TriggerTradingSessionSubID getTriggerTradingSessionSubID() throws FieldNotFound
  { quickfix.field.TriggerTradingSessionSubID value = new quickfix.field.TriggerTradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TriggerTradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTriggerTradingSessionSubID()
  { return isSetField(1114); }
  public void set(quickfix.field.RefOrderID value)
  { setField(value); }
  public quickfix.field.RefOrderID get(quickfix.field.RefOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefOrderID getRefOrderID() throws FieldNotFound
  { quickfix.field.RefOrderID value = new quickfix.field.RefOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefOrderID field)
  { return isSetField(field); }
  public boolean isSetRefOrderID()
  { return isSetField(1080); }
  public void set(quickfix.field.RefOrderIDSource value)
  { setField(value); }
  public quickfix.field.RefOrderIDSource get(quickfix.field.RefOrderIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefOrderIDSource getRefOrderIDSource() throws FieldNotFound
  { quickfix.field.RefOrderIDSource value = new quickfix.field.RefOrderIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefOrderIDSource field)
  { return isSetField(field); }
  public boolean isSetRefOrderIDSource()
  { return isSetField(1081); }
  public void set(quickfix.field.PreTradeAnonymity value)
  { setField(value); }
  public quickfix.field.PreTradeAnonymity get(quickfix.field.PreTradeAnonymity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PreTradeAnonymity getPreTradeAnonymity() throws FieldNotFound
  { quickfix.field.PreTradeAnonymity value = new quickfix.field.PreTradeAnonymity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PreTradeAnonymity field)
  { return isSetField(field); }
  public boolean isSetPreTradeAnonymity()
  { return isSetField(1091); }
  public void set(quickfix.field.ExDestinationIDSource value)
  { setField(value); }
  public quickfix.field.ExDestinationIDSource get(quickfix.field.ExDestinationIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExDestinationIDSource getExDestinationIDSource() throws FieldNotFound
  { quickfix.field.ExDestinationIDSource value = new quickfix.field.ExDestinationIDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExDestinationIDSource field)
  { return isSetField(field); }
  public boolean isSetExDestinationIDSource()
  { return isSetField(1133); }
}

