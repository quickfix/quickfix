package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class RegistrationInstructions extends Message 
{ 

  public RegistrationInstructions() 
  { 
    getHeader().setField(new MsgType("o")); 
  } 
  public RegistrationInstructions(    
    org.quickfix.field.RegistID aRegistID,    
    org.quickfix.field.RegistTransType aRegistTransType,    
    org.quickfix.field.RegistRefID aRegistRefID ) 
  {  
    getHeader().setField(new MsgType("o")); 
    set(aRegistID); 
    set(aRegistTransType); 
    set(aRegistRefID);  
  } 

  public void set(org.quickfix.field.RegistID value) 
  { setField(value); } 
  public org.quickfix.field.RegistID get(org.quickfix.field.RegistID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistID getRegistID() throws FieldNotFound 
  { org.quickfix.field.RegistID value = new org.quickfix.field.RegistID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistID field) 
  { return isSetField(field); } 
  public boolean isSetRegistID() 
  { return isSetField(513); } 

  public void set(org.quickfix.field.RegistTransType value) 
  { setField(value); } 
  public org.quickfix.field.RegistTransType get(org.quickfix.field.RegistTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistTransType getRegistTransType() throws FieldNotFound 
  { org.quickfix.field.RegistTransType value = new org.quickfix.field.RegistTransType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistTransType field) 
  { return isSetField(field); } 
  public boolean isSetRegistTransType() 
  { return isSetField(514); } 

  public void set(org.quickfix.field.RegistRefID value) 
  { setField(value); } 
  public org.quickfix.field.RegistRefID get(org.quickfix.field.RegistRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistRefID getRegistRefID() throws FieldNotFound 
  { org.quickfix.field.RegistRefID value = new org.quickfix.field.RegistRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistRefID field) 
  { return isSetField(field); } 
  public boolean isSetRegistRefID() 
  { return isSetField(508); } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetClOrdID() 
  { return isSetField(11); } 
  public void set(org.quickfix.field.NoPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs value) throws FieldNotFound 
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
    super(453, 447, 
    new int[] { 
               448, 
               447, 
               452, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.PartyID value) 
  { setField(value); } 
  public org.quickfix.field.PartyID get(org.quickfix.field.PartyID value) throws FieldNotFound 
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
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole value) throws FieldNotFound 
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
  public org.quickfix.field.NoPartySubIDs get(org.quickfix.field.NoPartySubIDs value) throws FieldNotFound 
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
    super(802, 523, 
    new int[] { 
               523, 
               803, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID value) throws FieldNotFound 
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
  public org.quickfix.field.PartySubIDType get(org.quickfix.field.PartySubIDType value) throws FieldNotFound 
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

  public void set(org.quickfix.field.RegistAcctType value) 
  { setField(value); } 
  public org.quickfix.field.RegistAcctType get(org.quickfix.field.RegistAcctType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistAcctType getRegistAcctType() throws FieldNotFound 
  { org.quickfix.field.RegistAcctType value = new org.quickfix.field.RegistAcctType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistAcctType field) 
  { return isSetField(field); } 
  public boolean isSetRegistAcctType() 
  { return isSetField(493); } 

  public void set(org.quickfix.field.TaxAdvantageType value) 
  { setField(value); } 
  public org.quickfix.field.TaxAdvantageType get(org.quickfix.field.TaxAdvantageType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TaxAdvantageType getTaxAdvantageType() throws FieldNotFound 
  { org.quickfix.field.TaxAdvantageType value = new org.quickfix.field.TaxAdvantageType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TaxAdvantageType field) 
  { return isSetField(field); } 
  public boolean isSetTaxAdvantageType() 
  { return isSetField(495); } 

  public void set(org.quickfix.field.OwnershipType value) 
  { setField(value); } 
  public org.quickfix.field.OwnershipType get(org.quickfix.field.OwnershipType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OwnershipType getOwnershipType() throws FieldNotFound 
  { org.quickfix.field.OwnershipType value = new org.quickfix.field.OwnershipType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OwnershipType field) 
  { return isSetField(field); } 
  public boolean isSetOwnershipType() 
  { return isSetField(517); } 
  public void set(org.quickfix.field.NoRegistDtls value) 
  { setField(value); } 
  public org.quickfix.field.NoRegistDtls get(org.quickfix.field.NoRegistDtls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoRegistDtls getNoRegistDtls() throws FieldNotFound 
  { org.quickfix.field.NoRegistDtls value = new org.quickfix.field.NoRegistDtls(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoRegistDtls field) 
  { return isSetField(field); } 
  public boolean isSetNoRegistDtls() 
  { return isSetField(473); } 

public static class NoRegistDtls extends Group { 
  public NoRegistDtls() { 
    super(473, 474, 
    new int[] { 
               509, 
               511, 
               474, 
               482, 
               522, 
               486, 
               475, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.RegistDtls value) 
  { setField(value); } 
  public org.quickfix.field.RegistDtls get(org.quickfix.field.RegistDtls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistDtls getRegistDtls() throws FieldNotFound 
  { org.quickfix.field.RegistDtls value = new org.quickfix.field.RegistDtls(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistDtls field) 
  { return isSetField(field); } 
  public boolean isSetRegistDtls() 
  { return isSetField(509); } 

  public void set(org.quickfix.field.RegistEmail value) 
  { setField(value); } 
  public org.quickfix.field.RegistEmail get(org.quickfix.field.RegistEmail value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistEmail getRegistEmail() throws FieldNotFound 
  { org.quickfix.field.RegistEmail value = new org.quickfix.field.RegistEmail(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.RegistEmail field) 
  { return isSetField(field); } 
  public boolean isSetRegistEmail() 
  { return isSetField(511); } 

  public void set(org.quickfix.field.MailingDtls value) 
  { setField(value); } 
  public org.quickfix.field.MailingDtls get(org.quickfix.field.MailingDtls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MailingDtls getMailingDtls() throws FieldNotFound 
  { org.quickfix.field.MailingDtls value = new org.quickfix.field.MailingDtls(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MailingDtls field) 
  { return isSetField(field); } 
  public boolean isSetMailingDtls() 
  { return isSetField(474); } 

  public void set(org.quickfix.field.MailingInst value) 
  { setField(value); } 
  public org.quickfix.field.MailingInst get(org.quickfix.field.MailingInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MailingInst getMailingInst() throws FieldNotFound 
  { org.quickfix.field.MailingInst value = new org.quickfix.field.MailingInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MailingInst field) 
  { return isSetField(field); } 
  public boolean isSetMailingInst() 
  { return isSetField(482); } 

  public void set(org.quickfix.field.OwnerType value) 
  { setField(value); } 
  public org.quickfix.field.OwnerType get(org.quickfix.field.OwnerType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OwnerType getOwnerType() throws FieldNotFound 
  { org.quickfix.field.OwnerType value = new org.quickfix.field.OwnerType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OwnerType field) 
  { return isSetField(field); } 
  public boolean isSetOwnerType() 
  { return isSetField(522); } 

  public void set(org.quickfix.field.DateOfBirth value) 
  { setField(value); } 
  public org.quickfix.field.DateOfBirth get(org.quickfix.field.DateOfBirth value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DateOfBirth getDateOfBirth() throws FieldNotFound 
  { org.quickfix.field.DateOfBirth value = new org.quickfix.field.DateOfBirth(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DateOfBirth field) 
  { return isSetField(field); } 
  public boolean isSetDateOfBirth() 
  { return isSetField(486); } 

  public void set(org.quickfix.field.InvestorCountryOfResidence value) 
  { setField(value); } 
  public org.quickfix.field.InvestorCountryOfResidence get(org.quickfix.field.InvestorCountryOfResidence value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InvestorCountryOfResidence getInvestorCountryOfResidence() throws FieldNotFound 
  { org.quickfix.field.InvestorCountryOfResidence value = new org.quickfix.field.InvestorCountryOfResidence(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.InvestorCountryOfResidence field) 
  { return isSetField(field); } 
  public boolean isSetInvestorCountryOfResidence() 
  { return isSetField(475); } 

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
  public void set(org.quickfix.field.NoDistribInsts value) 
  { setField(value); } 
  public org.quickfix.field.NoDistribInsts get(org.quickfix.field.NoDistribInsts value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoDistribInsts getNoDistribInsts() throws FieldNotFound 
  { org.quickfix.field.NoDistribInsts value = new org.quickfix.field.NoDistribInsts(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoDistribInsts field) 
  { return isSetField(field); } 
  public boolean isSetNoDistribInsts() 
  { return isSetField(510); } 

public static class NoDistribInsts extends Group { 
  public NoDistribInsts() { 
    super(510, 477, 
    new int[] { 
               477, 
               512, 
               478, 
               498, 
               499, 
               500, 
               501, 
               502, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.DistribPaymentMethod value) 
  { setField(value); } 
  public org.quickfix.field.DistribPaymentMethod get(org.quickfix.field.DistribPaymentMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DistribPaymentMethod getDistribPaymentMethod() throws FieldNotFound 
  { org.quickfix.field.DistribPaymentMethod value = new org.quickfix.field.DistribPaymentMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DistribPaymentMethod field) 
  { return isSetField(field); } 
  public boolean isSetDistribPaymentMethod() 
  { return isSetField(477); } 

  public void set(org.quickfix.field.DistribPercentage value) 
  { setField(value); } 
  public org.quickfix.field.DistribPercentage get(org.quickfix.field.DistribPercentage value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DistribPercentage getDistribPercentage() throws FieldNotFound 
  { org.quickfix.field.DistribPercentage value = new org.quickfix.field.DistribPercentage(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DistribPercentage field) 
  { return isSetField(field); } 
  public boolean isSetDistribPercentage() 
  { return isSetField(512); } 

  public void set(org.quickfix.field.CashDistribCurr value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribCurr get(org.quickfix.field.CashDistribCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribCurr getCashDistribCurr() throws FieldNotFound 
  { org.quickfix.field.CashDistribCurr value = new org.quickfix.field.CashDistribCurr(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribCurr field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribCurr() 
  { return isSetField(478); } 

  public void set(org.quickfix.field.CashDistribAgentName value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentName get(org.quickfix.field.CashDistribAgentName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentName getCashDistribAgentName() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentName value = new org.quickfix.field.CashDistribAgentName(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribAgentName field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribAgentName() 
  { return isSetField(498); } 

  public void set(org.quickfix.field.CashDistribAgentCode value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentCode get(org.quickfix.field.CashDistribAgentCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentCode getCashDistribAgentCode() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentCode value = new org.quickfix.field.CashDistribAgentCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribAgentCode field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribAgentCode() 
  { return isSetField(499); } 

  public void set(org.quickfix.field.CashDistribAgentAcctNumber value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentAcctNumber get(org.quickfix.field.CashDistribAgentAcctNumber value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentAcctNumber getCashDistribAgentAcctNumber() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentAcctNumber value = new org.quickfix.field.CashDistribAgentAcctNumber(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribAgentAcctNumber field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribAgentAcctNumber() 
  { return isSetField(500); } 

  public void set(org.quickfix.field.CashDistribPayRef value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribPayRef get(org.quickfix.field.CashDistribPayRef value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribPayRef getCashDistribPayRef() throws FieldNotFound 
  { org.quickfix.field.CashDistribPayRef value = new org.quickfix.field.CashDistribPayRef(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribPayRef field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribPayRef() 
  { return isSetField(501); } 

  public void set(org.quickfix.field.CashDistribAgentAcctName value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentAcctName get(org.quickfix.field.CashDistribAgentAcctName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentAcctName getCashDistribAgentAcctName() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentAcctName value = new org.quickfix.field.CashDistribAgentAcctName(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CashDistribAgentAcctName field) 
  { return isSetField(field); } 
  public boolean isSetCashDistribAgentAcctName() 
  { return isSetField(502); } 

} 
} 
