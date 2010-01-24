package quickfix.fix50;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class AdjustedPositionReport extends Message
{
  public AdjustedPositionReport()
  {
    getHeader().setField(new MsgType("BL"));
  }
  public AdjustedPositionReport(
    quickfix.field.PosMaintRptID aPosMaintRptID,
    quickfix.field.ClearingBusinessDate aClearingBusinessDate ) {

    getHeader().setField(new MsgType("BL"));
    set(aPosMaintRptID);
    set(aClearingBusinessDate);
  }

  public void set(quickfix.field.PosMaintRptID value)
  { setField(value); }
  public quickfix.field.PosMaintRptID get(quickfix.field.PosMaintRptID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosMaintRptID getPosMaintRptID() throws FieldNotFound
  { quickfix.field.PosMaintRptID value = new quickfix.field.PosMaintRptID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosMaintRptID field)
  { return isSetField(field); }
  public boolean isSetPosMaintRptID()
  { return isSetField(721); }
  public void set(quickfix.field.PosReqType value)
  { setField(value); }
  public quickfix.field.PosReqType get(quickfix.field.PosReqType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosReqType getPosReqType() throws FieldNotFound
  { quickfix.field.PosReqType value = new quickfix.field.PosReqType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosReqType field)
  { return isSetField(field); }
  public boolean isSetPosReqType()
  { return isSetField(724); }
  public void set(quickfix.field.ClearingBusinessDate value)
  { setField(value); }
  public quickfix.field.ClearingBusinessDate get(quickfix.field.ClearingBusinessDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClearingBusinessDate getClearingBusinessDate() throws FieldNotFound
  { quickfix.field.ClearingBusinessDate value = new quickfix.field.ClearingBusinessDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClearingBusinessDate field)
  { return isSetField(field); }
  public boolean isSetClearingBusinessDate()
  { return isSetField(715); }
  public void set(quickfix.field.SettlSessID value)
  { setField(value); }
  public quickfix.field.SettlSessID get(quickfix.field.SettlSessID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlSessID getSettlSessID() throws FieldNotFound
  { quickfix.field.SettlSessID value = new quickfix.field.SettlSessID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlSessID field)
  { return isSetField(field); }
  public boolean isSetSettlSessID()
  { return isSetField(716); }
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
  public void set(quickfix.field.NoPositions value)
  { setField(value); }
  public quickfix.field.NoPositions get(quickfix.field.NoPositions  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoPositions getNoPositions() throws FieldNotFound
  { quickfix.field.NoPositions value = new quickfix.field.NoPositions();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoPositions field)
  { return isSetField(field); }
  public boolean isSetNoPositions()
  { return isSetField(702); }
  public static class NoPositions extends Group {
    public NoPositions() {
      super(702,703,
      new int[] {703,704,705,706,539,976,0 } ); }
  public void set(quickfix.field.PosType value)
  { setField(value); }
  public quickfix.field.PosType get(quickfix.field.PosType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosType getPosType() throws FieldNotFound
  { quickfix.field.PosType value = new quickfix.field.PosType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosType field)
  { return isSetField(field); }
  public boolean isSetPosType()
  { return isSetField(703); }
  public void set(quickfix.field.LongQty value)
  { setField(value); }
  public quickfix.field.LongQty get(quickfix.field.LongQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LongQty getLongQty() throws FieldNotFound
  { quickfix.field.LongQty value = new quickfix.field.LongQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LongQty field)
  { return isSetField(field); }
  public boolean isSetLongQty()
  { return isSetField(704); }
  public void set(quickfix.field.ShortQty value)
  { setField(value); }
  public quickfix.field.ShortQty get(quickfix.field.ShortQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ShortQty getShortQty() throws FieldNotFound
  { quickfix.field.ShortQty value = new quickfix.field.ShortQty();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ShortQty field)
  { return isSetField(field); }
  public boolean isSetShortQty()
  { return isSetField(705); }
  public void set(quickfix.field.PosQtyStatus value)
  { setField(value); }
  public quickfix.field.PosQtyStatus get(quickfix.field.PosQtyStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosQtyStatus getPosQtyStatus() throws FieldNotFound
  { quickfix.field.PosQtyStatus value = new quickfix.field.PosQtyStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosQtyStatus field)
  { return isSetField(field); }
  public boolean isSetPosQtyStatus()
  { return isSetField(706); }
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
  public void set(quickfix.field.QuantityDate value)
  { setField(value); }
  public quickfix.field.QuantityDate get(quickfix.field.QuantityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuantityDate getQuantityDate() throws FieldNotFound
  { quickfix.field.QuantityDate value = new quickfix.field.QuantityDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuantityDate field)
  { return isSetField(field); }
  public boolean isSetQuantityDate()
  { return isSetField(976); }
}
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
  public void set(quickfix.field.SettlPrice value)
  { setField(value); }
  public quickfix.field.SettlPrice get(quickfix.field.SettlPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlPrice getSettlPrice() throws FieldNotFound
  { quickfix.field.SettlPrice value = new quickfix.field.SettlPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlPrice field)
  { return isSetField(field); }
  public boolean isSetSettlPrice()
  { return isSetField(730); }
  public void set(quickfix.field.PriorSettlPrice value)
  { setField(value); }
  public quickfix.field.PriorSettlPrice get(quickfix.field.PriorSettlPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PriorSettlPrice getPriorSettlPrice() throws FieldNotFound
  { quickfix.field.PriorSettlPrice value = new quickfix.field.PriorSettlPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PriorSettlPrice field)
  { return isSetField(field); }
  public boolean isSetPriorSettlPrice()
  { return isSetField(734); }
  public void set(quickfix.field.PosMaintRptRefID value)
  { setField(value); }
  public quickfix.field.PosMaintRptRefID get(quickfix.field.PosMaintRptRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PosMaintRptRefID getPosMaintRptRefID() throws FieldNotFound
  { quickfix.field.PosMaintRptRefID value = new quickfix.field.PosMaintRptRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PosMaintRptRefID field)
  { return isSetField(field); }
  public boolean isSetPosMaintRptRefID()
  { return isSetField(714); }
}

