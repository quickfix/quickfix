package org.quickfix.fix43; 
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
    org.quickfix.field.SettlInstID aSettlInstID,    
    org.quickfix.field.SettlInstTransType aSettlInstTransType,    
    org.quickfix.field.SettlInstRefID aSettlInstRefID,    
    org.quickfix.field.SettlInstMode aSettlInstMode,    
    org.quickfix.field.SettlInstSource aSettlInstSource,    
    org.quickfix.field.AllocAccount aAllocAccount,    
    org.quickfix.field.TransactTime aTransactTime ) 
  {  
    getHeader().setField(new MsgType("T")); 
    set(aSettlInstID); 
    set(aSettlInstTransType); 
    set(aSettlInstRefID); 
    set(aSettlInstMode); 
    set(aSettlInstSource); 
    set(aAllocAccount); 
    set(aTransactTime);  
  } 

  public void set(org.quickfix.field.SettlInstID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstID get(org.quickfix.field.SettlInstID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstID getSettlInstID() throws FieldNotFound 
  { org.quickfix.field.SettlInstID value = new org.quickfix.field.SettlInstID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstTransType value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstTransType get(org.quickfix.field.SettlInstTransType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstTransType getSettlInstTransType() throws FieldNotFound 
  { org.quickfix.field.SettlInstTransType value = new org.quickfix.field.SettlInstTransType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstRefID value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstRefID get(org.quickfix.field.SettlInstRefID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstRefID getSettlInstRefID() throws FieldNotFound 
  { org.quickfix.field.SettlInstRefID value = new org.quickfix.field.SettlInstRefID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstMode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstMode get(org.quickfix.field.SettlInstMode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound 
  { org.quickfix.field.SettlInstMode value = new org.quickfix.field.SettlInstMode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstSource value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstSource get(org.quickfix.field.SettlInstSource value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstSource getSettlInstSource() throws FieldNotFound 
  { org.quickfix.field.SettlInstSource value = new org.quickfix.field.SettlInstSource(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocAccount value) 
  { setField(value); } 
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound 
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.IndividualAllocID value) 
  { setField(value); } 
  public org.quickfix.field.IndividualAllocID get(org.quickfix.field.IndividualAllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.IndividualAllocID getIndividualAllocID() throws FieldNotFound 
  { org.quickfix.field.IndividualAllocID value = new org.quickfix.field.IndividualAllocID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.ClOrdID value) 
  { setField(value); } 
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound 
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradeDate value) 
  { setField(value); } 
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound 
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.AllocID value) 
  { setField(value); } 
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound 
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.LastMkt value) 
  { setField(value); } 
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound 
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TradingSessionSubID value) 
  { setField(value); } 
  public org.quickfix.field.TradingSessionSubID get(org.quickfix.field.TradingSessionSubID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TradingSessionSubID getTradingSessionSubID() throws FieldNotFound 
  { org.quickfix.field.TradingSessionSubID value = new org.quickfix.field.TradingSessionSubID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.Side value) 
  { setField(value); } 
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.Side getSide() throws FieldNotFound 
  { org.quickfix.field.Side value = new org.quickfix.field.Side(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecurityType value) 
  { setField(value); } 
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound 
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.EffectiveTime value) 
  { setField(value); } 
  public org.quickfix.field.EffectiveTime get(org.quickfix.field.EffectiveTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound 
  { org.quickfix.field.EffectiveTime value = new org.quickfix.field.EffectiveTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.TransactTime value) 
  { setField(value); } 
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound 
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.StandInstDbType value) 
  { setField(value); } 
  public org.quickfix.field.StandInstDbType get(org.quickfix.field.StandInstDbType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StandInstDbType getStandInstDbType() throws FieldNotFound 
  { org.quickfix.field.StandInstDbType value = new org.quickfix.field.StandInstDbType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.StandInstDbName value) 
  { setField(value); } 
  public org.quickfix.field.StandInstDbName get(org.quickfix.field.StandInstDbName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StandInstDbName getStandInstDbName() throws FieldNotFound 
  { org.quickfix.field.StandInstDbName value = new org.quickfix.field.StandInstDbName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.StandInstDbID value) 
  { setField(value); } 
  public org.quickfix.field.StandInstDbID get(org.quickfix.field.StandInstDbID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.StandInstDbID getStandInstDbID() throws FieldNotFound 
  { org.quickfix.field.StandInstDbID value = new org.quickfix.field.StandInstDbID(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlDeliveryType value) 
  { setField(value); } 
  public org.quickfix.field.SettlDeliveryType get(org.quickfix.field.SettlDeliveryType value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlDeliveryType getSettlDeliveryType() throws FieldNotFound 
  { org.quickfix.field.SettlDeliveryType value = new org.quickfix.field.SettlDeliveryType(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlDepositoryCode value) 
  { setField(value); } 
  public org.quickfix.field.SettlDepositoryCode get(org.quickfix.field.SettlDepositoryCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlDepositoryCode getSettlDepositoryCode() throws FieldNotFound 
  { org.quickfix.field.SettlDepositoryCode value = new org.quickfix.field.SettlDepositoryCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlBrkrCode value) 
  { setField(value); } 
  public org.quickfix.field.SettlBrkrCode get(org.quickfix.field.SettlBrkrCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlBrkrCode getSettlBrkrCode() throws FieldNotFound 
  { org.quickfix.field.SettlBrkrCode value = new org.quickfix.field.SettlBrkrCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SettlInstCode value) 
  { setField(value); } 
  public org.quickfix.field.SettlInstCode get(org.quickfix.field.SettlInstCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SettlInstCode getSettlInstCode() throws FieldNotFound 
  { org.quickfix.field.SettlInstCode value = new org.quickfix.field.SettlInstCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentName value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentName get(org.quickfix.field.SecuritySettlAgentName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentName getSecuritySettlAgentName() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentName value = new org.quickfix.field.SecuritySettlAgentName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentCode value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentCode get(org.quickfix.field.SecuritySettlAgentCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentCode getSecuritySettlAgentCode() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentCode value = new org.quickfix.field.SecuritySettlAgentCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentAcctNum value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentAcctNum get(org.quickfix.field.SecuritySettlAgentAcctNum value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentAcctNum getSecuritySettlAgentAcctNum() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentAcctNum value = new org.quickfix.field.SecuritySettlAgentAcctNum(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentAcctName value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentAcctName get(org.quickfix.field.SecuritySettlAgentAcctName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentAcctName getSecuritySettlAgentAcctName() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentAcctName value = new org.quickfix.field.SecuritySettlAgentAcctName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentContactName value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentContactName get(org.quickfix.field.SecuritySettlAgentContactName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentContactName getSecuritySettlAgentContactName() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentContactName value = new org.quickfix.field.SecuritySettlAgentContactName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.SecuritySettlAgentContactPhone value) 
  { setField(value); } 
  public org.quickfix.field.SecuritySettlAgentContactPhone get(org.quickfix.field.SecuritySettlAgentContactPhone value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.SecuritySettlAgentContactPhone getSecuritySettlAgentContactPhone() throws FieldNotFound 
  { org.quickfix.field.SecuritySettlAgentContactPhone value = new org.quickfix.field.SecuritySettlAgentContactPhone(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentName value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentName get(org.quickfix.field.CashSettlAgentName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentName getCashSettlAgentName() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentName value = new org.quickfix.field.CashSettlAgentName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentCode value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentCode get(org.quickfix.field.CashSettlAgentCode value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentCode getCashSettlAgentCode() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentCode value = new org.quickfix.field.CashSettlAgentCode(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentAcctNum value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentAcctNum get(org.quickfix.field.CashSettlAgentAcctNum value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentAcctNum getCashSettlAgentAcctNum() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentAcctNum value = new org.quickfix.field.CashSettlAgentAcctNum(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentAcctName value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentAcctName get(org.quickfix.field.CashSettlAgentAcctName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentAcctName getCashSettlAgentAcctName() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentAcctName value = new org.quickfix.field.CashSettlAgentAcctName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentContactName value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentContactName get(org.quickfix.field.CashSettlAgentContactName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentContactName getCashSettlAgentContactName() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentContactName value = new org.quickfix.field.CashSettlAgentContactName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CashSettlAgentContactPhone value) 
  { setField(value); } 
  public org.quickfix.field.CashSettlAgentContactPhone get(org.quickfix.field.CashSettlAgentContactPhone value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CashSettlAgentContactPhone getCashSettlAgentContactPhone() throws FieldNotFound 
  { org.quickfix.field.CashSettlAgentContactPhone value = new org.quickfix.field.CashSettlAgentContactPhone(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PaymentMethod value) 
  { setField(value); } 
  public org.quickfix.field.PaymentMethod get(org.quickfix.field.PaymentMethod value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentMethod getPaymentMethod() throws FieldNotFound 
  { org.quickfix.field.PaymentMethod value = new org.quickfix.field.PaymentMethod(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PaymentRef value) 
  { setField(value); } 
  public org.quickfix.field.PaymentRef get(org.quickfix.field.PaymentRef value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentRef getPaymentRef() throws FieldNotFound 
  { org.quickfix.field.PaymentRef value = new org.quickfix.field.PaymentRef(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CardHolderName value) 
  { setField(value); } 
  public org.quickfix.field.CardHolderName get(org.quickfix.field.CardHolderName value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardHolderName getCardHolderName() throws FieldNotFound 
  { org.quickfix.field.CardHolderName value = new org.quickfix.field.CardHolderName(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CardNumber value) 
  { setField(value); } 
  public org.quickfix.field.CardNumber get(org.quickfix.field.CardNumber value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardNumber getCardNumber() throws FieldNotFound 
  { org.quickfix.field.CardNumber value = new org.quickfix.field.CardNumber(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CardStartDate value) 
  { setField(value); } 
  public org.quickfix.field.CardStartDate get(org.quickfix.field.CardStartDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardStartDate getCardStartDate() throws FieldNotFound 
  { org.quickfix.field.CardStartDate value = new org.quickfix.field.CardStartDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CardExpDate value) 
  { setField(value); } 
  public org.quickfix.field.CardExpDate get(org.quickfix.field.CardExpDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardExpDate getCardExpDate() throws FieldNotFound 
  { org.quickfix.field.CardExpDate value = new org.quickfix.field.CardExpDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.CardIssNo value) 
  { setField(value); } 
  public org.quickfix.field.CardIssNo get(org.quickfix.field.CardIssNo value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.CardIssNo getCardIssNo() throws FieldNotFound 
  { org.quickfix.field.CardIssNo value = new org.quickfix.field.CardIssNo(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PaymentDate value) 
  { setField(value); } 
  public org.quickfix.field.PaymentDate get(org.quickfix.field.PaymentDate value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentDate getPaymentDate() throws FieldNotFound 
  { org.quickfix.field.PaymentDate value = new org.quickfix.field.PaymentDate(); 
    getField(value); return value; } 

  public void set(org.quickfix.field.PaymentRemitterID value) 
  { setField(value); } 
  public org.quickfix.field.PaymentRemitterID get(org.quickfix.field.PaymentRemitterID value) throws FieldNotFound 
  { getField(value); return value; } 
  public org.quickfix.field.PaymentRemitterID getPaymentRemitterID() throws FieldNotFound 
  { org.quickfix.field.PaymentRemitterID value = new org.quickfix.field.PaymentRemitterID(); 
    getField(value); return value; } 
} 
