package org.quickfix.fix43;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class NewOrderSingle extends Message
{
  public NewOrderSingle()
  {
    getHeader().setField(new MsgType("D"));
  }
  public NewOrderSingle(
    org.quickfix.field.ClOrdID aClOrdID,
    org.quickfix.field.HandlInst aHandlInst,
    org.quickfix.field.Side aSide,
    org.quickfix.field.TransactTime aTransactTime,
    org.quickfix.field.OrdType aOrdType ) {

    getHeader().setField(new MsgType("D"));
    set(aClOrdID);
    set(aHandlInst);
    set(aSide);
    set(aTransactTime);
    set(aOrdType);
  }

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
  public void set(org.quickfix.field.SecondaryClOrdID value)
  { setField(value); }
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecondaryClOrdID getSecondaryClOrdID() throws FieldNotFound
  { org.quickfix.field.SecondaryClOrdID value = new org.quickfix.field.SecondaryClOrdID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecondaryClOrdID field)
  { return isSetField(field); }
  public boolean isSetSecondaryClOrdID()
  { return isSetField(526); }
  public void set(org.quickfix.field.ClOrdLinkID value)
  { setField(value); }
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClOrdLinkID field)
  { return isSetField(field); }
  public boolean isSetClOrdLinkID()
  { return isSetField(583); }
  public void set(org.quickfix.field.NoPartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartyIDs()
  { return isSetField(453); }
  public static class NoPartyIDs extends Group {
    public NoPartyIDs() {
      super(453,448,
      new int[] {448,447,452,523,0 } ); }
  public void set(org.quickfix.field.PartyID value)
  { setField(value); }
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyID getPartyID() throws FieldNotFound
  { org.quickfix.field.PartyID value = new org.quickfix.field.PartyID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyID field)
  { return isSetField(field); }
  public boolean isSetPartyID()
  { return isSetField(448); }
  public void set(org.quickfix.field.PartyIDSource value)
  { setField(value); }
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyIDSource field)
  { return isSetField(field); }
  public boolean isSetPartyIDSource()
  { return isSetField(447); }
  public void set(org.quickfix.field.PartyRole value)
  { setField(value); }
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartyRole field)
  { return isSetField(field); }
  public boolean isSetPartyRole()
  { return isSetField(452); }
  public void set(org.quickfix.field.PartySubID value)
  { setField(value); }
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartySubID field)
  { return isSetField(field); }
  public boolean isSetPartySubID()
  { return isSetField(523); }
}
  public void set(org.quickfix.field.TradeOriginationDate value)
  { setField(value); }
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeOriginationDate field)
  { return isSetField(field); }
  public boolean isSetTradeOriginationDate()
  { return isSetField(229); }
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
  public void set(org.quickfix.field.AccountType value)
  { setField(value); }
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccountType getAccountType() throws FieldNotFound
  { org.quickfix.field.AccountType value = new org.quickfix.field.AccountType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccountType field)
  { return isSetField(field); }
  public boolean isSetAccountType()
  { return isSetField(581); }
  public void set(org.quickfix.field.DayBookingInst value)
  { setField(value); }
  public org.quickfix.field.DayBookingInst get(org.quickfix.field.DayBookingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DayBookingInst getDayBookingInst() throws FieldNotFound
  { org.quickfix.field.DayBookingInst value = new org.quickfix.field.DayBookingInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DayBookingInst field)
  { return isSetField(field); }
  public boolean isSetDayBookingInst()
  { return isSetField(589); }
  public void set(org.quickfix.field.BookingUnit value)
  { setField(value); }
  public org.quickfix.field.BookingUnit get(org.quickfix.field.BookingUnit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BookingUnit getBookingUnit() throws FieldNotFound
  { org.quickfix.field.BookingUnit value = new org.quickfix.field.BookingUnit();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BookingUnit field)
  { return isSetField(field); }
  public boolean isSetBookingUnit()
  { return isSetField(590); }
  public void set(org.quickfix.field.PreallocMethod value)
  { setField(value); }
  public org.quickfix.field.PreallocMethod get(org.quickfix.field.PreallocMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound
  { org.quickfix.field.PreallocMethod value = new org.quickfix.field.PreallocMethod();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PreallocMethod field)
  { return isSetField(field); }
  public boolean isSetPreallocMethod()
  { return isSetField(591); }
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
  public void set(org.quickfix.field.CashMargin value)
  { setField(value); }
  public org.quickfix.field.CashMargin get(org.quickfix.field.CashMargin  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CashMargin getCashMargin() throws FieldNotFound
  { org.quickfix.field.CashMargin value = new org.quickfix.field.CashMargin();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CashMargin field)
  { return isSetField(field); }
  public boolean isSetCashMargin()
  { return isSetField(544); }
  public void set(org.quickfix.field.ClearingFeeIndicator value)
  { setField(value); }
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClearingFeeIndicator getClearingFeeIndicator() throws FieldNotFound
  { org.quickfix.field.ClearingFeeIndicator value = new org.quickfix.field.ClearingFeeIndicator();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClearingFeeIndicator field)
  { return isSetField(field); }
  public boolean isSetClearingFeeIndicator()
  { return isSetField(635); }
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
  public void set(org.quickfix.field.ExDestination value)
  { setField(value); }
  public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound
  { org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExDestination field)
  { return isSetField(field); }
  public boolean isSetExDestination()
  { return isSetField(100); }
  public void set(org.quickfix.field.ProcessCode value)
  { setField(value); }
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
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
  public void set(org.quickfix.field.SecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource  value)
    throws FieldNotFound
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
  public org.quickfix.field.Product get(org.quickfix.field.Product  value)
    throws FieldNotFound
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
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.MaturityDate value)
  { setField(value); }
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType  value)
    throws FieldNotFound
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
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm  value)
    throws FieldNotFound
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
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate  value)
    throws FieldNotFound
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
  public org.quickfix.field.Factor get(org.quickfix.field.Factor  value)
    throws FieldNotFound
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
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating  value)
    throws FieldNotFound
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
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry  value)
    throws FieldNotFound
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
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.NoSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID  value)
    throws FieldNotFound
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
      super(454,455,
      new int[] {455,456,0 } ); }
  public void set(org.quickfix.field.SecurityAltID value)
  { setField(value); }
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID  value)
    throws FieldNotFound
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
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityAltIDSource getSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.SecurityAltIDSource value = new org.quickfix.field.SecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetSecurityAltIDSource()
  { return isSetField(456); }
}
  public void set(org.quickfix.field.PrevClosePx value)
  { setField(value); }
  public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound
  { org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PrevClosePx field)
  { return isSetField(field); }
  public boolean isSetPrevClosePx()
  { return isSetField(140); }
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
  public void set(org.quickfix.field.LocateReqd value)
  { setField(value); }
  public org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound
  { org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LocateReqd field)
  { return isSetField(field); }
  public boolean isSetLocateReqd()
  { return isSetField(114); }
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
  public void set(org.quickfix.field.NoStipulations value)
  { setField(value); }
  public org.quickfix.field.NoStipulations get(org.quickfix.field.NoStipulations  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoStipulations getNoStipulations() throws FieldNotFound
  { org.quickfix.field.NoStipulations value = new org.quickfix.field.NoStipulations();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoStipulations field)
  { return isSetField(field); }
  public boolean isSetNoStipulations()
  { return isSetField(232); }
  public static class NoStipulations extends Group {
    public NoStipulations() {
      super(232,233,
      new int[] {233,234,0 } ); }
  public void set(org.quickfix.field.StipulationType value)
  { setField(value); }
  public org.quickfix.field.StipulationType get(org.quickfix.field.StipulationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StipulationType getStipulationType() throws FieldNotFound
  { org.quickfix.field.StipulationType value = new org.quickfix.field.StipulationType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StipulationType field)
  { return isSetField(field); }
  public boolean isSetStipulationType()
  { return isSetField(233); }
  public void set(org.quickfix.field.StipulationValue value)
  { setField(value); }
  public org.quickfix.field.StipulationValue get(org.quickfix.field.StipulationValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StipulationValue getStipulationValue() throws FieldNotFound
  { org.quickfix.field.StipulationValue value = new org.quickfix.field.StipulationValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StipulationValue field)
  { return isSetField(field); }
  public boolean isSetStipulationValue()
  { return isSetField(234); }
}
  public void set(org.quickfix.field.QuantityType value)
  { setField(value); }
  public org.quickfix.field.QuantityType get(org.quickfix.field.QuantityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuantityType getQuantityType() throws FieldNotFound
  { org.quickfix.field.QuantityType value = new org.quickfix.field.QuantityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuantityType field)
  { return isSetField(field); }
  public boolean isSetQuantityType()
  { return isSetField(465); }
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
  public void set(org.quickfix.field.OrderPercent value)
  { setField(value); }
  public org.quickfix.field.OrderPercent get(org.quickfix.field.OrderPercent  value)
    throws FieldNotFound
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
  public org.quickfix.field.RoundingDirection get(org.quickfix.field.RoundingDirection  value)
    throws FieldNotFound
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
  public org.quickfix.field.RoundingModulus get(org.quickfix.field.RoundingModulus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RoundingModulus getRoundingModulus() throws FieldNotFound
  { org.quickfix.field.RoundingModulus value = new org.quickfix.field.RoundingModulus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RoundingModulus field)
  { return isSetField(field); }
  public boolean isSetRoundingModulus()
  { return isSetField(469); }
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
  public void set(org.quickfix.field.PriceType value)
  { setField(value); }
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PriceType getPriceType() throws FieldNotFound
  { org.quickfix.field.PriceType value = new org.quickfix.field.PriceType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PriceType field)
  { return isSetField(field); }
  public boolean isSetPriceType()
  { return isSetField(423); }
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
  public void set(org.quickfix.field.Spread value)
  { setField(value); }
  public org.quickfix.field.Spread get(org.quickfix.field.Spread  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Spread getSpread() throws FieldNotFound
  { org.quickfix.field.Spread value = new org.quickfix.field.Spread();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Spread field)
  { return isSetField(field); }
  public boolean isSetSpread()
  { return isSetField(218); }
  public void set(org.quickfix.field.BenchmarkCurveCurrency value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurveCurrency get(org.quickfix.field.BenchmarkCurveCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurveCurrency getBenchmarkCurveCurrency() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurveCurrency value = new org.quickfix.field.BenchmarkCurveCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurveCurrency field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveCurrency()
  { return isSetField(220); }
  public void set(org.quickfix.field.BenchmarkCurveName value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurveName get(org.quickfix.field.BenchmarkCurveName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurveName getBenchmarkCurveName() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurveName value = new org.quickfix.field.BenchmarkCurveName();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurveName field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurveName()
  { return isSetField(221); }
  public void set(org.quickfix.field.BenchmarkCurvePoint value)
  { setField(value); }
  public org.quickfix.field.BenchmarkCurvePoint get(org.quickfix.field.BenchmarkCurvePoint  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkCurvePoint getBenchmarkCurvePoint() throws FieldNotFound
  { org.quickfix.field.BenchmarkCurvePoint value = new org.quickfix.field.BenchmarkCurvePoint();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkCurvePoint field)
  { return isSetField(field); }
  public boolean isSetBenchmarkCurvePoint()
  { return isSetField(222); }
  public void set(org.quickfix.field.YieldType value)
  { setField(value); }
  public org.quickfix.field.YieldType get(org.quickfix.field.YieldType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldType getYieldType() throws FieldNotFound
  { org.quickfix.field.YieldType value = new org.quickfix.field.YieldType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldType field)
  { return isSetField(field); }
  public boolean isSetYieldType()
  { return isSetField(235); }
  public void set(org.quickfix.field.Yield value)
  { setField(value); }
  public org.quickfix.field.Yield get(org.quickfix.field.Yield  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Yield getYield() throws FieldNotFound
  { org.quickfix.field.Yield value = new org.quickfix.field.Yield();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Yield field)
  { return isSetField(field); }
  public boolean isSetYield()
  { return isSetField(236); }
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
  public void set(org.quickfix.field.IOIid value)
  { setField(value); }
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound
  { org.quickfix.field.IOIid value = new org.quickfix.field.IOIid();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIid field)
  { return isSetField(field); }
  public boolean isSetIOIid()
  { return isSetField(23); }
  public void set(org.quickfix.field.QuoteID value)
  { setField(value); }
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteID field)
  { return isSetField(field); }
  public boolean isSetQuoteID()
  { return isSetField(117); }
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
  public void set(org.quickfix.field.CommCurrency value)
  { setField(value); }
  public org.quickfix.field.CommCurrency get(org.quickfix.field.CommCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CommCurrency getCommCurrency() throws FieldNotFound
  { org.quickfix.field.CommCurrency value = new org.quickfix.field.CommCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CommCurrency field)
  { return isSetField(field); }
  public boolean isSetCommCurrency()
  { return isSetField(479); }
  public void set(org.quickfix.field.FundRenewWaiv value)
  { setField(value); }
  public org.quickfix.field.FundRenewWaiv get(org.quickfix.field.FundRenewWaiv  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FundRenewWaiv getFundRenewWaiv() throws FieldNotFound
  { org.quickfix.field.FundRenewWaiv value = new org.quickfix.field.FundRenewWaiv();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FundRenewWaiv field)
  { return isSetField(field); }
  public boolean isSetFundRenewWaiv()
  { return isSetField(497); }
  public void set(org.quickfix.field.OrderCapacity value)
  { setField(value); }
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity  value)
    throws FieldNotFound
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
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions  value)
    throws FieldNotFound
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
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CustOrderCapacity field)
  { return isSetField(field); }
  public boolean isSetCustOrderCapacity()
  { return isSetField(582); }
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
  public void set(org.quickfix.field.ForexReq value)
  { setField(value); }
  public org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ForexReq getForexReq() throws FieldNotFound
  { org.quickfix.field.ForexReq value = new org.quickfix.field.ForexReq();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ForexReq field)
  { return isSetField(field); }
  public boolean isSetForexReq()
  { return isSetField(121); }
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
  public void set(org.quickfix.field.Price2 value)
  { setField(value); }
  public org.quickfix.field.Price2 get(org.quickfix.field.Price2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Price2 getPrice2() throws FieldNotFound
  { org.quickfix.field.Price2 value = new org.quickfix.field.Price2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Price2 field)
  { return isSetField(field); }
  public boolean isSetPrice2()
  { return isSetField(640); }
  public void set(org.quickfix.field.PositionEffect value)
  { setField(value); }
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PositionEffect getPositionEffect() throws FieldNotFound
  { org.quickfix.field.PositionEffect value = new org.quickfix.field.PositionEffect();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PositionEffect field)
  { return isSetField(field); }
  public boolean isSetPositionEffect()
  { return isSetField(77); }
  public void set(org.quickfix.field.CoveredOrUncovered value)
  { setField(value); }
  public org.quickfix.field.CoveredOrUncovered get(org.quickfix.field.CoveredOrUncovered  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CoveredOrUncovered getCoveredOrUncovered() throws FieldNotFound
  { org.quickfix.field.CoveredOrUncovered value = new org.quickfix.field.CoveredOrUncovered();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CoveredOrUncovered field)
  { return isSetField(field); }
  public boolean isSetCoveredOrUncovered()
  { return isSetField(203); }
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
  public void set(org.quickfix.field.CancellationRights value)
  { setField(value); }
  public org.quickfix.field.CancellationRights get(org.quickfix.field.CancellationRights  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CancellationRights getCancellationRights() throws FieldNotFound
  { org.quickfix.field.CancellationRights value = new org.quickfix.field.CancellationRights();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CancellationRights field)
  { return isSetField(field); }
  public boolean isSetCancellationRights()
  { return isSetField(480); }
  public void set(org.quickfix.field.MoneyLaunderingStatus value)
  { setField(value); }
  public org.quickfix.field.MoneyLaunderingStatus get(org.quickfix.field.MoneyLaunderingStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MoneyLaunderingStatus getMoneyLaunderingStatus() throws FieldNotFound
  { org.quickfix.field.MoneyLaunderingStatus value = new org.quickfix.field.MoneyLaunderingStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MoneyLaunderingStatus field)
  { return isSetField(field); }
  public boolean isSetMoneyLaunderingStatus()
  { return isSetField(481); }
  public void set(org.quickfix.field.RegistID value)
  { setField(value); }
  public org.quickfix.field.RegistID get(org.quickfix.field.RegistID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RegistID getRegistID() throws FieldNotFound
  { org.quickfix.field.RegistID value = new org.quickfix.field.RegistID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RegistID field)
  { return isSetField(field); }
  public boolean isSetRegistID()
  { return isSetField(513); }
  public void set(org.quickfix.field.Designation value)
  { setField(value); }
  public org.quickfix.field.Designation get(org.quickfix.field.Designation  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Designation getDesignation() throws FieldNotFound
  { org.quickfix.field.Designation value = new org.quickfix.field.Designation();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Designation field)
  { return isSetField(field); }
  public boolean isSetDesignation()
  { return isSetField(494); }
  public void set(org.quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public org.quickfix.field.AccruedInterestRate get(org.quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { org.quickfix.field.AccruedInterestRate value = new org.quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(org.quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public org.quickfix.field.AccruedInterestAmt get(org.quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { org.quickfix.field.AccruedInterestAmt value = new org.quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(org.quickfix.field.NetMoney value)
  { setField(value); }
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(org.quickfix.field.NoAllocs value)
  { setField(value); }
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs  value)
    throws FieldNotFound
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
      super(78,79,
      new int[] {79,467,80,0 } ); }
  public void set(org.quickfix.field.AllocAccount value)
  { setField(value); }
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }
  public void set(org.quickfix.field.IndividualAllocID value)
  { setField(value); }
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IndividualAllocID field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocID()
  { return isSetField(467); }
  public void set(org.quickfix.field.NoNestedPartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs  value)
    throws FieldNotFound
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
      super(539,524,
      new int[] {524,525,538,545,0 } ); }
  public void set(org.quickfix.field.NestedPartyID value)
  { setField(value); }
  public org.quickfix.field.NestedPartyID get(org.quickfix.field.NestedPartyID  value)
    throws FieldNotFound
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
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource  value)
    throws FieldNotFound
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
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NestedPartyRole field)
  { return isSetField(field); }
  public boolean isSetNestedPartyRole()
  { return isSetField(538); }
  public void set(org.quickfix.field.NestedPartySubID value)
  { setField(value); }
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NestedPartySubID field)
  { return isSetField(field); }
  public boolean isSetNestedPartySubID()
  { return isSetField(545); }
}
  public void set(org.quickfix.field.AllocQty value)
  { setField(value); }
  public org.quickfix.field.AllocQty get(org.quickfix.field.AllocQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocQty getAllocQty() throws FieldNotFound
  { org.quickfix.field.AllocQty value = new org.quickfix.field.AllocQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocQty field)
  { return isSetField(field); }
  public boolean isSetAllocQty()
  { return isSetField(80); }
}
  public void set(org.quickfix.field.NoTradingSessions value)
  { setField(value); }
  public org.quickfix.field.NoTradingSessions get(org.quickfix.field.NoTradingSessions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoTradingSessions getNoTradingSessions() throws FieldNotFound
  { org.quickfix.field.NoTradingSessions value = new org.quickfix.field.NoTradingSessions();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoTradingSessions field)
  { return isSetField(field); }
  public boolean isSetNoTradingSessions()
  { return isSetField(386); }
  public static class NoTradingSessions extends Group {
    public NoTradingSessions() {
      super(386,336,
      new int[] {336,625,0 } ); }
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
  public void set(org.quickfix.field.TradingSessionSubID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionSubID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionSubID()
  { return isSetField(625); }
}
}

