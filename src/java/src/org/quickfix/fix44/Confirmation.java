package org.quickfix.fix44;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Confirmation extends Message
{
  public Confirmation()
  {
    getHeader().setField(new MsgType("AK"));
  }
  public Confirmation(
    org.quickfix.field.ConfirmID aConfirmID,
    org.quickfix.field.ConfirmTransType aConfirmTransType,
    org.quickfix.field.ConfirmType aConfirmType,
    org.quickfix.field.ConfirmStatus aConfirmStatus,
    org.quickfix.field.TransactTime aTransactTime,
    org.quickfix.field.TradeDate aTradeDate,
    org.quickfix.field.AllocQty aAllocQty,
    org.quickfix.field.Side aSide,
    org.quickfix.field.AllocAccount aAllocAccount,
    org.quickfix.field.AvgPx aAvgPx,
    org.quickfix.field.GrossTradeAmt aGrossTradeAmt,
    org.quickfix.field.NetMoney aNetMoney ) {

    getHeader().setField(new MsgType("AK"));
    set(aConfirmID);
    set(aConfirmTransType);
    set(aConfirmType);
    set(aConfirmStatus);
    set(aTransactTime);
    set(aTradeDate);
    set(aAllocQty);
    set(aSide);
    set(aAllocAccount);
    set(aAvgPx);
    set(aGrossTradeAmt);
    set(aNetMoney);
  }

  public void set(org.quickfix.field.ConfirmID value)
  { setField(value); }
  public org.quickfix.field.ConfirmID get(org.quickfix.field.ConfirmID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmID getConfirmID() throws FieldNotFound
  { org.quickfix.field.ConfirmID value = new org.quickfix.field.ConfirmID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmID field)
  { return isSetField(field); }
  public boolean isSetConfirmID()
  { return isSetField(664); }
  public void set(org.quickfix.field.ConfirmRefID value)
  { setField(value); }
  public org.quickfix.field.ConfirmRefID get(org.quickfix.field.ConfirmRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmRefID getConfirmRefID() throws FieldNotFound
  { org.quickfix.field.ConfirmRefID value = new org.quickfix.field.ConfirmRefID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmRefID field)
  { return isSetField(field); }
  public boolean isSetConfirmRefID()
  { return isSetField(772); }
  public void set(org.quickfix.field.ConfirmReqID value)
  { setField(value); }
  public org.quickfix.field.ConfirmReqID get(org.quickfix.field.ConfirmReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmReqID getConfirmReqID() throws FieldNotFound
  { org.quickfix.field.ConfirmReqID value = new org.quickfix.field.ConfirmReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmReqID field)
  { return isSetField(field); }
  public boolean isSetConfirmReqID()
  { return isSetField(859); }
  public void set(org.quickfix.field.ConfirmTransType value)
  { setField(value); }
  public org.quickfix.field.ConfirmTransType get(org.quickfix.field.ConfirmTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmTransType getConfirmTransType() throws FieldNotFound
  { org.quickfix.field.ConfirmTransType value = new org.quickfix.field.ConfirmTransType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmTransType field)
  { return isSetField(field); }
  public boolean isSetConfirmTransType()
  { return isSetField(666); }
  public void set(org.quickfix.field.ConfirmType value)
  { setField(value); }
  public org.quickfix.field.ConfirmType get(org.quickfix.field.ConfirmType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmType getConfirmType() throws FieldNotFound
  { org.quickfix.field.ConfirmType value = new org.quickfix.field.ConfirmType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmType field)
  { return isSetField(field); }
  public boolean isSetConfirmType()
  { return isSetField(773); }
  public void set(org.quickfix.field.CopyMsgIndicator value)
  { setField(value); }
  public org.quickfix.field.CopyMsgIndicator get(org.quickfix.field.CopyMsgIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CopyMsgIndicator getCopyMsgIndicator() throws FieldNotFound
  { org.quickfix.field.CopyMsgIndicator value = new org.quickfix.field.CopyMsgIndicator();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CopyMsgIndicator field)
  { return isSetField(field); }
  public boolean isSetCopyMsgIndicator()
  { return isSetField(797); }
  public void set(org.quickfix.field.LegalConfirm value)
  { setField(value); }
  public org.quickfix.field.LegalConfirm get(org.quickfix.field.LegalConfirm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegalConfirm getLegalConfirm() throws FieldNotFound
  { org.quickfix.field.LegalConfirm value = new org.quickfix.field.LegalConfirm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegalConfirm field)
  { return isSetField(field); }
  public boolean isSetLegalConfirm()
  { return isSetField(650); }
  public void set(org.quickfix.field.ConfirmStatus value)
  { setField(value); }
  public org.quickfix.field.ConfirmStatus get(org.quickfix.field.ConfirmStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ConfirmStatus getConfirmStatus() throws FieldNotFound
  { org.quickfix.field.ConfirmStatus value = new org.quickfix.field.ConfirmStatus();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ConfirmStatus field)
  { return isSetField(field); }
  public boolean isSetConfirmStatus()
  { return isSetField(665); }
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
      new int[] {448,447,452,0 } ); }
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
  public void set(org.quickfix.field.NoPartySubIDs value)
  { setField(value); }
  public org.quickfix.field.NoPartySubIDs get(org.quickfix.field.NoPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoPartySubIDs getNoPartySubIDs() throws FieldNotFound
  { org.quickfix.field.NoPartySubIDs value = new org.quickfix.field.NoPartySubIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoPartySubIDs()
  { return isSetField(802); }
  public static class NoPartySubIDs extends Group {
    public NoPartySubIDs() {
      super(802,523,
      new int[] {523,803,0 } ); }
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
  public void set(org.quickfix.field.PartySubIDType value)
  { setField(value); }
  public org.quickfix.field.PartySubIDType get(org.quickfix.field.PartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PartySubIDType getPartySubIDType() throws FieldNotFound
  { org.quickfix.field.PartySubIDType value = new org.quickfix.field.PartySubIDType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PartySubIDType field)
  { return isSetField(field); }
  public boolean isSetPartySubIDType()
  { return isSetField(803); }
}
}
  public void set(org.quickfix.field.AllocID value)
  { setField(value); }
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(org.quickfix.field.SecondaryAllocID value)
  { setField(value); }
  public org.quickfix.field.SecondaryAllocID get(org.quickfix.field.SecondaryAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecondaryAllocID getSecondaryAllocID() throws FieldNotFound
  { org.quickfix.field.SecondaryAllocID value = new org.quickfix.field.SecondaryAllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecondaryAllocID field)
  { return isSetField(field); }
  public boolean isSetSecondaryAllocID()
  { return isSetField(793); }
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
  public void set(org.quickfix.field.NoTrdRegTimestamps value)
  { setField(value); }
  public org.quickfix.field.NoTrdRegTimestamps get(org.quickfix.field.NoTrdRegTimestamps  value)
    throws FieldNotFound
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
      super(768,769,
      new int[] {769,770,771,0 } ); }
  public void set(org.quickfix.field.TrdRegTimestamp value)
  { setField(value); }
  public org.quickfix.field.TrdRegTimestamp get(org.quickfix.field.TrdRegTimestamp  value)
    throws FieldNotFound
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
  public org.quickfix.field.TrdRegTimestampType get(org.quickfix.field.TrdRegTimestampType  value)
    throws FieldNotFound
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
  public org.quickfix.field.TrdRegTimestampOrigin get(org.quickfix.field.TrdRegTimestampOrigin  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TrdRegTimestampOrigin getTrdRegTimestampOrigin() throws FieldNotFound
  { org.quickfix.field.TrdRegTimestampOrigin value = new org.quickfix.field.TrdRegTimestampOrigin();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TrdRegTimestampOrigin field)
  { return isSetField(field); }
  public boolean isSetTrdRegTimestampOrigin()
  { return isSetField(771); }
}
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
  public void set(org.quickfix.field.SecuritySubType value)
  { setField(value); }
  public org.quickfix.field.SecuritySubType get(org.quickfix.field.SecuritySubType  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.StrikeCurrency value)
  { setField(value); }
  public org.quickfix.field.StrikeCurrency get(org.quickfix.field.StrikeCurrency  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.Pool value)
  { setField(value); }
  public org.quickfix.field.Pool get(org.quickfix.field.Pool  value)
    throws FieldNotFound
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
  public org.quickfix.field.ContractSettlMonth get(org.quickfix.field.ContractSettlMonth  value)
    throws FieldNotFound
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
  public org.quickfix.field.CPProgram get(org.quickfix.field.CPProgram  value)
    throws FieldNotFound
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
  public org.quickfix.field.CPRegType get(org.quickfix.field.CPRegType  value)
    throws FieldNotFound
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
  public org.quickfix.field.DatedDate get(org.quickfix.field.DatedDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.InterestAccrualDate get(org.quickfix.field.InterestAccrualDate  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.NoEvents value)
  { setField(value); }
  public org.quickfix.field.NoEvents get(org.quickfix.field.NoEvents  value)
    throws FieldNotFound
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
      super(864,865,
      new int[] {865,866,867,868,0 } ); }
  public void set(org.quickfix.field.EventType value)
  { setField(value); }
  public org.quickfix.field.EventType get(org.quickfix.field.EventType  value)
    throws FieldNotFound
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
  public org.quickfix.field.EventDate get(org.quickfix.field.EventDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.EventPx get(org.quickfix.field.EventPx  value)
    throws FieldNotFound
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
  public org.quickfix.field.EventText get(org.quickfix.field.EventText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EventText getEventText() throws FieldNotFound
  { org.quickfix.field.EventText value = new org.quickfix.field.EventText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EventText field)
  { return isSetField(field); }
  public boolean isSetEventText()
  { return isSetField(868); }
}
  public void set(org.quickfix.field.DeliveryForm value)
  { setField(value); }
  public org.quickfix.field.DeliveryForm get(org.quickfix.field.DeliveryForm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DeliveryForm getDeliveryForm() throws FieldNotFound
  { org.quickfix.field.DeliveryForm value = new org.quickfix.field.DeliveryForm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DeliveryForm field)
  { return isSetField(field); }
  public boolean isSetDeliveryForm()
  { return isSetField(668); }
  public void set(org.quickfix.field.PctAtRisk value)
  { setField(value); }
  public org.quickfix.field.PctAtRisk get(org.quickfix.field.PctAtRisk  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PctAtRisk getPctAtRisk() throws FieldNotFound
  { org.quickfix.field.PctAtRisk value = new org.quickfix.field.PctAtRisk();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PctAtRisk field)
  { return isSetField(field); }
  public boolean isSetPctAtRisk()
  { return isSetField(869); }
  public void set(org.quickfix.field.NoInstrAttrib value)
  { setField(value); }
  public org.quickfix.field.NoInstrAttrib get(org.quickfix.field.NoInstrAttrib  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoInstrAttrib getNoInstrAttrib() throws FieldNotFound
  { org.quickfix.field.NoInstrAttrib value = new org.quickfix.field.NoInstrAttrib();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoInstrAttrib field)
  { return isSetField(field); }
  public boolean isSetNoInstrAttrib()
  { return isSetField(870); }
  public static class NoInstrAttrib extends Group {
    public NoInstrAttrib() {
      super(870,871,
      new int[] {871,872,0 } ); }
  public void set(org.quickfix.field.InstrAttribType value)
  { setField(value); }
  public org.quickfix.field.InstrAttribType get(org.quickfix.field.InstrAttribType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrAttribType getInstrAttribType() throws FieldNotFound
  { org.quickfix.field.InstrAttribType value = new org.quickfix.field.InstrAttribType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrAttribType field)
  { return isSetField(field); }
  public boolean isSetInstrAttribType()
  { return isSetField(871); }
  public void set(org.quickfix.field.InstrAttribValue value)
  { setField(value); }
  public org.quickfix.field.InstrAttribValue get(org.quickfix.field.InstrAttribValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InstrAttribValue getInstrAttribValue() throws FieldNotFound
  { org.quickfix.field.InstrAttribValue value = new org.quickfix.field.InstrAttribValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InstrAttribValue field)
  { return isSetField(field); }
  public boolean isSetInstrAttribValue()
  { return isSetField(872); }
}
  public void set(org.quickfix.field.AgreementDesc value)
  { setField(value); }
  public org.quickfix.field.AgreementDesc get(org.quickfix.field.AgreementDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AgreementDesc getAgreementDesc() throws FieldNotFound
  { org.quickfix.field.AgreementDesc value = new org.quickfix.field.AgreementDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AgreementDesc field)
  { return isSetField(field); }
  public boolean isSetAgreementDesc()
  { return isSetField(913); }
  public void set(org.quickfix.field.AgreementID value)
  { setField(value); }
  public org.quickfix.field.AgreementID get(org.quickfix.field.AgreementID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AgreementID getAgreementID() throws FieldNotFound
  { org.quickfix.field.AgreementID value = new org.quickfix.field.AgreementID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AgreementID field)
  { return isSetField(field); }
  public boolean isSetAgreementID()
  { return isSetField(914); }
  public void set(org.quickfix.field.AgreementDate value)
  { setField(value); }
  public org.quickfix.field.AgreementDate get(org.quickfix.field.AgreementDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AgreementDate getAgreementDate() throws FieldNotFound
  { org.quickfix.field.AgreementDate value = new org.quickfix.field.AgreementDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AgreementDate field)
  { return isSetField(field); }
  public boolean isSetAgreementDate()
  { return isSetField(915); }
  public void set(org.quickfix.field.AgreementCurrency value)
  { setField(value); }
  public org.quickfix.field.AgreementCurrency get(org.quickfix.field.AgreementCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AgreementCurrency getAgreementCurrency() throws FieldNotFound
  { org.quickfix.field.AgreementCurrency value = new org.quickfix.field.AgreementCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AgreementCurrency field)
  { return isSetField(field); }
  public boolean isSetAgreementCurrency()
  { return isSetField(918); }
  public void set(org.quickfix.field.TerminationType value)
  { setField(value); }
  public org.quickfix.field.TerminationType get(org.quickfix.field.TerminationType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TerminationType getTerminationType() throws FieldNotFound
  { org.quickfix.field.TerminationType value = new org.quickfix.field.TerminationType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TerminationType field)
  { return isSetField(field); }
  public boolean isSetTerminationType()
  { return isSetField(788); }
  public void set(org.quickfix.field.StartDate value)
  { setField(value); }
  public org.quickfix.field.StartDate get(org.quickfix.field.StartDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StartDate getStartDate() throws FieldNotFound
  { org.quickfix.field.StartDate value = new org.quickfix.field.StartDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StartDate field)
  { return isSetField(field); }
  public boolean isSetStartDate()
  { return isSetField(916); }
  public void set(org.quickfix.field.EndDate value)
  { setField(value); }
  public org.quickfix.field.EndDate get(org.quickfix.field.EndDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EndDate getEndDate() throws FieldNotFound
  { org.quickfix.field.EndDate value = new org.quickfix.field.EndDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EndDate field)
  { return isSetField(field); }
  public boolean isSetEndDate()
  { return isSetField(917); }
  public void set(org.quickfix.field.DeliveryType value)
  { setField(value); }
  public org.quickfix.field.DeliveryType get(org.quickfix.field.DeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DeliveryType getDeliveryType() throws FieldNotFound
  { org.quickfix.field.DeliveryType value = new org.quickfix.field.DeliveryType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DeliveryType field)
  { return isSetField(field); }
  public boolean isSetDeliveryType()
  { return isSetField(919); }
  public void set(org.quickfix.field.MarginRatio value)
  { setField(value); }
  public org.quickfix.field.MarginRatio get(org.quickfix.field.MarginRatio  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MarginRatio getMarginRatio() throws FieldNotFound
  { org.quickfix.field.MarginRatio value = new org.quickfix.field.MarginRatio();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MarginRatio field)
  { return isSetField(field); }
  public boolean isSetMarginRatio()
  { return isSetField(898); }
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
  public void set(org.quickfix.field.YieldCalcDate value)
  { setField(value); }
  public org.quickfix.field.YieldCalcDate get(org.quickfix.field.YieldCalcDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldCalcDate getYieldCalcDate() throws FieldNotFound
  { org.quickfix.field.YieldCalcDate value = new org.quickfix.field.YieldCalcDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldCalcDate field)
  { return isSetField(field); }
  public boolean isSetYieldCalcDate()
  { return isSetField(701); }
  public void set(org.quickfix.field.YieldRedemptionDate value)
  { setField(value); }
  public org.quickfix.field.YieldRedemptionDate get(org.quickfix.field.YieldRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldRedemptionDate getYieldRedemptionDate() throws FieldNotFound
  { org.quickfix.field.YieldRedemptionDate value = new org.quickfix.field.YieldRedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionDate()
  { return isSetField(696); }
  public void set(org.quickfix.field.YieldRedemptionPrice value)
  { setField(value); }
  public org.quickfix.field.YieldRedemptionPrice get(org.quickfix.field.YieldRedemptionPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldRedemptionPrice getYieldRedemptionPrice() throws FieldNotFound
  { org.quickfix.field.YieldRedemptionPrice value = new org.quickfix.field.YieldRedemptionPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldRedemptionPrice field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPrice()
  { return isSetField(697); }
  public void set(org.quickfix.field.YieldRedemptionPriceType value)
  { setField(value); }
  public org.quickfix.field.YieldRedemptionPriceType get(org.quickfix.field.YieldRedemptionPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.YieldRedemptionPriceType getYieldRedemptionPriceType() throws FieldNotFound
  { org.quickfix.field.YieldRedemptionPriceType value = new org.quickfix.field.YieldRedemptionPriceType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.YieldRedemptionPriceType field)
  { return isSetField(field); }
  public boolean isSetYieldRedemptionPriceType()
  { return isSetField(698); }
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
  public void set(org.quickfix.field.QtyType value)
  { setField(value); }
  public org.quickfix.field.QtyType get(org.quickfix.field.QtyType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QtyType getQtyType() throws FieldNotFound
  { org.quickfix.field.QtyType value = new org.quickfix.field.QtyType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QtyType field)
  { return isSetField(field); }
  public boolean isSetQtyType()
  { return isSetField(854); }
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
  public void set(org.quickfix.field.AllocAcctIDSource value)
  { setField(value); }
  public org.quickfix.field.AllocAcctIDSource get(org.quickfix.field.AllocAcctIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound
  { org.quickfix.field.AllocAcctIDSource value = new org.quickfix.field.AllocAcctIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocAcctIDSource field)
  { return isSetField(field); }
  public boolean isSetAllocAcctIDSource()
  { return isSetField(661); }
  public void set(org.quickfix.field.AllocAccountType value)
  { setField(value); }
  public org.quickfix.field.AllocAccountType get(org.quickfix.field.AllocAccountType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocAccountType getAllocAccountType() throws FieldNotFound
  { org.quickfix.field.AllocAccountType value = new org.quickfix.field.AllocAccountType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocAccountType field)
  { return isSetField(field); }
  public boolean isSetAllocAccountType()
  { return isSetField(798); }
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
  public void set(org.quickfix.field.AvgPxPrecision value)
  { setField(value); }
  public org.quickfix.field.AvgPxPrecision get(org.quickfix.field.AvgPxPrecision  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AvgPxPrecision getAvgPxPrecision() throws FieldNotFound
  { org.quickfix.field.AvgPxPrecision value = new org.quickfix.field.AvgPxPrecision();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AvgPxPrecision field)
  { return isSetField(field); }
  public boolean isSetAvgPxPrecision()
  { return isSetField(74); }
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
  public void set(org.quickfix.field.AvgParPx value)
  { setField(value); }
  public org.quickfix.field.AvgParPx get(org.quickfix.field.AvgParPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AvgParPx getAvgParPx() throws FieldNotFound
  { org.quickfix.field.AvgParPx value = new org.quickfix.field.AvgParPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AvgParPx field)
  { return isSetField(field); }
  public boolean isSetAvgParPx()
  { return isSetField(860); }
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
  public void set(org.quickfix.field.BenchmarkPrice value)
  { setField(value); }
  public org.quickfix.field.BenchmarkPrice get(org.quickfix.field.BenchmarkPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkPrice getBenchmarkPrice() throws FieldNotFound
  { org.quickfix.field.BenchmarkPrice value = new org.quickfix.field.BenchmarkPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkPrice field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPrice()
  { return isSetField(662); }
  public void set(org.quickfix.field.BenchmarkPriceType value)
  { setField(value); }
  public org.quickfix.field.BenchmarkPriceType get(org.quickfix.field.BenchmarkPriceType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkPriceType getBenchmarkPriceType() throws FieldNotFound
  { org.quickfix.field.BenchmarkPriceType value = new org.quickfix.field.BenchmarkPriceType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkPriceType field)
  { return isSetField(field); }
  public boolean isSetBenchmarkPriceType()
  { return isSetField(663); }
  public void set(org.quickfix.field.BenchmarkSecurityID value)
  { setField(value); }
  public org.quickfix.field.BenchmarkSecurityID get(org.quickfix.field.BenchmarkSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkSecurityID getBenchmarkSecurityID() throws FieldNotFound
  { org.quickfix.field.BenchmarkSecurityID value = new org.quickfix.field.BenchmarkSecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkSecurityID field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityID()
  { return isSetField(699); }
  public void set(org.quickfix.field.BenchmarkSecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.BenchmarkSecurityIDSource get(org.quickfix.field.BenchmarkSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.BenchmarkSecurityIDSource value = new org.quickfix.field.BenchmarkSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BenchmarkSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetBenchmarkSecurityIDSource()
  { return isSetField(761); }
  public void set(org.quickfix.field.ReportedPx value)
  { setField(value); }
  public org.quickfix.field.ReportedPx get(org.quickfix.field.ReportedPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ReportedPx getReportedPx() throws FieldNotFound
  { org.quickfix.field.ReportedPx value = new org.quickfix.field.ReportedPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ReportedPx field)
  { return isSetField(field); }
  public boolean isSetReportedPx()
  { return isSetField(861); }
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
  public void set(org.quickfix.field.NumDaysInterest value)
  { setField(value); }
  public org.quickfix.field.NumDaysInterest get(org.quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { org.quickfix.field.NumDaysInterest value = new org.quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(org.quickfix.field.ExDate value)
  { setField(value); }
  public org.quickfix.field.ExDate get(org.quickfix.field.ExDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExDate getExDate() throws FieldNotFound
  { org.quickfix.field.ExDate value = new org.quickfix.field.ExDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExDate field)
  { return isSetField(field); }
  public boolean isSetExDate()
  { return isSetField(230); }
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
  public void set(org.quickfix.field.InterestAtMaturity value)
  { setField(value); }
  public org.quickfix.field.InterestAtMaturity get(org.quickfix.field.InterestAtMaturity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.InterestAtMaturity getInterestAtMaturity() throws FieldNotFound
  { org.quickfix.field.InterestAtMaturity value = new org.quickfix.field.InterestAtMaturity();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.InterestAtMaturity field)
  { return isSetField(field); }
  public boolean isSetInterestAtMaturity()
  { return isSetField(738); }
  public void set(org.quickfix.field.EndAccruedInterestAmt value)
  { setField(value); }
  public org.quickfix.field.EndAccruedInterestAmt get(org.quickfix.field.EndAccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EndAccruedInterestAmt getEndAccruedInterestAmt() throws FieldNotFound
  { org.quickfix.field.EndAccruedInterestAmt value = new org.quickfix.field.EndAccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EndAccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetEndAccruedInterestAmt()
  { return isSetField(920); }
  public void set(org.quickfix.field.StartCash value)
  { setField(value); }
  public org.quickfix.field.StartCash get(org.quickfix.field.StartCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StartCash getStartCash() throws FieldNotFound
  { org.quickfix.field.StartCash value = new org.quickfix.field.StartCash();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StartCash field)
  { return isSetField(field); }
  public boolean isSetStartCash()
  { return isSetField(921); }
  public void set(org.quickfix.field.EndCash value)
  { setField(value); }
  public org.quickfix.field.EndCash get(org.quickfix.field.EndCash  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EndCash getEndCash() throws FieldNotFound
  { org.quickfix.field.EndCash value = new org.quickfix.field.EndCash();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EndCash field)
  { return isSetField(field); }
  public boolean isSetEndCash()
  { return isSetField(922); }
  public void set(org.quickfix.field.Concession value)
  { setField(value); }
  public org.quickfix.field.Concession get(org.quickfix.field.Concession  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Concession getConcession() throws FieldNotFound
  { org.quickfix.field.Concession value = new org.quickfix.field.Concession();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Concession field)
  { return isSetField(field); }
  public boolean isSetConcession()
  { return isSetField(238); }
  public void set(org.quickfix.field.TotalTakedown value)
  { setField(value); }
  public org.quickfix.field.TotalTakedown get(org.quickfix.field.TotalTakedown  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TotalTakedown getTotalTakedown() throws FieldNotFound
  { org.quickfix.field.TotalTakedown value = new org.quickfix.field.TotalTakedown();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TotalTakedown field)
  { return isSetField(field); }
  public boolean isSetTotalTakedown()
  { return isSetField(237); }
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
  public void set(org.quickfix.field.MaturityNetMoney value)
  { setField(value); }
  public org.quickfix.field.MaturityNetMoney get(org.quickfix.field.MaturityNetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityNetMoney getMaturityNetMoney() throws FieldNotFound
  { org.quickfix.field.MaturityNetMoney value = new org.quickfix.field.MaturityNetMoney();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityNetMoney field)
  { return isSetField(field); }
  public boolean isSetMaturityNetMoney()
  { return isSetField(890); }
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
  public void set(org.quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public org.quickfix.field.SettlCurrFxRate get(org.quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { org.quickfix.field.SettlCurrFxRate value = new org.quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(org.quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public org.quickfix.field.SettlCurrFxRateCalc get(org.quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { org.quickfix.field.SettlCurrFxRateCalc value = new org.quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(org.quickfix.field.SettlType value)
  { setField(value); }
  public org.quickfix.field.SettlType get(org.quickfix.field.SettlType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlType getSettlType() throws FieldNotFound
  { org.quickfix.field.SettlType value = new org.quickfix.field.SettlType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlType field)
  { return isSetField(field); }
  public boolean isSetSettlType()
  { return isSetField(63); }
  public void set(org.quickfix.field.SettlDate value)
  { setField(value); }
  public org.quickfix.field.SettlDate get(org.quickfix.field.SettlDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlDate getSettlDate() throws FieldNotFound
  { org.quickfix.field.SettlDate value = new org.quickfix.field.SettlDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlDate field)
  { return isSetField(field); }
  public boolean isSetSettlDate()
  { return isSetField(64); }
  public void set(org.quickfix.field.SettlDeliveryType value)
  { setField(value); }
  public org.quickfix.field.SettlDeliveryType get(org.quickfix.field.SettlDeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlDeliveryType getSettlDeliveryType() throws FieldNotFound
  { org.quickfix.field.SettlDeliveryType value = new org.quickfix.field.SettlDeliveryType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlDeliveryType field)
  { return isSetField(field); }
  public boolean isSetSettlDeliveryType()
  { return isSetField(172); }
  public void set(org.quickfix.field.StandInstDbType value)
  { setField(value); }
  public org.quickfix.field.StandInstDbType get(org.quickfix.field.StandInstDbType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StandInstDbType getStandInstDbType() throws FieldNotFound
  { org.quickfix.field.StandInstDbType value = new org.quickfix.field.StandInstDbType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StandInstDbType field)
  { return isSetField(field); }
  public boolean isSetStandInstDbType()
  { return isSetField(169); }
  public void set(org.quickfix.field.StandInstDbName value)
  { setField(value); }
  public org.quickfix.field.StandInstDbName get(org.quickfix.field.StandInstDbName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StandInstDbName getStandInstDbName() throws FieldNotFound
  { org.quickfix.field.StandInstDbName value = new org.quickfix.field.StandInstDbName();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StandInstDbName field)
  { return isSetField(field); }
  public boolean isSetStandInstDbName()
  { return isSetField(170); }
  public void set(org.quickfix.field.StandInstDbID value)
  { setField(value); }
  public org.quickfix.field.StandInstDbID get(org.quickfix.field.StandInstDbID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StandInstDbID getStandInstDbID() throws FieldNotFound
  { org.quickfix.field.StandInstDbID value = new org.quickfix.field.StandInstDbID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StandInstDbID field)
  { return isSetField(field); }
  public boolean isSetStandInstDbID()
  { return isSetField(171); }
  public void set(org.quickfix.field.NoDlvyInst value)
  { setField(value); }
  public org.quickfix.field.NoDlvyInst get(org.quickfix.field.NoDlvyInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoDlvyInst getNoDlvyInst() throws FieldNotFound
  { org.quickfix.field.NoDlvyInst value = new org.quickfix.field.NoDlvyInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoDlvyInst field)
  { return isSetField(field); }
  public boolean isSetNoDlvyInst()
  { return isSetField(85); }
  public static class NoDlvyInst extends Group {
    public NoDlvyInst() {
      super(85,165,
      new int[] {165,787,0 } ); }
  public void set(org.quickfix.field.SettlInstSource value)
  { setField(value); }
  public org.quickfix.field.SettlInstSource get(org.quickfix.field.SettlInstSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlInstSource getSettlInstSource() throws FieldNotFound
  { org.quickfix.field.SettlInstSource value = new org.quickfix.field.SettlInstSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlInstSource field)
  { return isSetField(field); }
  public boolean isSetSettlInstSource()
  { return isSetField(165); }
  public void set(org.quickfix.field.DlvyInstType value)
  { setField(value); }
  public org.quickfix.field.DlvyInstType get(org.quickfix.field.DlvyInstType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DlvyInstType getDlvyInstType() throws FieldNotFound
  { org.quickfix.field.DlvyInstType value = new org.quickfix.field.DlvyInstType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DlvyInstType field)
  { return isSetField(field); }
  public boolean isSetDlvyInstType()
  { return isSetField(787); }
  public void set(org.quickfix.field.NoSettlPartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoSettlPartyIDs get(org.quickfix.field.NoSettlPartyIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoSettlPartyIDs getNoSettlPartyIDs() throws FieldNotFound
  { org.quickfix.field.NoSettlPartyIDs value = new org.quickfix.field.NoSettlPartyIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoSettlPartyIDs field)
  { return isSetField(field); }
  public boolean isSetNoSettlPartyIDs()
  { return isSetField(781); }
  public static class NoSettlPartyIDs extends Group {
    public NoSettlPartyIDs() {
      super(781,782,
      new int[] {782,783,784,0 } ); }
  public void set(org.quickfix.field.SettlPartyID value)
  { setField(value); }
  public org.quickfix.field.SettlPartyID get(org.quickfix.field.SettlPartyID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlPartyID getSettlPartyID() throws FieldNotFound
  { org.quickfix.field.SettlPartyID value = new org.quickfix.field.SettlPartyID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlPartyID field)
  { return isSetField(field); }
  public boolean isSetSettlPartyID()
  { return isSetField(782); }
  public void set(org.quickfix.field.SettlPartyIDSource value)
  { setField(value); }
  public org.quickfix.field.SettlPartyIDSource get(org.quickfix.field.SettlPartyIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlPartyIDSource getSettlPartyIDSource() throws FieldNotFound
  { org.quickfix.field.SettlPartyIDSource value = new org.quickfix.field.SettlPartyIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlPartyIDSource field)
  { return isSetField(field); }
  public boolean isSetSettlPartyIDSource()
  { return isSetField(783); }
  public void set(org.quickfix.field.SettlPartyRole value)
  { setField(value); }
  public org.quickfix.field.SettlPartyRole get(org.quickfix.field.SettlPartyRole  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlPartyRole getSettlPartyRole() throws FieldNotFound
  { org.quickfix.field.SettlPartyRole value = new org.quickfix.field.SettlPartyRole();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlPartyRole field)
  { return isSetField(field); }
  public boolean isSetSettlPartyRole()
  { return isSetField(784); }
  public void set(org.quickfix.field.NoSettlPartySubIDs value)
  { setField(value); }
  public org.quickfix.field.NoSettlPartySubIDs get(org.quickfix.field.NoSettlPartySubIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoSettlPartySubIDs getNoSettlPartySubIDs() throws FieldNotFound
  { org.quickfix.field.NoSettlPartySubIDs value = new org.quickfix.field.NoSettlPartySubIDs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoSettlPartySubIDs field)
  { return isSetField(field); }
  public boolean isSetNoSettlPartySubIDs()
  { return isSetField(801); }
  public static class NoSettlPartySubIDs extends Group {
    public NoSettlPartySubIDs() {
      super(801,785,
      new int[] {785,786,0 } ); }
  public void set(org.quickfix.field.SettlPartySubID value)
  { setField(value); }
  public org.quickfix.field.SettlPartySubID get(org.quickfix.field.SettlPartySubID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlPartySubID getSettlPartySubID() throws FieldNotFound
  { org.quickfix.field.SettlPartySubID value = new org.quickfix.field.SettlPartySubID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlPartySubID field)
  { return isSetField(field); }
  public boolean isSetSettlPartySubID()
  { return isSetField(785); }
  public void set(org.quickfix.field.SettlPartySubIDType value)
  { setField(value); }
  public org.quickfix.field.SettlPartySubIDType get(org.quickfix.field.SettlPartySubIDType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlPartySubIDType getSettlPartySubIDType() throws FieldNotFound
  { org.quickfix.field.SettlPartySubIDType value = new org.quickfix.field.SettlPartySubIDType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlPartySubIDType field)
  { return isSetField(field); }
  public boolean isSetSettlPartySubIDType()
  { return isSetField(786); }
}
}
}
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
  public void set(org.quickfix.field.SharedCommission value)
  { setField(value); }
  public org.quickfix.field.SharedCommission get(org.quickfix.field.SharedCommission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SharedCommission getSharedCommission() throws FieldNotFound
  { org.quickfix.field.SharedCommission value = new org.quickfix.field.SharedCommission();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SharedCommission field)
  { return isSetField(field); }
  public boolean isSetSharedCommission()
  { return isSetField(858); }
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
  public void set(org.quickfix.field.NoOrders value)
  { setField(value); }
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoOrders field)
  { return isSetField(field); }
  public boolean isSetNoOrders()
  { return isSetField(73); }
  public static class NoOrders extends Group {
    public NoOrders() {
      super(73,11,
      new int[] {11,37,198,526,66,38,799,800,0 } ); }
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
  public void set(org.quickfix.field.NoNested2PartyIDs value)
  { setField(value); }
  public org.quickfix.field.NoNested2PartyIDs get(org.quickfix.field.NoNested2PartyIDs  value)
    throws FieldNotFound
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
      super(756,757,
      new int[] {757,758,759,0 } ); }
  public void set(org.quickfix.field.Nested2PartyID value)
  { setField(value); }
  public org.quickfix.field.Nested2PartyID get(org.quickfix.field.Nested2PartyID  value)
    throws FieldNotFound
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
  public org.quickfix.field.Nested2PartyIDSource get(org.quickfix.field.Nested2PartyIDSource  value)
    throws FieldNotFound
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
  public org.quickfix.field.Nested2PartyRole get(org.quickfix.field.Nested2PartyRole  value)
    throws FieldNotFound
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
  public org.quickfix.field.NoNested2PartySubIDs get(org.quickfix.field.NoNested2PartySubIDs  value)
    throws FieldNotFound
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
      super(806,760,
      new int[] {760,807,0 } ); }
  public void set(org.quickfix.field.Nested2PartySubID value)
  { setField(value); }
  public org.quickfix.field.Nested2PartySubID get(org.quickfix.field.Nested2PartySubID  value)
    throws FieldNotFound
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
  public org.quickfix.field.Nested2PartySubIDType get(org.quickfix.field.Nested2PartySubIDType  value)
    throws FieldNotFound
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
  public void set(org.quickfix.field.OrderAvgPx value)
  { setField(value); }
  public org.quickfix.field.OrderAvgPx get(org.quickfix.field.OrderAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderAvgPx getOrderAvgPx() throws FieldNotFound
  { org.quickfix.field.OrderAvgPx value = new org.quickfix.field.OrderAvgPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderAvgPx field)
  { return isSetField(field); }
  public boolean isSetOrderAvgPx()
  { return isSetField(799); }
  public void set(org.quickfix.field.OrderBookingQty value)
  { setField(value); }
  public org.quickfix.field.OrderBookingQty get(org.quickfix.field.OrderBookingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderBookingQty getOrderBookingQty() throws FieldNotFound
  { org.quickfix.field.OrderBookingQty value = new org.quickfix.field.OrderBookingQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderBookingQty field)
  { return isSetField(field); }
  public boolean isSetOrderBookingQty()
  { return isSetField(800); }
}
  public void set(org.quickfix.field.NoUnderlyings value)
  { setField(value); }
  public org.quickfix.field.NoUnderlyings get(org.quickfix.field.NoUnderlyings  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoUnderlyings getNoUnderlyings() throws FieldNotFound
  { org.quickfix.field.NoUnderlyings value = new org.quickfix.field.NoUnderlyings();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoUnderlyings field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyings()
  { return isSetField(711); }
  public static class NoUnderlyings extends Group {
    public NoUnderlyings() {
      super(711,311,
      new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,0 } ); }
  public void set(org.quickfix.field.UnderlyingSymbol value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSymbol getUnderlyingSymbol() throws FieldNotFound
  { org.quickfix.field.UnderlyingSymbol value = new org.quickfix.field.UnderlyingSymbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSymbol field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbol()
  { return isSetField(311); }
  public void set(org.quickfix.field.UnderlyingSymbolSfx value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSymbolSfx getUnderlyingSymbolSfx() throws FieldNotFound
  { org.quickfix.field.UnderlyingSymbolSfx value = new org.quickfix.field.UnderlyingSymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSymbolSfx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSymbolSfx()
  { return isSetField(312); }
  public void set(org.quickfix.field.UnderlyingSecurityID value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityID getUnderlyingSecurityID() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityID value = new org.quickfix.field.UnderlyingSecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityID()
  { return isSetField(309); }
  public void set(org.quickfix.field.UnderlyingSecurityIDSource value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityIDSource get(org.quickfix.field.UnderlyingSecurityIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityIDSource value = new org.quickfix.field.UnderlyingSecurityIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityIDSource()
  { return isSetField(305); }
  public void set(org.quickfix.field.UnderlyingProduct value)
  { setField(value); }
  public org.quickfix.field.UnderlyingProduct get(org.quickfix.field.UnderlyingProduct  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingProduct getUnderlyingProduct() throws FieldNotFound
  { org.quickfix.field.UnderlyingProduct value = new org.quickfix.field.UnderlyingProduct();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingProduct field)
  { return isSetField(field); }
  public boolean isSetUnderlyingProduct()
  { return isSetField(462); }
  public void set(org.quickfix.field.UnderlyingCFICode value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCFICode get(org.quickfix.field.UnderlyingCFICode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCFICode getUnderlyingCFICode() throws FieldNotFound
  { org.quickfix.field.UnderlyingCFICode value = new org.quickfix.field.UnderlyingCFICode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCFICode field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCFICode()
  { return isSetField(463); }
  public void set(org.quickfix.field.UnderlyingSecurityType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityType getUnderlyingSecurityType() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityType value = new org.quickfix.field.UnderlyingSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityType()
  { return isSetField(310); }
  public void set(org.quickfix.field.UnderlyingSecuritySubType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecuritySubType get(org.quickfix.field.UnderlyingSecuritySubType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecuritySubType getUnderlyingSecuritySubType() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecuritySubType value = new org.quickfix.field.UnderlyingSecuritySubType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecuritySubType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecuritySubType()
  { return isSetField(763); }
  public void set(org.quickfix.field.UnderlyingMaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.UnderlyingMaturityMonthYear value = new org.quickfix.field.UnderlyingMaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingMaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityMonthYear()
  { return isSetField(313); }
  public void set(org.quickfix.field.UnderlyingMaturityDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingMaturityDate get(org.quickfix.field.UnderlyingMaturityDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingMaturityDate getUnderlyingMaturityDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingMaturityDate value = new org.quickfix.field.UnderlyingMaturityDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingMaturityDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingMaturityDate()
  { return isSetField(542); }
  public void set(org.quickfix.field.UnderlyingCouponPaymentDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCouponPaymentDate get(org.quickfix.field.UnderlyingCouponPaymentDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingCouponPaymentDate value = new org.quickfix.field.UnderlyingCouponPaymentDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCouponPaymentDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponPaymentDate()
  { return isSetField(241); }
  public void set(org.quickfix.field.UnderlyingIssueDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingIssueDate get(org.quickfix.field.UnderlyingIssueDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingIssueDate getUnderlyingIssueDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingIssueDate value = new org.quickfix.field.UnderlyingIssueDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingIssueDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssueDate()
  { return isSetField(242); }
  public void set(org.quickfix.field.UnderlyingRepoCollateralSecurityType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType get(org.quickfix.field.UnderlyingRepoCollateralSecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepoCollateralSecurityType value = new org.quickfix.field.UnderlyingRepoCollateralSecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepoCollateralSecurityType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepoCollateralSecurityType()
  { return isSetField(243); }
  public void set(org.quickfix.field.UnderlyingRepurchaseTerm value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepurchaseTerm get(org.quickfix.field.UnderlyingRepurchaseTerm  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepurchaseTerm value = new org.quickfix.field.UnderlyingRepurchaseTerm();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseTerm field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseTerm()
  { return isSetField(244); }
  public void set(org.quickfix.field.UnderlyingRepurchaseRate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRepurchaseRate get(org.quickfix.field.UnderlyingRepurchaseRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate() throws FieldNotFound
  { org.quickfix.field.UnderlyingRepurchaseRate value = new org.quickfix.field.UnderlyingRepurchaseRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRepurchaseRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRepurchaseRate()
  { return isSetField(245); }
  public void set(org.quickfix.field.UnderlyingFactor value)
  { setField(value); }
  public org.quickfix.field.UnderlyingFactor get(org.quickfix.field.UnderlyingFactor  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingFactor getUnderlyingFactor() throws FieldNotFound
  { org.quickfix.field.UnderlyingFactor value = new org.quickfix.field.UnderlyingFactor();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingFactor field)
  { return isSetField(field); }
  public boolean isSetUnderlyingFactor()
  { return isSetField(246); }
  public void set(org.quickfix.field.UnderlyingCreditRating value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCreditRating get(org.quickfix.field.UnderlyingCreditRating  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCreditRating getUnderlyingCreditRating() throws FieldNotFound
  { org.quickfix.field.UnderlyingCreditRating value = new org.quickfix.field.UnderlyingCreditRating();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCreditRating field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCreditRating()
  { return isSetField(256); }
  public void set(org.quickfix.field.UnderlyingInstrRegistry value)
  { setField(value); }
  public org.quickfix.field.UnderlyingInstrRegistry get(org.quickfix.field.UnderlyingInstrRegistry  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingInstrRegistry getUnderlyingInstrRegistry() throws FieldNotFound
  { org.quickfix.field.UnderlyingInstrRegistry value = new org.quickfix.field.UnderlyingInstrRegistry();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingInstrRegistry field)
  { return isSetField(field); }
  public boolean isSetUnderlyingInstrRegistry()
  { return isSetField(595); }
  public void set(org.quickfix.field.UnderlyingCountryOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCountryOfIssue get(org.quickfix.field.UnderlyingCountryOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingCountryOfIssue value = new org.quickfix.field.UnderlyingCountryOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCountryOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCountryOfIssue()
  { return isSetField(592); }
  public void set(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue get(org.quickfix.field.UnderlyingStateOrProvinceOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingStateOrProvinceOfIssue value = new org.quickfix.field.UnderlyingStateOrProvinceOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStateOrProvinceOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStateOrProvinceOfIssue()
  { return isSetField(593); }
  public void set(org.quickfix.field.UnderlyingLocaleOfIssue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingLocaleOfIssue get(org.quickfix.field.UnderlyingLocaleOfIssue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue() throws FieldNotFound
  { org.quickfix.field.UnderlyingLocaleOfIssue value = new org.quickfix.field.UnderlyingLocaleOfIssue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingLocaleOfIssue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingLocaleOfIssue()
  { return isSetField(594); }
  public void set(org.quickfix.field.UnderlyingRedemptionDate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingRedemptionDate get(org.quickfix.field.UnderlyingRedemptionDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingRedemptionDate getUnderlyingRedemptionDate() throws FieldNotFound
  { org.quickfix.field.UnderlyingRedemptionDate value = new org.quickfix.field.UnderlyingRedemptionDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingRedemptionDate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingRedemptionDate()
  { return isSetField(247); }
  public void set(org.quickfix.field.UnderlyingStrikePrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStrikePrice getUnderlyingStrikePrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingStrikePrice value = new org.quickfix.field.UnderlyingStrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStrikePrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikePrice()
  { return isSetField(316); }
  public void set(org.quickfix.field.UnderlyingStrikeCurrency value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStrikeCurrency get(org.quickfix.field.UnderlyingStrikeCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency() throws FieldNotFound
  { org.quickfix.field.UnderlyingStrikeCurrency value = new org.quickfix.field.UnderlyingStrikeCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStrikeCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStrikeCurrency()
  { return isSetField(941); }
  public void set(org.quickfix.field.UnderlyingOptAttribute value)
  { setField(value); }
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingOptAttribute getUnderlyingOptAttribute() throws FieldNotFound
  { org.quickfix.field.UnderlyingOptAttribute value = new org.quickfix.field.UnderlyingOptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingOptAttribute field)
  { return isSetField(field); }
  public boolean isSetUnderlyingOptAttribute()
  { return isSetField(317); }
  public void set(org.quickfix.field.UnderlyingContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingContractMultiplier getUnderlyingContractMultiplier() throws FieldNotFound
  { org.quickfix.field.UnderlyingContractMultiplier value = new org.quickfix.field.UnderlyingContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetUnderlyingContractMultiplier()
  { return isSetField(436); }
  public void set(org.quickfix.field.UnderlyingCouponRate value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCouponRate getUnderlyingCouponRate() throws FieldNotFound
  { org.quickfix.field.UnderlyingCouponRate value = new org.quickfix.field.UnderlyingCouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCouponRate field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCouponRate()
  { return isSetField(435); }
  public void set(org.quickfix.field.UnderlyingSecurityExchange value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityExchange getUnderlyingSecurityExchange() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityExchange value = new org.quickfix.field.UnderlyingSecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityExchange field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityExchange()
  { return isSetField(308); }
  public void set(org.quickfix.field.UnderlyingIssuer value)
  { setField(value); }
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingIssuer getUnderlyingIssuer() throws FieldNotFound
  { org.quickfix.field.UnderlyingIssuer value = new org.quickfix.field.UnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetUnderlyingIssuer()
  { return isSetField(306); }
  public void set(org.quickfix.field.EncodedUnderlyingIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingIssuerLen value = new org.quickfix.field.EncodedUnderlyingIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuerLen()
  { return isSetField(362); }
  public void set(org.quickfix.field.EncodedUnderlyingIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingIssuer value = new org.quickfix.field.EncodedUnderlyingIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingIssuer()
  { return isSetField(363); }
  public void set(org.quickfix.field.UnderlyingSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityDesc getUnderlyingSecurityDesc() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityDesc value = new org.quickfix.field.UnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityDesc()
  { return isSetField(307); }
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingSecurityDescLen value = new org.quickfix.field.EncodedUnderlyingSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDescLen()
  { return isSetField(364); }
  public void set(org.quickfix.field.EncodedUnderlyingSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedUnderlyingSecurityDesc value = new org.quickfix.field.EncodedUnderlyingSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedUnderlyingSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedUnderlyingSecurityDesc()
  { return isSetField(365); }
  public void set(org.quickfix.field.UnderlyingCPProgram value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCPProgram get(org.quickfix.field.UnderlyingCPProgram  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCPProgram getUnderlyingCPProgram() throws FieldNotFound
  { org.quickfix.field.UnderlyingCPProgram value = new org.quickfix.field.UnderlyingCPProgram();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCPProgram field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPProgram()
  { return isSetField(877); }
  public void set(org.quickfix.field.UnderlyingCPRegType value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCPRegType get(org.quickfix.field.UnderlyingCPRegType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCPRegType getUnderlyingCPRegType() throws FieldNotFound
  { org.quickfix.field.UnderlyingCPRegType value = new org.quickfix.field.UnderlyingCPRegType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCPRegType field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCPRegType()
  { return isSetField(878); }
  public void set(org.quickfix.field.UnderlyingCurrency value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCurrency get(org.quickfix.field.UnderlyingCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCurrency getUnderlyingCurrency() throws FieldNotFound
  { org.quickfix.field.UnderlyingCurrency value = new org.quickfix.field.UnderlyingCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCurrency field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrency()
  { return isSetField(318); }
  public void set(org.quickfix.field.UnderlyingQty value)
  { setField(value); }
  public org.quickfix.field.UnderlyingQty get(org.quickfix.field.UnderlyingQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingQty getUnderlyingQty() throws FieldNotFound
  { org.quickfix.field.UnderlyingQty value = new org.quickfix.field.UnderlyingQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingQty field)
  { return isSetField(field); }
  public boolean isSetUnderlyingQty()
  { return isSetField(879); }
  public void set(org.quickfix.field.UnderlyingPx value)
  { setField(value); }
  public org.quickfix.field.UnderlyingPx get(org.quickfix.field.UnderlyingPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingPx getUnderlyingPx() throws FieldNotFound
  { org.quickfix.field.UnderlyingPx value = new org.quickfix.field.UnderlyingPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingPx field)
  { return isSetField(field); }
  public boolean isSetUnderlyingPx()
  { return isSetField(810); }
  public void set(org.quickfix.field.UnderlyingDirtyPrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingDirtyPrice get(org.quickfix.field.UnderlyingDirtyPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingDirtyPrice getUnderlyingDirtyPrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingDirtyPrice value = new org.quickfix.field.UnderlyingDirtyPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingDirtyPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingDirtyPrice()
  { return isSetField(882); }
  public void set(org.quickfix.field.UnderlyingEndPrice value)
  { setField(value); }
  public org.quickfix.field.UnderlyingEndPrice get(org.quickfix.field.UnderlyingEndPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingEndPrice getUnderlyingEndPrice() throws FieldNotFound
  { org.quickfix.field.UnderlyingEndPrice value = new org.quickfix.field.UnderlyingEndPrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingEndPrice field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndPrice()
  { return isSetField(883); }
  public void set(org.quickfix.field.UnderlyingStartValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingStartValue get(org.quickfix.field.UnderlyingStartValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingStartValue getUnderlyingStartValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingStartValue value = new org.quickfix.field.UnderlyingStartValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingStartValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingStartValue()
  { return isSetField(884); }
  public void set(org.quickfix.field.UnderlyingCurrentValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingCurrentValue get(org.quickfix.field.UnderlyingCurrentValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingCurrentValue getUnderlyingCurrentValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingCurrentValue value = new org.quickfix.field.UnderlyingCurrentValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingCurrentValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingCurrentValue()
  { return isSetField(885); }
  public void set(org.quickfix.field.UnderlyingEndValue value)
  { setField(value); }
  public org.quickfix.field.UnderlyingEndValue get(org.quickfix.field.UnderlyingEndValue  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingEndValue getUnderlyingEndValue() throws FieldNotFound
  { org.quickfix.field.UnderlyingEndValue value = new org.quickfix.field.UnderlyingEndValue();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingEndValue field)
  { return isSetField(field); }
  public boolean isSetUnderlyingEndValue()
  { return isSetField(886); }
  public void set(org.quickfix.field.NoUnderlyingSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.NoUnderlyingSecurityAltID get(org.quickfix.field.NoUnderlyingSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID() throws FieldNotFound
  { org.quickfix.field.NoUnderlyingSecurityAltID value = new org.quickfix.field.NoUnderlyingSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoUnderlyingSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetNoUnderlyingSecurityAltID()
  { return isSetField(457); }
  public static class NoUnderlyingSecurityAltID extends Group {
    public NoUnderlyingSecurityAltID() {
      super(457,458,
      new int[] {458,459,0 } ); }
  public void set(org.quickfix.field.UnderlyingSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityAltID get(org.quickfix.field.UnderlyingSecurityAltID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityAltID getUnderlyingSecurityAltID() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityAltID value = new org.quickfix.field.UnderlyingSecurityAltID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltID field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityAltID()
  { return isSetField(458); }
  public void set(org.quickfix.field.UnderlyingSecurityAltIDSource value)
  { setField(value); }
  public org.quickfix.field.UnderlyingSecurityAltIDSource get(org.quickfix.field.UnderlyingSecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.UnderlyingSecurityAltIDSource value = new org.quickfix.field.UnderlyingSecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.UnderlyingSecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetUnderlyingSecurityAltIDSource()
  { return isSetField(459); }
}
}
  public void set(org.quickfix.field.NoLegs value)
  { setField(value); }
  public org.quickfix.field.NoLegs get(org.quickfix.field.NoLegs  value)
    throws FieldNotFound
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
      super(555,600,
      new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,0 } ); }
  public void set(org.quickfix.field.LegSymbol value)
  { setField(value); }
  public org.quickfix.field.LegSymbol get(org.quickfix.field.LegSymbol  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSymbolSfx get(org.quickfix.field.LegSymbolSfx  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityID get(org.quickfix.field.LegSecurityID  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityIDSource get(org.quickfix.field.LegSecurityIDSource  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegProduct get(org.quickfix.field.LegProduct  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCFICode get(org.quickfix.field.LegCFICode  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityType get(org.quickfix.field.LegSecurityType  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecuritySubType get(org.quickfix.field.LegSecuritySubType  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegMaturityMonthYear get(org.quickfix.field.LegMaturityMonthYear  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegMaturityDate get(org.quickfix.field.LegMaturityDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCouponPaymentDate get(org.quickfix.field.LegCouponPaymentDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegIssueDate get(org.quickfix.field.LegIssueDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegRepoCollateralSecurityType get(org.quickfix.field.LegRepoCollateralSecurityType  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegRepurchaseTerm get(org.quickfix.field.LegRepurchaseTerm  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegRepurchaseRate get(org.quickfix.field.LegRepurchaseRate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegFactor get(org.quickfix.field.LegFactor  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCreditRating get(org.quickfix.field.LegCreditRating  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegInstrRegistry get(org.quickfix.field.LegInstrRegistry  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCountryOfIssue get(org.quickfix.field.LegCountryOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegStateOrProvinceOfIssue get(org.quickfix.field.LegStateOrProvinceOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegLocaleOfIssue get(org.quickfix.field.LegLocaleOfIssue  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegRedemptionDate get(org.quickfix.field.LegRedemptionDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegStrikePrice get(org.quickfix.field.LegStrikePrice  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegStrikeCurrency get(org.quickfix.field.LegStrikeCurrency  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegOptAttribute get(org.quickfix.field.LegOptAttribute  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegContractMultiplier get(org.quickfix.field.LegContractMultiplier  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCouponRate get(org.quickfix.field.LegCouponRate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityExchange get(org.quickfix.field.LegSecurityExchange  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegIssuer get(org.quickfix.field.LegIssuer  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedLegIssuerLen get(org.quickfix.field.EncodedLegIssuerLen  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedLegIssuer get(org.quickfix.field.EncodedLegIssuer  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityDesc get(org.quickfix.field.LegSecurityDesc  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedLegSecurityDescLen get(org.quickfix.field.EncodedLegSecurityDescLen  value)
    throws FieldNotFound
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
  public org.quickfix.field.EncodedLegSecurityDesc get(org.quickfix.field.EncodedLegSecurityDesc  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegRatioQty get(org.quickfix.field.LegRatioQty  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSide get(org.quickfix.field.LegSide  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegCurrency get(org.quickfix.field.LegCurrency  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegPool get(org.quickfix.field.LegPool  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegDatedDate get(org.quickfix.field.LegDatedDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegContractSettlMonth get(org.quickfix.field.LegContractSettlMonth  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegInterestAccrualDate get(org.quickfix.field.LegInterestAccrualDate  value)
    throws FieldNotFound
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
  public org.quickfix.field.NoLegSecurityAltID get(org.quickfix.field.NoLegSecurityAltID  value)
    throws FieldNotFound
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
      super(604,605,
      new int[] {605,606,0 } ); }
  public void set(org.quickfix.field.LegSecurityAltID value)
  { setField(value); }
  public org.quickfix.field.LegSecurityAltID get(org.quickfix.field.LegSecurityAltID  value)
    throws FieldNotFound
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
  public org.quickfix.field.LegSecurityAltIDSource get(org.quickfix.field.LegSecurityAltIDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LegSecurityAltIDSource getLegSecurityAltIDSource() throws FieldNotFound
  { org.quickfix.field.LegSecurityAltIDSource value = new org.quickfix.field.LegSecurityAltIDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LegSecurityAltIDSource field)
  { return isSetField(field); }
  public boolean isSetLegSecurityAltIDSource()
  { return isSetField(606); }
}
}
  public void set(org.quickfix.field.NoCapacities value)
  { setField(value); }
  public org.quickfix.field.NoCapacities get(org.quickfix.field.NoCapacities  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoCapacities getNoCapacities() throws FieldNotFound
  { org.quickfix.field.NoCapacities value = new org.quickfix.field.NoCapacities();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoCapacities field)
  { return isSetField(field); }
  public boolean isSetNoCapacities()
  { return isSetField(862); }
  public static class NoCapacities extends Group {
    public NoCapacities() {
      super(862,528,
      new int[] {528,529,863,0 } ); }
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
  public void set(org.quickfix.field.OrderCapacityQty value)
  { setField(value); }
  public org.quickfix.field.OrderCapacityQty get(org.quickfix.field.OrderCapacityQty  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderCapacityQty getOrderCapacityQty() throws FieldNotFound
  { org.quickfix.field.OrderCapacityQty value = new org.quickfix.field.OrderCapacityQty();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderCapacityQty field)
  { return isSetField(field); }
  public boolean isSetOrderCapacityQty()
  { return isSetField(863); }
}
  public void set(org.quickfix.field.NoMiscFees value)
  { setField(value); }
  public org.quickfix.field.NoMiscFees get(org.quickfix.field.NoMiscFees  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { org.quickfix.field.NoMiscFees value = new org.quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }
  public static class NoMiscFees extends Group {
    public NoMiscFees() {
      super(136,137,
      new int[] {137,138,139,891,0 } ); }
  public void set(org.quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }
  public void set(org.quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }
  public void set(org.quickfix.field.MiscFeeType value)
  { setField(value); }
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }
  public void set(org.quickfix.field.MiscFeeBasis value)
  { setField(value); }
  public org.quickfix.field.MiscFeeBasis get(org.quickfix.field.MiscFeeBasis  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeBasis getMiscFeeBasis() throws FieldNotFound
  { org.quickfix.field.MiscFeeBasis value = new org.quickfix.field.MiscFeeBasis();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeBasis field)
  { return isSetField(field); }
  public boolean isSetMiscFeeBasis()
  { return isSetField(891); }
}
}

