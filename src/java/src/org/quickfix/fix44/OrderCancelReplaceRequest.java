package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class OrderCancelReplaceRequest extends Message 
{ 

  public OrderCancelReplaceRequest() 
  { 
    getHeader().setField(new MsgType("G")); 
  } 
  public OrderCancelReplaceRequest(    
    org.quickfix.field.OrigClOrdID aOrigClOrdID,    
    org.quickfix.field.ClOrdID aClOrdID,    
    org.quickfix.field.Side aSide,    
    org.quickfix.field.TransactTime aTransactTime,    
    org.quickfix.field.OrdType aOrdType ) 
  {  
    getHeader().setField(new MsgType("G")); 
    set(aOrigClOrdID); 
    set(aClOrdID); 
    set(aSide); 
    set(aTransactTime); 
    set(aOrdType);  
  } 

  public void set(org.quickfix.field.OrderID value) 
  { setField(value); } 
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound 
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrderID field) 
  { return isSetField(field); } 
  public boolean isSetOrderID() 
  { return isSetField(37); } 
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

  public void set(org.quickfix.field.TradeOriginationDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeOriginationDate get(org.quickfix.field.TradeOriginationDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeOriginationDate getTradeOriginationDate() throws FieldNotFound 
  { org.quickfix.field.TradeOriginationDate value = new org.quickfix.field.TradeOriginationDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradeOriginationDate field) 
  { return isSetField(field); } 
  public boolean isSetTradeOriginationDate() 
  { return isSetField(229); } 

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

  public void set(org.quickfix.field.OrigClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound 
  { org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigClOrdID field) 
  { return isSetField(field); } 
  public boolean isSetOrigClOrdID() 
  { return isSetField(41); } 

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

  public void set(org.quickfix.field.SecondaryClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.SecondaryClOrdID get(org.quickfix.field.SecondaryClOrdID value) throws FieldNotFound 
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
  public org.quickfix.field.ClOrdLinkID get(org.quickfix.field.ClOrdLinkID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdLinkID getClOrdLinkID() throws FieldNotFound 
  { org.quickfix.field.ClOrdLinkID value = new org.quickfix.field.ClOrdLinkID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ClOrdLinkID field) 
  { return isSetField(field); } 
  public boolean isSetClOrdLinkID() 
  { return isSetField(583); } 

  public void set(org.quickfix.field.ListID value) 
  { setField(value); } 
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ListID getListID() throws FieldNotFound 
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ListID field) 
  { return isSetField(field); } 
  public boolean isSetListID() 
  { return isSetField(66); } 

  public void set(org.quickfix.field.OrigOrdModTime value) 
  { setField(value); } 
  public org.quickfix.field.OrigOrdModTime get(org.quickfix.field.OrigOrdModTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.OrigOrdModTime getOrigOrdModTime() throws FieldNotFound 
  { org.quickfix.field.OrigOrdModTime value = new org.quickfix.field.OrigOrdModTime(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.OrigOrdModTime field) 
  { return isSetField(field); } 
  public boolean isSetOrigOrdModTime() 
  { return isSetField(586); } 

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

  public void set(org.quickfix.field.AccountType value) 
  { setField(value); } 
  public org.quickfix.field.AccountType get(org.quickfix.field.AccountType value) throws FieldNotFound 
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
  public org.quickfix.field.DayBookingInst get(org.quickfix.field.DayBookingInst value) throws FieldNotFound 
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
  public org.quickfix.field.BookingUnit get(org.quickfix.field.BookingUnit value) throws FieldNotFound 
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
  public org.quickfix.field.PreallocMethod get(org.quickfix.field.PreallocMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PreallocMethod getPreallocMethod() throws FieldNotFound 
  { org.quickfix.field.PreallocMethod value = new org.quickfix.field.PreallocMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PreallocMethod field) 
  { return isSetField(field); } 
  public boolean isSetPreallocMethod() 
  { return isSetField(591); } 

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
               736, 
               467, 
               80, 
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

  public void set(org.quickfix.field.AllocSettlCurrency value) 
  { setField(value); } 
  public org.quickfix.field.AllocSettlCurrency get(org.quickfix.field.AllocSettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocSettlCurrency getAllocSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.AllocSettlCurrency value = new org.quickfix.field.AllocSettlCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocSettlCurrency field) 
  { return isSetField(field); } 
  public boolean isSetAllocSettlCurrency() 
  { return isSetField(736); } 

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

  public void set(org.quickfix.field.AllocQty value) 
  { setField(value); } 
  public org.quickfix.field.AllocQty get(org.quickfix.field.AllocQty value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocQty getAllocQty() throws FieldNotFound 
  { org.quickfix.field.AllocQty value = new org.quickfix.field.AllocQty(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.AllocQty field) 
  { return isSetField(field); } 
  public boolean isSetAllocQty() 
  { return isSetField(80); } 

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

  public void set(org.quickfix.field.SettlType value) 
  { setField(value); } 
  public org.quickfix.field.SettlType get(org.quickfix.field.SettlType value) throws FieldNotFound 
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
  public org.quickfix.field.SettlDate get(org.quickfix.field.SettlDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlDate getSettlDate() throws FieldNotFound 
  { org.quickfix.field.SettlDate value = new org.quickfix.field.SettlDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlDate field) 
  { return isSetField(field); } 
  public boolean isSetSettlDate() 
  { return isSetField(64); } 

  public void set(org.quickfix.field.CashMargin value) 
  { setField(value); } 
  public org.quickfix.field.CashMargin get(org.quickfix.field.CashMargin value) throws FieldNotFound 
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
  public org.quickfix.field.ClearingFeeIndicator get(org.quickfix.field.ClearingFeeIndicator value) throws FieldNotFound 
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
  public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound 
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
  public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound 
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
  public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound 
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
  public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound 
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
  public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound 
  { org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ExDestination field) 
  { return isSetField(field); } 
  public boolean isSetExDestination() 
  { return isSetField(100); } 
  public void set(org.quickfix.field.NoTradingSessions value) 
  { setField(value); } 
  public org.quickfix.field.NoTradingSessions get(org.quickfix.field.NoTradingSessions value) throws FieldNotFound 
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
    super(386, 336, 
    new int[] { 
               336, 
               625, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
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
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TradingSessionSubID field) 
  { return isSetField(field); } 
  public boolean isSetTradingSessionSubID() 
  { return isSetField(625); } 

} 
  public void set(org.quickfix.field.Symbol value) 
  { setField(value); } 
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound 
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
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityIDSource get(org.quickfix.field.SecurityIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.Product get(org.quickfix.field.Product value) throws FieldNotFound 
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
  public org.quickfix.field.CFICode get(org.quickfix.field.CFICode value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.SecuritySubType get(org.quickfix.field.SecuritySubType value) throws FieldNotFound 
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
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound 
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
  public org.quickfix.field.MaturityDate get(org.quickfix.field.MaturityDate value) throws FieldNotFound 
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
  public org.quickfix.field.CouponPaymentDate get(org.quickfix.field.CouponPaymentDate value) throws FieldNotFound 
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
  public org.quickfix.field.IssueDate get(org.quickfix.field.IssueDate value) throws FieldNotFound 
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
  public org.quickfix.field.RepoCollateralSecurityType get(org.quickfix.field.RepoCollateralSecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.RepurchaseTerm get(org.quickfix.field.RepurchaseTerm value) throws FieldNotFound 
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
  public org.quickfix.field.RepurchaseRate get(org.quickfix.field.RepurchaseRate value) throws FieldNotFound 
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
  public org.quickfix.field.Factor get(org.quickfix.field.Factor value) throws FieldNotFound 
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
  public org.quickfix.field.CreditRating get(org.quickfix.field.CreditRating value) throws FieldNotFound 
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
  public org.quickfix.field.InstrRegistry get(org.quickfix.field.InstrRegistry value) throws FieldNotFound 
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
  public org.quickfix.field.CountryOfIssue get(org.quickfix.field.CountryOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.StateOrProvinceOfIssue get(org.quickfix.field.StateOrProvinceOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.LocaleOfIssue get(org.quickfix.field.LocaleOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.RedemptionDate get(org.quickfix.field.RedemptionDate value) throws FieldNotFound 
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
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound 
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
  public org.quickfix.field.StrikeCurrency get(org.quickfix.field.StrikeCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound 
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
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier value) throws FieldNotFound 
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
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound 
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
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.Pool get(org.quickfix.field.Pool value) throws FieldNotFound 
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
  public org.quickfix.field.ContractSettlMonth get(org.quickfix.field.ContractSettlMonth value) throws FieldNotFound 
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
  public org.quickfix.field.CPProgram get(org.quickfix.field.CPProgram value) throws FieldNotFound 
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
  public org.quickfix.field.CPRegType get(org.quickfix.field.CPRegType value) throws FieldNotFound 
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
  public org.quickfix.field.DatedDate get(org.quickfix.field.DatedDate value) throws FieldNotFound 
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
  public org.quickfix.field.InterestAccrualDate get(org.quickfix.field.InterestAccrualDate value) throws FieldNotFound 
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
  public org.quickfix.field.NoSecurityAltID get(org.quickfix.field.NoSecurityAltID value) throws FieldNotFound 
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
    super(454, 455, 
    new int[] { 
               455, 
               456, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.SecurityAltID get(org.quickfix.field.SecurityAltID value) throws FieldNotFound 
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
  public org.quickfix.field.SecurityAltIDSource get(org.quickfix.field.SecurityAltIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.NoEvents get(org.quickfix.field.NoEvents value) throws FieldNotFound 
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
    super(864, 865, 
    new int[] { 
               865, 
               866, 
               867, 
               868, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.EventType value) 
  { setField(value); } 
  public org.quickfix.field.EventType get(org.quickfix.field.EventType value) throws FieldNotFound 
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
  public org.quickfix.field.EventDate get(org.quickfix.field.EventDate value) throws FieldNotFound 
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
  public org.quickfix.field.EventPx get(org.quickfix.field.EventPx value) throws FieldNotFound 
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
  public org.quickfix.field.EventText get(org.quickfix.field.EventText value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EventText getEventText() throws FieldNotFound 
  { org.quickfix.field.EventText value = new org.quickfix.field.EventText(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.EventText field) 
  { return isSetField(field); } 
  public boolean isSetEventText() 
  { return isSetField(868); } 

} 
  public void set(org.quickfix.field.AgreementDesc value) 
  { setField(value); } 
  public org.quickfix.field.AgreementDesc get(org.quickfix.field.AgreementDesc value) throws FieldNotFound 
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
  public org.quickfix.field.AgreementID get(org.quickfix.field.AgreementID value) throws FieldNotFound 
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
  public org.quickfix.field.AgreementDate get(org.quickfix.field.AgreementDate value) throws FieldNotFound 
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
  public org.quickfix.field.AgreementCurrency get(org.quickfix.field.AgreementCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.TerminationType get(org.quickfix.field.TerminationType value) throws FieldNotFound 
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
  public org.quickfix.field.StartDate get(org.quickfix.field.StartDate value) throws FieldNotFound 
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
  public org.quickfix.field.EndDate get(org.quickfix.field.EndDate value) throws FieldNotFound 
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
  public org.quickfix.field.DeliveryType get(org.quickfix.field.DeliveryType value) throws FieldNotFound 
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
  public org.quickfix.field.MarginRatio get(org.quickfix.field.MarginRatio value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MarginRatio getMarginRatio() throws FieldNotFound 
  { org.quickfix.field.MarginRatio value = new org.quickfix.field.MarginRatio(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MarginRatio field) 
  { return isSetField(field); } 
  public boolean isSetMarginRatio() 
  { return isSetField(898); } 
  public void set(org.quickfix.field.NoUnderlyings value) 
  { setField(value); } 
  public org.quickfix.field.NoUnderlyings get(org.quickfix.field.NoUnderlyings value) throws FieldNotFound 
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
    super(711, 311, 
    new int[] { 
             311, 
             312, 
             309, 
             305, 
             462, 
             463, 
             310, 
             763, 
             313, 
             542, 
             241, 
             242, 
             243, 
             244, 
             245, 
             246, 
             256, 
             595, 
             592, 
             593, 
             594, 
             247, 
             316, 
             941, 
             317, 
             436, 
             435, 
             308, 
             306, 
             362, 
             363, 
             307, 
             364, 
             365, 
             877, 
             878, 
             318, 
             879, 
             810, 
             882, 
             883, 
             884, 
             885, 
             886, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.UnderlyingSymbol value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSymbol get(org.quickfix.field.UnderlyingSymbol value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSymbolSfx get(org.quickfix.field.UnderlyingSymbolSfx value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityID get(org.quickfix.field.UnderlyingSecurityID value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityIDSource get(org.quickfix.field.UnderlyingSecurityIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingProduct get(org.quickfix.field.UnderlyingProduct value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCFICode get(org.quickfix.field.UnderlyingCFICode value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityType get(org.quickfix.field.UnderlyingSecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecuritySubType get(org.quickfix.field.UnderlyingSecuritySubType value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingMaturityMonthYear get(org.quickfix.field.UnderlyingMaturityMonthYear value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingMaturityDate get(org.quickfix.field.UnderlyingMaturityDate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCouponPaymentDate get(org.quickfix.field.UnderlyingCouponPaymentDate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingIssueDate get(org.quickfix.field.UnderlyingIssueDate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingRepoCollateralSecurityType get(org.quickfix.field.UnderlyingRepoCollateralSecurityType value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingRepurchaseTerm get(org.quickfix.field.UnderlyingRepurchaseTerm value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingRepurchaseRate get(org.quickfix.field.UnderlyingRepurchaseRate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingFactor get(org.quickfix.field.UnderlyingFactor value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCreditRating get(org.quickfix.field.UnderlyingCreditRating value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingInstrRegistry get(org.quickfix.field.UnderlyingInstrRegistry value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCountryOfIssue get(org.quickfix.field.UnderlyingCountryOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingStateOrProvinceOfIssue get(org.quickfix.field.UnderlyingStateOrProvinceOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingLocaleOfIssue get(org.quickfix.field.UnderlyingLocaleOfIssue value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingRedemptionDate get(org.quickfix.field.UnderlyingRedemptionDate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingStrikePrice get(org.quickfix.field.UnderlyingStrikePrice value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingStrikeCurrency get(org.quickfix.field.UnderlyingStrikeCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingOptAttribute get(org.quickfix.field.UnderlyingOptAttribute value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingContractMultiplier get(org.quickfix.field.UnderlyingContractMultiplier value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCouponRate get(org.quickfix.field.UnderlyingCouponRate value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityExchange get(org.quickfix.field.UnderlyingSecurityExchange value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingIssuer get(org.quickfix.field.UnderlyingIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingIssuerLen get(org.quickfix.field.EncodedUnderlyingIssuerLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingIssuer get(org.quickfix.field.EncodedUnderlyingIssuer value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityDesc get(org.quickfix.field.UnderlyingSecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingSecurityDescLen get(org.quickfix.field.EncodedUnderlyingSecurityDescLen value) throws FieldNotFound 
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
  public org.quickfix.field.EncodedUnderlyingSecurityDesc get(org.quickfix.field.EncodedUnderlyingSecurityDesc value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCPProgram get(org.quickfix.field.UnderlyingCPProgram value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCPRegType get(org.quickfix.field.UnderlyingCPRegType value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCurrency get(org.quickfix.field.UnderlyingCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingQty get(org.quickfix.field.UnderlyingQty value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingPx get(org.quickfix.field.UnderlyingPx value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingDirtyPrice get(org.quickfix.field.UnderlyingDirtyPrice value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingEndPrice get(org.quickfix.field.UnderlyingEndPrice value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingStartValue get(org.quickfix.field.UnderlyingStartValue value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingCurrentValue get(org.quickfix.field.UnderlyingCurrentValue value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingEndValue get(org.quickfix.field.UnderlyingEndValue value) throws FieldNotFound 
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
  public org.quickfix.field.NoUnderlyingSecurityAltID get(org.quickfix.field.NoUnderlyingSecurityAltID value) throws FieldNotFound 
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
    super(457, 458, 
    new int[] { 
               458, 
               459, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.UnderlyingSecurityAltID value) 
  { setField(value); } 
  public org.quickfix.field.UnderlyingSecurityAltID get(org.quickfix.field.UnderlyingSecurityAltID value) throws FieldNotFound 
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
  public org.quickfix.field.UnderlyingSecurityAltIDSource get(org.quickfix.field.UnderlyingSecurityAltIDSource value) throws FieldNotFound 
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

  public void set(org.quickfix.field.QtyType value) 
  { setField(value); } 
  public org.quickfix.field.QtyType get(org.quickfix.field.QtyType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.QtyType getQtyType() throws FieldNotFound 
  { org.quickfix.field.QtyType value = new org.quickfix.field.QtyType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.QtyType field) 
  { return isSetField(field); } 
  public boolean isSetQtyType() 
  { return isSetField(854); } 
  public void set(org.quickfix.field.OrderQty value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound 
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
  public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound 
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
  public org.quickfix.field.OrderPercent get(org.quickfix.field.OrderPercent value) throws FieldNotFound 
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
  public org.quickfix.field.RoundingDirection get(org.quickfix.field.RoundingDirection value) throws FieldNotFound 
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
  public org.quickfix.field.RoundingModulus get(org.quickfix.field.RoundingModulus value) throws FieldNotFound 
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
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound 
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
  public org.quickfix.field.PriceType get(org.quickfix.field.PriceType value) throws FieldNotFound 
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
  public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound 
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
  public org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound 
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
  public org.quickfix.field.Spread get(org.quickfix.field.Spread value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkCurveCurrency get(org.quickfix.field.BenchmarkCurveCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkCurveName get(org.quickfix.field.BenchmarkCurveName value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkCurvePoint get(org.quickfix.field.BenchmarkCurvePoint value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkPrice get(org.quickfix.field.BenchmarkPrice value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkPriceType get(org.quickfix.field.BenchmarkPriceType value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkSecurityID get(org.quickfix.field.BenchmarkSecurityID value) throws FieldNotFound 
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
  public org.quickfix.field.BenchmarkSecurityIDSource get(org.quickfix.field.BenchmarkSecurityIDSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource() throws FieldNotFound 
  { org.quickfix.field.BenchmarkSecurityIDSource value = new org.quickfix.field.BenchmarkSecurityIDSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BenchmarkSecurityIDSource field) 
  { return isSetField(field); } 
  public boolean isSetBenchmarkSecurityIDSource() 
  { return isSetField(761); } 
  public void set(org.quickfix.field.YieldType value) 
  { setField(value); } 
  public org.quickfix.field.YieldType get(org.quickfix.field.YieldType value) throws FieldNotFound 
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
  public org.quickfix.field.Yield get(org.quickfix.field.Yield value) throws FieldNotFound 
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
  public org.quickfix.field.YieldCalcDate get(org.quickfix.field.YieldCalcDate value) throws FieldNotFound 
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
  public org.quickfix.field.YieldRedemptionDate get(org.quickfix.field.YieldRedemptionDate value) throws FieldNotFound 
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
  public org.quickfix.field.YieldRedemptionPrice get(org.quickfix.field.YieldRedemptionPrice value) throws FieldNotFound 
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
  public org.quickfix.field.YieldRedemptionPriceType get(org.quickfix.field.YieldRedemptionPriceType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.YieldRedemptionPriceType getYieldRedemptionPriceType() throws FieldNotFound 
  { org.quickfix.field.YieldRedemptionPriceType value = new org.quickfix.field.YieldRedemptionPriceType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.YieldRedemptionPriceType field) 
  { return isSetField(field); } 
  public boolean isSetYieldRedemptionPriceType() 
  { return isSetField(698); } 
  public void set(org.quickfix.field.PegOffsetValue value) 
  { setField(value); } 
  public org.quickfix.field.PegOffsetValue get(org.quickfix.field.PegOffsetValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegOffsetValue getPegOffsetValue() throws FieldNotFound 
  { org.quickfix.field.PegOffsetValue value = new org.quickfix.field.PegOffsetValue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegOffsetValue field) 
  { return isSetField(field); } 
  public boolean isSetPegOffsetValue() 
  { return isSetField(211); } 
  public void set(org.quickfix.field.PegMoveType value) 
  { setField(value); } 
  public org.quickfix.field.PegMoveType get(org.quickfix.field.PegMoveType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegMoveType getPegMoveType() throws FieldNotFound 
  { org.quickfix.field.PegMoveType value = new org.quickfix.field.PegMoveType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegMoveType field) 
  { return isSetField(field); } 
  public boolean isSetPegMoveType() 
  { return isSetField(835); } 
  public void set(org.quickfix.field.PegOffsetType value) 
  { setField(value); } 
  public org.quickfix.field.PegOffsetType get(org.quickfix.field.PegOffsetType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegOffsetType getPegOffsetType() throws FieldNotFound 
  { org.quickfix.field.PegOffsetType value = new org.quickfix.field.PegOffsetType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegOffsetType field) 
  { return isSetField(field); } 
  public boolean isSetPegOffsetType() 
  { return isSetField(836); } 
  public void set(org.quickfix.field.PegLimitType value) 
  { setField(value); } 
  public org.quickfix.field.PegLimitType get(org.quickfix.field.PegLimitType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegLimitType getPegLimitType() throws FieldNotFound 
  { org.quickfix.field.PegLimitType value = new org.quickfix.field.PegLimitType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegLimitType field) 
  { return isSetField(field); } 
  public boolean isSetPegLimitType() 
  { return isSetField(837); } 
  public void set(org.quickfix.field.PegRoundDirection value) 
  { setField(value); } 
  public org.quickfix.field.PegRoundDirection get(org.quickfix.field.PegRoundDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegRoundDirection getPegRoundDirection() throws FieldNotFound 
  { org.quickfix.field.PegRoundDirection value = new org.quickfix.field.PegRoundDirection(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegRoundDirection field) 
  { return isSetField(field); } 
  public boolean isSetPegRoundDirection() 
  { return isSetField(838); } 
  public void set(org.quickfix.field.PegScope value) 
  { setField(value); } 
  public org.quickfix.field.PegScope get(org.quickfix.field.PegScope value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PegScope getPegScope() throws FieldNotFound 
  { org.quickfix.field.PegScope value = new org.quickfix.field.PegScope(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PegScope field) 
  { return isSetField(field); } 
  public boolean isSetPegScope() 
  { return isSetField(840); } 
  public void set(org.quickfix.field.DiscretionInst value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionInst get(org.quickfix.field.DiscretionInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionInst getDiscretionInst() throws FieldNotFound 
  { org.quickfix.field.DiscretionInst value = new org.quickfix.field.DiscretionInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionInst field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionInst() 
  { return isSetField(388); } 
  public void set(org.quickfix.field.DiscretionOffsetValue value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionOffsetValue get(org.quickfix.field.DiscretionOffsetValue value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionOffsetValue getDiscretionOffsetValue() throws FieldNotFound 
  { org.quickfix.field.DiscretionOffsetValue value = new org.quickfix.field.DiscretionOffsetValue(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionOffsetValue field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionOffsetValue() 
  { return isSetField(389); } 
  public void set(org.quickfix.field.DiscretionMoveType value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionMoveType get(org.quickfix.field.DiscretionMoveType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionMoveType getDiscretionMoveType() throws FieldNotFound 
  { org.quickfix.field.DiscretionMoveType value = new org.quickfix.field.DiscretionMoveType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionMoveType field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionMoveType() 
  { return isSetField(841); } 
  public void set(org.quickfix.field.DiscretionOffsetType value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionOffsetType get(org.quickfix.field.DiscretionOffsetType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionOffsetType getDiscretionOffsetType() throws FieldNotFound 
  { org.quickfix.field.DiscretionOffsetType value = new org.quickfix.field.DiscretionOffsetType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionOffsetType field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionOffsetType() 
  { return isSetField(842); } 
  public void set(org.quickfix.field.DiscretionLimitType value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionLimitType get(org.quickfix.field.DiscretionLimitType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionLimitType getDiscretionLimitType() throws FieldNotFound 
  { org.quickfix.field.DiscretionLimitType value = new org.quickfix.field.DiscretionLimitType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionLimitType field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionLimitType() 
  { return isSetField(843); } 
  public void set(org.quickfix.field.DiscretionRoundDirection value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionRoundDirection get(org.quickfix.field.DiscretionRoundDirection value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionRoundDirection getDiscretionRoundDirection() throws FieldNotFound 
  { org.quickfix.field.DiscretionRoundDirection value = new org.quickfix.field.DiscretionRoundDirection(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionRoundDirection field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionRoundDirection() 
  { return isSetField(844); } 
  public void set(org.quickfix.field.DiscretionScope value) 
  { setField(value); } 
  public org.quickfix.field.DiscretionScope get(org.quickfix.field.DiscretionScope value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.DiscretionScope getDiscretionScope() throws FieldNotFound 
  { org.quickfix.field.DiscretionScope value = new org.quickfix.field.DiscretionScope(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.DiscretionScope field) 
  { return isSetField(field); } 
  public boolean isSetDiscretionScope() 
  { return isSetField(846); } 

  public void set(org.quickfix.field.TargetStrategy value) 
  { setField(value); } 
  public org.quickfix.field.TargetStrategy get(org.quickfix.field.TargetStrategy value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TargetStrategy getTargetStrategy() throws FieldNotFound 
  { org.quickfix.field.TargetStrategy value = new org.quickfix.field.TargetStrategy(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TargetStrategy field) 
  { return isSetField(field); } 
  public boolean isSetTargetStrategy() 
  { return isSetField(847); } 

  public void set(org.quickfix.field.TargetStrategyParameters value) 
  { setField(value); } 
  public org.quickfix.field.TargetStrategyParameters get(org.quickfix.field.TargetStrategyParameters value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TargetStrategyParameters getTargetStrategyParameters() throws FieldNotFound 
  { org.quickfix.field.TargetStrategyParameters value = new org.quickfix.field.TargetStrategyParameters(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.TargetStrategyParameters field) 
  { return isSetField(field); } 
  public boolean isSetTargetStrategyParameters() 
  { return isSetField(848); } 

  public void set(org.quickfix.field.ParticipationRate value) 
  { setField(value); } 
  public org.quickfix.field.ParticipationRate get(org.quickfix.field.ParticipationRate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ParticipationRate getParticipationRate() throws FieldNotFound 
  { org.quickfix.field.ParticipationRate value = new org.quickfix.field.ParticipationRate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.ParticipationRate field) 
  { return isSetField(field); } 
  public boolean isSetParticipationRate() 
  { return isSetField(849); } 

  public void set(org.quickfix.field.ComplianceID value) 
  { setField(value); } 
  public org.quickfix.field.ComplianceID get(org.quickfix.field.ComplianceID value) throws FieldNotFound 
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
  public org.quickfix.field.SolicitedFlag get(org.quickfix.field.SolicitedFlag value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SolicitedFlag getSolicitedFlag() throws FieldNotFound 
  { org.quickfix.field.SolicitedFlag value = new org.quickfix.field.SolicitedFlag(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SolicitedFlag field) 
  { return isSetField(field); } 
  public boolean isSetSolicitedFlag() 
  { return isSetField(377); } 

  public void set(org.quickfix.field.Currency value) 
  { setField(value); } 
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound 
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Currency field) 
  { return isSetField(field); } 
  public boolean isSetCurrency() 
  { return isSetField(15); } 

  public void set(org.quickfix.field.TimeInForce value) 
  { setField(value); } 
  public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound 
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
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound 
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
  public org.quickfix.field.ExpireDate get(org.quickfix.field.ExpireDate value) throws FieldNotFound 
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
  public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound 
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
  public org.quickfix.field.GTBookingInst get(org.quickfix.field.GTBookingInst value) throws FieldNotFound 
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
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound 
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
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound 
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
  public org.quickfix.field.CommCurrency get(org.quickfix.field.CommCurrency value) throws FieldNotFound 
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
  public org.quickfix.field.FundRenewWaiv get(org.quickfix.field.FundRenewWaiv value) throws FieldNotFound 
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
  public org.quickfix.field.OrderCapacity get(org.quickfix.field.OrderCapacity value) throws FieldNotFound 
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
  public org.quickfix.field.OrderRestrictions get(org.quickfix.field.OrderRestrictions value) throws FieldNotFound 
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
  public org.quickfix.field.CustOrderCapacity get(org.quickfix.field.CustOrderCapacity value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CustOrderCapacity getCustOrderCapacity() throws FieldNotFound 
  { org.quickfix.field.CustOrderCapacity value = new org.quickfix.field.CustOrderCapacity(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CustOrderCapacity field) 
  { return isSetField(field); } 
  public boolean isSetCustOrderCapacity() 
  { return isSetField(582); } 

  public void set(org.quickfix.field.ForexReq value) 
  { setField(value); } 
  public org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq value) throws FieldNotFound 
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
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound 
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlCurrency field) 
  { return isSetField(field); } 
  public boolean isSetSettlCurrency() 
  { return isSetField(120); } 

  public void set(org.quickfix.field.BookingType value) 
  { setField(value); } 
  public org.quickfix.field.BookingType get(org.quickfix.field.BookingType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.BookingType getBookingType() throws FieldNotFound 
  { org.quickfix.field.BookingType value = new org.quickfix.field.BookingType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.BookingType field) 
  { return isSetField(field); } 
  public boolean isSetBookingType() 
  { return isSetField(775); } 

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

  public void set(org.quickfix.field.SettlDate2 value) 
  { setField(value); } 
  public org.quickfix.field.SettlDate2 get(org.quickfix.field.SettlDate2 value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlDate2 getSettlDate2() throws FieldNotFound 
  { org.quickfix.field.SettlDate2 value = new org.quickfix.field.SettlDate2(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlDate2 field) 
  { return isSetField(field); } 
  public boolean isSetSettlDate2() 
  { return isSetField(193); } 

  public void set(org.quickfix.field.OrderQty2 value) 
  { setField(value); } 
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2 value) throws FieldNotFound 
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
  public org.quickfix.field.Price2 get(org.quickfix.field.Price2 value) throws FieldNotFound 
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
  public org.quickfix.field.PositionEffect get(org.quickfix.field.PositionEffect value) throws FieldNotFound 
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
  public org.quickfix.field.CoveredOrUncovered get(org.quickfix.field.CoveredOrUncovered value) throws FieldNotFound 
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
  public org.quickfix.field.MaxShow get(org.quickfix.field.MaxShow value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.MaxShow getMaxShow() throws FieldNotFound 
  { org.quickfix.field.MaxShow value = new org.quickfix.field.MaxShow(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.MaxShow field) 
  { return isSetField(field); } 
  public boolean isSetMaxShow() 
  { return isSetField(210); } 

  public void set(org.quickfix.field.LocateReqd value) 
  { setField(value); } 
  public org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound 
  { org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.LocateReqd field) 
  { return isSetField(field); } 
  public boolean isSetLocateReqd() 
  { return isSetField(114); } 

  public void set(org.quickfix.field.CancellationRights value) 
  { setField(value); } 
  public org.quickfix.field.CancellationRights get(org.quickfix.field.CancellationRights value) throws FieldNotFound 
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
  public org.quickfix.field.MoneyLaunderingStatus get(org.quickfix.field.MoneyLaunderingStatus value) throws FieldNotFound 
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
  public org.quickfix.field.RegistID get(org.quickfix.field.RegistID value) throws FieldNotFound 
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
  public org.quickfix.field.Designation get(org.quickfix.field.Designation value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Designation getDesignation() throws FieldNotFound 
  { org.quickfix.field.Designation value = new org.quickfix.field.Designation(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.Designation field) 
  { return isSetField(field); } 
  public boolean isSetDesignation() 
  { return isSetField(494); } 
} 
