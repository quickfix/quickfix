namespace QuickFix42
{

  public class ExecutionReport : Message
  {
    public ExecutionReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("8"); }

    public ExecutionReport(
      QuickFix.OrderID aOrderID,
      QuickFix.ExecID aExecID,
      QuickFix.ExecTransType aExecTransType,
      QuickFix.ExecType aExecType,
      QuickFix.OrdStatus aOrdStatus,
      QuickFix.Symbol aSymbol,
      QuickFix.Side aSide,
      QuickFix.LeavesQty aLeavesQty,
      QuickFix.CumQty aCumQty,
      QuickFix.AvgPx aAvgPx )
    : base(MsgType()) {
      set(aOrderID);
      set(aExecID);
      set(aExecTransType);
      set(aExecType);
      set(aOrdStatus);
      set(aSymbol);
      set(aSide);
      set(aLeavesQty);
      set(aCumQty);
      set(aAvgPx);
    }

    public void set(QuickFix.OrderID value)
    { setField(value); }
    public QuickFix.OrderID get(QuickFix.OrderID  value)
    { getField(value); return value; }
    public QuickFix.OrderID getOrderID()
    { QuickFix.OrderID value = new QuickFix.OrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderID field)
    { return isSetField(field); }
    public bool isSetOrderID()
    { return isSetField(37); }

    public void set(QuickFix.SecondaryOrderID value)
    { setField(value); }
    public QuickFix.SecondaryOrderID get(QuickFix.SecondaryOrderID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryOrderID getSecondaryOrderID()
    { QuickFix.SecondaryOrderID value = new QuickFix.SecondaryOrderID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryOrderID field)
    { return isSetField(field); }
    public bool isSetSecondaryOrderID()
    { return isSetField(198); }

    public void set(QuickFix.ClOrdID value)
    { setField(value); }
    public QuickFix.ClOrdID get(QuickFix.ClOrdID  value)
    { getField(value); return value; }
    public QuickFix.ClOrdID getClOrdID()
    { QuickFix.ClOrdID value = new QuickFix.ClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClOrdID field)
    { return isSetField(field); }
    public bool isSetClOrdID()
    { return isSetField(11); }

    public void set(QuickFix.OrigClOrdID value)
    { setField(value); }
    public QuickFix.OrigClOrdID get(QuickFix.OrigClOrdID  value)
    { getField(value); return value; }
    public QuickFix.OrigClOrdID getOrigClOrdID()
    { QuickFix.OrigClOrdID value = new QuickFix.OrigClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigClOrdID field)
    { return isSetField(field); }
    public bool isSetOrigClOrdID()
    { return isSetField(41); }

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

    public void set(QuickFix.ListID value)
    { setField(value); }
    public QuickFix.ListID get(QuickFix.ListID  value)
    { getField(value); return value; }
    public QuickFix.ListID getListID()
    { QuickFix.ListID value = new QuickFix.ListID();
      getField(value); return value; }
    public bool isSet(QuickFix.ListID field)
    { return isSetField(field); }
    public bool isSetListID()
    { return isSetField(66); }

    public void set(QuickFix.ExecID value)
    { setField(value); }
    public QuickFix.ExecID get(QuickFix.ExecID  value)
    { getField(value); return value; }
    public QuickFix.ExecID getExecID()
    { QuickFix.ExecID value = new QuickFix.ExecID();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecID field)
    { return isSetField(field); }
    public bool isSetExecID()
    { return isSetField(17); }

    public void set(QuickFix.ExecTransType value)
    { setField(value); }
    public QuickFix.ExecTransType get(QuickFix.ExecTransType  value)
    { getField(value); return value; }
    public QuickFix.ExecTransType getExecTransType()
    { QuickFix.ExecTransType value = new QuickFix.ExecTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecTransType field)
    { return isSetField(field); }
    public bool isSetExecTransType()
    { return isSetField(20); }

    public void set(QuickFix.ExecRefID value)
    { setField(value); }
    public QuickFix.ExecRefID get(QuickFix.ExecRefID  value)
    { getField(value); return value; }
    public QuickFix.ExecRefID getExecRefID()
    { QuickFix.ExecRefID value = new QuickFix.ExecRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecRefID field)
    { return isSetField(field); }
    public bool isSetExecRefID()
    { return isSetField(19); }

    public void set(QuickFix.ExecType value)
    { setField(value); }
    public QuickFix.ExecType get(QuickFix.ExecType  value)
    { getField(value); return value; }
    public QuickFix.ExecType getExecType()
    { QuickFix.ExecType value = new QuickFix.ExecType();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecType field)
    { return isSetField(field); }
    public bool isSetExecType()
    { return isSetField(150); }

    public void set(QuickFix.OrdStatus value)
    { setField(value); }
    public QuickFix.OrdStatus get(QuickFix.OrdStatus  value)
    { getField(value); return value; }
    public QuickFix.OrdStatus getOrdStatus()
    { QuickFix.OrdStatus value = new QuickFix.OrdStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdStatus field)
    { return isSetField(field); }
    public bool isSetOrdStatus()
    { return isSetField(39); }

    public void set(QuickFix.OrdRejReason value)
    { setField(value); }
    public QuickFix.OrdRejReason get(QuickFix.OrdRejReason  value)
    { getField(value); return value; }
    public QuickFix.OrdRejReason getOrdRejReason()
    { QuickFix.OrdRejReason value = new QuickFix.OrdRejReason();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdRejReason field)
    { return isSetField(field); }
    public bool isSetOrdRejReason()
    { return isSetField(103); }

    public void set(QuickFix.ExecRestatementReason value)
    { setField(value); }
    public QuickFix.ExecRestatementReason get(QuickFix.ExecRestatementReason  value)
    { getField(value); return value; }
    public QuickFix.ExecRestatementReason getExecRestatementReason()
    { QuickFix.ExecRestatementReason value = new QuickFix.ExecRestatementReason();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecRestatementReason field)
    { return isSetField(field); }
    public bool isSetExecRestatementReason()
    { return isSetField(378); }

    public void set(QuickFix.Account value)
    { setField(value); }
    public QuickFix.Account get(QuickFix.Account  value)
    { getField(value); return value; }
    public QuickFix.Account getAccount()
    { QuickFix.Account value = new QuickFix.Account();
      getField(value); return value; }
    public bool isSet(QuickFix.Account field)
    { return isSetField(field); }
    public bool isSetAccount()
    { return isSetField(1); }

    public void set(QuickFix.SettlmntTyp value)
    { setField(value); }
    public QuickFix.SettlmntTyp get(QuickFix.SettlmntTyp  value)
    { getField(value); return value; }
    public QuickFix.SettlmntTyp getSettlmntTyp()
    { QuickFix.SettlmntTyp value = new QuickFix.SettlmntTyp();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlmntTyp field)
    { return isSetField(field); }
    public bool isSetSettlmntTyp()
    { return isSetField(63); }

    public void set(QuickFix.FutSettDate value)
    { setField(value); }
    public QuickFix.FutSettDate get(QuickFix.FutSettDate  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate getFutSettDate()
    { QuickFix.FutSettDate value = new QuickFix.FutSettDate();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate field)
    { return isSetField(field); }
    public bool isSetFutSettDate()
    { return isSetField(64); }

    public void set(QuickFix.Symbol value)
    { setField(value); }
    public QuickFix.Symbol get(QuickFix.Symbol  value)
    { getField(value); return value; }
    public QuickFix.Symbol getSymbol()
    { QuickFix.Symbol value = new QuickFix.Symbol();
      getField(value); return value; }
    public bool isSet(QuickFix.Symbol field)
    { return isSetField(field); }
    public bool isSetSymbol()
    { return isSetField(55); }

    public void set(QuickFix.SymbolSfx value)
    { setField(value); }
    public QuickFix.SymbolSfx get(QuickFix.SymbolSfx  value)
    { getField(value); return value; }
    public QuickFix.SymbolSfx getSymbolSfx()
    { QuickFix.SymbolSfx value = new QuickFix.SymbolSfx();
      getField(value); return value; }
    public bool isSet(QuickFix.SymbolSfx field)
    { return isSetField(field); }
    public bool isSetSymbolSfx()
    { return isSetField(65); }

    public void set(QuickFix.SecurityID value)
    { setField(value); }
    public QuickFix.SecurityID get(QuickFix.SecurityID  value)
    { getField(value); return value; }
    public QuickFix.SecurityID getSecurityID()
    { QuickFix.SecurityID value = new QuickFix.SecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityID field)
    { return isSetField(field); }
    public bool isSetSecurityID()
    { return isSetField(48); }

    public void set(QuickFix.IDSource value)
    { setField(value); }
    public QuickFix.IDSource get(QuickFix.IDSource  value)
    { getField(value); return value; }
    public QuickFix.IDSource getIDSource()
    { QuickFix.IDSource value = new QuickFix.IDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.IDSource field)
    { return isSetField(field); }
    public bool isSetIDSource()
    { return isSetField(22); }

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

    public void set(QuickFix.MaturityMonthYear value)
    { setField(value); }
    public QuickFix.MaturityMonthYear get(QuickFix.MaturityMonthYear  value)
    { getField(value); return value; }
    public QuickFix.MaturityMonthYear getMaturityMonthYear()
    { QuickFix.MaturityMonthYear value = new QuickFix.MaturityMonthYear();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityMonthYear field)
    { return isSetField(field); }
    public bool isSetMaturityMonthYear()
    { return isSetField(200); }

    public void set(QuickFix.MaturityDay value)
    { setField(value); }
    public QuickFix.MaturityDay get(QuickFix.MaturityDay  value)
    { getField(value); return value; }
    public QuickFix.MaturityDay getMaturityDay()
    { QuickFix.MaturityDay value = new QuickFix.MaturityDay();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityDay field)
    { return isSetField(field); }
    public bool isSetMaturityDay()
    { return isSetField(205); }

    public void set(QuickFix.PutOrCall value)
    { setField(value); }
    public QuickFix.PutOrCall get(QuickFix.PutOrCall  value)
    { getField(value); return value; }
    public QuickFix.PutOrCall getPutOrCall()
    { QuickFix.PutOrCall value = new QuickFix.PutOrCall();
      getField(value); return value; }
    public bool isSet(QuickFix.PutOrCall field)
    { return isSetField(field); }
    public bool isSetPutOrCall()
    { return isSetField(201); }

    public void set(QuickFix.StrikePrice value)
    { setField(value); }
    public QuickFix.StrikePrice get(QuickFix.StrikePrice  value)
    { getField(value); return value; }
    public QuickFix.StrikePrice getStrikePrice()
    { QuickFix.StrikePrice value = new QuickFix.StrikePrice();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePrice field)
    { return isSetField(field); }
    public bool isSetStrikePrice()
    { return isSetField(202); }

    public void set(QuickFix.OptAttribute value)
    { setField(value); }
    public QuickFix.OptAttribute get(QuickFix.OptAttribute  value)
    { getField(value); return value; }
    public QuickFix.OptAttribute getOptAttribute()
    { QuickFix.OptAttribute value = new QuickFix.OptAttribute();
      getField(value); return value; }
    public bool isSet(QuickFix.OptAttribute field)
    { return isSetField(field); }
    public bool isSetOptAttribute()
    { return isSetField(206); }

    public void set(QuickFix.ContractMultiplier value)
    { setField(value); }
    public QuickFix.ContractMultiplier get(QuickFix.ContractMultiplier  value)
    { getField(value); return value; }
    public QuickFix.ContractMultiplier getContractMultiplier()
    { QuickFix.ContractMultiplier value = new QuickFix.ContractMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractMultiplier field)
    { return isSetField(field); }
    public bool isSetContractMultiplier()
    { return isSetField(231); }

    public void set(QuickFix.CouponRate value)
    { setField(value); }
    public QuickFix.CouponRate get(QuickFix.CouponRate  value)
    { getField(value); return value; }
    public QuickFix.CouponRate getCouponRate()
    { QuickFix.CouponRate value = new QuickFix.CouponRate();
      getField(value); return value; }
    public bool isSet(QuickFix.CouponRate field)
    { return isSetField(field); }
    public bool isSetCouponRate()
    { return isSetField(223); }

    public void set(QuickFix.SecurityExchange value)
    { setField(value); }
    public QuickFix.SecurityExchange get(QuickFix.SecurityExchange  value)
    { getField(value); return value; }
    public QuickFix.SecurityExchange getSecurityExchange()
    { QuickFix.SecurityExchange value = new QuickFix.SecurityExchange();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityExchange field)
    { return isSetField(field); }
    public bool isSetSecurityExchange()
    { return isSetField(207); }

    public void set(QuickFix.Issuer value)
    { setField(value); }
    public QuickFix.Issuer get(QuickFix.Issuer  value)
    { getField(value); return value; }
    public QuickFix.Issuer getIssuer()
    { QuickFix.Issuer value = new QuickFix.Issuer();
      getField(value); return value; }
    public bool isSet(QuickFix.Issuer field)
    { return isSetField(field); }
    public bool isSetIssuer()
    { return isSetField(106); }

    public void set(QuickFix.EncodedIssuerLen value)
    { setField(value); }
    public QuickFix.EncodedIssuerLen get(QuickFix.EncodedIssuerLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedIssuerLen getEncodedIssuerLen()
    { QuickFix.EncodedIssuerLen value = new QuickFix.EncodedIssuerLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedIssuerLen field)
    { return isSetField(field); }
    public bool isSetEncodedIssuerLen()
    { return isSetField(348); }

    public void set(QuickFix.EncodedIssuer value)
    { setField(value); }
    public QuickFix.EncodedIssuer get(QuickFix.EncodedIssuer  value)
    { getField(value); return value; }
    public QuickFix.EncodedIssuer getEncodedIssuer()
    { QuickFix.EncodedIssuer value = new QuickFix.EncodedIssuer();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedIssuer field)
    { return isSetField(field); }
    public bool isSetEncodedIssuer()
    { return isSetField(349); }

    public void set(QuickFix.SecurityDesc value)
    { setField(value); }
    public QuickFix.SecurityDesc get(QuickFix.SecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.SecurityDesc getSecurityDesc()
    { QuickFix.SecurityDesc value = new QuickFix.SecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityDesc field)
    { return isSetField(field); }
    public bool isSetSecurityDesc()
    { return isSetField(107); }

    public void set(QuickFix.EncodedSecurityDescLen value)
    { setField(value); }
    public QuickFix.EncodedSecurityDescLen get(QuickFix.EncodedSecurityDescLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedSecurityDescLen getEncodedSecurityDescLen()
    { QuickFix.EncodedSecurityDescLen value = new QuickFix.EncodedSecurityDescLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedSecurityDescLen field)
    { return isSetField(field); }
    public bool isSetEncodedSecurityDescLen()
    { return isSetField(350); }

    public void set(QuickFix.EncodedSecurityDesc value)
    { setField(value); }
    public QuickFix.EncodedSecurityDesc get(QuickFix.EncodedSecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.EncodedSecurityDesc getEncodedSecurityDesc()
    { QuickFix.EncodedSecurityDesc value = new QuickFix.EncodedSecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedSecurityDesc field)
    { return isSetField(field); }
    public bool isSetEncodedSecurityDesc()
    { return isSetField(351); }

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

    public void set(QuickFix.OrderQty value)
    { setField(value); }
    public QuickFix.OrderQty get(QuickFix.OrderQty  value)
    { getField(value); return value; }
    public QuickFix.OrderQty getOrderQty()
    { QuickFix.OrderQty value = new QuickFix.OrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty field)
    { return isSetField(field); }
    public bool isSetOrderQty()
    { return isSetField(38); }

    public void set(QuickFix.CashOrderQty value)
    { setField(value); }
    public QuickFix.CashOrderQty get(QuickFix.CashOrderQty  value)
    { getField(value); return value; }
    public QuickFix.CashOrderQty getCashOrderQty()
    { QuickFix.CashOrderQty value = new QuickFix.CashOrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.CashOrderQty field)
    { return isSetField(field); }
    public bool isSetCashOrderQty()
    { return isSetField(152); }

    public void set(QuickFix.OrdType value)
    { setField(value); }
    public QuickFix.OrdType get(QuickFix.OrdType  value)
    { getField(value); return value; }
    public QuickFix.OrdType getOrdType()
    { QuickFix.OrdType value = new QuickFix.OrdType();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdType field)
    { return isSetField(field); }
    public bool isSetOrdType()
    { return isSetField(40); }

    public void set(QuickFix.Price value)
    { setField(value); }
    public QuickFix.Price get(QuickFix.Price  value)
    { getField(value); return value; }
    public QuickFix.Price getPrice()
    { QuickFix.Price value = new QuickFix.Price();
      getField(value); return value; }
    public bool isSet(QuickFix.Price field)
    { return isSetField(field); }
    public bool isSetPrice()
    { return isSetField(44); }

    public void set(QuickFix.StopPx value)
    { setField(value); }
    public QuickFix.StopPx get(QuickFix.StopPx  value)
    { getField(value); return value; }
    public QuickFix.StopPx getStopPx()
    { QuickFix.StopPx value = new QuickFix.StopPx();
      getField(value); return value; }
    public bool isSet(QuickFix.StopPx field)
    { return isSetField(field); }
    public bool isSetStopPx()
    { return isSetField(99); }

    public void set(QuickFix.PegDifference value)
    { setField(value); }
    public QuickFix.PegDifference get(QuickFix.PegDifference  value)
    { getField(value); return value; }
    public QuickFix.PegDifference getPegDifference()
    { QuickFix.PegDifference value = new QuickFix.PegDifference();
      getField(value); return value; }
    public bool isSet(QuickFix.PegDifference field)
    { return isSetField(field); }
    public bool isSetPegDifference()
    { return isSetField(211); }

    public void set(QuickFix.DiscretionInst value)
    { setField(value); }
    public QuickFix.DiscretionInst get(QuickFix.DiscretionInst  value)
    { getField(value); return value; }
    public QuickFix.DiscretionInst getDiscretionInst()
    { QuickFix.DiscretionInst value = new QuickFix.DiscretionInst();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionInst field)
    { return isSetField(field); }
    public bool isSetDiscretionInst()
    { return isSetField(388); }

    public void set(QuickFix.DiscretionOffset value)
    { setField(value); }
    public QuickFix.DiscretionOffset get(QuickFix.DiscretionOffset  value)
    { getField(value); return value; }
    public QuickFix.DiscretionOffset getDiscretionOffset()
    { QuickFix.DiscretionOffset value = new QuickFix.DiscretionOffset();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionOffset field)
    { return isSetField(field); }
    public bool isSetDiscretionOffset()
    { return isSetField(389); }

    public void set(QuickFix.Currency value)
    { setField(value); }
    public QuickFix.Currency get(QuickFix.Currency  value)
    { getField(value); return value; }
    public QuickFix.Currency getCurrency()
    { QuickFix.Currency value = new QuickFix.Currency();
      getField(value); return value; }
    public bool isSet(QuickFix.Currency field)
    { return isSetField(field); }
    public bool isSetCurrency()
    { return isSetField(15); }

    public void set(QuickFix.ComplianceID value)
    { setField(value); }
    public QuickFix.ComplianceID get(QuickFix.ComplianceID  value)
    { getField(value); return value; }
    public QuickFix.ComplianceID getComplianceID()
    { QuickFix.ComplianceID value = new QuickFix.ComplianceID();
      getField(value); return value; }
    public bool isSet(QuickFix.ComplianceID field)
    { return isSetField(field); }
    public bool isSetComplianceID()
    { return isSetField(376); }

    public void set(QuickFix.SolicitedFlag value)
    { setField(value); }
    public QuickFix.SolicitedFlag get(QuickFix.SolicitedFlag  value)
    { getField(value); return value; }
    public QuickFix.SolicitedFlag getSolicitedFlag()
    { QuickFix.SolicitedFlag value = new QuickFix.SolicitedFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.SolicitedFlag field)
    { return isSetField(field); }
    public bool isSetSolicitedFlag()
    { return isSetField(377); }

    public void set(QuickFix.TimeInForce value)
    { setField(value); }
    public QuickFix.TimeInForce get(QuickFix.TimeInForce  value)
    { getField(value); return value; }
    public QuickFix.TimeInForce getTimeInForce()
    { QuickFix.TimeInForce value = new QuickFix.TimeInForce();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeInForce field)
    { return isSetField(field); }
    public bool isSetTimeInForce()
    { return isSetField(59); }

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

    public void set(QuickFix.ExpireDate value)
    { setField(value); }
    public QuickFix.ExpireDate get(QuickFix.ExpireDate  value)
    { getField(value); return value; }
    public QuickFix.ExpireDate getExpireDate()
    { QuickFix.ExpireDate value = new QuickFix.ExpireDate();
      getField(value); return value; }
    public bool isSet(QuickFix.ExpireDate field)
    { return isSetField(field); }
    public bool isSetExpireDate()
    { return isSetField(432); }

    public void set(QuickFix.ExpireTime value)
    { setField(value); }
    public QuickFix.ExpireTime get(QuickFix.ExpireTime  value)
    { getField(value); return value; }
    public QuickFix.ExpireTime getExpireTime()
    { QuickFix.ExpireTime value = new QuickFix.ExpireTime();
      getField(value); return value; }
    public bool isSet(QuickFix.ExpireTime field)
    { return isSetField(field); }
    public bool isSetExpireTime()
    { return isSetField(126); }

    public void set(QuickFix.ExecInst value)
    { setField(value); }
    public QuickFix.ExecInst get(QuickFix.ExecInst  value)
    { getField(value); return value; }
    public QuickFix.ExecInst getExecInst()
    { QuickFix.ExecInst value = new QuickFix.ExecInst();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecInst field)
    { return isSetField(field); }
    public bool isSetExecInst()
    { return isSetField(18); }

    public void set(QuickFix.Rule80A value)
    { setField(value); }
    public QuickFix.Rule80A get(QuickFix.Rule80A  value)
    { getField(value); return value; }
    public QuickFix.Rule80A getRule80A()
    { QuickFix.Rule80A value = new QuickFix.Rule80A();
      getField(value); return value; }
    public bool isSet(QuickFix.Rule80A field)
    { return isSetField(field); }
    public bool isSetRule80A()
    { return isSetField(47); }

    public void set(QuickFix.LastShares value)
    { setField(value); }
    public QuickFix.LastShares get(QuickFix.LastShares  value)
    { getField(value); return value; }
    public QuickFix.LastShares getLastShares()
    { QuickFix.LastShares value = new QuickFix.LastShares();
      getField(value); return value; }
    public bool isSet(QuickFix.LastShares field)
    { return isSetField(field); }
    public bool isSetLastShares()
    { return isSetField(32); }

    public void set(QuickFix.LastPx value)
    { setField(value); }
    public QuickFix.LastPx get(QuickFix.LastPx  value)
    { getField(value); return value; }
    public QuickFix.LastPx getLastPx()
    { QuickFix.LastPx value = new QuickFix.LastPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastPx field)
    { return isSetField(field); }
    public bool isSetLastPx()
    { return isSetField(31); }

    public void set(QuickFix.LastSpotRate value)
    { setField(value); }
    public QuickFix.LastSpotRate get(QuickFix.LastSpotRate  value)
    { getField(value); return value; }
    public QuickFix.LastSpotRate getLastSpotRate()
    { QuickFix.LastSpotRate value = new QuickFix.LastSpotRate();
      getField(value); return value; }
    public bool isSet(QuickFix.LastSpotRate field)
    { return isSetField(field); }
    public bool isSetLastSpotRate()
    { return isSetField(194); }

    public void set(QuickFix.LastForwardPoints value)
    { setField(value); }
    public QuickFix.LastForwardPoints get(QuickFix.LastForwardPoints  value)
    { getField(value); return value; }
    public QuickFix.LastForwardPoints getLastForwardPoints()
    { QuickFix.LastForwardPoints value = new QuickFix.LastForwardPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.LastForwardPoints field)
    { return isSetField(field); }
    public bool isSetLastForwardPoints()
    { return isSetField(195); }

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

    public void set(QuickFix.TradingSessionID value)
    { setField(value); }
    public QuickFix.TradingSessionID get(QuickFix.TradingSessionID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionID getTradingSessionID()
    { QuickFix.TradingSessionID value = new QuickFix.TradingSessionID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionID field)
    { return isSetField(field); }
    public bool isSetTradingSessionID()
    { return isSetField(336); }

    public void set(QuickFix.LastCapacity value)
    { setField(value); }
    public QuickFix.LastCapacity get(QuickFix.LastCapacity  value)
    { getField(value); return value; }
    public QuickFix.LastCapacity getLastCapacity()
    { QuickFix.LastCapacity value = new QuickFix.LastCapacity();
      getField(value); return value; }
    public bool isSet(QuickFix.LastCapacity field)
    { return isSetField(field); }
    public bool isSetLastCapacity()
    { return isSetField(29); }

    public void set(QuickFix.LeavesQty value)
    { setField(value); }
    public QuickFix.LeavesQty get(QuickFix.LeavesQty  value)
    { getField(value); return value; }
    public QuickFix.LeavesQty getLeavesQty()
    { QuickFix.LeavesQty value = new QuickFix.LeavesQty();
      getField(value); return value; }
    public bool isSet(QuickFix.LeavesQty field)
    { return isSetField(field); }
    public bool isSetLeavesQty()
    { return isSetField(151); }

    public void set(QuickFix.CumQty value)
    { setField(value); }
    public QuickFix.CumQty get(QuickFix.CumQty  value)
    { getField(value); return value; }
    public QuickFix.CumQty getCumQty()
    { QuickFix.CumQty value = new QuickFix.CumQty();
      getField(value); return value; }
    public bool isSet(QuickFix.CumQty field)
    { return isSetField(field); }
    public bool isSetCumQty()
    { return isSetField(14); }

    public void set(QuickFix.AvgPx value)
    { setField(value); }
    public QuickFix.AvgPx get(QuickFix.AvgPx  value)
    { getField(value); return value; }
    public QuickFix.AvgPx getAvgPx()
    { QuickFix.AvgPx value = new QuickFix.AvgPx();
      getField(value); return value; }
    public bool isSet(QuickFix.AvgPx field)
    { return isSetField(field); }
    public bool isSetAvgPx()
    { return isSetField(6); }

    public void set(QuickFix.DayOrderQty value)
    { setField(value); }
    public QuickFix.DayOrderQty get(QuickFix.DayOrderQty  value)
    { getField(value); return value; }
    public QuickFix.DayOrderQty getDayOrderQty()
    { QuickFix.DayOrderQty value = new QuickFix.DayOrderQty();
      getField(value); return value; }
    public bool isSet(QuickFix.DayOrderQty field)
    { return isSetField(field); }
    public bool isSetDayOrderQty()
    { return isSetField(424); }

    public void set(QuickFix.DayCumQty value)
    { setField(value); }
    public QuickFix.DayCumQty get(QuickFix.DayCumQty  value)
    { getField(value); return value; }
    public QuickFix.DayCumQty getDayCumQty()
    { QuickFix.DayCumQty value = new QuickFix.DayCumQty();
      getField(value); return value; }
    public bool isSet(QuickFix.DayCumQty field)
    { return isSetField(field); }
    public bool isSetDayCumQty()
    { return isSetField(425); }

    public void set(QuickFix.DayAvgPx value)
    { setField(value); }
    public QuickFix.DayAvgPx get(QuickFix.DayAvgPx  value)
    { getField(value); return value; }
    public QuickFix.DayAvgPx getDayAvgPx()
    { QuickFix.DayAvgPx value = new QuickFix.DayAvgPx();
      getField(value); return value; }
    public bool isSet(QuickFix.DayAvgPx field)
    { return isSetField(field); }
    public bool isSetDayAvgPx()
    { return isSetField(426); }

    public void set(QuickFix.GTBookingInst value)
    { setField(value); }
    public QuickFix.GTBookingInst get(QuickFix.GTBookingInst  value)
    { getField(value); return value; }
    public QuickFix.GTBookingInst getGTBookingInst()
    { QuickFix.GTBookingInst value = new QuickFix.GTBookingInst();
      getField(value); return value; }
    public bool isSet(QuickFix.GTBookingInst field)
    { return isSetField(field); }
    public bool isSetGTBookingInst()
    { return isSetField(427); }

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

    public void set(QuickFix.ReportToExch value)
    { setField(value); }
    public QuickFix.ReportToExch get(QuickFix.ReportToExch  value)
    { getField(value); return value; }
    public QuickFix.ReportToExch getReportToExch()
    { QuickFix.ReportToExch value = new QuickFix.ReportToExch();
      getField(value); return value; }
    public bool isSet(QuickFix.ReportToExch field)
    { return isSetField(field); }
    public bool isSetReportToExch()
    { return isSetField(113); }

    public void set(QuickFix.Commission value)
    { setField(value); }
    public QuickFix.Commission get(QuickFix.Commission  value)
    { getField(value); return value; }
    public QuickFix.Commission getCommission()
    { QuickFix.Commission value = new QuickFix.Commission();
      getField(value); return value; }
    public bool isSet(QuickFix.Commission field)
    { return isSetField(field); }
    public bool isSetCommission()
    { return isSetField(12); }

    public void set(QuickFix.CommType value)
    { setField(value); }
    public QuickFix.CommType get(QuickFix.CommType  value)
    { getField(value); return value; }
    public QuickFix.CommType getCommType()
    { QuickFix.CommType value = new QuickFix.CommType();
      getField(value); return value; }
    public bool isSet(QuickFix.CommType field)
    { return isSetField(field); }
    public bool isSetCommType()
    { return isSetField(13); }

    public void set(QuickFix.GrossTradeAmt value)
    { setField(value); }
    public QuickFix.GrossTradeAmt get(QuickFix.GrossTradeAmt  value)
    { getField(value); return value; }
    public QuickFix.GrossTradeAmt getGrossTradeAmt()
    { QuickFix.GrossTradeAmt value = new QuickFix.GrossTradeAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.GrossTradeAmt field)
    { return isSetField(field); }
    public bool isSetGrossTradeAmt()
    { return isSetField(381); }

    public void set(QuickFix.SettlCurrAmt value)
    { setField(value); }
    public QuickFix.SettlCurrAmt get(QuickFix.SettlCurrAmt  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrAmt getSettlCurrAmt()
    { QuickFix.SettlCurrAmt value = new QuickFix.SettlCurrAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrAmt field)
    { return isSetField(field); }
    public bool isSetSettlCurrAmt()
    { return isSetField(119); }

    public void set(QuickFix.SettlCurrency value)
    { setField(value); }
    public QuickFix.SettlCurrency get(QuickFix.SettlCurrency  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrency getSettlCurrency()
    { QuickFix.SettlCurrency value = new QuickFix.SettlCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrency field)
    { return isSetField(field); }
    public bool isSetSettlCurrency()
    { return isSetField(120); }

    public void set(QuickFix.SettlCurrFxRate value)
    { setField(value); }
    public QuickFix.SettlCurrFxRate get(QuickFix.SettlCurrFxRate  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrFxRate getSettlCurrFxRate()
    { QuickFix.SettlCurrFxRate value = new QuickFix.SettlCurrFxRate();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrFxRate field)
    { return isSetField(field); }
    public bool isSetSettlCurrFxRate()
    { return isSetField(155); }

    public void set(QuickFix.SettlCurrFxRateCalc value)
    { setField(value); }
    public QuickFix.SettlCurrFxRateCalc get(QuickFix.SettlCurrFxRateCalc  value)
    { getField(value); return value; }
    public QuickFix.SettlCurrFxRateCalc getSettlCurrFxRateCalc()
    { QuickFix.SettlCurrFxRateCalc value = new QuickFix.SettlCurrFxRateCalc();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlCurrFxRateCalc field)
    { return isSetField(field); }
    public bool isSetSettlCurrFxRateCalc()
    { return isSetField(156); }

    public void set(QuickFix.HandlInst value)
    { setField(value); }
    public QuickFix.HandlInst get(QuickFix.HandlInst  value)
    { getField(value); return value; }
    public QuickFix.HandlInst getHandlInst()
    { QuickFix.HandlInst value = new QuickFix.HandlInst();
      getField(value); return value; }
    public bool isSet(QuickFix.HandlInst field)
    { return isSetField(field); }
    public bool isSetHandlInst()
    { return isSetField(21); }

    public void set(QuickFix.MinQty value)
    { setField(value); }
    public QuickFix.MinQty get(QuickFix.MinQty  value)
    { getField(value); return value; }
    public QuickFix.MinQty getMinQty()
    { QuickFix.MinQty value = new QuickFix.MinQty();
      getField(value); return value; }
    public bool isSet(QuickFix.MinQty field)
    { return isSetField(field); }
    public bool isSetMinQty()
    { return isSetField(110); }

    public void set(QuickFix.MaxFloor value)
    { setField(value); }
    public QuickFix.MaxFloor get(QuickFix.MaxFloor  value)
    { getField(value); return value; }
    public QuickFix.MaxFloor getMaxFloor()
    { QuickFix.MaxFloor value = new QuickFix.MaxFloor();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxFloor field)
    { return isSetField(field); }
    public bool isSetMaxFloor()
    { return isSetField(111); }

    public void set(QuickFix.OpenClose value)
    { setField(value); }
    public QuickFix.OpenClose get(QuickFix.OpenClose  value)
    { getField(value); return value; }
    public QuickFix.OpenClose getOpenClose()
    { QuickFix.OpenClose value = new QuickFix.OpenClose();
      getField(value); return value; }
    public bool isSet(QuickFix.OpenClose field)
    { return isSetField(field); }
    public bool isSetOpenClose()
    { return isSetField(77); }

    public void set(QuickFix.MaxShow value)
    { setField(value); }
    public QuickFix.MaxShow get(QuickFix.MaxShow  value)
    { getField(value); return value; }
    public QuickFix.MaxShow getMaxShow()
    { QuickFix.MaxShow value = new QuickFix.MaxShow();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxShow field)
    { return isSetField(field); }
    public bool isSetMaxShow()
    { return isSetField(210); }

    public void set(QuickFix.Text value)
    { setField(value); }
    public QuickFix.Text get(QuickFix.Text  value)
    { getField(value); return value; }
    public QuickFix.Text getText()
    { QuickFix.Text value = new QuickFix.Text();
      getField(value); return value; }
    public bool isSet(QuickFix.Text field)
    { return isSetField(field); }
    public bool isSetText()
    { return isSetField(58); }

    public void set(QuickFix.EncodedTextLen value)
    { setField(value); }
    public QuickFix.EncodedTextLen get(QuickFix.EncodedTextLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedTextLen getEncodedTextLen()
    { QuickFix.EncodedTextLen value = new QuickFix.EncodedTextLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedTextLen field)
    { return isSetField(field); }
    public bool isSetEncodedTextLen()
    { return isSetField(354); }

    public void set(QuickFix.EncodedText value)
    { setField(value); }
    public QuickFix.EncodedText get(QuickFix.EncodedText  value)
    { getField(value); return value; }
    public QuickFix.EncodedText getEncodedText()
    { QuickFix.EncodedText value = new QuickFix.EncodedText();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedText field)
    { return isSetField(field); }
    public bool isSetEncodedText()
    { return isSetField(355); }

    public void set(QuickFix.FutSettDate2 value)
    { setField(value); }
    public QuickFix.FutSettDate2 get(QuickFix.FutSettDate2  value)
    { getField(value); return value; }
    public QuickFix.FutSettDate2 getFutSettDate2()
    { QuickFix.FutSettDate2 value = new QuickFix.FutSettDate2();
      getField(value); return value; }
    public bool isSet(QuickFix.FutSettDate2 field)
    { return isSetField(field); }
    public bool isSetFutSettDate2()
    { return isSetField(193); }

    public void set(QuickFix.OrderQty2 value)
    { setField(value); }
    public QuickFix.OrderQty2 get(QuickFix.OrderQty2  value)
    { getField(value); return value; }
    public QuickFix.OrderQty2 getOrderQty2()
    { QuickFix.OrderQty2 value = new QuickFix.OrderQty2();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderQty2 field)
    { return isSetField(field); }
    public bool isSetOrderQty2()
    { return isSetField(192); }

    public void set(QuickFix.ClearingFirm value)
    { setField(value); }
    public QuickFix.ClearingFirm get(QuickFix.ClearingFirm  value)
    { getField(value); return value; }
    public QuickFix.ClearingFirm getClearingFirm()
    { QuickFix.ClearingFirm value = new QuickFix.ClearingFirm();
      getField(value); return value; }
    public bool isSet(QuickFix.ClearingFirm field)
    { return isSetField(field); }
    public bool isSetClearingFirm()
    { return isSetField(439); }

    public void set(QuickFix.ClearingAccount value)
    { setField(value); }
    public QuickFix.ClearingAccount get(QuickFix.ClearingAccount  value)
    { getField(value); return value; }
    public QuickFix.ClearingAccount getClearingAccount()
    { QuickFix.ClearingAccount value = new QuickFix.ClearingAccount();
      getField(value); return value; }
    public bool isSet(QuickFix.ClearingAccount field)
    { return isSetField(field); }
    public bool isSetClearingAccount()
    { return isSetField(440); }

    public void set(QuickFix.MultiLegReportingType value)
    { setField(value); }
    public QuickFix.MultiLegReportingType get(QuickFix.MultiLegReportingType  value)
    { getField(value); return value; }
    public QuickFix.MultiLegReportingType getMultiLegReportingType()
    { QuickFix.MultiLegReportingType value = new QuickFix.MultiLegReportingType();
      getField(value); return value; }
    public bool isSet(QuickFix.MultiLegReportingType field)
    { return isSetField(field); }
    public bool isSetMultiLegReportingType()
    { return isSetField(442); }

    public void set(QuickFix.NoContraBrokers value)
    { setField(value); }
    public QuickFix.NoContraBrokers get(QuickFix.NoContraBrokers  value)
    { getField(value); return value; }
    public QuickFix.NoContraBrokers getNoContraBrokers()
    { QuickFix.NoContraBrokers value = new QuickFix.NoContraBrokers();
      getField(value); return value; }
    public bool isSet(QuickFix.NoContraBrokers field)
    { return isSetField(field); }
    public bool isSetNoContraBrokers()
    { return isSetField(382); }

    public class NoContraBrokers: QuickFix.Group
    {
    public NoContraBrokers() : base(382,375,message_order ) {}
    static int[] message_order = new int[] {375,337,437,438,0};
      public void set(QuickFix.ContraBroker value)
      { setField(value); }
      public QuickFix.ContraBroker get(QuickFix.ContraBroker  value)
      { getField(value); return value; }
      public QuickFix.ContraBroker getContraBroker()
      { QuickFix.ContraBroker value = new QuickFix.ContraBroker();
        getField(value); return value; }
      public bool isSet(QuickFix.ContraBroker field)
      { return isSetField(field); }
      public bool isSetContraBroker()
      { return isSetField(375); }

      public void set(QuickFix.ContraTrader value)
      { setField(value); }
      public QuickFix.ContraTrader get(QuickFix.ContraTrader  value)
      { getField(value); return value; }
      public QuickFix.ContraTrader getContraTrader()
      { QuickFix.ContraTrader value = new QuickFix.ContraTrader();
        getField(value); return value; }
      public bool isSet(QuickFix.ContraTrader field)
      { return isSetField(field); }
      public bool isSetContraTrader()
      { return isSetField(337); }

      public void set(QuickFix.ContraTradeQty value)
      { setField(value); }
      public QuickFix.ContraTradeQty get(QuickFix.ContraTradeQty  value)
      { getField(value); return value; }
      public QuickFix.ContraTradeQty getContraTradeQty()
      { QuickFix.ContraTradeQty value = new QuickFix.ContraTradeQty();
        getField(value); return value; }
      public bool isSet(QuickFix.ContraTradeQty field)
      { return isSetField(field); }
      public bool isSetContraTradeQty()
      { return isSetField(437); }

      public void set(QuickFix.ContraTradeTime value)
      { setField(value); }
      public QuickFix.ContraTradeTime get(QuickFix.ContraTradeTime  value)
      { getField(value); return value; }
      public QuickFix.ContraTradeTime getContraTradeTime()
      { QuickFix.ContraTradeTime value = new QuickFix.ContraTradeTime();
        getField(value); return value; }
      public bool isSet(QuickFix.ContraTradeTime field)
      { return isSetField(field); }
      public bool isSetContraTradeTime()
      { return isSetField(438); }

    };
  };

}

