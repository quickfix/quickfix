package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class SettlementInstructions extends Message
{
  public SettlementInstructions()
  {
    getHeader().setField(new MsgType("T"));
  }
  public SettlementInstructions(
    quickfix.field.SettlInstID aSettlInstID,
    quickfix.field.SettlInstTransType aSettlInstTransType,
    quickfix.field.SettlInstMode aSettlInstMode,
    quickfix.field.SettlInstSource aSettlInstSource,
    quickfix.field.AllocAccount aAllocAccount,
    quickfix.field.TransactTime aTransactTime ) {

    getHeader().setField(new MsgType("T"));
    set(aSettlInstID);
    set(aSettlInstTransType);
    set(aSettlInstMode);
    set(aSettlInstSource);
    set(aAllocAccount);
    set(aTransactTime);
  }

  public void set(quickfix.field.SettlInstID value)
  { setField(value); }
  public quickfix.field.SettlInstID get(quickfix.field.SettlInstID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstID getSettlInstID() throws FieldNotFound
  { quickfix.field.SettlInstID value = new quickfix.field.SettlInstID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstID field)
  { return isSetField(field); }
  public boolean isSetSettlInstID()
  { return isSetField(162); }
  public void set(quickfix.field.SettlInstTransType value)
  { setField(value); }
  public quickfix.field.SettlInstTransType get(quickfix.field.SettlInstTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstTransType getSettlInstTransType() throws FieldNotFound
  { quickfix.field.SettlInstTransType value = new quickfix.field.SettlInstTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstTransType field)
  { return isSetField(field); }
  public boolean isSetSettlInstTransType()
  { return isSetField(163); }
  public void set(quickfix.field.SettlInstMode value)
  { setField(value); }
  public quickfix.field.SettlInstMode get(quickfix.field.SettlInstMode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound
  { quickfix.field.SettlInstMode value = new quickfix.field.SettlInstMode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstMode field)
  { return isSetField(field); }
  public boolean isSetSettlInstMode()
  { return isSetField(160); }
  public void set(quickfix.field.SettlInstSource value)
  { setField(value); }
  public quickfix.field.SettlInstSource get(quickfix.field.SettlInstSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstSource getSettlInstSource() throws FieldNotFound
  { quickfix.field.SettlInstSource value = new quickfix.field.SettlInstSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstSource field)
  { return isSetField(field); }
  public boolean isSetSettlInstSource()
  { return isSetField(165); }
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
  public void set(quickfix.field.SettlLocation value)
  { setField(value); }
  public quickfix.field.SettlLocation get(quickfix.field.SettlLocation  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlLocation getSettlLocation() throws FieldNotFound
  { quickfix.field.SettlLocation value = new quickfix.field.SettlLocation();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlLocation field)
  { return isSetField(field); }
  public boolean isSetSettlLocation()
  { return isSetField(166); }
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
  public void set(quickfix.field.LastMkt value)
  { setField(value); }
  public quickfix.field.LastMkt get(quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { quickfix.field.LastMkt value = new quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
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
  public void set(quickfix.field.EffectiveTime value)
  { setField(value); }
  public quickfix.field.EffectiveTime get(quickfix.field.EffectiveTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EffectiveTime getEffectiveTime() throws FieldNotFound
  { quickfix.field.EffectiveTime value = new quickfix.field.EffectiveTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EffectiveTime field)
  { return isSetField(field); }
  public boolean isSetEffectiveTime()
  { return isSetField(168); }
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
  public void set(quickfix.field.ClientID value)
  { setField(value); }
  public quickfix.field.ClientID get(quickfix.field.ClientID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClientID getClientID() throws FieldNotFound
  { quickfix.field.ClientID value = new quickfix.field.ClientID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClientID field)
  { return isSetField(field); }
  public boolean isSetClientID()
  { return isSetField(109); }
  public void set(quickfix.field.ExecBroker value)
  { setField(value); }
  public quickfix.field.ExecBroker get(quickfix.field.ExecBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { quickfix.field.ExecBroker value = new quickfix.field.ExecBroker();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecBroker field)
  { return isSetField(field); }
  public boolean isSetExecBroker()
  { return isSetField(76); }
  public void set(quickfix.field.StandInstDbType value)
  { setField(value); }
  public quickfix.field.StandInstDbType get(quickfix.field.StandInstDbType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbType getStandInstDbType() throws FieldNotFound
  { quickfix.field.StandInstDbType value = new quickfix.field.StandInstDbType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbType field)
  { return isSetField(field); }
  public boolean isSetStandInstDbType()
  { return isSetField(169); }
  public void set(quickfix.field.StandInstDbName value)
  { setField(value); }
  public quickfix.field.StandInstDbName get(quickfix.field.StandInstDbName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbName getStandInstDbName() throws FieldNotFound
  { quickfix.field.StandInstDbName value = new quickfix.field.StandInstDbName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbName field)
  { return isSetField(field); }
  public boolean isSetStandInstDbName()
  { return isSetField(170); }
  public void set(quickfix.field.StandInstDbID value)
  { setField(value); }
  public quickfix.field.StandInstDbID get(quickfix.field.StandInstDbID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StandInstDbID getStandInstDbID() throws FieldNotFound
  { quickfix.field.StandInstDbID value = new quickfix.field.StandInstDbID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StandInstDbID field)
  { return isSetField(field); }
  public boolean isSetStandInstDbID()
  { return isSetField(171); }
  public void set(quickfix.field.SettlDeliveryType value)
  { setField(value); }
  public quickfix.field.SettlDeliveryType get(quickfix.field.SettlDeliveryType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDeliveryType getSettlDeliveryType() throws FieldNotFound
  { quickfix.field.SettlDeliveryType value = new quickfix.field.SettlDeliveryType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDeliveryType field)
  { return isSetField(field); }
  public boolean isSetSettlDeliveryType()
  { return isSetField(172); }
  public void set(quickfix.field.SettlDepositoryCode value)
  { setField(value); }
  public quickfix.field.SettlDepositoryCode get(quickfix.field.SettlDepositoryCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlDepositoryCode getSettlDepositoryCode() throws FieldNotFound
  { quickfix.field.SettlDepositoryCode value = new quickfix.field.SettlDepositoryCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlDepositoryCode field)
  { return isSetField(field); }
  public boolean isSetSettlDepositoryCode()
  { return isSetField(173); }
  public void set(quickfix.field.SettlBrkrCode value)
  { setField(value); }
  public quickfix.field.SettlBrkrCode get(quickfix.field.SettlBrkrCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlBrkrCode getSettlBrkrCode() throws FieldNotFound
  { quickfix.field.SettlBrkrCode value = new quickfix.field.SettlBrkrCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlBrkrCode field)
  { return isSetField(field); }
  public boolean isSetSettlBrkrCode()
  { return isSetField(174); }
  public void set(quickfix.field.SettlInstCode value)
  { setField(value); }
  public quickfix.field.SettlInstCode get(quickfix.field.SettlInstCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstCode getSettlInstCode() throws FieldNotFound
  { quickfix.field.SettlInstCode value = new quickfix.field.SettlInstCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstCode field)
  { return isSetField(field); }
  public boolean isSetSettlInstCode()
  { return isSetField(175); }
  public void set(quickfix.field.SecuritySettlAgentName value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentName get(quickfix.field.SecuritySettlAgentName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentName getSecuritySettlAgentName() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentName value = new quickfix.field.SecuritySettlAgentName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentName field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentName()
  { return isSetField(176); }
  public void set(quickfix.field.SecuritySettlAgentCode value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentCode get(quickfix.field.SecuritySettlAgentCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentCode getSecuritySettlAgentCode() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentCode value = new quickfix.field.SecuritySettlAgentCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentCode field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentCode()
  { return isSetField(177); }
  public void set(quickfix.field.SecuritySettlAgentAcctNum value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentAcctNum get(quickfix.field.SecuritySettlAgentAcctNum  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentAcctNum getSecuritySettlAgentAcctNum() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentAcctNum value = new quickfix.field.SecuritySettlAgentAcctNum();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentAcctNum field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentAcctNum()
  { return isSetField(178); }
  public void set(quickfix.field.SecuritySettlAgentAcctName value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentAcctName get(quickfix.field.SecuritySettlAgentAcctName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentAcctName getSecuritySettlAgentAcctName() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentAcctName value = new quickfix.field.SecuritySettlAgentAcctName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentAcctName field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentAcctName()
  { return isSetField(179); }
  public void set(quickfix.field.SecuritySettlAgentContactName value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentContactName get(quickfix.field.SecuritySettlAgentContactName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentContactName getSecuritySettlAgentContactName() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentContactName value = new quickfix.field.SecuritySettlAgentContactName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentContactName field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentContactName()
  { return isSetField(180); }
  public void set(quickfix.field.SecuritySettlAgentContactPhone value)
  { setField(value); }
  public quickfix.field.SecuritySettlAgentContactPhone get(quickfix.field.SecuritySettlAgentContactPhone  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecuritySettlAgentContactPhone getSecuritySettlAgentContactPhone() throws FieldNotFound
  { quickfix.field.SecuritySettlAgentContactPhone value = new quickfix.field.SecuritySettlAgentContactPhone();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecuritySettlAgentContactPhone field)
  { return isSetField(field); }
  public boolean isSetSecuritySettlAgentContactPhone()
  { return isSetField(181); }
  public void set(quickfix.field.CashSettlAgentName value)
  { setField(value); }
  public quickfix.field.CashSettlAgentName get(quickfix.field.CashSettlAgentName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentName getCashSettlAgentName() throws FieldNotFound
  { quickfix.field.CashSettlAgentName value = new quickfix.field.CashSettlAgentName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentName field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentName()
  { return isSetField(182); }
  public void set(quickfix.field.CashSettlAgentCode value)
  { setField(value); }
  public quickfix.field.CashSettlAgentCode get(quickfix.field.CashSettlAgentCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentCode getCashSettlAgentCode() throws FieldNotFound
  { quickfix.field.CashSettlAgentCode value = new quickfix.field.CashSettlAgentCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentCode field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentCode()
  { return isSetField(183); }
  public void set(quickfix.field.CashSettlAgentAcctNum value)
  { setField(value); }
  public quickfix.field.CashSettlAgentAcctNum get(quickfix.field.CashSettlAgentAcctNum  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentAcctNum getCashSettlAgentAcctNum() throws FieldNotFound
  { quickfix.field.CashSettlAgentAcctNum value = new quickfix.field.CashSettlAgentAcctNum();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentAcctNum field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentAcctNum()
  { return isSetField(184); }
  public void set(quickfix.field.CashSettlAgentAcctName value)
  { setField(value); }
  public quickfix.field.CashSettlAgentAcctName get(quickfix.field.CashSettlAgentAcctName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentAcctName getCashSettlAgentAcctName() throws FieldNotFound
  { quickfix.field.CashSettlAgentAcctName value = new quickfix.field.CashSettlAgentAcctName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentAcctName field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentAcctName()
  { return isSetField(185); }
  public void set(quickfix.field.CashSettlAgentContactName value)
  { setField(value); }
  public quickfix.field.CashSettlAgentContactName get(quickfix.field.CashSettlAgentContactName  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentContactName getCashSettlAgentContactName() throws FieldNotFound
  { quickfix.field.CashSettlAgentContactName value = new quickfix.field.CashSettlAgentContactName();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentContactName field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentContactName()
  { return isSetField(186); }
  public void set(quickfix.field.CashSettlAgentContactPhone value)
  { setField(value); }
  public quickfix.field.CashSettlAgentContactPhone get(quickfix.field.CashSettlAgentContactPhone  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CashSettlAgentContactPhone getCashSettlAgentContactPhone() throws FieldNotFound
  { quickfix.field.CashSettlAgentContactPhone value = new quickfix.field.CashSettlAgentContactPhone();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CashSettlAgentContactPhone field)
  { return isSetField(field); }
  public boolean isSetCashSettlAgentContactPhone()
  { return isSetField(187); }
}

