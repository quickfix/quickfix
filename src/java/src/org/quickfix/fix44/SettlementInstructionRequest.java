package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SettlementInstructionRequest extends Message 
{ 

  public SettlementInstructionRequest() 
  { 
    getHeader().setField(new MsgType("AV")); 
  } 
  public SettlementInstructionRequest(    
    org.quickfix.field.SettlInstReqID aSettlInstReqID,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("AV")); 
    set(aSettlInstReqID); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.SettlInstReqID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstReqID get(org.quickfix.field.SettlInstReqID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstReqID getSettlInstReqID() throws FieldNotFound 
  { org.quickfix.field.SettlInstReqID value = new org.quickfix.field.SettlInstReqID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstReqID field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstReqID() 
  { return isSetField(791); } 

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

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Side field) 
  { return isSetField(field); } 
  public boolean isSetSide() 
  { return isSetField(54); } 

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

  public void set(org.quickfix.field.CFICode value) 
  { setField(value); } 
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CFICode getCFICode() throws FieldNotFound 
  { org.quickfix.field.CFICode value = new org.quickfix.field.CFICode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CFICode field) 
  { return isSetField(field); } 
  public boolean isSetCFICode() 
  { return isSetField(461); } 

  public void set(org.quickfix.field.EffectiveTime value) 
  { setField(value); } 
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound 
  { org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EffectiveTime field) 
  { return isSetField(field); } 
  public boolean isSetEffectiveTime() 
  { return isSetField(168); } 

  public void set(org.quickfix.field.ExpireTime value) 
  { setField(value); } 
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound 
  { org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExpireTime field) 
  { return isSetField(field); } 
  public boolean isSetExpireTime() 
  { return isSetField(126); } 

  public void set(org.quickfix.field.LastUpdateTime value) 
  { setField(value); } 
  public org.quickfix.field.LastUpdateTime get(org.quickfix.field.LastUpdateTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastUpdateTime getLastUpdateTime() throws FieldNotFound 
  { org.quickfix.field.LastUpdateTime value = new org.quickfix.field.LastUpdateTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LastUpdateTime field) 
  { return isSetField(field); } 
  public boolean isSetLastUpdateTime() 
  { return isSetField(779); } 

  public void set(org.quickfix.field.StandInstDbType value) 
  { setField(value); } 
  public org.quickfix.field.StandInstDbType get(org.quickfix.field.StandInstDbType value) throws FieldNotFound 
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
  public org.quickfix.field.StandInstDbName get(org.quickfix.field.StandInstDbName value) throws FieldNotFound 
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
  public org.quickfix.field.StandInstDbID get(org.quickfix.field.StandInstDbID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StandInstDbID getStandInstDbID() throws FieldNotFound 
  { org.quickfix.field.StandInstDbID value = new org.quickfix.field.StandInstDbID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.StandInstDbID field) 
  { return isSetField(field); } 
  public boolean isSetStandInstDbID() 
  { return isSetField(171); } 
} 
