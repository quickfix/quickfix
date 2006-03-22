namespace QuickFix43
{

  public class ExecutionReport : Message
  {
    public ExecutionReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("8"); }

    public ExecutionReport(
      QuickFix.OrderID aOrderID,
      QuickFix.ExecID aExecID,
      QuickFix.ExecType aExecType,
      QuickFix.OrdStatus aOrdStatus,
      QuickFix.Side aSide,
      QuickFix.LeavesQty aLeavesQty,
      QuickFix.CumQty aCumQty,
      QuickFix.AvgPx aAvgPx )
    : base(MsgType()) {
      set(aOrderID);
      set(aExecID);
      set(aExecType);
      set(aOrdStatus);
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

    public void set(QuickFix.SecondaryClOrdID value)
    { setField(value); }
    public QuickFix.SecondaryClOrdID get(QuickFix.SecondaryClOrdID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryClOrdID getSecondaryClOrdID()
    { QuickFix.SecondaryClOrdID value = new QuickFix.SecondaryClOrdID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryClOrdID field)
    { return isSetField(field); }
    public bool isSetSecondaryClOrdID()
    { return isSetField(526); }

    public void set(QuickFix.SecondaryExecID value)
    { setField(value); }
    public QuickFix.SecondaryExecID get(QuickFix.SecondaryExecID  value)
    { getField(value); return value; }
    public QuickFix.SecondaryExecID getSecondaryExecID()
    { QuickFix.SecondaryExecID value = new QuickFix.SecondaryExecID();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryExecID field)
    { return isSetField(field); }
    public bool isSetSecondaryExecID()
    { return isSetField(527); }

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

    public void set(QuickFix.ClOrdLinkID value)
    { setField(value); }
    public QuickFix.ClOrdLinkID get(QuickFix.ClOrdLinkID  value)
    { getField(value); return value; }
    public QuickFix.ClOrdLinkID getClOrdLinkID()
    { QuickFix.ClOrdLinkID value = new QuickFix.ClOrdLinkID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClOrdLinkID field)
    { return isSetField(field); }
    public bool isSetClOrdLinkID()
    { return isSetField(583); }

    public void set(QuickFix.NoPartyIDs value)
    { setField(value); }
    public QuickFix.NoPartyIDs get(QuickFix.NoPartyIDs  value)
    { getField(value); return value; }
    public QuickFix.NoPartyIDs getNoPartyIDs()
    { QuickFix.NoPartyIDs value = new QuickFix.NoPartyIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPartyIDs field)
    { return isSetField(field); }
    public bool isSetNoPartyIDs()
    { return isSetField(453); }

    public class NoPartyIDs: QuickFix.Group
    {
    public NoPartyIDs() : base(453,448,message_order ) {}
    static int[] message_order = new int[] {448,447,452,523,0};
      public void set(QuickFix.PartyID value)
      { setField(value); }
      public QuickFix.PartyID get(QuickFix.PartyID  value)
      { getField(value); return value; }
      public QuickFix.PartyID getPartyID()
      { QuickFix.PartyID value = new QuickFix.PartyID();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyID field)
      { return isSetField(field); }
      public bool isSetPartyID()
      { return isSetField(448); }

      public void set(QuickFix.PartyIDSource value)
      { setField(value); }
      public QuickFix.PartyIDSource get(QuickFix.PartyIDSource  value)
      { getField(value); return value; }
      public QuickFix.PartyIDSource getPartyIDSource()
      { QuickFix.PartyIDSource value = new QuickFix.PartyIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyIDSource field)
      { return isSetField(field); }
      public bool isSetPartyIDSource()
      { return isSetField(447); }

      public void set(QuickFix.PartyRole value)
      { setField(value); }
      public QuickFix.PartyRole get(QuickFix.PartyRole  value)
      { getField(value); return value; }
      public QuickFix.PartyRole getPartyRole()
      { QuickFix.PartyRole value = new QuickFix.PartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.PartyRole field)
      { return isSetField(field); }
      public bool isSetPartyRole()
      { return isSetField(452); }

      public void set(QuickFix.PartySubID value)
      { setField(value); }
      public QuickFix.PartySubID get(QuickFix.PartySubID  value)
      { getField(value); return value; }
      public QuickFix.PartySubID getPartySubID()
      { QuickFix.PartySubID value = new QuickFix.PartySubID();
        getField(value); return value; }
      public bool isSet(QuickFix.PartySubID field)
      { return isSetField(field); }
      public bool isSetPartySubID()
      { return isSetField(523); }

    };
    public void set(QuickFix.TradeOriginationDate value)
    { setField(value); }
    public QuickFix.TradeOriginationDate get(QuickFix.TradeOriginationDate  value)
    { getField(value); return value; }
    public QuickFix.TradeOriginationDate getTradeOriginationDate()
    { QuickFix.TradeOriginationDate value = new QuickFix.TradeOriginationDate();
      getField(value); return value; }
    public bool isSet(QuickFix.TradeOriginationDate field)
    { return isSetField(field); }
    public bool isSetTradeOriginationDate()
    { return isSetField(229); }

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

    public void set(QuickFix.CrossID value)
    { setField(value); }
    public QuickFix.CrossID get(QuickFix.CrossID  value)
    { getField(value); return value; }
    public QuickFix.CrossID getCrossID()
    { QuickFix.CrossID value = new QuickFix.CrossID();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossID field)
    { return isSetField(field); }
    public bool isSetCrossID()
    { return isSetField(548); }

    public void set(QuickFix.OrigCrossID value)
    { setField(value); }
    public QuickFix.OrigCrossID get(QuickFix.OrigCrossID  value)
    { getField(value); return value; }
    public QuickFix.OrigCrossID getOrigCrossID()
    { QuickFix.OrigCrossID value = new QuickFix.OrigCrossID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigCrossID field)
    { return isSetField(field); }
    public bool isSetOrigCrossID()
    { return isSetField(551); }

    public void set(QuickFix.CrossType value)
    { setField(value); }
    public QuickFix.CrossType get(QuickFix.CrossType  value)
    { getField(value); return value; }
    public QuickFix.CrossType getCrossType()
    { QuickFix.CrossType value = new QuickFix.CrossType();
      getField(value); return value; }
    public bool isSet(QuickFix.CrossType field)
    { return isSetField(field); }
    public bool isSetCrossType()
    { return isSetField(549); }

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

    public void set(QuickFix.WorkingIndicator value)
    { setField(value); }
    public QuickFix.WorkingIndicator get(QuickFix.WorkingIndicator  value)
    { getField(value); return value; }
    public QuickFix.WorkingIndicator getWorkingIndicator()
    { QuickFix.WorkingIndicator value = new QuickFix.WorkingIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.WorkingIndicator field)
    { return isSetField(field); }
    public bool isSetWorkingIndicator()
    { return isSetField(636); }

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

    public void set(QuickFix.AccountType value)
    { setField(value); }
    public QuickFix.AccountType get(QuickFix.AccountType  value)
    { getField(value); return value; }
    public QuickFix.AccountType getAccountType()
    { QuickFix.AccountType value = new QuickFix.AccountType();
      getField(value); return value; }
    public bool isSet(QuickFix.AccountType field)
    { return isSetField(field); }
    public bool isSetAccountType()
    { return isSetField(581); }

    public void set(QuickFix.DayBookingInst value)
    { setField(value); }
    public QuickFix.DayBookingInst get(QuickFix.DayBookingInst  value)
    { getField(value); return value; }
    public QuickFix.DayBookingInst getDayBookingInst()
    { QuickFix.DayBookingInst value = new QuickFix.DayBookingInst();
      getField(value); return value; }
    public bool isSet(QuickFix.DayBookingInst field)
    { return isSetField(field); }
    public bool isSetDayBookingInst()
    { return isSetField(589); }

    public void set(QuickFix.BookingUnit value)
    { setField(value); }
    public QuickFix.BookingUnit get(QuickFix.BookingUnit  value)
    { getField(value); return value; }
    public QuickFix.BookingUnit getBookingUnit()
    { QuickFix.BookingUnit value = new QuickFix.BookingUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.BookingUnit field)
    { return isSetField(field); }
    public bool isSetBookingUnit()
    { return isSetField(590); }

    public void set(QuickFix.PreallocMethod value)
    { setField(value); }
    public QuickFix.PreallocMethod get(QuickFix.PreallocMethod  value)
    { getField(value); return value; }
    public QuickFix.PreallocMethod getPreallocMethod()
    { QuickFix.PreallocMethod value = new QuickFix.PreallocMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.PreallocMethod field)
    { return isSetField(field); }
    public bool isSetPreallocMethod()
    { return isSetField(591); }

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

    public void set(QuickFix.CashMargin value)
    { setField(value); }
    public QuickFix.CashMargin get(QuickFix.CashMargin  value)
    { getField(value); return value; }
    public QuickFix.CashMargin getCashMargin()
    { QuickFix.CashMargin value = new QuickFix.CashMargin();
      getField(value); return value; }
    public bool isSet(QuickFix.CashMargin field)
    { return isSetField(field); }
    public bool isSetCashMargin()
    { return isSetField(544); }

    public void set(QuickFix.ClearingFeeIndicator value)
    { setField(value); }
    public QuickFix.ClearingFeeIndicator get(QuickFix.ClearingFeeIndicator  value)
    { getField(value); return value; }
    public QuickFix.ClearingFeeIndicator getClearingFeeIndicator()
    { QuickFix.ClearingFeeIndicator value = new QuickFix.ClearingFeeIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.ClearingFeeIndicator field)
    { return isSetField(field); }
    public bool isSetClearingFeeIndicator()
    { return isSetField(635); }

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

    public void set(QuickFix.SecurityIDSource value)
    { setField(value); }
    public QuickFix.SecurityIDSource get(QuickFix.SecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.SecurityIDSource getSecurityIDSource()
    { QuickFix.SecurityIDSource value = new QuickFix.SecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityIDSource field)
    { return isSetField(field); }
    public bool isSetSecurityIDSource()
    { return isSetField(22); }

    public void set(QuickFix.Product value)
    { setField(value); }
    public QuickFix.Product get(QuickFix.Product  value)
    { getField(value); return value; }
    public QuickFix.Product getProduct()
    { QuickFix.Product value = new QuickFix.Product();
      getField(value); return value; }
    public bool isSet(QuickFix.Product field)
    { return isSetField(field); }
    public bool isSetProduct()
    { return isSetField(460); }

    public void set(QuickFix.CFICode value)
    { setField(value); }
    public QuickFix.CFICode get(QuickFix.CFICode  value)
    { getField(value); return value; }
    public QuickFix.CFICode getCFICode()
    { QuickFix.CFICode value = new QuickFix.CFICode();
      getField(value); return value; }
    public bool isSet(QuickFix.CFICode field)
    { return isSetField(field); }
    public bool isSetCFICode()
    { return isSetField(461); }

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

    public void set(QuickFix.MaturityDate value)
    { setField(value); }
    public QuickFix.MaturityDate get(QuickFix.MaturityDate  value)
    { getField(value); return value; }
    public QuickFix.MaturityDate getMaturityDate()
    { QuickFix.MaturityDate value = new QuickFix.MaturityDate();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityDate field)
    { return isSetField(field); }
    public bool isSetMaturityDate()
    { return isSetField(541); }

    public void set(QuickFix.CouponPaymentDate value)
    { setField(value); }
    public QuickFix.CouponPaymentDate get(QuickFix.CouponPaymentDate  value)
    { getField(value); return value; }
    public QuickFix.CouponPaymentDate getCouponPaymentDate()
    { QuickFix.CouponPaymentDate value = new QuickFix.CouponPaymentDate();
      getField(value); return value; }
    public bool isSet(QuickFix.CouponPaymentDate field)
    { return isSetField(field); }
    public bool isSetCouponPaymentDate()
    { return isSetField(224); }

    public void set(QuickFix.IssueDate value)
    { setField(value); }
    public QuickFix.IssueDate get(QuickFix.IssueDate  value)
    { getField(value); return value; }
    public QuickFix.IssueDate getIssueDate()
    { QuickFix.IssueDate value = new QuickFix.IssueDate();
      getField(value); return value; }
    public bool isSet(QuickFix.IssueDate field)
    { return isSetField(field); }
    public bool isSetIssueDate()
    { return isSetField(225); }

    public void set(QuickFix.RepoCollateralSecurityType value)
    { setField(value); }
    public QuickFix.RepoCollateralSecurityType get(QuickFix.RepoCollateralSecurityType  value)
    { getField(value); return value; }
    public QuickFix.RepoCollateralSecurityType getRepoCollateralSecurityType()
    { QuickFix.RepoCollateralSecurityType value = new QuickFix.RepoCollateralSecurityType();
      getField(value); return value; }
    public bool isSet(QuickFix.RepoCollateralSecurityType field)
    { return isSetField(field); }
    public bool isSetRepoCollateralSecurityType()
    { return isSetField(239); }

    public void set(QuickFix.RepurchaseTerm value)
    { setField(value); }
    public QuickFix.RepurchaseTerm get(QuickFix.RepurchaseTerm  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseTerm getRepurchaseTerm()
    { QuickFix.RepurchaseTerm value = new QuickFix.RepurchaseTerm();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseTerm field)
    { return isSetField(field); }
    public bool isSetRepurchaseTerm()
    { return isSetField(226); }

    public void set(QuickFix.RepurchaseRate value)
    { setField(value); }
    public QuickFix.RepurchaseRate get(QuickFix.RepurchaseRate  value)
    { getField(value); return value; }
    public QuickFix.RepurchaseRate getRepurchaseRate()
    { QuickFix.RepurchaseRate value = new QuickFix.RepurchaseRate();
      getField(value); return value; }
    public bool isSet(QuickFix.RepurchaseRate field)
    { return isSetField(field); }
    public bool isSetRepurchaseRate()
    { return isSetField(227); }

    public void set(QuickFix.Factor value)
    { setField(value); }
    public QuickFix.Factor get(QuickFix.Factor  value)
    { getField(value); return value; }
    public QuickFix.Factor getFactor()
    { QuickFix.Factor value = new QuickFix.Factor();
      getField(value); return value; }
    public bool isSet(QuickFix.Factor field)
    { return isSetField(field); }
    public bool isSetFactor()
    { return isSetField(228); }

    public void set(QuickFix.CreditRating value)
    { setField(value); }
    public QuickFix.CreditRating get(QuickFix.CreditRating  value)
    { getField(value); return value; }
    public QuickFix.CreditRating getCreditRating()
    { QuickFix.CreditRating value = new QuickFix.CreditRating();
      getField(value); return value; }
    public bool isSet(QuickFix.CreditRating field)
    { return isSetField(field); }
    public bool isSetCreditRating()
    { return isSetField(255); }

    public void set(QuickFix.InstrRegistry value)
    { setField(value); }
    public QuickFix.InstrRegistry get(QuickFix.InstrRegistry  value)
    { getField(value); return value; }
    public QuickFix.InstrRegistry getInstrRegistry()
    { QuickFix.InstrRegistry value = new QuickFix.InstrRegistry();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrRegistry field)
    { return isSetField(field); }
    public bool isSetInstrRegistry()
    { return isSetField(543); }

    public void set(QuickFix.CountryOfIssue value)
    { setField(value); }
    public QuickFix.CountryOfIssue get(QuickFix.CountryOfIssue  value)
    { getField(value); return value; }
    public QuickFix.CountryOfIssue getCountryOfIssue()
    { QuickFix.CountryOfIssue value = new QuickFix.CountryOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.CountryOfIssue field)
    { return isSetField(field); }
    public bool isSetCountryOfIssue()
    { return isSetField(470); }

    public void set(QuickFix.StateOrProvinceOfIssue value)
    { setField(value); }
    public QuickFix.StateOrProvinceOfIssue get(QuickFix.StateOrProvinceOfIssue  value)
    { getField(value); return value; }
    public QuickFix.StateOrProvinceOfIssue getStateOrProvinceOfIssue()
    { QuickFix.StateOrProvinceOfIssue value = new QuickFix.StateOrProvinceOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.StateOrProvinceOfIssue field)
    { return isSetField(field); }
    public bool isSetStateOrProvinceOfIssue()
    { return isSetField(471); }

    public void set(QuickFix.LocaleOfIssue value)
    { setField(value); }
    public QuickFix.LocaleOfIssue get(QuickFix.LocaleOfIssue  value)
    { getField(value); return value; }
    public QuickFix.LocaleOfIssue getLocaleOfIssue()
    { QuickFix.LocaleOfIssue value = new QuickFix.LocaleOfIssue();
      getField(value); return value; }
    public bool isSet(QuickFix.LocaleOfIssue field)
    { return isSetField(field); }
    public bool isSetLocaleOfIssue()
    { return isSetField(472); }

    public void set(QuickFix.RedemptionDate value)
    { setField(value); }
    public QuickFix.RedemptionDate get(QuickFix.RedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.RedemptionDate getRedemptionDate()
    { QuickFix.RedemptionDate value = new QuickFix.RedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.RedemptionDate field)
    { return isSetField(field); }
    public bool isSetRedemptionDate()
    { return isSetField(240); }

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

    public void set(QuickFix.NoSecurityAltID value)
    { setField(value); }
    public QuickFix.NoSecurityAltID get(QuickFix.NoSecurityAltID  value)
    { getField(value); return value; }
    public QuickFix.NoSecurityAltID getNoSecurityAltID()
    { QuickFix.NoSecurityAltID value = new QuickFix.NoSecurityAltID();
      getField(value); return value; }
    public bool isSet(QuickFix.NoSecurityAltID field)
    { return isSetField(field); }
    public bool isSetNoSecurityAltID()
    { return isSetField(454); }

    public class NoSecurityAltID: QuickFix.Group
    {
    public NoSecurityAltID() : base(454,455,message_order ) {}
    static int[] message_order = new int[] {455,456,0};
      public void set(QuickFix.SecurityAltID value)
      { setField(value); }
      public QuickFix.SecurityAltID get(QuickFix.SecurityAltID  value)
      { getField(value); return value; }
      public QuickFix.SecurityAltID getSecurityAltID()
      { QuickFix.SecurityAltID value = new QuickFix.SecurityAltID();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityAltID field)
      { return isSetField(field); }
      public bool isSetSecurityAltID()
      { return isSetField(455); }

      public void set(QuickFix.SecurityAltIDSource value)
      { setField(value); }
      public QuickFix.SecurityAltIDSource get(QuickFix.SecurityAltIDSource  value)
      { getField(value); return value; }
      public QuickFix.SecurityAltIDSource getSecurityAltIDSource()
      { QuickFix.SecurityAltIDSource value = new QuickFix.SecurityAltIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.SecurityAltIDSource field)
      { return isSetField(field); }
      public bool isSetSecurityAltIDSource()
      { return isSetField(456); }

    };
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

    public void set(QuickFix.NoStipulations value)
    { setField(value); }
    public QuickFix.NoStipulations get(QuickFix.NoStipulations  value)
    { getField(value); return value; }
    public QuickFix.NoStipulations getNoStipulations()
    { QuickFix.NoStipulations value = new QuickFix.NoStipulations();
      getField(value); return value; }
    public bool isSet(QuickFix.NoStipulations field)
    { return isSetField(field); }
    public bool isSetNoStipulations()
    { return isSetField(232); }

    public class NoStipulations: QuickFix.Group
    {
    public NoStipulations() : base(232,233,message_order ) {}
    static int[] message_order = new int[] {233,234,0};
      public void set(QuickFix.StipulationType value)
      { setField(value); }
      public QuickFix.StipulationType get(QuickFix.StipulationType  value)
      { getField(value); return value; }
      public QuickFix.StipulationType getStipulationType()
      { QuickFix.StipulationType value = new QuickFix.StipulationType();
        getField(value); return value; }
      public bool isSet(QuickFix.StipulationType field)
      { return isSetField(field); }
      public bool isSetStipulationType()
      { return isSetField(233); }

      public void set(QuickFix.StipulationValue value)
      { setField(value); }
      public QuickFix.StipulationValue get(QuickFix.StipulationValue  value)
      { getField(value); return value; }
      public QuickFix.StipulationValue getStipulationValue()
      { QuickFix.StipulationValue value = new QuickFix.StipulationValue();
        getField(value); return value; }
      public bool isSet(QuickFix.StipulationValue field)
      { return isSetField(field); }
      public bool isSetStipulationValue()
      { return isSetField(234); }

    };
    public void set(QuickFix.QuantityType value)
    { setField(value); }
    public QuickFix.QuantityType get(QuickFix.QuantityType  value)
    { getField(value); return value; }
    public QuickFix.QuantityType getQuantityType()
    { QuickFix.QuantityType value = new QuickFix.QuantityType();
      getField(value); return value; }
    public bool isSet(QuickFix.QuantityType field)
    { return isSetField(field); }
    public bool isSetQuantityType()
    { return isSetField(465); }

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

    public void set(QuickFix.OrderPercent value)
    { setField(value); }
    public QuickFix.OrderPercent get(QuickFix.OrderPercent  value)
    { getField(value); return value; }
    public QuickFix.OrderPercent getOrderPercent()
    { QuickFix.OrderPercent value = new QuickFix.OrderPercent();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderPercent field)
    { return isSetField(field); }
    public bool isSetOrderPercent()
    { return isSetField(516); }

    public void set(QuickFix.RoundingDirection value)
    { setField(value); }
    public QuickFix.RoundingDirection get(QuickFix.RoundingDirection  value)
    { getField(value); return value; }
    public QuickFix.RoundingDirection getRoundingDirection()
    { QuickFix.RoundingDirection value = new QuickFix.RoundingDirection();
      getField(value); return value; }
    public bool isSet(QuickFix.RoundingDirection field)
    { return isSetField(field); }
    public bool isSetRoundingDirection()
    { return isSetField(468); }

    public void set(QuickFix.RoundingModulus value)
    { setField(value); }
    public QuickFix.RoundingModulus get(QuickFix.RoundingModulus  value)
    { getField(value); return value; }
    public QuickFix.RoundingModulus getRoundingModulus()
    { QuickFix.RoundingModulus value = new QuickFix.RoundingModulus();
      getField(value); return value; }
    public bool isSet(QuickFix.RoundingModulus field)
    { return isSetField(field); }
    public bool isSetRoundingModulus()
    { return isSetField(469); }

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

    public void set(QuickFix.PriceType value)
    { setField(value); }
    public QuickFix.PriceType get(QuickFix.PriceType  value)
    { getField(value); return value; }
    public QuickFix.PriceType getPriceType()
    { QuickFix.PriceType value = new QuickFix.PriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceType field)
    { return isSetField(field); }
    public bool isSetPriceType()
    { return isSetField(423); }

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

    public void set(QuickFix.OrderCapacity value)
    { setField(value); }
    public QuickFix.OrderCapacity get(QuickFix.OrderCapacity  value)
    { getField(value); return value; }
    public QuickFix.OrderCapacity getOrderCapacity()
    { QuickFix.OrderCapacity value = new QuickFix.OrderCapacity();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderCapacity field)
    { return isSetField(field); }
    public bool isSetOrderCapacity()
    { return isSetField(528); }

    public void set(QuickFix.OrderRestrictions value)
    { setField(value); }
    public QuickFix.OrderRestrictions get(QuickFix.OrderRestrictions  value)
    { getField(value); return value; }
    public QuickFix.OrderRestrictions getOrderRestrictions()
    { QuickFix.OrderRestrictions value = new QuickFix.OrderRestrictions();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderRestrictions field)
    { return isSetField(field); }
    public bool isSetOrderRestrictions()
    { return isSetField(529); }

    public void set(QuickFix.CustOrderCapacity value)
    { setField(value); }
    public QuickFix.CustOrderCapacity get(QuickFix.CustOrderCapacity  value)
    { getField(value); return value; }
    public QuickFix.CustOrderCapacity getCustOrderCapacity()
    { QuickFix.CustOrderCapacity value = new QuickFix.CustOrderCapacity();
      getField(value); return value; }
    public bool isSet(QuickFix.CustOrderCapacity field)
    { return isSetField(field); }
    public bool isSetCustOrderCapacity()
    { return isSetField(582); }

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

    public void set(QuickFix.LastQty value)
    { setField(value); }
    public QuickFix.LastQty get(QuickFix.LastQty  value)
    { getField(value); return value; }
    public QuickFix.LastQty getLastQty()
    { QuickFix.LastQty value = new QuickFix.LastQty();
      getField(value); return value; }
    public bool isSet(QuickFix.LastQty field)
    { return isSetField(field); }
    public bool isSetLastQty()
    { return isSetField(32); }

    public void set(QuickFix.UnderlyingLastQty value)
    { setField(value); }
    public QuickFix.UnderlyingLastQty get(QuickFix.UnderlyingLastQty  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingLastQty getUnderlyingLastQty()
    { QuickFix.UnderlyingLastQty value = new QuickFix.UnderlyingLastQty();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingLastQty field)
    { return isSetField(field); }
    public bool isSetUnderlyingLastQty()
    { return isSetField(652); }

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

    public void set(QuickFix.UnderlyingLastPx value)
    { setField(value); }
    public QuickFix.UnderlyingLastPx get(QuickFix.UnderlyingLastPx  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingLastPx getUnderlyingLastPx()
    { QuickFix.UnderlyingLastPx value = new QuickFix.UnderlyingLastPx();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingLastPx field)
    { return isSetField(field); }
    public bool isSetUnderlyingLastPx()
    { return isSetField(651); }

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

    public void set(QuickFix.TradingSessionSubID value)
    { setField(value); }
    public QuickFix.TradingSessionSubID get(QuickFix.TradingSessionSubID  value)
    { getField(value); return value; }
    public QuickFix.TradingSessionSubID getTradingSessionSubID()
    { QuickFix.TradingSessionSubID value = new QuickFix.TradingSessionSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingSessionSubID field)
    { return isSetField(field); }
    public bool isSetTradingSessionSubID()
    { return isSetField(625); }

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

    public void set(QuickFix.CommCurrency value)
    { setField(value); }
    public QuickFix.CommCurrency get(QuickFix.CommCurrency  value)
    { getField(value); return value; }
    public QuickFix.CommCurrency getCommCurrency()
    { QuickFix.CommCurrency value = new QuickFix.CommCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.CommCurrency field)
    { return isSetField(field); }
    public bool isSetCommCurrency()
    { return isSetField(479); }

    public void set(QuickFix.FundRenewWaiv value)
    { setField(value); }
    public QuickFix.FundRenewWaiv get(QuickFix.FundRenewWaiv  value)
    { getField(value); return value; }
    public QuickFix.FundRenewWaiv getFundRenewWaiv()
    { QuickFix.FundRenewWaiv value = new QuickFix.FundRenewWaiv();
      getField(value); return value; }
    public bool isSet(QuickFix.FundRenewWaiv field)
    { return isSetField(field); }
    public bool isSetFundRenewWaiv()
    { return isSetField(497); }

    public void set(QuickFix.Spread value)
    { setField(value); }
    public QuickFix.Spread get(QuickFix.Spread  value)
    { getField(value); return value; }
    public QuickFix.Spread getSpread()
    { QuickFix.Spread value = new QuickFix.Spread();
      getField(value); return value; }
    public bool isSet(QuickFix.Spread field)
    { return isSetField(field); }
    public bool isSetSpread()
    { return isSetField(218); }

    public void set(QuickFix.BenchmarkCurveCurrency value)
    { setField(value); }
    public QuickFix.BenchmarkCurveCurrency get(QuickFix.BenchmarkCurveCurrency  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveCurrency getBenchmarkCurveCurrency()
    { QuickFix.BenchmarkCurveCurrency value = new QuickFix.BenchmarkCurveCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveCurrency field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveCurrency()
    { return isSetField(220); }

    public void set(QuickFix.BenchmarkCurveName value)
    { setField(value); }
    public QuickFix.BenchmarkCurveName get(QuickFix.BenchmarkCurveName  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurveName getBenchmarkCurveName()
    { QuickFix.BenchmarkCurveName value = new QuickFix.BenchmarkCurveName();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurveName field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurveName()
    { return isSetField(221); }

    public void set(QuickFix.BenchmarkCurvePoint value)
    { setField(value); }
    public QuickFix.BenchmarkCurvePoint get(QuickFix.BenchmarkCurvePoint  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkCurvePoint getBenchmarkCurvePoint()
    { QuickFix.BenchmarkCurvePoint value = new QuickFix.BenchmarkCurvePoint();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkCurvePoint field)
    { return isSetField(field); }
    public bool isSetBenchmarkCurvePoint()
    { return isSetField(222); }

    public void set(QuickFix.YieldType value)
    { setField(value); }
    public QuickFix.YieldType get(QuickFix.YieldType  value)
    { getField(value); return value; }
    public QuickFix.YieldType getYieldType()
    { QuickFix.YieldType value = new QuickFix.YieldType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldType field)
    { return isSetField(field); }
    public bool isSetYieldType()
    { return isSetField(235); }

    public void set(QuickFix.Yield value)
    { setField(value); }
    public QuickFix.Yield get(QuickFix.Yield  value)
    { getField(value); return value; }
    public QuickFix.Yield getYield()
    { QuickFix.Yield value = new QuickFix.Yield();
      getField(value); return value; }
    public bool isSet(QuickFix.Yield field)
    { return isSetField(field); }
    public bool isSetYield()
    { return isSetField(236); }

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

    public void set(QuickFix.NumDaysInterest value)
    { setField(value); }
    public QuickFix.NumDaysInterest get(QuickFix.NumDaysInterest  value)
    { getField(value); return value; }
    public QuickFix.NumDaysInterest getNumDaysInterest()
    { QuickFix.NumDaysInterest value = new QuickFix.NumDaysInterest();
      getField(value); return value; }
    public bool isSet(QuickFix.NumDaysInterest field)
    { return isSetField(field); }
    public bool isSetNumDaysInterest()
    { return isSetField(157); }

    public void set(QuickFix.ExDate value)
    { setField(value); }
    public QuickFix.ExDate get(QuickFix.ExDate  value)
    { getField(value); return value; }
    public QuickFix.ExDate getExDate()
    { QuickFix.ExDate value = new QuickFix.ExDate();
      getField(value); return value; }
    public bool isSet(QuickFix.ExDate field)
    { return isSetField(field); }
    public bool isSetExDate()
    { return isSetField(230); }

    public void set(QuickFix.AccruedInterestRate value)
    { setField(value); }
    public QuickFix.AccruedInterestRate get(QuickFix.AccruedInterestRate  value)
    { getField(value); return value; }
    public QuickFix.AccruedInterestRate getAccruedInterestRate()
    { QuickFix.AccruedInterestRate value = new QuickFix.AccruedInterestRate();
      getField(value); return value; }
    public bool isSet(QuickFix.AccruedInterestRate field)
    { return isSetField(field); }
    public bool isSetAccruedInterestRate()
    { return isSetField(158); }

    public void set(QuickFix.AccruedInterestAmt value)
    { setField(value); }
    public QuickFix.AccruedInterestAmt get(QuickFix.AccruedInterestAmt  value)
    { getField(value); return value; }
    public QuickFix.AccruedInterestAmt getAccruedInterestAmt()
    { QuickFix.AccruedInterestAmt value = new QuickFix.AccruedInterestAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.AccruedInterestAmt field)
    { return isSetField(field); }
    public bool isSetAccruedInterestAmt()
    { return isSetField(159); }

    public void set(QuickFix.TradedFlatSwitch value)
    { setField(value); }
    public QuickFix.TradedFlatSwitch get(QuickFix.TradedFlatSwitch  value)
    { getField(value); return value; }
    public QuickFix.TradedFlatSwitch getTradedFlatSwitch()
    { QuickFix.TradedFlatSwitch value = new QuickFix.TradedFlatSwitch();
      getField(value); return value; }
    public bool isSet(QuickFix.TradedFlatSwitch field)
    { return isSetField(field); }
    public bool isSetTradedFlatSwitch()
    { return isSetField(258); }

    public void set(QuickFix.BasisFeatureDate value)
    { setField(value); }
    public QuickFix.BasisFeatureDate get(QuickFix.BasisFeatureDate  value)
    { getField(value); return value; }
    public QuickFix.BasisFeatureDate getBasisFeatureDate()
    { QuickFix.BasisFeatureDate value = new QuickFix.BasisFeatureDate();
      getField(value); return value; }
    public bool isSet(QuickFix.BasisFeatureDate field)
    { return isSetField(field); }
    public bool isSetBasisFeatureDate()
    { return isSetField(259); }

    public void set(QuickFix.BasisFeaturePrice value)
    { setField(value); }
    public QuickFix.BasisFeaturePrice get(QuickFix.BasisFeaturePrice  value)
    { getField(value); return value; }
    public QuickFix.BasisFeaturePrice getBasisFeaturePrice()
    { QuickFix.BasisFeaturePrice value = new QuickFix.BasisFeaturePrice();
      getField(value); return value; }
    public bool isSet(QuickFix.BasisFeaturePrice field)
    { return isSetField(field); }
    public bool isSetBasisFeaturePrice()
    { return isSetField(260); }

    public void set(QuickFix.Concession value)
    { setField(value); }
    public QuickFix.Concession get(QuickFix.Concession  value)
    { getField(value); return value; }
    public QuickFix.Concession getConcession()
    { QuickFix.Concession value = new QuickFix.Concession();
      getField(value); return value; }
    public bool isSet(QuickFix.Concession field)
    { return isSetField(field); }
    public bool isSetConcession()
    { return isSetField(238); }

    public void set(QuickFix.TotalTakedown value)
    { setField(value); }
    public QuickFix.TotalTakedown get(QuickFix.TotalTakedown  value)
    { getField(value); return value; }
    public QuickFix.TotalTakedown getTotalTakedown()
    { QuickFix.TotalTakedown value = new QuickFix.TotalTakedown();
      getField(value); return value; }
    public bool isSet(QuickFix.TotalTakedown field)
    { return isSetField(field); }
    public bool isSetTotalTakedown()
    { return isSetField(237); }

    public void set(QuickFix.NetMoney value)
    { setField(value); }
    public QuickFix.NetMoney get(QuickFix.NetMoney  value)
    { getField(value); return value; }
    public QuickFix.NetMoney getNetMoney()
    { QuickFix.NetMoney value = new QuickFix.NetMoney();
      getField(value); return value; }
    public bool isSet(QuickFix.NetMoney field)
    { return isSetField(field); }
    public bool isSetNetMoney()
    { return isSetField(118); }

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

    public void set(QuickFix.PositionEffect value)
    { setField(value); }
    public QuickFix.PositionEffect get(QuickFix.PositionEffect  value)
    { getField(value); return value; }
    public QuickFix.PositionEffect getPositionEffect()
    { QuickFix.PositionEffect value = new QuickFix.PositionEffect();
      getField(value); return value; }
    public bool isSet(QuickFix.PositionEffect field)
    { return isSetField(field); }
    public bool isSetPositionEffect()
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

    public void set(QuickFix.LastForwardPoints2 value)
    { setField(value); }
    public QuickFix.LastForwardPoints2 get(QuickFix.LastForwardPoints2  value)
    { getField(value); return value; }
    public QuickFix.LastForwardPoints2 getLastForwardPoints2()
    { QuickFix.LastForwardPoints2 value = new QuickFix.LastForwardPoints2();
      getField(value); return value; }
    public bool isSet(QuickFix.LastForwardPoints2 field)
    { return isSetField(field); }
    public bool isSetLastForwardPoints2()
    { return isSetField(641); }

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

    public void set(QuickFix.CancellationRights value)
    { setField(value); }
    public QuickFix.CancellationRights get(QuickFix.CancellationRights  value)
    { getField(value); return value; }
    public QuickFix.CancellationRights getCancellationRights()
    { QuickFix.CancellationRights value = new QuickFix.CancellationRights();
      getField(value); return value; }
    public bool isSet(QuickFix.CancellationRights field)
    { return isSetField(field); }
    public bool isSetCancellationRights()
    { return isSetField(480); }

    public void set(QuickFix.MoneyLaunderingStatus value)
    { setField(value); }
    public QuickFix.MoneyLaunderingStatus get(QuickFix.MoneyLaunderingStatus  value)
    { getField(value); return value; }
    public QuickFix.MoneyLaunderingStatus getMoneyLaunderingStatus()
    { QuickFix.MoneyLaunderingStatus value = new QuickFix.MoneyLaunderingStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.MoneyLaunderingStatus field)
    { return isSetField(field); }
    public bool isSetMoneyLaunderingStatus()
    { return isSetField(481); }

    public void set(QuickFix.RegistID value)
    { setField(value); }
    public QuickFix.RegistID get(QuickFix.RegistID  value)
    { getField(value); return value; }
    public QuickFix.RegistID getRegistID()
    { QuickFix.RegistID value = new QuickFix.RegistID();
      getField(value); return value; }
    public bool isSet(QuickFix.RegistID field)
    { return isSetField(field); }
    public bool isSetRegistID()
    { return isSetField(513); }

    public void set(QuickFix.Designation value)
    { setField(value); }
    public QuickFix.Designation get(QuickFix.Designation  value)
    { getField(value); return value; }
    public QuickFix.Designation getDesignation()
    { QuickFix.Designation value = new QuickFix.Designation();
      getField(value); return value; }
    public bool isSet(QuickFix.Designation field)
    { return isSetField(field); }
    public bool isSetDesignation()
    { return isSetField(494); }

    public void set(QuickFix.TransBkdTime value)
    { setField(value); }
    public QuickFix.TransBkdTime get(QuickFix.TransBkdTime  value)
    { getField(value); return value; }
    public QuickFix.TransBkdTime getTransBkdTime()
    { QuickFix.TransBkdTime value = new QuickFix.TransBkdTime();
      getField(value); return value; }
    public bool isSet(QuickFix.TransBkdTime field)
    { return isSetField(field); }
    public bool isSetTransBkdTime()
    { return isSetField(483); }

    public void set(QuickFix.ExecValuationPoint value)
    { setField(value); }
    public QuickFix.ExecValuationPoint get(QuickFix.ExecValuationPoint  value)
    { getField(value); return value; }
    public QuickFix.ExecValuationPoint getExecValuationPoint()
    { QuickFix.ExecValuationPoint value = new QuickFix.ExecValuationPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecValuationPoint field)
    { return isSetField(field); }
    public bool isSetExecValuationPoint()
    { return isSetField(515); }

    public void set(QuickFix.ExecPriceType value)
    { setField(value); }
    public QuickFix.ExecPriceType get(QuickFix.ExecPriceType  value)
    { getField(value); return value; }
    public QuickFix.ExecPriceType getExecPriceType()
    { QuickFix.ExecPriceType value = new QuickFix.ExecPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecPriceType field)
    { return isSetField(field); }
    public bool isSetExecPriceType()
    { return isSetField(484); }

    public void set(QuickFix.ExecPriceAdjustment value)
    { setField(value); }
    public QuickFix.ExecPriceAdjustment get(QuickFix.ExecPriceAdjustment  value)
    { getField(value); return value; }
    public QuickFix.ExecPriceAdjustment getExecPriceAdjustment()
    { QuickFix.ExecPriceAdjustment value = new QuickFix.ExecPriceAdjustment();
      getField(value); return value; }
    public bool isSet(QuickFix.ExecPriceAdjustment field)
    { return isSetField(field); }
    public bool isSetExecPriceAdjustment()
    { return isSetField(485); }

    public void set(QuickFix.PriorityIndicator value)
    { setField(value); }
    public QuickFix.PriorityIndicator get(QuickFix.PriorityIndicator  value)
    { getField(value); return value; }
    public QuickFix.PriorityIndicator getPriorityIndicator()
    { QuickFix.PriorityIndicator value = new QuickFix.PriorityIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.PriorityIndicator field)
    { return isSetField(field); }
    public bool isSetPriorityIndicator()
    { return isSetField(638); }

    public void set(QuickFix.PriceImprovement value)
    { setField(value); }
    public QuickFix.PriceImprovement get(QuickFix.PriceImprovement  value)
    { getField(value); return value; }
    public QuickFix.PriceImprovement getPriceImprovement()
    { QuickFix.PriceImprovement value = new QuickFix.PriceImprovement();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceImprovement field)
    { return isSetField(field); }
    public bool isSetPriceImprovement()
    { return isSetField(639); }

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
    static int[] message_order = new int[] {375,337,437,438,655,0};
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

      public void set(QuickFix.ContraLegRefID value)
      { setField(value); }
      public QuickFix.ContraLegRefID get(QuickFix.ContraLegRefID  value)
      { getField(value); return value; }
      public QuickFix.ContraLegRefID getContraLegRefID()
      { QuickFix.ContraLegRefID value = new QuickFix.ContraLegRefID();
        getField(value); return value; }
      public bool isSet(QuickFix.ContraLegRefID field)
      { return isSetField(field); }
      public bool isSetContraLegRefID()
      { return isSetField(655); }

    };
    public void set(QuickFix.NoContAmts value)
    { setField(value); }
    public QuickFix.NoContAmts get(QuickFix.NoContAmts  value)
    { getField(value); return value; }
    public QuickFix.NoContAmts getNoContAmts()
    { QuickFix.NoContAmts value = new QuickFix.NoContAmts();
      getField(value); return value; }
    public bool isSet(QuickFix.NoContAmts field)
    { return isSetField(field); }
    public bool isSetNoContAmts()
    { return isSetField(518); }

    public class NoContAmts: QuickFix.Group
    {
    public NoContAmts() : base(518,519,message_order ) {}
    static int[] message_order = new int[] {519,520,521,0};
      public void set(QuickFix.ContAmtType value)
      { setField(value); }
      public QuickFix.ContAmtType get(QuickFix.ContAmtType  value)
      { getField(value); return value; }
      public QuickFix.ContAmtType getContAmtType()
      { QuickFix.ContAmtType value = new QuickFix.ContAmtType();
        getField(value); return value; }
      public bool isSet(QuickFix.ContAmtType field)
      { return isSetField(field); }
      public bool isSetContAmtType()
      { return isSetField(519); }

      public void set(QuickFix.ContAmtValue value)
      { setField(value); }
      public QuickFix.ContAmtValue get(QuickFix.ContAmtValue  value)
      { getField(value); return value; }
      public QuickFix.ContAmtValue getContAmtValue()
      { QuickFix.ContAmtValue value = new QuickFix.ContAmtValue();
        getField(value); return value; }
      public bool isSet(QuickFix.ContAmtValue field)
      { return isSetField(field); }
      public bool isSetContAmtValue()
      { return isSetField(520); }

      public void set(QuickFix.ContAmtCurr value)
      { setField(value); }
      public QuickFix.ContAmtCurr get(QuickFix.ContAmtCurr  value)
      { getField(value); return value; }
      public QuickFix.ContAmtCurr getContAmtCurr()
      { QuickFix.ContAmtCurr value = new QuickFix.ContAmtCurr();
        getField(value); return value; }
      public bool isSet(QuickFix.ContAmtCurr field)
      { return isSetField(field); }
      public bool isSetContAmtCurr()
      { return isSetField(521); }

    };
    public void set(QuickFix.NoLegs value)
    { setField(value); }
    public QuickFix.NoLegs get(QuickFix.NoLegs  value)
    { getField(value); return value; }
    public QuickFix.NoLegs getNoLegs()
    { QuickFix.NoLegs value = new QuickFix.NoLegs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoLegs field)
    { return isSetField(field); }
    public bool isSetNoLegs()
    { return isSetField(555); }

    public class NoLegs: QuickFix.Group
    {
    public NoLegs() : base(555,600,message_order ) {}
    static int[] message_order = new int[] {600,601,602,603,604,607,608,609,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,613,614,615,616,617,618,619,620,621,622,623,624,564,565,539,654,566,587,588,637,0};
      public void set(QuickFix.LegSymbol value)
      { setField(value); }
      public QuickFix.LegSymbol get(QuickFix.LegSymbol  value)
      { getField(value); return value; }
      public QuickFix.LegSymbol getLegSymbol()
      { QuickFix.LegSymbol value = new QuickFix.LegSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbol field)
      { return isSetField(field); }
      public bool isSetLegSymbol()
      { return isSetField(600); }

      public void set(QuickFix.LegSymbolSfx value)
      { setField(value); }
      public QuickFix.LegSymbolSfx get(QuickFix.LegSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.LegSymbolSfx getLegSymbolSfx()
      { QuickFix.LegSymbolSfx value = new QuickFix.LegSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSymbolSfx field)
      { return isSetField(field); }
      public bool isSetLegSymbolSfx()
      { return isSetField(601); }

      public void set(QuickFix.LegSecurityID value)
      { setField(value); }
      public QuickFix.LegSecurityID get(QuickFix.LegSecurityID  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityID getLegSecurityID()
      { QuickFix.LegSecurityID value = new QuickFix.LegSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityID field)
      { return isSetField(field); }
      public bool isSetLegSecurityID()
      { return isSetField(602); }

      public void set(QuickFix.LegSecurityIDSource value)
      { setField(value); }
      public QuickFix.LegSecurityIDSource get(QuickFix.LegSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityIDSource getLegSecurityIDSource()
      { QuickFix.LegSecurityIDSource value = new QuickFix.LegSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetLegSecurityIDSource()
      { return isSetField(603); }

      public void set(QuickFix.LegProduct value)
      { setField(value); }
      public QuickFix.LegProduct get(QuickFix.LegProduct  value)
      { getField(value); return value; }
      public QuickFix.LegProduct getLegProduct()
      { QuickFix.LegProduct value = new QuickFix.LegProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.LegProduct field)
      { return isSetField(field); }
      public bool isSetLegProduct()
      { return isSetField(607); }

      public void set(QuickFix.LegCFICode value)
      { setField(value); }
      public QuickFix.LegCFICode get(QuickFix.LegCFICode  value)
      { getField(value); return value; }
      public QuickFix.LegCFICode getLegCFICode()
      { QuickFix.LegCFICode value = new QuickFix.LegCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCFICode field)
      { return isSetField(field); }
      public bool isSetLegCFICode()
      { return isSetField(608); }

      public void set(QuickFix.LegSecurityType value)
      { setField(value); }
      public QuickFix.LegSecurityType get(QuickFix.LegSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityType getLegSecurityType()
      { QuickFix.LegSecurityType value = new QuickFix.LegSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityType field)
      { return isSetField(field); }
      public bool isSetLegSecurityType()
      { return isSetField(609); }

      public void set(QuickFix.LegMaturityMonthYear value)
      { setField(value); }
      public QuickFix.LegMaturityMonthYear get(QuickFix.LegMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityMonthYear getLegMaturityMonthYear()
      { QuickFix.LegMaturityMonthYear value = new QuickFix.LegMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetLegMaturityMonthYear()
      { return isSetField(610); }

      public void set(QuickFix.LegMaturityDate value)
      { setField(value); }
      public QuickFix.LegMaturityDate get(QuickFix.LegMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityDate getLegMaturityDate()
      { QuickFix.LegMaturityDate value = new QuickFix.LegMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityDate field)
      { return isSetField(field); }
      public bool isSetLegMaturityDate()
      { return isSetField(611); }

      public void set(QuickFix.LegCouponPaymentDate value)
      { setField(value); }
      public QuickFix.LegCouponPaymentDate get(QuickFix.LegCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponPaymentDate getLegCouponPaymentDate()
      { QuickFix.LegCouponPaymentDate value = new QuickFix.LegCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetLegCouponPaymentDate()
      { return isSetField(248); }

      public void set(QuickFix.LegIssueDate value)
      { setField(value); }
      public QuickFix.LegIssueDate get(QuickFix.LegIssueDate  value)
      { getField(value); return value; }
      public QuickFix.LegIssueDate getLegIssueDate()
      { QuickFix.LegIssueDate value = new QuickFix.LegIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssueDate field)
      { return isSetField(field); }
      public bool isSetLegIssueDate()
      { return isSetField(249); }

      public void set(QuickFix.LegRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.LegRepoCollateralSecurityType get(QuickFix.LegRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.LegRepoCollateralSecurityType getLegRepoCollateralSecurityType()
      { QuickFix.LegRepoCollateralSecurityType value = new QuickFix.LegRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetLegRepoCollateralSecurityType()
      { return isSetField(250); }

      public void set(QuickFix.LegRepurchaseTerm value)
      { setField(value); }
      public QuickFix.LegRepurchaseTerm get(QuickFix.LegRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseTerm getLegRepurchaseTerm()
      { QuickFix.LegRepurchaseTerm value = new QuickFix.LegRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseTerm()
      { return isSetField(251); }

      public void set(QuickFix.LegRepurchaseRate value)
      { setField(value); }
      public QuickFix.LegRepurchaseRate get(QuickFix.LegRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.LegRepurchaseRate getLegRepurchaseRate()
      { QuickFix.LegRepurchaseRate value = new QuickFix.LegRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetLegRepurchaseRate()
      { return isSetField(252); }

      public void set(QuickFix.LegFactor value)
      { setField(value); }
      public QuickFix.LegFactor get(QuickFix.LegFactor  value)
      { getField(value); return value; }
      public QuickFix.LegFactor getLegFactor()
      { QuickFix.LegFactor value = new QuickFix.LegFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFactor field)
      { return isSetField(field); }
      public bool isSetLegFactor()
      { return isSetField(253); }

      public void set(QuickFix.LegCreditRating value)
      { setField(value); }
      public QuickFix.LegCreditRating get(QuickFix.LegCreditRating  value)
      { getField(value); return value; }
      public QuickFix.LegCreditRating getLegCreditRating()
      { QuickFix.LegCreditRating value = new QuickFix.LegCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCreditRating field)
      { return isSetField(field); }
      public bool isSetLegCreditRating()
      { return isSetField(257); }

      public void set(QuickFix.LegInstrRegistry value)
      { setField(value); }
      public QuickFix.LegInstrRegistry get(QuickFix.LegInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.LegInstrRegistry getLegInstrRegistry()
      { QuickFix.LegInstrRegistry value = new QuickFix.LegInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInstrRegistry field)
      { return isSetField(field); }
      public bool isSetLegInstrRegistry()
      { return isSetField(599); }

      public void set(QuickFix.LegCountryOfIssue value)
      { setField(value); }
      public QuickFix.LegCountryOfIssue get(QuickFix.LegCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegCountryOfIssue getLegCountryOfIssue()
      { QuickFix.LegCountryOfIssue value = new QuickFix.LegCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetLegCountryOfIssue()
      { return isSetField(596); }

      public void set(QuickFix.LegStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.LegStateOrProvinceOfIssue get(QuickFix.LegStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegStateOrProvinceOfIssue getLegStateOrProvinceOfIssue()
      { QuickFix.LegStateOrProvinceOfIssue value = new QuickFix.LegStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetLegStateOrProvinceOfIssue()
      { return isSetField(597); }

      public void set(QuickFix.LegLocaleOfIssue value)
      { setField(value); }
      public QuickFix.LegLocaleOfIssue get(QuickFix.LegLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.LegLocaleOfIssue getLegLocaleOfIssue()
      { QuickFix.LegLocaleOfIssue value = new QuickFix.LegLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetLegLocaleOfIssue()
      { return isSetField(598); }

      public void set(QuickFix.LegRedemptionDate value)
      { setField(value); }
      public QuickFix.LegRedemptionDate get(QuickFix.LegRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.LegRedemptionDate getLegRedemptionDate()
      { QuickFix.LegRedemptionDate value = new QuickFix.LegRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRedemptionDate field)
      { return isSetField(field); }
      public bool isSetLegRedemptionDate()
      { return isSetField(254); }

      public void set(QuickFix.LegStrikePrice value)
      { setField(value); }
      public QuickFix.LegStrikePrice get(QuickFix.LegStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.LegStrikePrice getLegStrikePrice()
      { QuickFix.LegStrikePrice value = new QuickFix.LegStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikePrice field)
      { return isSetField(field); }
      public bool isSetLegStrikePrice()
      { return isSetField(612); }

      public void set(QuickFix.LegOptAttribute value)
      { setField(value); }
      public QuickFix.LegOptAttribute get(QuickFix.LegOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.LegOptAttribute getLegOptAttribute()
      { QuickFix.LegOptAttribute value = new QuickFix.LegOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptAttribute field)
      { return isSetField(field); }
      public bool isSetLegOptAttribute()
      { return isSetField(613); }

      public void set(QuickFix.LegContractMultiplier value)
      { setField(value); }
      public QuickFix.LegContractMultiplier get(QuickFix.LegContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.LegContractMultiplier getLegContractMultiplier()
      { QuickFix.LegContractMultiplier value = new QuickFix.LegContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractMultiplier field)
      { return isSetField(field); }
      public bool isSetLegContractMultiplier()
      { return isSetField(614); }

      public void set(QuickFix.LegCouponRate value)
      { setField(value); }
      public QuickFix.LegCouponRate get(QuickFix.LegCouponRate  value)
      { getField(value); return value; }
      public QuickFix.LegCouponRate getLegCouponRate()
      { QuickFix.LegCouponRate value = new QuickFix.LegCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCouponRate field)
      { return isSetField(field); }
      public bool isSetLegCouponRate()
      { return isSetField(615); }

      public void set(QuickFix.LegSecurityExchange value)
      { setField(value); }
      public QuickFix.LegSecurityExchange get(QuickFix.LegSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityExchange getLegSecurityExchange()
      { QuickFix.LegSecurityExchange value = new QuickFix.LegSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityExchange field)
      { return isSetField(field); }
      public bool isSetLegSecurityExchange()
      { return isSetField(616); }

      public void set(QuickFix.LegIssuer value)
      { setField(value); }
      public QuickFix.LegIssuer get(QuickFix.LegIssuer  value)
      { getField(value); return value; }
      public QuickFix.LegIssuer getLegIssuer()
      { QuickFix.LegIssuer value = new QuickFix.LegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.LegIssuer field)
      { return isSetField(field); }
      public bool isSetLegIssuer()
      { return isSetField(617); }

      public void set(QuickFix.EncodedLegIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedLegIssuerLen get(QuickFix.EncodedLegIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuerLen getEncodedLegIssuerLen()
      { QuickFix.EncodedLegIssuerLen value = new QuickFix.EncodedLegIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuerLen()
      { return isSetField(618); }

      public void set(QuickFix.EncodedLegIssuer value)
      { setField(value); }
      public QuickFix.EncodedLegIssuer get(QuickFix.EncodedLegIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegIssuer getEncodedLegIssuer()
      { QuickFix.EncodedLegIssuer value = new QuickFix.EncodedLegIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedLegIssuer()
      { return isSetField(619); }

      public void set(QuickFix.LegSecurityDesc value)
      { setField(value); }
      public QuickFix.LegSecurityDesc get(QuickFix.LegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.LegSecurityDesc getLegSecurityDesc()
      { QuickFix.LegSecurityDesc value = new QuickFix.LegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetLegSecurityDesc()
      { return isSetField(620); }

      public void set(QuickFix.EncodedLegSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDescLen get(QuickFix.EncodedLegSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDescLen getEncodedLegSecurityDescLen()
      { QuickFix.EncodedLegSecurityDescLen value = new QuickFix.EncodedLegSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDescLen()
      { return isSetField(621); }

      public void set(QuickFix.EncodedLegSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedLegSecurityDesc get(QuickFix.EncodedLegSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedLegSecurityDesc getEncodedLegSecurityDesc()
      { QuickFix.EncodedLegSecurityDesc value = new QuickFix.EncodedLegSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedLegSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedLegSecurityDesc()
      { return isSetField(622); }

      public void set(QuickFix.LegRatioQty value)
      { setField(value); }
      public QuickFix.LegRatioQty get(QuickFix.LegRatioQty  value)
      { getField(value); return value; }
      public QuickFix.LegRatioQty getLegRatioQty()
      { QuickFix.LegRatioQty value = new QuickFix.LegRatioQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRatioQty field)
      { return isSetField(field); }
      public bool isSetLegRatioQty()
      { return isSetField(623); }

      public void set(QuickFix.LegSide value)
      { setField(value); }
      public QuickFix.LegSide get(QuickFix.LegSide  value)
      { getField(value); return value; }
      public QuickFix.LegSide getLegSide()
      { QuickFix.LegSide value = new QuickFix.LegSide();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSide field)
      { return isSetField(field); }
      public bool isSetLegSide()
      { return isSetField(624); }

      public void set(QuickFix.NoLegSecurityAltID value)
      { setField(value); }
      public QuickFix.NoLegSecurityAltID get(QuickFix.NoLegSecurityAltID  value)
      { getField(value); return value; }
      public QuickFix.NoLegSecurityAltID getNoLegSecurityAltID()
      { QuickFix.NoLegSecurityAltID value = new QuickFix.NoLegSecurityAltID();
        getField(value); return value; }
      public bool isSet(QuickFix.NoLegSecurityAltID field)
      { return isSetField(field); }
      public bool isSetNoLegSecurityAltID()
      { return isSetField(604); }

      public class NoLegSecurityAltID: QuickFix.Group
      {
      public NoLegSecurityAltID() : base(604,605,message_order ) {}
      static int[] message_order = new int[] {605,606,0};
        public void set(QuickFix.LegSecurityAltID value)
        { setField(value); }
        public QuickFix.LegSecurityAltID get(QuickFix.LegSecurityAltID  value)
        { getField(value); return value; }
        public QuickFix.LegSecurityAltID getLegSecurityAltID()
        { QuickFix.LegSecurityAltID value = new QuickFix.LegSecurityAltID();
          getField(value); return value; }
        public bool isSet(QuickFix.LegSecurityAltID field)
        { return isSetField(field); }
        public bool isSetLegSecurityAltID()
        { return isSetField(605); }

        public void set(QuickFix.LegSecurityAltIDSource value)
        { setField(value); }
        public QuickFix.LegSecurityAltIDSource get(QuickFix.LegSecurityAltIDSource  value)
        { getField(value); return value; }
        public QuickFix.LegSecurityAltIDSource getLegSecurityAltIDSource()
        { QuickFix.LegSecurityAltIDSource value = new QuickFix.LegSecurityAltIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.LegSecurityAltIDSource field)
        { return isSetField(field); }
        public bool isSetLegSecurityAltIDSource()
        { return isSetField(606); }

      };
      public void set(QuickFix.LegPositionEffect value)
      { setField(value); }
      public QuickFix.LegPositionEffect get(QuickFix.LegPositionEffect  value)
      { getField(value); return value; }
      public QuickFix.LegPositionEffect getLegPositionEffect()
      { QuickFix.LegPositionEffect value = new QuickFix.LegPositionEffect();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPositionEffect field)
      { return isSetField(field); }
      public bool isSetLegPositionEffect()
      { return isSetField(564); }

      public void set(QuickFix.LegCoveredOrUncovered value)
      { setField(value); }
      public QuickFix.LegCoveredOrUncovered get(QuickFix.LegCoveredOrUncovered  value)
      { getField(value); return value; }
      public QuickFix.LegCoveredOrUncovered getLegCoveredOrUncovered()
      { QuickFix.LegCoveredOrUncovered value = new QuickFix.LegCoveredOrUncovered();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCoveredOrUncovered field)
      { return isSetField(field); }
      public bool isSetLegCoveredOrUncovered()
      { return isSetField(565); }

      public void set(QuickFix.NoNestedPartyIDs value)
      { setField(value); }
      public QuickFix.NoNestedPartyIDs get(QuickFix.NoNestedPartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNestedPartyIDs getNoNestedPartyIDs()
      { QuickFix.NoNestedPartyIDs value = new QuickFix.NoNestedPartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNestedPartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNestedPartyIDs()
      { return isSetField(539); }

      public class NoNestedPartyIDs: QuickFix.Group
      {
      public NoNestedPartyIDs() : base(539,524,message_order ) {}
      static int[] message_order = new int[] {524,525,538,545,0};
        public void set(QuickFix.NestedPartyID value)
        { setField(value); }
        public QuickFix.NestedPartyID get(QuickFix.NestedPartyID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyID getNestedPartyID()
        { QuickFix.NestedPartyID value = new QuickFix.NestedPartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyID field)
        { return isSetField(field); }
        public bool isSetNestedPartyID()
        { return isSetField(524); }

        public void set(QuickFix.NestedPartyIDSource value)
        { setField(value); }
        public QuickFix.NestedPartyIDSource get(QuickFix.NestedPartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyIDSource getNestedPartyIDSource()
        { QuickFix.NestedPartyIDSource value = new QuickFix.NestedPartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyIDSource field)
        { return isSetField(field); }
        public bool isSetNestedPartyIDSource()
        { return isSetField(525); }

        public void set(QuickFix.NestedPartyRole value)
        { setField(value); }
        public QuickFix.NestedPartyRole get(QuickFix.NestedPartyRole  value)
        { getField(value); return value; }
        public QuickFix.NestedPartyRole getNestedPartyRole()
        { QuickFix.NestedPartyRole value = new QuickFix.NestedPartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartyRole field)
        { return isSetField(field); }
        public bool isSetNestedPartyRole()
        { return isSetField(538); }

        public void set(QuickFix.NestedPartySubID value)
        { setField(value); }
        public QuickFix.NestedPartySubID get(QuickFix.NestedPartySubID  value)
        { getField(value); return value; }
        public QuickFix.NestedPartySubID getNestedPartySubID()
        { QuickFix.NestedPartySubID value = new QuickFix.NestedPartySubID();
          getField(value); return value; }
        public bool isSet(QuickFix.NestedPartySubID field)
        { return isSetField(field); }
        public bool isSetNestedPartySubID()
        { return isSetField(545); }

      };
      public void set(QuickFix.LegRefID value)
      { setField(value); }
      public QuickFix.LegRefID get(QuickFix.LegRefID  value)
      { getField(value); return value; }
      public QuickFix.LegRefID getLegRefID()
      { QuickFix.LegRefID value = new QuickFix.LegRefID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegRefID field)
      { return isSetField(field); }
      public bool isSetLegRefID()
      { return isSetField(654); }

      public void set(QuickFix.LegPrice value)
      { setField(value); }
      public QuickFix.LegPrice get(QuickFix.LegPrice  value)
      { getField(value); return value; }
      public QuickFix.LegPrice getLegPrice()
      { QuickFix.LegPrice value = new QuickFix.LegPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPrice field)
      { return isSetField(field); }
      public bool isSetLegPrice()
      { return isSetField(566); }

      public void set(QuickFix.LegSettlmntTyp value)
      { setField(value); }
      public QuickFix.LegSettlmntTyp get(QuickFix.LegSettlmntTyp  value)
      { getField(value); return value; }
      public QuickFix.LegSettlmntTyp getLegSettlmntTyp()
      { QuickFix.LegSettlmntTyp value = new QuickFix.LegSettlmntTyp();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlmntTyp field)
      { return isSetField(field); }
      public bool isSetLegSettlmntTyp()
      { return isSetField(587); }

      public void set(QuickFix.LegFutSettDate value)
      { setField(value); }
      public QuickFix.LegFutSettDate get(QuickFix.LegFutSettDate  value)
      { getField(value); return value; }
      public QuickFix.LegFutSettDate getLegFutSettDate()
      { QuickFix.LegFutSettDate value = new QuickFix.LegFutSettDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFutSettDate field)
      { return isSetField(field); }
      public bool isSetLegFutSettDate()
      { return isSetField(588); }

      public void set(QuickFix.LegLastPx value)
      { setField(value); }
      public QuickFix.LegLastPx get(QuickFix.LegLastPx  value)
      { getField(value); return value; }
      public QuickFix.LegLastPx getLegLastPx()
      { QuickFix.LegLastPx value = new QuickFix.LegLastPx();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastPx field)
      { return isSetField(field); }
      public bool isSetLegLastPx()
      { return isSetField(637); }

    };
  };

}

