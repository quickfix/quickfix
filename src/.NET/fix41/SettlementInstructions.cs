namespace QuickFix41
{

  public class SettlementInstructions : Message
  {
    public SettlementInstructions() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("T"); }

    public SettlementInstructions(
      QuickFix.SettlInstID aSettlInstID,
      QuickFix.SettlInstTransType aSettlInstTransType,
      QuickFix.SettlInstMode aSettlInstMode,
      QuickFix.SettlInstSource aSettlInstSource,
      QuickFix.AllocAccount aAllocAccount,
      QuickFix.TransactTime aTransactTime )
    : base(MsgType()) {
      set(aSettlInstID);
      set(aSettlInstTransType);
      set(aSettlInstMode);
      set(aSettlInstSource);
      set(aAllocAccount);
      set(aTransactTime);
    }

    public void set(QuickFix.SettlInstID value)
    { setField(value); }
    public QuickFix.SettlInstID get(QuickFix.SettlInstID  value)
    { getField(value); return value; }
    public QuickFix.SettlInstID getSettlInstID()
    { QuickFix.SettlInstID value = new QuickFix.SettlInstID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstID field)
    { return isSetField(field); }
    public bool isSetSettlInstID()
    { return isSetField(162); }

    public void set(QuickFix.SettlInstTransType value)
    { setField(value); }
    public QuickFix.SettlInstTransType get(QuickFix.SettlInstTransType  value)
    { getField(value); return value; }
    public QuickFix.SettlInstTransType getSettlInstTransType()
    { QuickFix.SettlInstTransType value = new QuickFix.SettlInstTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstTransType field)
    { return isSetField(field); }
    public bool isSetSettlInstTransType()
    { return isSetField(163); }

    public void set(QuickFix.SettlInstMode value)
    { setField(value); }
    public QuickFix.SettlInstMode get(QuickFix.SettlInstMode  value)
    { getField(value); return value; }
    public QuickFix.SettlInstMode getSettlInstMode()
    { QuickFix.SettlInstMode value = new QuickFix.SettlInstMode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstMode field)
    { return isSetField(field); }
    public bool isSetSettlInstMode()
    { return isSetField(160); }

    public void set(QuickFix.SettlInstSource value)
    { setField(value); }
    public QuickFix.SettlInstSource get(QuickFix.SettlInstSource  value)
    { getField(value); return value; }
    public QuickFix.SettlInstSource getSettlInstSource()
    { QuickFix.SettlInstSource value = new QuickFix.SettlInstSource();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstSource field)
    { return isSetField(field); }
    public bool isSetSettlInstSource()
    { return isSetField(165); }

    public void set(QuickFix.AllocAccount value)
    { setField(value); }
    public QuickFix.AllocAccount get(QuickFix.AllocAccount  value)
    { getField(value); return value; }
    public QuickFix.AllocAccount getAllocAccount()
    { QuickFix.AllocAccount value = new QuickFix.AllocAccount();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocAccount field)
    { return isSetField(field); }
    public bool isSetAllocAccount()
    { return isSetField(79); }

    public void set(QuickFix.SettlLocation value)
    { setField(value); }
    public QuickFix.SettlLocation get(QuickFix.SettlLocation  value)
    { getField(value); return value; }
    public QuickFix.SettlLocation getSettlLocation()
    { QuickFix.SettlLocation value = new QuickFix.SettlLocation();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlLocation field)
    { return isSetField(field); }
    public bool isSetSettlLocation()
    { return isSetField(166); }

    public void set(QuickFix.TradeDate value)
    { setField(value); }
    public QuickFix.TradeDate get(QuickFix.TradeDate  value)
    { getField(value); return value; }
    public QuickFix.TradeDate getTradeDate()
    { QuickFix.TradeDate value = new QuickFix.TradeDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeDate field)
    { return isSetField(field); }
    public bool isSetTradeDate()
    { return isSetField(75); }

    public void set(QuickFix.AllocID value)
    { setField(value); }
    public QuickFix.AllocID get(QuickFix.AllocID  value)
    { getField(value); return value; }
    public QuickFix.AllocID getAllocID()
    { QuickFix.AllocID value = new QuickFix.AllocID();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocID field)
    { return isSetField(field); }
    public bool isSetAllocID()
    { return isSetField(70); }

    public void set(QuickFix.LastMkt value)
    { setField(value); }
    public QuickFix.LastMkt get(QuickFix.LastMkt  value)
    { getField(value); return value; }
    public QuickFix.LastMkt getLastMkt()
    { QuickFix.LastMkt value = new QuickFix.LastMkt();
      getField(value); return value; }
    public bool isSet(QuickFix.LastMkt field)
    { return isSetField(field); }
    public bool isSetLastMkt()
    { return isSetField(30); }

    public void set(QuickFix.Side value)
    { setField(value); }
    public QuickFix.Side get(QuickFix.Side  value)
    { getField(value); return value; }
    public QuickFix.Side getSide()
    { QuickFix.Side value = new QuickFix.Side();
      getField(value); return value; }
    public bool isSet(QuickFix.Side field)
    { return isSetField(field); }
    public bool isSetSide()
    { return isSetField(54); }

    public void set(QuickFix.SecurityType value)
    { setField(value); }
    public QuickFix.SecurityType get(QuickFix.SecurityType  value)
    { getField(value); return value; }
    public QuickFix.SecurityType getSecurityType()
    { QuickFix.SecurityType value = new QuickFix.SecurityType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityType field)
    { return isSetField(field); }
    public bool isSetSecurityType()
    { return isSetField(167); }

    public void set(QuickFix.EffectiveTime value)
    { setField(value); }
    public QuickFix.EffectiveTime get(QuickFix.EffectiveTime  value)
    { getField(value); return value; }
    public QuickFix.EffectiveTime getEffectiveTime()
    { QuickFix.EffectiveTime value = new QuickFix.EffectiveTime();
      getField(value); return value; }
    public bool isSet(QuickFix.EffectiveTime field)
    { return isSetField(field); }
    public bool isSetEffectiveTime()
    { return isSetField(168); }

    public void set(QuickFix.TransactTime value)
    { setField(value); }
    public QuickFix.TransactTime get(QuickFix.TransactTime  value)
    { getField(value); return value; }
    public QuickFix.TransactTime getTransactTime()
    { QuickFix.TransactTime value = new QuickFix.TransactTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransactTime field)
    { return isSetField(field); }
    public bool isSetTransactTime()
    { return isSetField(60); }

    public void set(QuickFix.ClientID value)
    { setField(value); }
    public QuickFix.ClientID get(QuickFix.ClientID  value)
    { getField(value); return value; }
    public QuickFix.ClientID getClientID()
    { QuickFix.ClientID value = new QuickFix.ClientID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientID field)
    { return isSetField(field); }
    public bool isSetClientID()
    { return isSetField(109); }

    public void set(QuickFix.ExecBroker value)
    { setField(value); }
    public QuickFix.ExecBroker get(QuickFix.ExecBroker  value)
    { getField(value); return value; }
    public QuickFix.ExecBroker getExecBroker()
    { QuickFix.ExecBroker value = new QuickFix.ExecBroker();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecBroker field)
    { return isSetField(field); }
    public bool isSetExecBroker()
    { return isSetField(76); }

    public void set(QuickFix.StandInstDbType value)
    { setField(value); }
    public QuickFix.StandInstDbType get(QuickFix.StandInstDbType  value)
    { getField(value); return value; }
    public QuickFix.StandInstDbType getStandInstDbType()
    { QuickFix.StandInstDbType value = new QuickFix.StandInstDbType();
      getField(value); return value; }
    public bool isSet(QuickFix.StandInstDbType field)
    { return isSetField(field); }
    public bool isSetStandInstDbType()
    { return isSetField(169); }

    public void set(QuickFix.StandInstDbName value)
    { setField(value); }
    public QuickFix.StandInstDbName get(QuickFix.StandInstDbName  value)
    { getField(value); return value; }
    public QuickFix.StandInstDbName getStandInstDbName()
    { QuickFix.StandInstDbName value = new QuickFix.StandInstDbName();
      getField(value); return value; }
    public bool isSet(QuickFix.StandInstDbName field)
    { return isSetField(field); }
    public bool isSetStandInstDbName()
    { return isSetField(170); }

    public void set(QuickFix.StandInstDbID value)
    { setField(value); }
    public QuickFix.StandInstDbID get(QuickFix.StandInstDbID  value)
    { getField(value); return value; }
    public QuickFix.StandInstDbID getStandInstDbID()
    { QuickFix.StandInstDbID value = new QuickFix.StandInstDbID();
      getField(value); return value; }
    public bool isSet(QuickFix.StandInstDbID field)
    { return isSetField(field); }
    public bool isSetStandInstDbID()
    { return isSetField(171); }

    public void set(QuickFix.SettlDeliveryType value)
    { setField(value); }
    public QuickFix.SettlDeliveryType get(QuickFix.SettlDeliveryType  value)
    { getField(value); return value; }
    public QuickFix.SettlDeliveryType getSettlDeliveryType()
    { QuickFix.SettlDeliveryType value = new QuickFix.SettlDeliveryType();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDeliveryType field)
    { return isSetField(field); }
    public bool isSetSettlDeliveryType()
    { return isSetField(172); }

    public void set(QuickFix.SettlDepositoryCode value)
    { setField(value); }
    public QuickFix.SettlDepositoryCode get(QuickFix.SettlDepositoryCode  value)
    { getField(value); return value; }
    public QuickFix.SettlDepositoryCode getSettlDepositoryCode()
    { QuickFix.SettlDepositoryCode value = new QuickFix.SettlDepositoryCode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDepositoryCode field)
    { return isSetField(field); }
    public bool isSetSettlDepositoryCode()
    { return isSetField(173); }

    public void set(QuickFix.SettlBrkrCode value)
    { setField(value); }
    public QuickFix.SettlBrkrCode get(QuickFix.SettlBrkrCode  value)
    { getField(value); return value; }
    public QuickFix.SettlBrkrCode getSettlBrkrCode()
    { QuickFix.SettlBrkrCode value = new QuickFix.SettlBrkrCode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlBrkrCode field)
    { return isSetField(field); }
    public bool isSetSettlBrkrCode()
    { return isSetField(174); }

    public void set(QuickFix.SettlInstCode value)
    { setField(value); }
    public QuickFix.SettlInstCode get(QuickFix.SettlInstCode  value)
    { getField(value); return value; }
    public QuickFix.SettlInstCode getSettlInstCode()
    { QuickFix.SettlInstCode value = new QuickFix.SettlInstCode();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlInstCode field)
    { return isSetField(field); }
    public bool isSetSettlInstCode()
    { return isSetField(175); }

    public void set(QuickFix.SecuritySettlAgentName value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentName get(QuickFix.SecuritySettlAgentName  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentName getSecuritySettlAgentName()
    { QuickFix.SecuritySettlAgentName value = new QuickFix.SecuritySettlAgentName();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentName field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentName()
    { return isSetField(176); }

    public void set(QuickFix.SecuritySettlAgentCode value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentCode get(QuickFix.SecuritySettlAgentCode  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentCode getSecuritySettlAgentCode()
    { QuickFix.SecuritySettlAgentCode value = new QuickFix.SecuritySettlAgentCode();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentCode field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentCode()
    { return isSetField(177); }

    public void set(QuickFix.SecuritySettlAgentAcctNum value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentAcctNum get(QuickFix.SecuritySettlAgentAcctNum  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentAcctNum getSecuritySettlAgentAcctNum()
    { QuickFix.SecuritySettlAgentAcctNum value = new QuickFix.SecuritySettlAgentAcctNum();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentAcctNum field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentAcctNum()
    { return isSetField(178); }

    public void set(QuickFix.SecuritySettlAgentAcctName value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentAcctName get(QuickFix.SecuritySettlAgentAcctName  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentAcctName getSecuritySettlAgentAcctName()
    { QuickFix.SecuritySettlAgentAcctName value = new QuickFix.SecuritySettlAgentAcctName();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentAcctName field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentAcctName()
    { return isSetField(179); }

    public void set(QuickFix.SecuritySettlAgentContactName value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentContactName get(QuickFix.SecuritySettlAgentContactName  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentContactName getSecuritySettlAgentContactName()
    { QuickFix.SecuritySettlAgentContactName value = new QuickFix.SecuritySettlAgentContactName();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentContactName field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentContactName()
    { return isSetField(180); }

    public void set(QuickFix.SecuritySettlAgentContactPhone value)
    { setField(value); }
    public QuickFix.SecuritySettlAgentContactPhone get(QuickFix.SecuritySettlAgentContactPhone  value)
    { getField(value); return value; }
    public QuickFix.SecuritySettlAgentContactPhone getSecuritySettlAgentContactPhone()
    { QuickFix.SecuritySettlAgentContactPhone value = new QuickFix.SecuritySettlAgentContactPhone();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySettlAgentContactPhone field)
    { return isSetField(field); }
    public bool isSetSecuritySettlAgentContactPhone()
    { return isSetField(181); }

    public void set(QuickFix.CashSettlAgentName value)
    { setField(value); }
    public QuickFix.CashSettlAgentName get(QuickFix.CashSettlAgentName  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentName getCashSettlAgentName()
    { QuickFix.CashSettlAgentName value = new QuickFix.CashSettlAgentName();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentName field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentName()
    { return isSetField(182); }

    public void set(QuickFix.CashSettlAgentCode value)
    { setField(value); }
    public QuickFix.CashSettlAgentCode get(QuickFix.CashSettlAgentCode  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentCode getCashSettlAgentCode()
    { QuickFix.CashSettlAgentCode value = new QuickFix.CashSettlAgentCode();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentCode field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentCode()
    { return isSetField(183); }

    public void set(QuickFix.CashSettlAgentAcctNum value)
    { setField(value); }
    public QuickFix.CashSettlAgentAcctNum get(QuickFix.CashSettlAgentAcctNum  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentAcctNum getCashSettlAgentAcctNum()
    { QuickFix.CashSettlAgentAcctNum value = new QuickFix.CashSettlAgentAcctNum();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentAcctNum field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentAcctNum()
    { return isSetField(184); }

    public void set(QuickFix.CashSettlAgentAcctName value)
    { setField(value); }
    public QuickFix.CashSettlAgentAcctName get(QuickFix.CashSettlAgentAcctName  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentAcctName getCashSettlAgentAcctName()
    { QuickFix.CashSettlAgentAcctName value = new QuickFix.CashSettlAgentAcctName();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentAcctName field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentAcctName()
    { return isSetField(185); }

    public void set(QuickFix.CashSettlAgentContactName value)
    { setField(value); }
    public QuickFix.CashSettlAgentContactName get(QuickFix.CashSettlAgentContactName  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentContactName getCashSettlAgentContactName()
    { QuickFix.CashSettlAgentContactName value = new QuickFix.CashSettlAgentContactName();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentContactName field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentContactName()
    { return isSetField(186); }

    public void set(QuickFix.CashSettlAgentContactPhone value)
    { setField(value); }
    public QuickFix.CashSettlAgentContactPhone get(QuickFix.CashSettlAgentContactPhone  value)
    { getField(value); return value; }
    public QuickFix.CashSettlAgentContactPhone getCashSettlAgentContactPhone()
    { QuickFix.CashSettlAgentContactPhone value = new QuickFix.CashSettlAgentContactPhone();
      getField(value); return value; }
    public bool isSet(QuickFix.CashSettlAgentContactPhone field)
    { return isSetField(field); }
    public bool isSetCashSettlAgentContactPhone()
    { return isSetField(187); }

  };

}

