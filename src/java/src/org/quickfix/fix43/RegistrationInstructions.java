package org.quickfix.fix43; 
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

  public void set(org.quickfix.field.RegistTransType value) 
  { setField(value); } 
  public org.quickfix.field.RegistTransType get(org.quickfix.field.RegistTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistTransType getRegistTransType() throws FieldNotFound 
  { org.quickfix.field.RegistTransType value = new org.quickfix.field.RegistTransType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RegistRefID value) 
  { setField(value); } 
  public org.quickfix.field.RegistRefID get(org.quickfix.field.RegistRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistRefID getRegistRefID() throws FieldNotFound 
  { org.quickfix.field.RegistRefID value = new org.quickfix.field.RegistRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NoPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoPartyIDs get(org.quickfix.field.NoPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoPartyIDs getNoPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoPartyIDs value = new org.quickfix.field.NoPartyIDs(); 
    getField(value); return value; } 

public static class NoPartyIDs extends Group { 
  public NoPartyIDs() { 
    super(453, 447, 
    new int[] { 
               448, 
               447, 
               452, 
               523, 
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

  public void set(org.quickfix.field.PartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.PartyIDSource get(org.quickfix.field.PartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyIDSource getPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.PartyIDSource value = new org.quickfix.field.PartyIDSource(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PartyRole value) 
  { setField(value); } 
  public org.quickfix.field.PartyRole get(org.quickfix.field.PartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartyRole getPartyRole() throws FieldNotFound 
  { org.quickfix.field.PartyRole value = new org.quickfix.field.PartyRole(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PartySubID value) 
  { setField(value); } 
  public org.quickfix.field.PartySubID get(org.quickfix.field.PartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PartySubID getPartySubID() throws FieldNotFound 
  { org.quickfix.field.PartySubID value = new org.quickfix.field.PartySubID(); 
    getField(value); return value; } 

} 

  public void set(org.quickfix.field.Account value) 
  { setField(value); } 
  public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Account getAccount() throws FieldNotFound 
  { org.quickfix.field.Account value = new org.quickfix.field.Account(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RegistAcctType value) 
  { setField(value); } 
  public org.quickfix.field.RegistAcctType get(org.quickfix.field.RegistAcctType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistAcctType getRegistAcctType() throws FieldNotFound 
  { org.quickfix.field.RegistAcctType value = new org.quickfix.field.RegistAcctType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TaxAdvantageType value) 
  { setField(value); } 
  public org.quickfix.field.TaxAdvantageType get(org.quickfix.field.TaxAdvantageType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TaxAdvantageType getTaxAdvantageType() throws FieldNotFound 
  { org.quickfix.field.TaxAdvantageType value = new org.quickfix.field.TaxAdvantageType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OwnershipType value) 
  { setField(value); } 
  public org.quickfix.field.OwnershipType get(org.quickfix.field.OwnershipType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OwnershipType getOwnershipType() throws FieldNotFound 
  { org.quickfix.field.OwnershipType value = new org.quickfix.field.OwnershipType(); 
    getField(value); return value; } 
  public void set(org.quickfix.field.NoRegistDtls value) 
  { setField(value); } 
  public org.quickfix.field.NoRegistDtls get(org.quickfix.field.NoRegistDtls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoRegistDtls getNoRegistDtls() throws FieldNotFound 
  { org.quickfix.field.NoRegistDtls value = new org.quickfix.field.NoRegistDtls(); 
    getField(value); return value; } 

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
  public void set(org.quickfix.field.RegistDetls value) 
  { setField(value); } 
  public org.quickfix.field.RegistDetls get(org.quickfix.field.RegistDetls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistDetls getRegistDetls() throws FieldNotFound 
  { org.quickfix.field.RegistDetls value = new org.quickfix.field.RegistDetls(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.RegistEmail value) 
  { setField(value); } 
  public org.quickfix.field.RegistEmail get(org.quickfix.field.RegistEmail value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.RegistEmail getRegistEmail() throws FieldNotFound 
  { org.quickfix.field.RegistEmail value = new org.quickfix.field.RegistEmail(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MailingDtls value) 
  { setField(value); } 
  public org.quickfix.field.MailingDtls get(org.quickfix.field.MailingDtls value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MailingDtls getMailingDtls() throws FieldNotFound 
  { org.quickfix.field.MailingDtls value = new org.quickfix.field.MailingDtls(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.MailingInst value) 
  { setField(value); } 
  public org.quickfix.field.MailingInst get(org.quickfix.field.MailingInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MailingInst getMailingInst() throws FieldNotFound 
  { org.quickfix.field.MailingInst value = new org.quickfix.field.MailingInst(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.OwnerType value) 
  { setField(value); } 
  public org.quickfix.field.OwnerType get(org.quickfix.field.OwnerType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OwnerType getOwnerType() throws FieldNotFound 
  { org.quickfix.field.OwnerType value = new org.quickfix.field.OwnerType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.DateOfBirth value) 
  { setField(value); } 
  public org.quickfix.field.DateOfBirth get(org.quickfix.field.DateOfBirth value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DateOfBirth getDateOfBirth() throws FieldNotFound 
  { org.quickfix.field.DateOfBirth value = new org.quickfix.field.DateOfBirth(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.InvestorCountryOfResidence value) 
  { setField(value); } 
  public org.quickfix.field.InvestorCountryOfResidence get(org.quickfix.field.InvestorCountryOfResidence value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.InvestorCountryOfResidence getInvestorCountryOfResidence() throws FieldNotFound 
  { org.quickfix.field.InvestorCountryOfResidence value = new org.quickfix.field.InvestorCountryOfResidence(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NoNestedPartyIDs value) 
  { setField(value); } 
  public org.quickfix.field.NoNestedPartyIDs get(org.quickfix.field.NoNestedPartyIDs value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoNestedPartyIDs getNoNestedPartyIDs() throws FieldNotFound 
  { org.quickfix.field.NoNestedPartyIDs value = new org.quickfix.field.NoNestedPartyIDs(); 
    getField(value); return value; } 

public static class NoNestedPartyIDs extends Group { 
  public NoNestedPartyIDs() { 
    super(539, 524, 
    new int[] { 
               524, 
               525, 
               538, 
               545, 
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

  public void set(org.quickfix.field.NestedPartyIDSource value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyIDSource get(org.quickfix.field.NestedPartyIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyIDSource getNestedPartyIDSource() throws FieldNotFound 
  { org.quickfix.field.NestedPartyIDSource value = new org.quickfix.field.NestedPartyIDSource(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NestedPartyRole value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartyRole get(org.quickfix.field.NestedPartyRole value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartyRole getNestedPartyRole() throws FieldNotFound 
  { org.quickfix.field.NestedPartyRole value = new org.quickfix.field.NestedPartyRole(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.NestedPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.NestedPartySubID get(org.quickfix.field.NestedPartySubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NestedPartySubID getNestedPartySubID() throws FieldNotFound 
  { org.quickfix.field.NestedPartySubID value = new org.quickfix.field.NestedPartySubID(); 
    getField(value); return value; } 

} 
} 
  public void set(org.quickfix.field.NoDistribInsts value) 
  { setField(value); } 
  public org.quickfix.field.NoDistribInsts get(org.quickfix.field.NoDistribInsts value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoDistribInsts getNoDistribInsts() throws FieldNotFound 
  { org.quickfix.field.NoDistribInsts value = new org.quickfix.field.NoDistribInsts(); 
    getField(value); return value; } 

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

  public void set(org.quickfix.field.DistribPercentage value) 
  { setField(value); } 
  public org.quickfix.field.DistribPercentage get(org.quickfix.field.DistribPercentage value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DistribPercentage getDistribPercentage() throws FieldNotFound 
  { org.quickfix.field.DistribPercentage value = new org.quickfix.field.DistribPercentage(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribCurr value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribCurr get(org.quickfix.field.CashDistribCurr value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribCurr getCashDistribCurr() throws FieldNotFound 
  { org.quickfix.field.CashDistribCurr value = new org.quickfix.field.CashDistribCurr(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribAgentName value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentName get(org.quickfix.field.CashDistribAgentName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentName getCashDistribAgentName() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentName value = new org.quickfix.field.CashDistribAgentName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribAgentCode value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentCode get(org.quickfix.field.CashDistribAgentCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentCode getCashDistribAgentCode() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentCode value = new org.quickfix.field.CashDistribAgentCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribAgentAcctNumber value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentAcctNumber get(org.quickfix.field.CashDistribAgentAcctNumber value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentAcctNumber getCashDistribAgentAcctNumber() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentAcctNumber value = new org.quickfix.field.CashDistribAgentAcctNumber(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribPayRef value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribPayRef get(org.quickfix.field.CashDistribPayRef value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribPayRef getCashDistribPayRef() throws FieldNotFound 
  { org.quickfix.field.CashDistribPayRef value = new org.quickfix.field.CashDistribPayRef(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashDistribAgentAcctName value) 
  { setField(value); } 
  public org.quickfix.field.CashDistribAgentAcctName get(org.quickfix.field.CashDistribAgentAcctName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashDistribAgentAcctName getCashDistribAgentAcctName() throws FieldNotFound 
  { org.quickfix.field.CashDistribAgentAcctName value = new org.quickfix.field.CashDistribAgentAcctName(); 
    getField(value); return value; } 

} 
} 
