package org.quickfix.fix44; 
import org.quickfix.FieldNotFound; 
import org.quickfix.Group; 
import org.quickfix.field.*; 

public class SettlementInstructions extends Message 
{ 

  public SettlementInstructions() 
  { 
    getHeader().setField(new MsgType("T")); 
  } 
  public SettlementInstructions(    
    org.quickfix.field.SettlInstMsgID aSettlInstMsgID,    
    org.quickfix.field.SettlInstMode aSettlInstMode,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("T")); 
    set(aSettlInstMsgID); 
    set(aSettlInstMode); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.SettlInstMsgID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstMsgID get(org.quickfix.field.SettlInstMsgID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstMsgID getSettlInstMsgID() throws FieldNotFound 
  { org.quickfix.field.SettlInstMsgID value = new org.quickfix.field.SettlInstMsgID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstMsgID field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstMsgID() 
  { return isSetField(777); } 

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

  public void set(org.quickfix.field.SettlInstMode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstMode get(org.quickfix.field.SettlInstMode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound 
  { org.quickfix.field.SettlInstMode value = new org.quickfix.field.SettlInstMode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstMode field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstMode() 
  { return isSetField(160); } 

  public void set(org.quickfix.field.SettlInstReqRejCode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstReqRejCode get(org.quickfix.field.SettlInstReqRejCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstReqRejCode getSettlInstReqRejCode() throws FieldNotFound 
  { org.quickfix.field.SettlInstReqRejCode value = new org.quickfix.field.SettlInstReqRejCode(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstReqRejCode field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstReqRejCode() 
  { return isSetField(792); } 

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

  public void set(org.quickfix.field.SettlInstSource value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstSource get(org.quickfix.field.SettlInstSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstSource getSettlInstSource() throws FieldNotFound 
  { org.quickfix.field.SettlInstSource value = new org.quickfix.field.SettlInstSource(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstSource field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstSource() 
  { return isSetField(165); } 

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
  public void set(org.quickfix.field.NoSettlInst value) 
  { setField(value); } 
  public org.quickfix.field.NoSettlInst get(org.quickfix.field.NoSettlInst value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.NoSettlInst getNoSettlInst() throws FieldNotFound 
  { org.quickfix.field.NoSettlInst value = new org.quickfix.field.NoSettlInst(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.NoSettlInst field) 
  { return isSetField(field); } 
  public boolean isSetNoSettlInst() 
  { return isSetField(778); } 

public static class NoSettlInst extends Group { 
  public NoSettlInst() { 
    super(778, 54, 
    new int[] { 
               162, 
               163, 
               214, 
               54, 
               460, 
               167, 
               461, 
               168, 
               126, 
               779, 
             172, 
             169, 
             170, 
             171, 
               492, 
               476, 
               488, 
               489, 
               503, 
               490, 
               491, 
               504, 
               505, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SettlInstID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstID get(org.quickfix.field.SettlInstID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstID getSettlInstID() throws FieldNotFound 
  { org.quickfix.field.SettlInstID value = new org.quickfix.field.SettlInstID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstID field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstID() 
  { return isSetField(162); } 

  public void set(org.quickfix.field.SettlInstTransType value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstTransType get(org.quickfix.field.SettlInstTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstTransType getSettlInstTransType() throws FieldNotFound 
  { org.quickfix.field.SettlInstTransType value = new org.quickfix.field.SettlInstTransType(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstTransType field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstTransType() 
  { return isSetField(163); } 

  public void set(org.quickfix.field.SettlInstRefID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstRefID get(org.quickfix.field.SettlInstRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstRefID getSettlInstRefID() throws FieldNotFound 
  { org.quickfix.field.SettlInstRefID value = new org.quickfix.field.SettlInstRefID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.SettlInstRefID field) 
  { return isSetField(field); } 
  public boolean isSetSettlInstRefID() 
  { return isSetField(214); } 

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

  public void set(org.quickfix.field.PaymentMethod value) 
  { setField(value); } 
  public org.quickfix.field.PaymentMethod get(org.quickfix.field.PaymentMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentMethod getPaymentMethod() throws FieldNotFound 
  { org.quickfix.field.PaymentMethod value = new org.quickfix.field.PaymentMethod(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PaymentMethod field) 
  { return isSetField(field); } 
  public boolean isSetPaymentMethod() 
  { return isSetField(492); } 

  public void set(org.quickfix.field.PaymentRef value) 
  { setField(value); } 
  public org.quickfix.field.PaymentRef get(org.quickfix.field.PaymentRef value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentRef getPaymentRef() throws FieldNotFound 
  { org.quickfix.field.PaymentRef value = new org.quickfix.field.PaymentRef(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PaymentRef field) 
  { return isSetField(field); } 
  public boolean isSetPaymentRef() 
  { return isSetField(476); } 

  public void set(org.quickfix.field.CardHolderName value) 
  { setField(value); } 
  public org.quickfix.field.CardHolderName get(org.quickfix.field.CardHolderName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardHolderName getCardHolderName() throws FieldNotFound 
  { org.quickfix.field.CardHolderName value = new org.quickfix.field.CardHolderName(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CardHolderName field) 
  { return isSetField(field); } 
  public boolean isSetCardHolderName() 
  { return isSetField(488); } 

  public void set(org.quickfix.field.CardNumber value) 
  { setField(value); } 
  public org.quickfix.field.CardNumber get(org.quickfix.field.CardNumber value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardNumber getCardNumber() throws FieldNotFound 
  { org.quickfix.field.CardNumber value = new org.quickfix.field.CardNumber(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CardNumber field) 
  { return isSetField(field); } 
  public boolean isSetCardNumber() 
  { return isSetField(489); } 

  public void set(org.quickfix.field.CardStartDate value) 
  { setField(value); } 
  public org.quickfix.field.CardStartDate get(org.quickfix.field.CardStartDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardStartDate getCardStartDate() throws FieldNotFound 
  { org.quickfix.field.CardStartDate value = new org.quickfix.field.CardStartDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CardStartDate field) 
  { return isSetField(field); } 
  public boolean isSetCardStartDate() 
  { return isSetField(503); } 

  public void set(org.quickfix.field.CardExpDate value) 
  { setField(value); } 
  public org.quickfix.field.CardExpDate get(org.quickfix.field.CardExpDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardExpDate getCardExpDate() throws FieldNotFound 
  { org.quickfix.field.CardExpDate value = new org.quickfix.field.CardExpDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CardExpDate field) 
  { return isSetField(field); } 
  public boolean isSetCardExpDate() 
  { return isSetField(490); } 

  public void set(org.quickfix.field.CardIssNum value) 
  { setField(value); } 
  public org.quickfix.field.CardIssNum get(org.quickfix.field.CardIssNum value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardIssNum getCardIssNum() throws FieldNotFound 
  { org.quickfix.field.CardIssNum value = new org.quickfix.field.CardIssNum(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.CardIssNum field) 
  { return isSetField(field); } 
  public boolean isSetCardIssNum() 
  { return isSetField(491); } 

  public void set(org.quickfix.field.PaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.PaymentDate get(org.quickfix.field.PaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentDate getPaymentDate() throws FieldNotFound 
  { org.quickfix.field.PaymentDate value = new org.quickfix.field.PaymentDate(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PaymentDate field) 
  { return isSetField(field); } 
  public boolean isSetPaymentDate() 
  { return isSetField(504); } 

  public void set(org.quickfix.field.PaymentRemitterID value) 
  { setField(value); } 
  public org.quickfix.field.PaymentRemitterID get(org.quickfix.field.PaymentRemitterID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentRemitterID getPaymentRemitterID() throws FieldNotFound 
  { org.quickfix.field.PaymentRemitterID value = new org.quickfix.field.PaymentRemitterID(); 
    getField(value); return value; } 
  public boolean isSet(org.quickfix.field.PaymentRemitterID field) 
  { return isSetField(field); } 
  public boolean isSetPaymentRemitterID() 
  { return isSetField(505); } 

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
  public void set(org.quickfix.field.SettlDeliveryType value) 
  { setField(value); } 
  public org.quickfix.field.SettlDeliveryType get(org.quickfix.field.SettlDeliveryType value) throws FieldNotFound 
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
  public void set(org.quickfix.field.NoDlvyInst value) 
  { setField(value); } 
  public org.quickfix.field.NoDlvyInst get(org.quickfix.field.NoDlvyInst value) throws FieldNotFound 
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
    super(85, 165, 
    new int[] { 
               165, 
               787, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SettlInstSource value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstSource get(org.quickfix.field.SettlInstSource value) throws FieldNotFound 
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
  public org.quickfix.field.DlvyInstType get(org.quickfix.field.DlvyInstType value) throws FieldNotFound 
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
  public org.quickfix.field.NoSettlPartyIDs get(org.quickfix.field.NoSettlPartyIDs value) throws FieldNotFound 
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
    super(781, 782, 
    new int[] { 
               782, 
               783, 
               784, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SettlPartyID value) 
  { setField(value); } 
  public org.quickfix.field.SettlPartyID get(org.quickfix.field.SettlPartyID value) throws FieldNotFound 
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
  public org.quickfix.field.SettlPartyIDSource get(org.quickfix.field.SettlPartyIDSource value) throws FieldNotFound 
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
  public org.quickfix.field.SettlPartyRole get(org.quickfix.field.SettlPartyRole value) throws FieldNotFound 
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
  public org.quickfix.field.NoSettlPartySubIDs get(org.quickfix.field.NoSettlPartySubIDs value) throws FieldNotFound 
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
    super(801, 785, 
    new int[] { 
               785, 
               786, 
               0 } 
); 
  } 
  public void set(org.quickfix.field.SettlPartySubID value) 
  { setField(value); } 
  public org.quickfix.field.SettlPartySubID get(org.quickfix.field.SettlPartySubID value) throws FieldNotFound 
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
  public org.quickfix.field.SettlPartySubIDType get(org.quickfix.field.SettlPartySubIDType value) throws FieldNotFound 
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
} 
} 
