package quickfix.fix44;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class RegistrationInstructions extends Message
{
  public RegistrationInstructions()
  {
    getHeader().setField(new MsgType("o"));
  }
  public RegistrationInstructions(
    quickfix.field.RegistID aRegistID,
    quickfix.field.RegistTransType aRegistTransType,
    quickfix.field.RegistRefID aRegistRefID ) {

    getHeader().setField(new MsgType("o"));
    set(aRegistID);
    set(aRegistTransType);
    set(aRegistRefID);
  }

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
  public void set(quickfix.field.RegistTransType value)
  { setField(value); }
  public quickfix.field.RegistTransType get(quickfix.field.RegistTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistTransType getRegistTransType() throws FieldNotFound
  { quickfix.field.RegistTransType value = new quickfix.field.RegistTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistTransType field)
  { return isSetField(field); }
  public boolean isSetRegistTransType()
  { return isSetField(514); }
  public void set(quickfix.field.RegistRefID value)
  { setField(value); }
  public quickfix.field.RegistRefID get(quickfix.field.RegistRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistRefID getRegistRefID() throws FieldNotFound
  { quickfix.field.RegistRefID value = new quickfix.field.RegistRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistRefID field)
  { return isSetField(field); }
  public boolean isSetRegistRefID()
  { return isSetField(508); }
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
  public void set(quickfix.field.RegistAcctType value)
  { setField(value); }
  public quickfix.field.RegistAcctType get(quickfix.field.RegistAcctType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistAcctType getRegistAcctType() throws FieldNotFound
  { quickfix.field.RegistAcctType value = new quickfix.field.RegistAcctType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistAcctType field)
  { return isSetField(field); }
  public boolean isSetRegistAcctType()
  { return isSetField(493); }
  public void set(quickfix.field.TaxAdvantageType value)
  { setField(value); }
  public quickfix.field.TaxAdvantageType get(quickfix.field.TaxAdvantageType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TaxAdvantageType getTaxAdvantageType() throws FieldNotFound
  { quickfix.field.TaxAdvantageType value = new quickfix.field.TaxAdvantageType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TaxAdvantageType field)
  { return isSetField(field); }
  public boolean isSetTaxAdvantageType()
  { return isSetField(495); }
  public void set(quickfix.field.OwnershipType value)
  { setField(value); }
  public quickfix.field.OwnershipType get(quickfix.field.OwnershipType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OwnershipType getOwnershipType() throws FieldNotFound
  { quickfix.field.OwnershipType value = new quickfix.field.OwnershipType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OwnershipType field)
  { return isSetField(field); }
  public boolean isSetOwnershipType()
  { return isSetField(517); }
  public void set(quickfix.field.NoRegistDtls value)
  { setField(value); }
  public quickfix.field.NoRegistDtls get(quickfix.field.NoRegistDtls  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRegistDtls getNoRegistDtls() throws FieldNotFound
  { quickfix.field.NoRegistDtls value = new quickfix.field.NoRegistDtls();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRegistDtls field)
  { return isSetField(field); }
  public boolean isSetNoRegistDtls()
  { return isSetField(473); }
  public static class NoRegistDtls extends Group {
    public NoRegistDtls() {
      super(473,509,
      new int[] {509,511,474,482,522,486,475,0 } ); }
  public void set(quickfix.field.RegistDtls value)
  { setField(value); }
  public quickfix.field.RegistDtls get(quickfix.field.RegistDtls  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistDtls getRegistDtls() throws FieldNotFound
  { quickfix.field.RegistDtls value = new quickfix.field.RegistDtls();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistDtls field)
  { return isSetField(field); }
  public boolean isSetRegistDtls()
  { return isSetField(509); }
  public void set(quickfix.field.RegistEmail value)
  { setField(value); }
  public quickfix.field.RegistEmail get(quickfix.field.RegistEmail  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RegistEmail getRegistEmail() throws FieldNotFound
  { quickfix.field.RegistEmail value = new quickfix.field.RegistEmail();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RegistEmail field)
  { return isSetField(field); }
  public boolean isSetRegistEmail()
  { return isSetField(511); }
  public void set(quickfix.field.MailingDtls value)
  { setField(value); }
  public quickfix.field.MailingDtls get(quickfix.field.MailingDtls  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MailingDtls getMailingDtls() throws FieldNotFound
  { quickfix.field.MailingDtls value = new quickfix.field.MailingDtls();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MailingDtls field)
  { return isSetField(field); }
  public boolean isSetMailingDtls()
  { return isSetField(474); }
  public void set(quickfix.field.MailingInst value)
  { setField(value); }
  public quickfix.field.MailingInst get(quickfix.field.MailingInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MailingInst getMailingInst() throws FieldNotFound
  { quickfix.field.MailingInst value = new quickfix.field.MailingInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MailingInst field)
  { return isSetField(field); }
  public boolean isSetMailingInst()
  { return isSetField(482); }
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
      new int[] {524,525,538,0 } ); }
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
  public void set(quickfix.field.OwnerType value)
  { setField(value); }
  public quickfix.field.OwnerType get(quickfix.field.OwnerType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OwnerType getOwnerType() throws FieldNotFound
  { quickfix.field.OwnerType value = new quickfix.field.OwnerType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OwnerType field)
  { return isSetField(field); }
  public boolean isSetOwnerType()
  { return isSetField(522); }
  public void set(quickfix.field.DateOfBirth value)
  { setField(value); }
  public quickfix.field.DateOfBirth get(quickfix.field.DateOfBirth  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DateOfBirth getDateOfBirth() throws FieldNotFound
  { quickfix.field.DateOfBirth value = new quickfix.field.DateOfBirth();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DateOfBirth field)
  { return isSetField(field); }
  public boolean isSetDateOfBirth()
  { return isSetField(486); }
  public void set(quickfix.field.InvestorCountryOfResidence value)
  { setField(value); }
  public quickfix.field.InvestorCountryOfResidence get(quickfix.field.InvestorCountryOfResidence  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InvestorCountryOfResidence getInvestorCountryOfResidence() throws FieldNotFound
  { quickfix.field.InvestorCountryOfResidence value = new quickfix.field.InvestorCountryOfResidence();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InvestorCountryOfResidence field)
  { return isSetField(field); }
  public boolean isSetInvestorCountryOfResidence()
  { return isSetField(475); }
}
  public void set(quickfix.field.NoDistribInsts value)
  { setField(value); }
  public quickfix.field.NoDistribInsts get(quickfix.field.NoDistribInsts  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoDistribInsts getNoDistribInsts() throws FieldNotFound
  { quickfix.field.NoDistribInsts value = new quickfix.field.NoDistribInsts();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoDistribInsts field)
  { return isSetField(field); }
  public boolean isSetNoDistribInsts()
  { return isSetField(510); }
  public static class NoDistribInsts extends Group {
    public NoDistribInsts() {
      super(510,477,
      new int[] {477,512,478,498,499,500,501,502,0 } ); }
  public void set(quickfix.field.DistribPaymentMethod value)
  { setField(value); }
  public quickfix.field.DistribPaymentMethod get(quickfix.field.DistribPaymentMethod  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DistribPaymentMethod getDistribPaymentMethod() throws FieldNotFound
  { quickfix.field.DistribPaymentMethod value = new quickfix.field.DistribPaymentMethod();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DistribPaymentMethod field)
  { return isSetField(field); }
  public boolean isSetDistribPaymentMethod()
  { return isSetField(477); }
  public void set(quickfix.field.DistribPercentage value)
  { setField(value); }
  public quickfix.field.DistribPercentage get(quickfix.field.DistribPercentage  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DistribPercentage getDistribPercentage() throws FieldNotFound
  { quickfix.field.DistribPercentage value = new quickfix.field.DistribPercentage();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DistribPercentage field)
  { return isSetField(field); }
  public boolean isSetDistribPercentage()
  { return isSetField(512); }
  public void set(quickfix.field.CashDistribCurr value)
  { setField(value); }
  public quickfix.field.CashDistribCurr get(quickfix.field.CashDistribCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribCurr getCashDistribCurr() throws FieldNotFound
  { quickfix.field.CashDistribCurr value = new quickfix.field.CashDistribCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribCurr field)
  { return isSetField(field); }
  public boolean isSetCashDistribCurr()
  { return isSetField(478); }
  public void set(quickfix.field.CashDistribAgentName value)
  { setField(value); }
  public quickfix.field.CashDistribAgentName get(quickfix.field.CashDistribAgentName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribAgentName getCashDistribAgentName() throws FieldNotFound
  { quickfix.field.CashDistribAgentName value = new quickfix.field.CashDistribAgentName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribAgentName field)
  { return isSetField(field); }
  public boolean isSetCashDistribAgentName()
  { return isSetField(498); }
  public void set(quickfix.field.CashDistribAgentCode value)
  { setField(value); }
  public quickfix.field.CashDistribAgentCode get(quickfix.field.CashDistribAgentCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribAgentCode getCashDistribAgentCode() throws FieldNotFound
  { quickfix.field.CashDistribAgentCode value = new quickfix.field.CashDistribAgentCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribAgentCode field)
  { return isSetField(field); }
  public boolean isSetCashDistribAgentCode()
  { return isSetField(499); }
  public void set(quickfix.field.CashDistribAgentAcctNumber value)
  { setField(value); }
  public quickfix.field.CashDistribAgentAcctNumber get(quickfix.field.CashDistribAgentAcctNumber  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribAgentAcctNumber getCashDistribAgentAcctNumber() throws FieldNotFound
  { quickfix.field.CashDistribAgentAcctNumber value = new quickfix.field.CashDistribAgentAcctNumber();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribAgentAcctNumber field)
  { return isSetField(field); }
  public boolean isSetCashDistribAgentAcctNumber()
  { return isSetField(500); }
  public void set(quickfix.field.CashDistribPayRef value)
  { setField(value); }
  public quickfix.field.CashDistribPayRef get(quickfix.field.CashDistribPayRef  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribPayRef getCashDistribPayRef() throws FieldNotFound
  { quickfix.field.CashDistribPayRef value = new quickfix.field.CashDistribPayRef();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribPayRef field)
  { return isSetField(field); }
  public boolean isSetCashDistribPayRef()
  { return isSetField(501); }
  public void set(quickfix.field.CashDistribAgentAcctName value)
  { setField(value); }
  public quickfix.field.CashDistribAgentAcctName get(quickfix.field.CashDistribAgentAcctName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashDistribAgentAcctName getCashDistribAgentAcctName() throws FieldNotFound
  { quickfix.field.CashDistribAgentAcctName value = new quickfix.field.CashDistribAgentAcctName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashDistribAgentAcctName field)
  { return isSetField(field); }
  public boolean isSetCashDistribAgentAcctName()
  { return isSetField(502); }
}
}

