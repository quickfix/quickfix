package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class AllocationReportAck extends Message
{
  public AllocationReportAck()
  {
    getHeader().setField(new MsgType("AS"));
  }
  public AllocationReportAck(
    quickfix.field.AllocReportID aAllocReportID,
    quickfix.field.AllocID aAllocID,
    quickfix.field.TransactTime aTransactTime,
    quickfix.field.AllocStatus aAllocStatus ) {

    getHeader().setField(new MsgType("AS"));
    set(aAllocReportID);
    set(aAllocID);
    set(aTransactTime);
    set(aAllocStatus);
  }

  public void set(quickfix.field.AllocReportID value)
  { setField(value); }
  public quickfix.field.AllocReportID get(quickfix.field.AllocReportID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocReportID getAllocReportID() throws FieldNotFound
  { quickfix.field.AllocReportID value = new quickfix.field.AllocReportID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocReportID field)
  { return isSetField(field); }
  public boolean isSetAllocReportID()
  { return isSetField(755); }
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
      new int[] {448,447,452,0 } ); }
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
  public void set(quickfix.field.SecondaryAllocID value)
  { setField(value); }
  public quickfix.field.SecondaryAllocID get(quickfix.field.SecondaryAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryAllocID getSecondaryAllocID() throws FieldNotFound
  { quickfix.field.SecondaryAllocID value = new quickfix.field.SecondaryAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryAllocID field)
  { return isSetField(field); }
  public boolean isSetSecondaryAllocID()
  { return isSetField(793); }
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
  public void set(quickfix.field.AllocStatus value)
  { setField(value); }
  public quickfix.field.AllocStatus get(quickfix.field.AllocStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocStatus getAllocStatus() throws FieldNotFound
  { quickfix.field.AllocStatus value = new quickfix.field.AllocStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocStatus field)
  { return isSetField(field); }
  public boolean isSetAllocStatus()
  { return isSetField(87); }
  public void set(quickfix.field.AllocRejCode value)
  { setField(value); }
  public quickfix.field.AllocRejCode get(quickfix.field.AllocRejCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocRejCode getAllocRejCode() throws FieldNotFound
  { quickfix.field.AllocRejCode value = new quickfix.field.AllocRejCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocRejCode field)
  { return isSetField(field); }
  public boolean isSetAllocRejCode()
  { return isSetField(88); }
  public void set(quickfix.field.AllocReportType value)
  { setField(value); }
  public quickfix.field.AllocReportType get(quickfix.field.AllocReportType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocReportType getAllocReportType() throws FieldNotFound
  { quickfix.field.AllocReportType value = new quickfix.field.AllocReportType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocReportType field)
  { return isSetField(field); }
  public boolean isSetAllocReportType()
  { return isSetField(794); }
  public void set(quickfix.field.AllocIntermedReqType value)
  { setField(value); }
  public quickfix.field.AllocIntermedReqType get(quickfix.field.AllocIntermedReqType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocIntermedReqType getAllocIntermedReqType() throws FieldNotFound
  { quickfix.field.AllocIntermedReqType value = new quickfix.field.AllocIntermedReqType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocIntermedReqType field)
  { return isSetField(field); }
  public boolean isSetAllocIntermedReqType()
  { return isSetField(808); }
  public void set(quickfix.field.MatchStatus value)
  { setField(value); }
  public quickfix.field.MatchStatus get(quickfix.field.MatchStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound
  { quickfix.field.MatchStatus value = new quickfix.field.MatchStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MatchStatus field)
  { return isSetField(field); }
  public boolean isSetMatchStatus()
  { return isSetField(573); }
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
      new int[] {79,661,366,467,776,161,360,361,0 } ); }
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
  public void set(quickfix.field.AllocPrice value)
  { setField(value); }
  public quickfix.field.AllocPrice get(quickfix.field.AllocPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound
  { quickfix.field.AllocPrice value = new quickfix.field.AllocPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocPrice field)
  { return isSetField(field); }
  public boolean isSetAllocPrice()
  { return isSetField(366); }
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
  public void set(quickfix.field.IndividualAllocRejCode value)
  { setField(value); }
  public quickfix.field.IndividualAllocRejCode get(quickfix.field.IndividualAllocRejCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IndividualAllocRejCode getIndividualAllocRejCode() throws FieldNotFound
  { quickfix.field.IndividualAllocRejCode value = new quickfix.field.IndividualAllocRejCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IndividualAllocRejCode field)
  { return isSetField(field); }
  public boolean isSetIndividualAllocRejCode()
  { return isSetField(776); }
  public void set(quickfix.field.AllocText value)
  { setField(value); }
  public quickfix.field.AllocText get(quickfix.field.AllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocText getAllocText() throws FieldNotFound
  { quickfix.field.AllocText value = new quickfix.field.AllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocText field)
  { return isSetField(field); }
  public boolean isSetAllocText()
  { return isSetField(161); }
  public void set(quickfix.field.EncodedAllocTextLen value)
  { setField(value); }
  public quickfix.field.EncodedAllocTextLen get(quickfix.field.EncodedAllocTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound
  { quickfix.field.EncodedAllocTextLen value = new quickfix.field.EncodedAllocTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocTextLen()
  { return isSetField(360); }
  public void set(quickfix.field.EncodedAllocText value)
  { setField(value); }
  public quickfix.field.EncodedAllocText get(quickfix.field.EncodedAllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound
  { quickfix.field.EncodedAllocText value = new quickfix.field.EncodedAllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocText field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocText()
  { return isSetField(361); }
}
}

