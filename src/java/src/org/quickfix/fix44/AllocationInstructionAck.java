package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class AllocationInstructionAck extends Message 
{ 

  public AllocationInstructionAck() 
  { 
    getHeader().setField(new MsgType("P")); 
  } 
  public AllocationInstructionAck(    
    org.quickfix.field.AllocID aAllocID,    
    org.quickfix.field.TransactTime aTransactTime,    
    org.quickfix.field.AllocStatus aAllocStatus ) 
  {  
    getHeader().setField(new MsgType("P")); 
    set(aAllocID); 
    set(aTransactTime); 
    set(aAllocStatus);  
  } 

  public void set(org.quickfix.field.AllocID value) 
  { setField(value); } 
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound 
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocID field) 
  { return isSetField(field); } 
  public boolean isSetAllocID() 
  { return isSetField(70); } 
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

  public void set(org.quickfix.field.SecondaryAllocID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryAllocID get(org.quickfix.field.SecondaryAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecondaryAllocID getSecondaryAllocID() throws FieldNotFound 
  { org.quickfix.field.SecondaryAllocID value = new org.quickfix.field.SecondaryAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecondaryAllocID field) 
  { return isSetField(field); } 
  public boolean isSetSecondaryAllocID() 
  { return isSetField(793); } 

  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
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
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TransactTime field) 
  { return isSetField(field); } 
  public boolean isSetTransactTime() 
  { return isSetField(60); } 

  public void set(org.quickfix.field.AllocStatus value) 
  { setField(value); } 
  public org.quickfix.field.AllocStatus get(org.quickfix.field.AllocStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocStatus getAllocStatus() throws FieldNotFound 
  { org.quickfix.field.AllocStatus value = new org.quickfix.field.AllocStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocStatus field) 
  { return isSetField(field); } 
  public boolean isSetAllocStatus() 
  { return isSetField(87); } 

  public void set(org.quickfix.field.AllocRejCode value) 
  { setField(value); } 
  public org.quickfix.field.AllocRejCode get(org.quickfix.field.AllocRejCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocRejCode getAllocRejCode() throws FieldNotFound 
  { org.quickfix.field.AllocRejCode value = new org.quickfix.field.AllocRejCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocRejCode field) 
  { return isSetField(field); } 
  public boolean isSetAllocRejCode() 
  { return isSetField(88); } 

  public void set(org.quickfix.field.AllocType value) 
  { setField(value); } 
  public org.quickfix.field.AllocType get(org.quickfix.field.AllocType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocType getAllocType() throws FieldNotFound 
  { org.quickfix.field.AllocType value = new org.quickfix.field.AllocType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocType field) 
  { return isSetField(field); } 
  public boolean isSetAllocType() 
  { return isSetField(626); } 

  public void set(org.quickfix.field.AllocIntermedReqType value) 
  { setField(value); } 
  public org.quickfix.field.AllocIntermedReqType get(org.quickfix.field.AllocIntermedReqType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocIntermedReqType getAllocIntermedReqType() throws FieldNotFound 
  { org.quickfix.field.AllocIntermedReqType value = new org.quickfix.field.AllocIntermedReqType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocIntermedReqType field) 
  { return isSetField(field); } 
  public boolean isSetAllocIntermedReqType() 
  { return isSetField(808); } 

  public void set(org.quickfix.field.MatchStatus value) 
  { setField(value); } 
  public org.quickfix.field.MatchStatus get(org.quickfix.field.MatchStatus value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MatchStatus getMatchStatus() throws FieldNotFound 
  { org.quickfix.field.MatchStatus value = new org.quickfix.field.MatchStatus(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MatchStatus field) 
  { return isSetField(field); } 
  public boolean isSetMatchStatus() 
  { return isSetField(573); } 

  public void set(org.quickfix.field.Product value) 
  { setField(value); } 
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Product getProduct() throws FieldNotFound 
  { org.quickfix.field.Product value = new org.quickfix.field.Product(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Product field) 
  { return isSetField(field); } 
  public boolean isSetProduct() 
  { return isSetField(460); } 

  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SecurityType field) 
  { return isSetField(field); } 
  public boolean isSetSecurityType() 
  { return isSetField(167); } 

  public void set(org.quickfix.field.Text value) 
  { setField(value); } 
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound 
  { org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedText() 
  { return isSetField(355); } 
  public void set(org.quickfix.field.NoAllocs value) 
  { setField(value); } 
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound 
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
    super(78, 79, 
    new int[] { 
               79, 
               661, 
               366, 
               467, 
               776, 
               161, 
               360, 
               361, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
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
  public org.quickfix.field.AllocAcctIDSource get(org.quickfix.field.AllocAcctIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAcctIDSource getAllocAcctIDSource() throws FieldNotFound 
  { org.quickfix.field.AllocAcctIDSource value = new org.quickfix.field.AllocAcctIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocAcctIDSource field) 
  { return isSetField(field); } 
  public boolean isSetAllocAcctIDSource() 
  { return isSetField(661); } 

  public void set(org.quickfix.field.AllocPrice value) 
  { setField(value); } 
  public org.quickfix.field.AllocPrice get(org.quickfix.field.AllocPrice value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound 
  { org.quickfix.field.AllocPrice value = new org.quickfix.field.AllocPrice(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocPrice field) 
  { return isSetField(field); } 
  public boolean isSetAllocPrice() 
  { return isSetField(366); } 

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IndividualAllocID field) 
  { return isSetField(field); } 
  public boolean isSetIndividualAllocID() 
  { return isSetField(467); } 

  public void set(org.quickfix.field.IndividualAllocRejCode value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocRejCode get(org.quickfix.field.IndividualAllocRejCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocRejCode getIndividualAllocRejCode() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocRejCode value = new org.quickfix.field.IndividualAllocRejCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.IndividualAllocRejCode field) 
  { return isSetField(field); } 
  public boolean isSetIndividualAllocRejCode() 
  { return isSetField(776); } 

  public void set(org.quickfix.field.AllocText value) 
  { setField(value); } 
  public org.quickfix.field.AllocText get(org.quickfix.field.AllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocText getAllocText() throws FieldNotFound 
  { org.quickfix.field.AllocText value = new org.quickfix.field.AllocText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocText field) 
  { return isSetField(field); } 
  public boolean isSetAllocText() 
  { return isSetField(161); } 

  public void set(org.quickfix.field.EncodedAllocTextLen value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocTextLen get(org.quickfix.field.EncodedAllocTextLen value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocTextLen value = new org.quickfix.field.EncodedAllocTextLen(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedAllocTextLen field) 
  { return isSetField(field); } 
  public boolean isSetEncodedAllocTextLen() 
  { return isSetField(360); } 

  public void set(org.quickfix.field.EncodedAllocText value) 
  { setField(value); } 
  public org.quickfix.field.EncodedAllocText get(org.quickfix.field.EncodedAllocText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound 
  { org.quickfix.field.EncodedAllocText value = new org.quickfix.field.EncodedAllocText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EncodedAllocText field) 
  { return isSetField(field); } 
  public boolean isSetEncodedAllocText() 
  { return isSetField(361); } 

} 
} 
