namespace QuickFix50Sp2
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
      QuickFix.CumQty aCumQty )
    : base(MsgType()) {
      set(aOrderID);
      set(aExecID);
      set(aExecType);
      set(aOrdStatus);
      set(aSide);
      set(aLeavesQty);
      set(aCumQty);
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

    public void set(QuickFix.QuoteRespID value)
    { setField(value); }
    public QuickFix.QuoteRespID get(QuickFix.QuoteRespID  value)
    { getField(value); return value; }
    public QuickFix.QuoteRespID getQuoteRespID()
    { QuickFix.QuoteRespID value = new QuickFix.QuoteRespID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteRespID field)
    { return isSetField(field); }
    public bool isSetQuoteRespID()
    { return isSetField(693); }

    public void set(QuickFix.OrdStatusReqID value)
    { setField(value); }
    public QuickFix.OrdStatusReqID get(QuickFix.OrdStatusReqID  value)
    { getField(value); return value; }
    public QuickFix.OrdStatusReqID getOrdStatusReqID()
    { QuickFix.OrdStatusReqID value = new QuickFix.OrdStatusReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.OrdStatusReqID field)
    { return isSetField(field); }
    public bool isSetOrdStatusReqID()
    { return isSetField(790); }

    public void set(QuickFix.MassStatusReqID value)
    { setField(value); }
    public QuickFix.MassStatusReqID get(QuickFix.MassStatusReqID  value)
    { getField(value); return value; }
    public QuickFix.MassStatusReqID getMassStatusReqID()
    { QuickFix.MassStatusReqID value = new QuickFix.MassStatusReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.MassStatusReqID field)
    { return isSetField(field); }
    public bool isSetMassStatusReqID()
    { return isSetField(584); }

    public void set(QuickFix.TotNumReports value)
    { setField(value); }
    public QuickFix.TotNumReports get(QuickFix.TotNumReports  value)
    { getField(value); return value; }
    public QuickFix.TotNumReports getTotNumReports()
    { QuickFix.TotNumReports value = new QuickFix.TotNumReports();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNumReports field)
    { return isSetField(field); }
    public bool isSetTotNumReports()
    { return isSetField(911); }

    public void set(QuickFix.LastRptRequested value)
    { setField(value); }
    public QuickFix.LastRptRequested get(QuickFix.LastRptRequested  value)
    { getField(value); return value; }
    public QuickFix.LastRptRequested getLastRptRequested()
    { QuickFix.LastRptRequested value = new QuickFix.LastRptRequested();
      getField(value); return value; }
    public bool isSet(QuickFix.LastRptRequested field)
    { return isSetField(field); }
    public bool isSetLastRptRequested()
    { return isSetField(912); }

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
    static int[] message_order = new int[] {448,447,452,802,0};
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

      public void set(QuickFix.NoPartySubIDs value)
      { setField(value); }
      public QuickFix.NoPartySubIDs get(QuickFix.NoPartySubIDs  value)
      { getField(value); return value; }
      public QuickFix.NoPartySubIDs getNoPartySubIDs()
      { QuickFix.NoPartySubIDs value = new QuickFix.NoPartySubIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoPartySubIDs field)
      { return isSetField(field); }
      public bool isSetNoPartySubIDs()
      { return isSetField(802); }

      public class NoPartySubIDs: QuickFix.Group
      {
      public NoPartySubIDs() : base(802,523,message_order ) {}
      static int[] message_order = new int[] {523,803,0};
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

        public void set(QuickFix.PartySubIDType value)
        { setField(value); }
        public QuickFix.PartySubIDType get(QuickFix.PartySubIDType  value)
        { getField(value); return value; }
        public QuickFix.PartySubIDType getPartySubIDType()
        { QuickFix.PartySubIDType value = new QuickFix.PartySubIDType();
          getField(value); return value; }
        public bool isSet(QuickFix.PartySubIDType field)
        { return isSetField(field); }
        public bool isSetPartySubIDType()
        { return isSetField(803); }

      };
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

    public void set(QuickFix.AcctIDSource value)
    { setField(value); }
    public QuickFix.AcctIDSource get(QuickFix.AcctIDSource  value)
    { getField(value); return value; }
    public QuickFix.AcctIDSource getAcctIDSource()
    { QuickFix.AcctIDSource value = new QuickFix.AcctIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.AcctIDSource field)
    { return isSetField(field); }
    public bool isSetAcctIDSource()
    { return isSetField(660); }

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

    public void set(QuickFix.SettlType value)
    { setField(value); }
    public QuickFix.SettlType get(QuickFix.SettlType  value)
    { getField(value); return value; }
    public QuickFix.SettlType getSettlType()
    { QuickFix.SettlType value = new QuickFix.SettlType();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlType field)
    { return isSetField(field); }
    public bool isSetSettlType()
    { return isSetField(63); }

    public void set(QuickFix.SettlDate value)
    { setField(value); }
    public QuickFix.SettlDate get(QuickFix.SettlDate  value)
    { getField(value); return value; }
    public QuickFix.SettlDate getSettlDate()
    { QuickFix.SettlDate value = new QuickFix.SettlDate();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDate field)
    { return isSetField(field); }
    public bool isSetSettlDate()
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

    public void set(QuickFix.SecuritySubType value)
    { setField(value); }
    public QuickFix.SecuritySubType get(QuickFix.SecuritySubType  value)
    { getField(value); return value; }
    public QuickFix.SecuritySubType getSecuritySubType()
    { QuickFix.SecuritySubType value = new QuickFix.SecuritySubType();
      getField(value); return value; }
    public bool isSet(QuickFix.SecuritySubType field)
    { return isSetField(field); }
    public bool isSetSecuritySubType()
    { return isSetField(762); }

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

    public void set(QuickFix.StrikeCurrency value)
    { setField(value); }
    public QuickFix.StrikeCurrency get(QuickFix.StrikeCurrency  value)
    { getField(value); return value; }
    public QuickFix.StrikeCurrency getStrikeCurrency()
    { QuickFix.StrikeCurrency value = new QuickFix.StrikeCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeCurrency field)
    { return isSetField(field); }
    public bool isSetStrikeCurrency()
    { return isSetField(947); }

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

    public void set(QuickFix.Pool value)
    { setField(value); }
    public QuickFix.Pool get(QuickFix.Pool  value)
    { getField(value); return value; }
    public QuickFix.Pool getPool()
    { QuickFix.Pool value = new QuickFix.Pool();
      getField(value); return value; }
    public bool isSet(QuickFix.Pool field)
    { return isSetField(field); }
    public bool isSetPool()
    { return isSetField(691); }

    public void set(QuickFix.ContractSettlMonth value)
    { setField(value); }
    public QuickFix.ContractSettlMonth get(QuickFix.ContractSettlMonth  value)
    { getField(value); return value; }
    public QuickFix.ContractSettlMonth getContractSettlMonth()
    { QuickFix.ContractSettlMonth value = new QuickFix.ContractSettlMonth();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractSettlMonth field)
    { return isSetField(field); }
    public bool isSetContractSettlMonth()
    { return isSetField(667); }

    public void set(QuickFix.CPProgram value)
    { setField(value); }
    public QuickFix.CPProgram get(QuickFix.CPProgram  value)
    { getField(value); return value; }
    public QuickFix.CPProgram getCPProgram()
    { QuickFix.CPProgram value = new QuickFix.CPProgram();
      getField(value); return value; }
    public bool isSet(QuickFix.CPProgram field)
    { return isSetField(field); }
    public bool isSetCPProgram()
    { return isSetField(875); }

    public void set(QuickFix.CPRegType value)
    { setField(value); }
    public QuickFix.CPRegType get(QuickFix.CPRegType  value)
    { getField(value); return value; }
    public QuickFix.CPRegType getCPRegType()
    { QuickFix.CPRegType value = new QuickFix.CPRegType();
      getField(value); return value; }
    public bool isSet(QuickFix.CPRegType field)
    { return isSetField(field); }
    public bool isSetCPRegType()
    { return isSetField(876); }

    public void set(QuickFix.DatedDate value)
    { setField(value); }
    public QuickFix.DatedDate get(QuickFix.DatedDate  value)
    { getField(value); return value; }
    public QuickFix.DatedDate getDatedDate()
    { QuickFix.DatedDate value = new QuickFix.DatedDate();
      getField(value); return value; }
    public bool isSet(QuickFix.DatedDate field)
    { return isSetField(field); }
    public bool isSetDatedDate()
    { return isSetField(873); }

    public void set(QuickFix.InterestAccrualDate value)
    { setField(value); }
    public QuickFix.InterestAccrualDate get(QuickFix.InterestAccrualDate  value)
    { getField(value); return value; }
    public QuickFix.InterestAccrualDate getInterestAccrualDate()
    { QuickFix.InterestAccrualDate value = new QuickFix.InterestAccrualDate();
      getField(value); return value; }
    public bool isSet(QuickFix.InterestAccrualDate field)
    { return isSetField(field); }
    public bool isSetInterestAccrualDate()
    { return isSetField(874); }

    public void set(QuickFix.SecurityStatus value)
    { setField(value); }
    public QuickFix.SecurityStatus get(QuickFix.SecurityStatus  value)
    { getField(value); return value; }
    public QuickFix.SecurityStatus getSecurityStatus()
    { QuickFix.SecurityStatus value = new QuickFix.SecurityStatus();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityStatus field)
    { return isSetField(field); }
    public bool isSetSecurityStatus()
    { return isSetField(965); }

    public void set(QuickFix.SettleOnOpenFlag value)
    { setField(value); }
    public QuickFix.SettleOnOpenFlag get(QuickFix.SettleOnOpenFlag  value)
    { getField(value); return value; }
    public QuickFix.SettleOnOpenFlag getSettleOnOpenFlag()
    { QuickFix.SettleOnOpenFlag value = new QuickFix.SettleOnOpenFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.SettleOnOpenFlag field)
    { return isSetField(field); }
    public bool isSetSettleOnOpenFlag()
    { return isSetField(966); }

    public void set(QuickFix.InstrmtAssignmentMethod value)
    { setField(value); }
    public QuickFix.InstrmtAssignmentMethod get(QuickFix.InstrmtAssignmentMethod  value)
    { getField(value); return value; }
    public QuickFix.InstrmtAssignmentMethod getInstrmtAssignmentMethod()
    { QuickFix.InstrmtAssignmentMethod value = new QuickFix.InstrmtAssignmentMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.InstrmtAssignmentMethod field)
    { return isSetField(field); }
    public bool isSetInstrmtAssignmentMethod()
    { return isSetField(1049); }

    public void set(QuickFix.StrikeMultiplier value)
    { setField(value); }
    public QuickFix.StrikeMultiplier get(QuickFix.StrikeMultiplier  value)
    { getField(value); return value; }
    public QuickFix.StrikeMultiplier getStrikeMultiplier()
    { QuickFix.StrikeMultiplier value = new QuickFix.StrikeMultiplier();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeMultiplier field)
    { return isSetField(field); }
    public bool isSetStrikeMultiplier()
    { return isSetField(967); }

    public void set(QuickFix.StrikeValue value)
    { setField(value); }
    public QuickFix.StrikeValue get(QuickFix.StrikeValue  value)
    { getField(value); return value; }
    public QuickFix.StrikeValue getStrikeValue()
    { QuickFix.StrikeValue value = new QuickFix.StrikeValue();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikeValue field)
    { return isSetField(field); }
    public bool isSetStrikeValue()
    { return isSetField(968); }

    public void set(QuickFix.MinPriceIncrement value)
    { setField(value); }
    public QuickFix.MinPriceIncrement get(QuickFix.MinPriceIncrement  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrement getMinPriceIncrement()
    { QuickFix.MinPriceIncrement value = new QuickFix.MinPriceIncrement();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrement field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrement()
    { return isSetField(969); }

    public void set(QuickFix.PositionLimit value)
    { setField(value); }
    public QuickFix.PositionLimit get(QuickFix.PositionLimit  value)
    { getField(value); return value; }
    public QuickFix.PositionLimit getPositionLimit()
    { QuickFix.PositionLimit value = new QuickFix.PositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.PositionLimit field)
    { return isSetField(field); }
    public bool isSetPositionLimit()
    { return isSetField(970); }

    public void set(QuickFix.NTPositionLimit value)
    { setField(value); }
    public QuickFix.NTPositionLimit get(QuickFix.NTPositionLimit  value)
    { getField(value); return value; }
    public QuickFix.NTPositionLimit getNTPositionLimit()
    { QuickFix.NTPositionLimit value = new QuickFix.NTPositionLimit();
      getField(value); return value; }
    public bool isSet(QuickFix.NTPositionLimit field)
    { return isSetField(field); }
    public bool isSetNTPositionLimit()
    { return isSetField(971); }

    public void set(QuickFix.UnitOfMeasure value)
    { setField(value); }
    public QuickFix.UnitOfMeasure get(QuickFix.UnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasure getUnitOfMeasure()
    { QuickFix.UnitOfMeasure value = new QuickFix.UnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasure()
    { return isSetField(996); }

    public void set(QuickFix.TimeUnit value)
    { setField(value); }
    public QuickFix.TimeUnit get(QuickFix.TimeUnit  value)
    { getField(value); return value; }
    public QuickFix.TimeUnit getTimeUnit()
    { QuickFix.TimeUnit value = new QuickFix.TimeUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeUnit field)
    { return isSetField(field); }
    public bool isSetTimeUnit()
    { return isSetField(997); }

    public void set(QuickFix.MaturityTime value)
    { setField(value); }
    public QuickFix.MaturityTime get(QuickFix.MaturityTime  value)
    { getField(value); return value; }
    public QuickFix.MaturityTime getMaturityTime()
    { QuickFix.MaturityTime value = new QuickFix.MaturityTime();
      getField(value); return value; }
    public bool isSet(QuickFix.MaturityTime field)
    { return isSetField(field); }
    public bool isSetMaturityTime()
    { return isSetField(1079); }

    public void set(QuickFix.SecurityGroup value)
    { setField(value); }
    public QuickFix.SecurityGroup get(QuickFix.SecurityGroup  value)
    { getField(value); return value; }
    public QuickFix.SecurityGroup getSecurityGroup()
    { QuickFix.SecurityGroup value = new QuickFix.SecurityGroup();
      getField(value); return value; }
    public bool isSet(QuickFix.SecurityGroup field)
    { return isSetField(field); }
    public bool isSetSecurityGroup()
    { return isSetField(1151); }

    public void set(QuickFix.MinPriceIncrementAmount value)
    { setField(value); }
    public QuickFix.MinPriceIncrementAmount get(QuickFix.MinPriceIncrementAmount  value)
    { getField(value); return value; }
    public QuickFix.MinPriceIncrementAmount getMinPriceIncrementAmount()
    { QuickFix.MinPriceIncrementAmount value = new QuickFix.MinPriceIncrementAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.MinPriceIncrementAmount field)
    { return isSetField(field); }
    public bool isSetMinPriceIncrementAmount()
    { return isSetField(1146); }

    public void set(QuickFix.UnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.UnitOfMeasureQty get(QuickFix.UnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.UnitOfMeasureQty getUnitOfMeasureQty()
    { QuickFix.UnitOfMeasureQty value = new QuickFix.UnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.UnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetUnitOfMeasureQty()
    { return isSetField(1147); }

    public void set(QuickFix.ProductComplex value)
    { setField(value); }
    public QuickFix.ProductComplex get(QuickFix.ProductComplex  value)
    { getField(value); return value; }
    public QuickFix.ProductComplex getProductComplex()
    { QuickFix.ProductComplex value = new QuickFix.ProductComplex();
      getField(value); return value; }
    public bool isSet(QuickFix.ProductComplex field)
    { return isSetField(field); }
    public bool isSetProductComplex()
    { return isSetField(1227); }

    public void set(QuickFix.PriceUnitOfMeasure value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasure get(QuickFix.PriceUnitOfMeasure  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasure getPriceUnitOfMeasure()
    { QuickFix.PriceUnitOfMeasure value = new QuickFix.PriceUnitOfMeasure();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasure field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasure()
    { return isSetField(1191); }

    public void set(QuickFix.PriceUnitOfMeasureQty value)
    { setField(value); }
    public QuickFix.PriceUnitOfMeasureQty get(QuickFix.PriceUnitOfMeasureQty  value)
    { getField(value); return value; }
    public QuickFix.PriceUnitOfMeasureQty getPriceUnitOfMeasureQty()
    { QuickFix.PriceUnitOfMeasureQty value = new QuickFix.PriceUnitOfMeasureQty();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceUnitOfMeasureQty field)
    { return isSetField(field); }
    public bool isSetPriceUnitOfMeasureQty()
    { return isSetField(1192); }

    public void set(QuickFix.SettlMethod value)
    { setField(value); }
    public QuickFix.SettlMethod get(QuickFix.SettlMethod  value)
    { getField(value); return value; }
    public QuickFix.SettlMethod getSettlMethod()
    { QuickFix.SettlMethod value = new QuickFix.SettlMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlMethod field)
    { return isSetField(field); }
    public bool isSetSettlMethod()
    { return isSetField(1193); }

    public void set(QuickFix.ExerciseStyle value)
    { setField(value); }
    public QuickFix.ExerciseStyle get(QuickFix.ExerciseStyle  value)
    { getField(value); return value; }
    public QuickFix.ExerciseStyle getExerciseStyle()
    { QuickFix.ExerciseStyle value = new QuickFix.ExerciseStyle();
      getField(value); return value; }
    public bool isSet(QuickFix.ExerciseStyle field)
    { return isSetField(field); }
    public bool isSetExerciseStyle()
    { return isSetField(1194); }

    public void set(QuickFix.OptPayoutAmount value)
    { setField(value); }
    public QuickFix.OptPayoutAmount get(QuickFix.OptPayoutAmount  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutAmount getOptPayoutAmount()
    { QuickFix.OptPayoutAmount value = new QuickFix.OptPayoutAmount();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutAmount field)
    { return isSetField(field); }
    public bool isSetOptPayoutAmount()
    { return isSetField(1195); }

    public void set(QuickFix.PriceQuoteMethod value)
    { setField(value); }
    public QuickFix.PriceQuoteMethod get(QuickFix.PriceQuoteMethod  value)
    { getField(value); return value; }
    public QuickFix.PriceQuoteMethod getPriceQuoteMethod()
    { QuickFix.PriceQuoteMethod value = new QuickFix.PriceQuoteMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceQuoteMethod field)
    { return isSetField(field); }
    public bool isSetPriceQuoteMethod()
    { return isSetField(1196); }

    public void set(QuickFix.ListMethod value)
    { setField(value); }
    public QuickFix.ListMethod get(QuickFix.ListMethod  value)
    { getField(value); return value; }
    public QuickFix.ListMethod getListMethod()
    { QuickFix.ListMethod value = new QuickFix.ListMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ListMethod field)
    { return isSetField(field); }
    public bool isSetListMethod()
    { return isSetField(1198); }

    public void set(QuickFix.CapPrice value)
    { setField(value); }
    public QuickFix.CapPrice get(QuickFix.CapPrice  value)
    { getField(value); return value; }
    public QuickFix.CapPrice getCapPrice()
    { QuickFix.CapPrice value = new QuickFix.CapPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.CapPrice field)
    { return isSetField(field); }
    public bool isSetCapPrice()
    { return isSetField(1199); }

    public void set(QuickFix.FloorPrice value)
    { setField(value); }
    public QuickFix.FloorPrice get(QuickFix.FloorPrice  value)
    { getField(value); return value; }
    public QuickFix.FloorPrice getFloorPrice()
    { QuickFix.FloorPrice value = new QuickFix.FloorPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.FloorPrice field)
    { return isSetField(field); }
    public bool isSetFloorPrice()
    { return isSetField(1200); }

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

    public void set(QuickFix.FlexibleIndicator value)
    { setField(value); }
    public QuickFix.FlexibleIndicator get(QuickFix.FlexibleIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexibleIndicator getFlexibleIndicator()
    { QuickFix.FlexibleIndicator value = new QuickFix.FlexibleIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexibleIndicator field)
    { return isSetField(field); }
    public bool isSetFlexibleIndicator()
    { return isSetField(1244); }

    public void set(QuickFix.FlexProductEligibilityIndicator value)
    { setField(value); }
    public QuickFix.FlexProductEligibilityIndicator get(QuickFix.FlexProductEligibilityIndicator  value)
    { getField(value); return value; }
    public QuickFix.FlexProductEligibilityIndicator getFlexProductEligibilityIndicator()
    { QuickFix.FlexProductEligibilityIndicator value = new QuickFix.FlexProductEligibilityIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.FlexProductEligibilityIndicator field)
    { return isSetField(field); }
    public bool isSetFlexProductEligibilityIndicator()
    { return isSetField(1242); }

    public void set(QuickFix.ValuationMethod value)
    { setField(value); }
    public QuickFix.ValuationMethod get(QuickFix.ValuationMethod  value)
    { getField(value); return value; }
    public QuickFix.ValuationMethod getValuationMethod()
    { QuickFix.ValuationMethod value = new QuickFix.ValuationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.ValuationMethod field)
    { return isSetField(field); }
    public bool isSetValuationMethod()
    { return isSetField(1197); }

    public void set(QuickFix.ContractMultiplierUnit value)
    { setField(value); }
    public QuickFix.ContractMultiplierUnit get(QuickFix.ContractMultiplierUnit  value)
    { getField(value); return value; }
    public QuickFix.ContractMultiplierUnit getContractMultiplierUnit()
    { QuickFix.ContractMultiplierUnit value = new QuickFix.ContractMultiplierUnit();
      getField(value); return value; }
    public bool isSet(QuickFix.ContractMultiplierUnit field)
    { return isSetField(field); }
    public bool isSetContractMultiplierUnit()
    { return isSetField(1435); }

    public void set(QuickFix.FlowScheduleType value)
    { setField(value); }
    public QuickFix.FlowScheduleType get(QuickFix.FlowScheduleType  value)
    { getField(value); return value; }
    public QuickFix.FlowScheduleType getFlowScheduleType()
    { QuickFix.FlowScheduleType value = new QuickFix.FlowScheduleType();
      getField(value); return value; }
    public bool isSet(QuickFix.FlowScheduleType field)
    { return isSetField(field); }
    public bool isSetFlowScheduleType()
    { return isSetField(1439); }

    public void set(QuickFix.RestructuringType value)
    { setField(value); }
    public QuickFix.RestructuringType get(QuickFix.RestructuringType  value)
    { getField(value); return value; }
    public QuickFix.RestructuringType getRestructuringType()
    { QuickFix.RestructuringType value = new QuickFix.RestructuringType();
      getField(value); return value; }
    public bool isSet(QuickFix.RestructuringType field)
    { return isSetField(field); }
    public bool isSetRestructuringType()
    { return isSetField(1449); }

    public void set(QuickFix.Seniority value)
    { setField(value); }
    public QuickFix.Seniority get(QuickFix.Seniority  value)
    { getField(value); return value; }
    public QuickFix.Seniority getSeniority()
    { QuickFix.Seniority value = new QuickFix.Seniority();
      getField(value); return value; }
    public bool isSet(QuickFix.Seniority field)
    { return isSetField(field); }
    public bool isSetSeniority()
    { return isSetField(1450); }

    public void set(QuickFix.NotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.NotionalPercentageOutstanding get(QuickFix.NotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.NotionalPercentageOutstanding getNotionalPercentageOutstanding()
    { QuickFix.NotionalPercentageOutstanding value = new QuickFix.NotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.NotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetNotionalPercentageOutstanding()
    { return isSetField(1451); }

    public void set(QuickFix.OriginalNotionalPercentageOutstanding value)
    { setField(value); }
    public QuickFix.OriginalNotionalPercentageOutstanding get(QuickFix.OriginalNotionalPercentageOutstanding  value)
    { getField(value); return value; }
    public QuickFix.OriginalNotionalPercentageOutstanding getOriginalNotionalPercentageOutstanding()
    { QuickFix.OriginalNotionalPercentageOutstanding value = new QuickFix.OriginalNotionalPercentageOutstanding();
      getField(value); return value; }
    public bool isSet(QuickFix.OriginalNotionalPercentageOutstanding field)
    { return isSetField(field); }
    public bool isSetOriginalNotionalPercentageOutstanding()
    { return isSetField(1452); }

    public void set(QuickFix.AttachmentPoint value)
    { setField(value); }
    public QuickFix.AttachmentPoint get(QuickFix.AttachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.AttachmentPoint getAttachmentPoint()
    { QuickFix.AttachmentPoint value = new QuickFix.AttachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.AttachmentPoint field)
    { return isSetField(field); }
    public bool isSetAttachmentPoint()
    { return isSetField(1457); }

    public void set(QuickFix.DetachmentPoint value)
    { setField(value); }
    public QuickFix.DetachmentPoint get(QuickFix.DetachmentPoint  value)
    { getField(value); return value; }
    public QuickFix.DetachmentPoint getDetachmentPoint()
    { QuickFix.DetachmentPoint value = new QuickFix.DetachmentPoint();
      getField(value); return value; }
    public bool isSet(QuickFix.DetachmentPoint field)
    { return isSetField(field); }
    public bool isSetDetachmentPoint()
    { return isSetField(1458); }

    public void set(QuickFix.StrikePriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.StrikePriceDeterminationMethod get(QuickFix.StrikePriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceDeterminationMethod getStrikePriceDeterminationMethod()
    { QuickFix.StrikePriceDeterminationMethod value = new QuickFix.StrikePriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceDeterminationMethod()
    { return isSetField(1478); }

    public void set(QuickFix.StrikePriceBoundaryMethod value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryMethod get(QuickFix.StrikePriceBoundaryMethod  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryMethod getStrikePriceBoundaryMethod()
    { QuickFix.StrikePriceBoundaryMethod value = new QuickFix.StrikePriceBoundaryMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryMethod field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryMethod()
    { return isSetField(1479); }

    public void set(QuickFix.StrikePriceBoundaryPrecision value)
    { setField(value); }
    public QuickFix.StrikePriceBoundaryPrecision get(QuickFix.StrikePriceBoundaryPrecision  value)
    { getField(value); return value; }
    public QuickFix.StrikePriceBoundaryPrecision getStrikePriceBoundaryPrecision()
    { QuickFix.StrikePriceBoundaryPrecision value = new QuickFix.StrikePriceBoundaryPrecision();
      getField(value); return value; }
    public bool isSet(QuickFix.StrikePriceBoundaryPrecision field)
    { return isSetField(field); }
    public bool isSetStrikePriceBoundaryPrecision()
    { return isSetField(1480); }

    public void set(QuickFix.UnderlyingPriceDeterminationMethod value)
    { setField(value); }
    public QuickFix.UnderlyingPriceDeterminationMethod get(QuickFix.UnderlyingPriceDeterminationMethod  value)
    { getField(value); return value; }
    public QuickFix.UnderlyingPriceDeterminationMethod getUnderlyingPriceDeterminationMethod()
    { QuickFix.UnderlyingPriceDeterminationMethod value = new QuickFix.UnderlyingPriceDeterminationMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.UnderlyingPriceDeterminationMethod field)
    { return isSetField(field); }
    public bool isSetUnderlyingPriceDeterminationMethod()
    { return isSetField(1481); }

    public void set(QuickFix.OptPayoutType value)
    { setField(value); }
    public QuickFix.OptPayoutType get(QuickFix.OptPayoutType  value)
    { getField(value); return value; }
    public QuickFix.OptPayoutType getOptPayoutType()
    { QuickFix.OptPayoutType value = new QuickFix.OptPayoutType();
      getField(value); return value; }
    public bool isSet(QuickFix.OptPayoutType field)
    { return isSetField(field); }
    public bool isSetOptPayoutType()
    { return isSetField(1482); }

    public void set(QuickFix.AgreementDesc value)
    { setField(value); }
    public QuickFix.AgreementDesc get(QuickFix.AgreementDesc  value)
    { getField(value); return value; }
    public QuickFix.AgreementDesc getAgreementDesc()
    { QuickFix.AgreementDesc value = new QuickFix.AgreementDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDesc field)
    { return isSetField(field); }
    public bool isSetAgreementDesc()
    { return isSetField(913); }

    public void set(QuickFix.AgreementID value)
    { setField(value); }
    public QuickFix.AgreementID get(QuickFix.AgreementID  value)
    { getField(value); return value; }
    public QuickFix.AgreementID getAgreementID()
    { QuickFix.AgreementID value = new QuickFix.AgreementID();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementID field)
    { return isSetField(field); }
    public bool isSetAgreementID()
    { return isSetField(914); }

    public void set(QuickFix.AgreementDate value)
    { setField(value); }
    public QuickFix.AgreementDate get(QuickFix.AgreementDate  value)
    { getField(value); return value; }
    public QuickFix.AgreementDate getAgreementDate()
    { QuickFix.AgreementDate value = new QuickFix.AgreementDate();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementDate field)
    { return isSetField(field); }
    public bool isSetAgreementDate()
    { return isSetField(915); }

    public void set(QuickFix.AgreementCurrency value)
    { setField(value); }
    public QuickFix.AgreementCurrency get(QuickFix.AgreementCurrency  value)
    { getField(value); return value; }
    public QuickFix.AgreementCurrency getAgreementCurrency()
    { QuickFix.AgreementCurrency value = new QuickFix.AgreementCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.AgreementCurrency field)
    { return isSetField(field); }
    public bool isSetAgreementCurrency()
    { return isSetField(918); }

    public void set(QuickFix.TerminationType value)
    { setField(value); }
    public QuickFix.TerminationType get(QuickFix.TerminationType  value)
    { getField(value); return value; }
    public QuickFix.TerminationType getTerminationType()
    { QuickFix.TerminationType value = new QuickFix.TerminationType();
      getField(value); return value; }
    public bool isSet(QuickFix.TerminationType field)
    { return isSetField(field); }
    public bool isSetTerminationType()
    { return isSetField(788); }

    public void set(QuickFix.StartDate value)
    { setField(value); }
    public QuickFix.StartDate get(QuickFix.StartDate  value)
    { getField(value); return value; }
    public QuickFix.StartDate getStartDate()
    { QuickFix.StartDate value = new QuickFix.StartDate();
      getField(value); return value; }
    public bool isSet(QuickFix.StartDate field)
    { return isSetField(field); }
    public bool isSetStartDate()
    { return isSetField(916); }

    public void set(QuickFix.EndDate value)
    { setField(value); }
    public QuickFix.EndDate get(QuickFix.EndDate  value)
    { getField(value); return value; }
    public QuickFix.EndDate getEndDate()
    { QuickFix.EndDate value = new QuickFix.EndDate();
      getField(value); return value; }
    public bool isSet(QuickFix.EndDate field)
    { return isSetField(field); }
    public bool isSetEndDate()
    { return isSetField(917); }

    public void set(QuickFix.DeliveryType value)
    { setField(value); }
    public QuickFix.DeliveryType get(QuickFix.DeliveryType  value)
    { getField(value); return value; }
    public QuickFix.DeliveryType getDeliveryType()
    { QuickFix.DeliveryType value = new QuickFix.DeliveryType();
      getField(value); return value; }
    public bool isSet(QuickFix.DeliveryType field)
    { return isSetField(field); }
    public bool isSetDeliveryType()
    { return isSetField(919); }

    public void set(QuickFix.MarginRatio value)
    { setField(value); }
    public QuickFix.MarginRatio get(QuickFix.MarginRatio  value)
    { getField(value); return value; }
    public QuickFix.MarginRatio getMarginRatio()
    { QuickFix.MarginRatio value = new QuickFix.MarginRatio();
      getField(value); return value; }
    public bool isSet(QuickFix.MarginRatio field)
    { return isSetField(field); }
    public bool isSetMarginRatio()
    { return isSetField(898); }

    public void set(QuickFix.NoUnderlyings value)
    { setField(value); }
    public QuickFix.NoUnderlyings get(QuickFix.NoUnderlyings  value)
    { getField(value); return value; }
    public QuickFix.NoUnderlyings getNoUnderlyings()
    { QuickFix.NoUnderlyings value = new QuickFix.NoUnderlyings();
      getField(value); return value; }
    public bool isSet(QuickFix.NoUnderlyings field)
    { return isSetField(field); }
    public bool isSetNoUnderlyings()
    { return isSetField(711); }

    public class NoUnderlyings: QuickFix.Group
    {
    public NoUnderlyings() : base(711,311,message_order ) {}
    static int[] message_order = new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,1213,315,1419,1423,1424,1425,1437,1441,1453,1454,1455,1456,1459,1460,0};
      public void set(QuickFix.UnderlyingSymbol value)
      { setField(value); }
      public QuickFix.UnderlyingSymbol get(QuickFix.UnderlyingSymbol  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbol getUnderlyingSymbol()
      { QuickFix.UnderlyingSymbol value = new QuickFix.UnderlyingSymbol();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbol field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbol()
      { return isSetField(311); }

      public void set(QuickFix.UnderlyingSymbolSfx value)
      { setField(value); }
      public QuickFix.UnderlyingSymbolSfx get(QuickFix.UnderlyingSymbolSfx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSymbolSfx getUnderlyingSymbolSfx()
      { QuickFix.UnderlyingSymbolSfx value = new QuickFix.UnderlyingSymbolSfx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSymbolSfx field)
      { return isSetField(field); }
      public bool isSetUnderlyingSymbolSfx()
      { return isSetField(312); }

      public void set(QuickFix.UnderlyingSecurityID value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityID get(QuickFix.UnderlyingSecurityID  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityID getUnderlyingSecurityID()
      { QuickFix.UnderlyingSecurityID value = new QuickFix.UnderlyingSecurityID();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityID field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityID()
      { return isSetField(309); }

      public void set(QuickFix.UnderlyingSecurityIDSource value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityIDSource get(QuickFix.UnderlyingSecurityIDSource  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityIDSource getUnderlyingSecurityIDSource()
      { QuickFix.UnderlyingSecurityIDSource value = new QuickFix.UnderlyingSecurityIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityIDSource field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityIDSource()
      { return isSetField(305); }

      public void set(QuickFix.UnderlyingProduct value)
      { setField(value); }
      public QuickFix.UnderlyingProduct get(QuickFix.UnderlyingProduct  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingProduct getUnderlyingProduct()
      { QuickFix.UnderlyingProduct value = new QuickFix.UnderlyingProduct();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingProduct field)
      { return isSetField(field); }
      public bool isSetUnderlyingProduct()
      { return isSetField(462); }

      public void set(QuickFix.UnderlyingCFICode value)
      { setField(value); }
      public QuickFix.UnderlyingCFICode get(QuickFix.UnderlyingCFICode  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCFICode getUnderlyingCFICode()
      { QuickFix.UnderlyingCFICode value = new QuickFix.UnderlyingCFICode();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCFICode field)
      { return isSetField(field); }
      public bool isSetUnderlyingCFICode()
      { return isSetField(463); }

      public void set(QuickFix.UnderlyingSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityType get(QuickFix.UnderlyingSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityType getUnderlyingSecurityType()
      { QuickFix.UnderlyingSecurityType value = new QuickFix.UnderlyingSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityType()
      { return isSetField(310); }

      public void set(QuickFix.UnderlyingSecuritySubType value)
      { setField(value); }
      public QuickFix.UnderlyingSecuritySubType get(QuickFix.UnderlyingSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecuritySubType getUnderlyingSecuritySubType()
      { QuickFix.UnderlyingSecuritySubType value = new QuickFix.UnderlyingSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecuritySubType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecuritySubType()
      { return isSetField(763); }

      public void set(QuickFix.UnderlyingMaturityMonthYear value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityMonthYear get(QuickFix.UnderlyingMaturityMonthYear  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityMonthYear getUnderlyingMaturityMonthYear()
      { QuickFix.UnderlyingMaturityMonthYear value = new QuickFix.UnderlyingMaturityMonthYear();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityMonthYear field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityMonthYear()
      { return isSetField(313); }

      public void set(QuickFix.UnderlyingMaturityDate value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityDate get(QuickFix.UnderlyingMaturityDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityDate getUnderlyingMaturityDate()
      { QuickFix.UnderlyingMaturityDate value = new QuickFix.UnderlyingMaturityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityDate()
      { return isSetField(542); }

      public void set(QuickFix.UnderlyingCouponPaymentDate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponPaymentDate get(QuickFix.UnderlyingCouponPaymentDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponPaymentDate getUnderlyingCouponPaymentDate()
      { QuickFix.UnderlyingCouponPaymentDate value = new QuickFix.UnderlyingCouponPaymentDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponPaymentDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponPaymentDate()
      { return isSetField(241); }

      public void set(QuickFix.UnderlyingIssueDate value)
      { setField(value); }
      public QuickFix.UnderlyingIssueDate get(QuickFix.UnderlyingIssueDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssueDate getUnderlyingIssueDate()
      { QuickFix.UnderlyingIssueDate value = new QuickFix.UnderlyingIssueDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssueDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssueDate()
      { return isSetField(242); }

      public void set(QuickFix.UnderlyingRepoCollateralSecurityType value)
      { setField(value); }
      public QuickFix.UnderlyingRepoCollateralSecurityType get(QuickFix.UnderlyingRepoCollateralSecurityType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepoCollateralSecurityType getUnderlyingRepoCollateralSecurityType()
      { QuickFix.UnderlyingRepoCollateralSecurityType value = new QuickFix.UnderlyingRepoCollateralSecurityType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepoCollateralSecurityType field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepoCollateralSecurityType()
      { return isSetField(243); }

      public void set(QuickFix.UnderlyingRepurchaseTerm value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseTerm get(QuickFix.UnderlyingRepurchaseTerm  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseTerm getUnderlyingRepurchaseTerm()
      { QuickFix.UnderlyingRepurchaseTerm value = new QuickFix.UnderlyingRepurchaseTerm();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseTerm field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseTerm()
      { return isSetField(244); }

      public void set(QuickFix.UnderlyingRepurchaseRate value)
      { setField(value); }
      public QuickFix.UnderlyingRepurchaseRate get(QuickFix.UnderlyingRepurchaseRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRepurchaseRate getUnderlyingRepurchaseRate()
      { QuickFix.UnderlyingRepurchaseRate value = new QuickFix.UnderlyingRepurchaseRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRepurchaseRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRepurchaseRate()
      { return isSetField(245); }

      public void set(QuickFix.UnderlyingFactor value)
      { setField(value); }
      public QuickFix.UnderlyingFactor get(QuickFix.UnderlyingFactor  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFactor getUnderlyingFactor()
      { QuickFix.UnderlyingFactor value = new QuickFix.UnderlyingFactor();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFactor field)
      { return isSetField(field); }
      public bool isSetUnderlyingFactor()
      { return isSetField(246); }

      public void set(QuickFix.UnderlyingCreditRating value)
      { setField(value); }
      public QuickFix.UnderlyingCreditRating get(QuickFix.UnderlyingCreditRating  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCreditRating getUnderlyingCreditRating()
      { QuickFix.UnderlyingCreditRating value = new QuickFix.UnderlyingCreditRating();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCreditRating field)
      { return isSetField(field); }
      public bool isSetUnderlyingCreditRating()
      { return isSetField(256); }

      public void set(QuickFix.UnderlyingInstrRegistry value)
      { setField(value); }
      public QuickFix.UnderlyingInstrRegistry get(QuickFix.UnderlyingInstrRegistry  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingInstrRegistry getUnderlyingInstrRegistry()
      { QuickFix.UnderlyingInstrRegistry value = new QuickFix.UnderlyingInstrRegistry();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingInstrRegistry field)
      { return isSetField(field); }
      public bool isSetUnderlyingInstrRegistry()
      { return isSetField(595); }

      public void set(QuickFix.UnderlyingCountryOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingCountryOfIssue get(QuickFix.UnderlyingCountryOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCountryOfIssue getUnderlyingCountryOfIssue()
      { QuickFix.UnderlyingCountryOfIssue value = new QuickFix.UnderlyingCountryOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCountryOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCountryOfIssue()
      { return isSetField(592); }

      public void set(QuickFix.UnderlyingStateOrProvinceOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingStateOrProvinceOfIssue get(QuickFix.UnderlyingStateOrProvinceOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStateOrProvinceOfIssue getUnderlyingStateOrProvinceOfIssue()
      { QuickFix.UnderlyingStateOrProvinceOfIssue value = new QuickFix.UnderlyingStateOrProvinceOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStateOrProvinceOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStateOrProvinceOfIssue()
      { return isSetField(593); }

      public void set(QuickFix.UnderlyingLocaleOfIssue value)
      { setField(value); }
      public QuickFix.UnderlyingLocaleOfIssue get(QuickFix.UnderlyingLocaleOfIssue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingLocaleOfIssue getUnderlyingLocaleOfIssue()
      { QuickFix.UnderlyingLocaleOfIssue value = new QuickFix.UnderlyingLocaleOfIssue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingLocaleOfIssue field)
      { return isSetField(field); }
      public bool isSetUnderlyingLocaleOfIssue()
      { return isSetField(594); }

      public void set(QuickFix.UnderlyingRedemptionDate value)
      { setField(value); }
      public QuickFix.UnderlyingRedemptionDate get(QuickFix.UnderlyingRedemptionDate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRedemptionDate getUnderlyingRedemptionDate()
      { QuickFix.UnderlyingRedemptionDate value = new QuickFix.UnderlyingRedemptionDate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRedemptionDate field)
      { return isSetField(field); }
      public bool isSetUnderlyingRedemptionDate()
      { return isSetField(247); }

      public void set(QuickFix.UnderlyingStrikePrice value)
      { setField(value); }
      public QuickFix.UnderlyingStrikePrice get(QuickFix.UnderlyingStrikePrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikePrice getUnderlyingStrikePrice()
      { QuickFix.UnderlyingStrikePrice value = new QuickFix.UnderlyingStrikePrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikePrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikePrice()
      { return isSetField(316); }

      public void set(QuickFix.UnderlyingStrikeCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingStrikeCurrency get(QuickFix.UnderlyingStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStrikeCurrency getUnderlyingStrikeCurrency()
      { QuickFix.UnderlyingStrikeCurrency value = new QuickFix.UnderlyingStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingStrikeCurrency()
      { return isSetField(941); }

      public void set(QuickFix.UnderlyingOptAttribute value)
      { setField(value); }
      public QuickFix.UnderlyingOptAttribute get(QuickFix.UnderlyingOptAttribute  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingOptAttribute getUnderlyingOptAttribute()
      { QuickFix.UnderlyingOptAttribute value = new QuickFix.UnderlyingOptAttribute();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingOptAttribute field)
      { return isSetField(field); }
      public bool isSetUnderlyingOptAttribute()
      { return isSetField(317); }

      public void set(QuickFix.UnderlyingContractMultiplier value)
      { setField(value); }
      public QuickFix.UnderlyingContractMultiplier get(QuickFix.UnderlyingContractMultiplier  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingContractMultiplier getUnderlyingContractMultiplier()
      { QuickFix.UnderlyingContractMultiplier value = new QuickFix.UnderlyingContractMultiplier();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingContractMultiplier field)
      { return isSetField(field); }
      public bool isSetUnderlyingContractMultiplier()
      { return isSetField(436); }

      public void set(QuickFix.UnderlyingCouponRate value)
      { setField(value); }
      public QuickFix.UnderlyingCouponRate get(QuickFix.UnderlyingCouponRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCouponRate getUnderlyingCouponRate()
      { QuickFix.UnderlyingCouponRate value = new QuickFix.UnderlyingCouponRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCouponRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingCouponRate()
      { return isSetField(435); }

      public void set(QuickFix.UnderlyingSecurityExchange value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityExchange get(QuickFix.UnderlyingSecurityExchange  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityExchange getUnderlyingSecurityExchange()
      { QuickFix.UnderlyingSecurityExchange value = new QuickFix.UnderlyingSecurityExchange();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityExchange field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityExchange()
      { return isSetField(308); }

      public void set(QuickFix.UnderlyingIssuer value)
      { setField(value); }
      public QuickFix.UnderlyingIssuer get(QuickFix.UnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingIssuer getUnderlyingIssuer()
      { QuickFix.UnderlyingIssuer value = new QuickFix.UnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetUnderlyingIssuer()
      { return isSetField(306); }

      public void set(QuickFix.EncodedUnderlyingIssuerLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuerLen get(QuickFix.EncodedUnderlyingIssuerLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuerLen getEncodedUnderlyingIssuerLen()
      { QuickFix.EncodedUnderlyingIssuerLen value = new QuickFix.EncodedUnderlyingIssuerLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuerLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuerLen()
      { return isSetField(362); }

      public void set(QuickFix.EncodedUnderlyingIssuer value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingIssuer get(QuickFix.EncodedUnderlyingIssuer  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingIssuer getEncodedUnderlyingIssuer()
      { QuickFix.EncodedUnderlyingIssuer value = new QuickFix.EncodedUnderlyingIssuer();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingIssuer field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingIssuer()
      { return isSetField(363); }

      public void set(QuickFix.UnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.UnderlyingSecurityDesc get(QuickFix.UnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSecurityDesc getUnderlyingSecurityDesc()
      { QuickFix.UnderlyingSecurityDesc value = new QuickFix.UnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetUnderlyingSecurityDesc()
      { return isSetField(307); }

      public void set(QuickFix.EncodedUnderlyingSecurityDescLen value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDescLen get(QuickFix.EncodedUnderlyingSecurityDescLen  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDescLen getEncodedUnderlyingSecurityDescLen()
      { QuickFix.EncodedUnderlyingSecurityDescLen value = new QuickFix.EncodedUnderlyingSecurityDescLen();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDescLen field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDescLen()
      { return isSetField(364); }

      public void set(QuickFix.EncodedUnderlyingSecurityDesc value)
      { setField(value); }
      public QuickFix.EncodedUnderlyingSecurityDesc get(QuickFix.EncodedUnderlyingSecurityDesc  value)
      { getField(value); return value; }
      public QuickFix.EncodedUnderlyingSecurityDesc getEncodedUnderlyingSecurityDesc()
      { QuickFix.EncodedUnderlyingSecurityDesc value = new QuickFix.EncodedUnderlyingSecurityDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.EncodedUnderlyingSecurityDesc field)
      { return isSetField(field); }
      public bool isSetEncodedUnderlyingSecurityDesc()
      { return isSetField(365); }

      public void set(QuickFix.UnderlyingCPProgram value)
      { setField(value); }
      public QuickFix.UnderlyingCPProgram get(QuickFix.UnderlyingCPProgram  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPProgram getUnderlyingCPProgram()
      { QuickFix.UnderlyingCPProgram value = new QuickFix.UnderlyingCPProgram();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPProgram field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPProgram()
      { return isSetField(877); }

      public void set(QuickFix.UnderlyingCPRegType value)
      { setField(value); }
      public QuickFix.UnderlyingCPRegType get(QuickFix.UnderlyingCPRegType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCPRegType getUnderlyingCPRegType()
      { QuickFix.UnderlyingCPRegType value = new QuickFix.UnderlyingCPRegType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCPRegType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCPRegType()
      { return isSetField(878); }

      public void set(QuickFix.UnderlyingCurrency value)
      { setField(value); }
      public QuickFix.UnderlyingCurrency get(QuickFix.UnderlyingCurrency  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrency getUnderlyingCurrency()
      { QuickFix.UnderlyingCurrency value = new QuickFix.UnderlyingCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrency field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrency()
      { return isSetField(318); }

      public void set(QuickFix.UnderlyingQty value)
      { setField(value); }
      public QuickFix.UnderlyingQty get(QuickFix.UnderlyingQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingQty getUnderlyingQty()
      { QuickFix.UnderlyingQty value = new QuickFix.UnderlyingQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingQty()
      { return isSetField(879); }

      public void set(QuickFix.UnderlyingPx value)
      { setField(value); }
      public QuickFix.UnderlyingPx get(QuickFix.UnderlyingPx  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPx getUnderlyingPx()
      { QuickFix.UnderlyingPx value = new QuickFix.UnderlyingPx();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPx field)
      { return isSetField(field); }
      public bool isSetUnderlyingPx()
      { return isSetField(810); }

      public void set(QuickFix.UnderlyingDirtyPrice value)
      { setField(value); }
      public QuickFix.UnderlyingDirtyPrice get(QuickFix.UnderlyingDirtyPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingDirtyPrice getUnderlyingDirtyPrice()
      { QuickFix.UnderlyingDirtyPrice value = new QuickFix.UnderlyingDirtyPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingDirtyPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingDirtyPrice()
      { return isSetField(882); }

      public void set(QuickFix.UnderlyingEndPrice value)
      { setField(value); }
      public QuickFix.UnderlyingEndPrice get(QuickFix.UnderlyingEndPrice  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndPrice getUnderlyingEndPrice()
      { QuickFix.UnderlyingEndPrice value = new QuickFix.UnderlyingEndPrice();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndPrice field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndPrice()
      { return isSetField(883); }

      public void set(QuickFix.UnderlyingStartValue value)
      { setField(value); }
      public QuickFix.UnderlyingStartValue get(QuickFix.UnderlyingStartValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingStartValue getUnderlyingStartValue()
      { QuickFix.UnderlyingStartValue value = new QuickFix.UnderlyingStartValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingStartValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingStartValue()
      { return isSetField(884); }

      public void set(QuickFix.UnderlyingCurrentValue value)
      { setField(value); }
      public QuickFix.UnderlyingCurrentValue get(QuickFix.UnderlyingCurrentValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCurrentValue getUnderlyingCurrentValue()
      { QuickFix.UnderlyingCurrentValue value = new QuickFix.UnderlyingCurrentValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCurrentValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCurrentValue()
      { return isSetField(885); }

      public void set(QuickFix.UnderlyingEndValue value)
      { setField(value); }
      public QuickFix.UnderlyingEndValue get(QuickFix.UnderlyingEndValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingEndValue getUnderlyingEndValue()
      { QuickFix.UnderlyingEndValue value = new QuickFix.UnderlyingEndValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingEndValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingEndValue()
      { return isSetField(886); }

      public void set(QuickFix.UnderlyingAllocationPercent value)
      { setField(value); }
      public QuickFix.UnderlyingAllocationPercent get(QuickFix.UnderlyingAllocationPercent  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAllocationPercent getUnderlyingAllocationPercent()
      { QuickFix.UnderlyingAllocationPercent value = new QuickFix.UnderlyingAllocationPercent();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAllocationPercent field)
      { return isSetField(field); }
      public bool isSetUnderlyingAllocationPercent()
      { return isSetField(972); }

      public void set(QuickFix.UnderlyingSettlementType value)
      { setField(value); }
      public QuickFix.UnderlyingSettlementType get(QuickFix.UnderlyingSettlementType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlementType getUnderlyingSettlementType()
      { QuickFix.UnderlyingSettlementType value = new QuickFix.UnderlyingSettlementType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlementType field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlementType()
      { return isSetField(975); }

      public void set(QuickFix.UnderlyingCashAmount value)
      { setField(value); }
      public QuickFix.UnderlyingCashAmount get(QuickFix.UnderlyingCashAmount  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashAmount getUnderlyingCashAmount()
      { QuickFix.UnderlyingCashAmount value = new QuickFix.UnderlyingCashAmount();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashAmount field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashAmount()
      { return isSetField(973); }

      public void set(QuickFix.UnderlyingCashType value)
      { setField(value); }
      public QuickFix.UnderlyingCashType get(QuickFix.UnderlyingCashType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCashType getUnderlyingCashType()
      { QuickFix.UnderlyingCashType value = new QuickFix.UnderlyingCashType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCashType field)
      { return isSetField(field); }
      public bool isSetUnderlyingCashType()
      { return isSetField(974); }

      public void set(QuickFix.UnderlyingUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasure get(QuickFix.UnderlyingUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasure getUnderlyingUnitOfMeasure()
      { QuickFix.UnderlyingUnitOfMeasure value = new QuickFix.UnderlyingUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasure()
      { return isSetField(998); }

      public void set(QuickFix.UnderlyingTimeUnit value)
      { setField(value); }
      public QuickFix.UnderlyingTimeUnit get(QuickFix.UnderlyingTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingTimeUnit getUnderlyingTimeUnit()
      { QuickFix.UnderlyingTimeUnit value = new QuickFix.UnderlyingTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingTimeUnit field)
      { return isSetField(field); }
      public bool isSetUnderlyingTimeUnit()
      { return isSetField(1000); }

      public void set(QuickFix.UnderlyingCapValue value)
      { setField(value); }
      public QuickFix.UnderlyingCapValue get(QuickFix.UnderlyingCapValue  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingCapValue getUnderlyingCapValue()
      { QuickFix.UnderlyingCapValue value = new QuickFix.UnderlyingCapValue();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingCapValue field)
      { return isSetField(field); }
      public bool isSetUnderlyingCapValue()
      { return isSetField(1038); }

      public void set(QuickFix.UnderlyingSettlMethod value)
      { setField(value); }
      public QuickFix.UnderlyingSettlMethod get(QuickFix.UnderlyingSettlMethod  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSettlMethod getUnderlyingSettlMethod()
      { QuickFix.UnderlyingSettlMethod value = new QuickFix.UnderlyingSettlMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSettlMethod field)
      { return isSetField(field); }
      public bool isSetUnderlyingSettlMethod()
      { return isSetField(1039); }

      public void set(QuickFix.UnderlyingAdjustedQuantity value)
      { setField(value); }
      public QuickFix.UnderlyingAdjustedQuantity get(QuickFix.UnderlyingAdjustedQuantity  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAdjustedQuantity getUnderlyingAdjustedQuantity()
      { QuickFix.UnderlyingAdjustedQuantity value = new QuickFix.UnderlyingAdjustedQuantity();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAdjustedQuantity field)
      { return isSetField(field); }
      public bool isSetUnderlyingAdjustedQuantity()
      { return isSetField(1044); }

      public void set(QuickFix.UnderlyingFXRate value)
      { setField(value); }
      public QuickFix.UnderlyingFXRate get(QuickFix.UnderlyingFXRate  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRate getUnderlyingFXRate()
      { QuickFix.UnderlyingFXRate value = new QuickFix.UnderlyingFXRate();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRate field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRate()
      { return isSetField(1045); }

      public void set(QuickFix.UnderlyingFXRateCalc value)
      { setField(value); }
      public QuickFix.UnderlyingFXRateCalc get(QuickFix.UnderlyingFXRateCalc  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFXRateCalc getUnderlyingFXRateCalc()
      { QuickFix.UnderlyingFXRateCalc value = new QuickFix.UnderlyingFXRateCalc();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFXRateCalc field)
      { return isSetField(field); }
      public bool isSetUnderlyingFXRateCalc()
      { return isSetField(1046); }

      public void set(QuickFix.UnderlyingMaturityTime value)
      { setField(value); }
      public QuickFix.UnderlyingMaturityTime get(QuickFix.UnderlyingMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingMaturityTime getUnderlyingMaturityTime()
      { QuickFix.UnderlyingMaturityTime value = new QuickFix.UnderlyingMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingMaturityTime field)
      { return isSetField(field); }
      public bool isSetUnderlyingMaturityTime()
      { return isSetField(1213); }

      public void set(QuickFix.UnderlyingPutOrCall value)
      { setField(value); }
      public QuickFix.UnderlyingPutOrCall get(QuickFix.UnderlyingPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPutOrCall getUnderlyingPutOrCall()
      { QuickFix.UnderlyingPutOrCall value = new QuickFix.UnderlyingPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPutOrCall field)
      { return isSetField(field); }
      public bool isSetUnderlyingPutOrCall()
      { return isSetField(315); }

      public void set(QuickFix.UnderlyingExerciseStyle value)
      { setField(value); }
      public QuickFix.UnderlyingExerciseStyle get(QuickFix.UnderlyingExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingExerciseStyle getUnderlyingExerciseStyle()
      { QuickFix.UnderlyingExerciseStyle value = new QuickFix.UnderlyingExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingExerciseStyle field)
      { return isSetField(field); }
      public bool isSetUnderlyingExerciseStyle()
      { return isSetField(1419); }

      public void set(QuickFix.UnderlyingUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingUnitOfMeasureQty get(QuickFix.UnderlyingUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingUnitOfMeasureQty getUnderlyingUnitOfMeasureQty()
      { QuickFix.UnderlyingUnitOfMeasureQty value = new QuickFix.UnderlyingUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingUnitOfMeasureQty()
      { return isSetField(1423); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasure get(QuickFix.UnderlyingPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasure getUnderlyingPriceUnitOfMeasure()
      { QuickFix.UnderlyingPriceUnitOfMeasure value = new QuickFix.UnderlyingPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasure()
      { return isSetField(1424); }

      public void set(QuickFix.UnderlyingPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty get(QuickFix.UnderlyingPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingPriceUnitOfMeasureQty getUnderlyingPriceUnitOfMeasureQty()
      { QuickFix.UnderlyingPriceUnitOfMeasureQty value = new QuickFix.UnderlyingPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetUnderlyingPriceUnitOfMeasureQty()
      { return isSetField(1425); }

      public void set(QuickFix.UnderlyingContractMultiplierUnit value)
      { setField(value); }
      public QuickFix.UnderlyingContractMultiplierUnit get(QuickFix.UnderlyingContractMultiplierUnit  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingContractMultiplierUnit getUnderlyingContractMultiplierUnit()
      { QuickFix.UnderlyingContractMultiplierUnit value = new QuickFix.UnderlyingContractMultiplierUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingContractMultiplierUnit field)
      { return isSetField(field); }
      public bool isSetUnderlyingContractMultiplierUnit()
      { return isSetField(1437); }

      public void set(QuickFix.UnderlyingFlowScheduleType value)
      { setField(value); }
      public QuickFix.UnderlyingFlowScheduleType get(QuickFix.UnderlyingFlowScheduleType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingFlowScheduleType getUnderlyingFlowScheduleType()
      { QuickFix.UnderlyingFlowScheduleType value = new QuickFix.UnderlyingFlowScheduleType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingFlowScheduleType field)
      { return isSetField(field); }
      public bool isSetUnderlyingFlowScheduleType()
      { return isSetField(1441); }

      public void set(QuickFix.UnderlyingRestructuringType value)
      { setField(value); }
      public QuickFix.UnderlyingRestructuringType get(QuickFix.UnderlyingRestructuringType  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingRestructuringType getUnderlyingRestructuringType()
      { QuickFix.UnderlyingRestructuringType value = new QuickFix.UnderlyingRestructuringType();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingRestructuringType field)
      { return isSetField(field); }
      public bool isSetUnderlyingRestructuringType()
      { return isSetField(1453); }

      public void set(QuickFix.UnderlyingSeniority value)
      { setField(value); }
      public QuickFix.UnderlyingSeniority get(QuickFix.UnderlyingSeniority  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingSeniority getUnderlyingSeniority()
      { QuickFix.UnderlyingSeniority value = new QuickFix.UnderlyingSeniority();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingSeniority field)
      { return isSetField(field); }
      public bool isSetUnderlyingSeniority()
      { return isSetField(1454); }

      public void set(QuickFix.UnderlyingNotionalPercentageOutstanding value)
      { setField(value); }
      public QuickFix.UnderlyingNotionalPercentageOutstanding get(QuickFix.UnderlyingNotionalPercentageOutstanding  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingNotionalPercentageOutstanding getUnderlyingNotionalPercentageOutstanding()
      { QuickFix.UnderlyingNotionalPercentageOutstanding value = new QuickFix.UnderlyingNotionalPercentageOutstanding();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingNotionalPercentageOutstanding field)
      { return isSetField(field); }
      public bool isSetUnderlyingNotionalPercentageOutstanding()
      { return isSetField(1455); }

      public void set(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding value)
      { setField(value); }
      public QuickFix.UnderlyingOriginalNotionalPercentageOutstanding get(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingOriginalNotionalPercentageOutstanding getUnderlyingOriginalNotionalPercentageOutstanding()
      { QuickFix.UnderlyingOriginalNotionalPercentageOutstanding value = new QuickFix.UnderlyingOriginalNotionalPercentageOutstanding();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingOriginalNotionalPercentageOutstanding field)
      { return isSetField(field); }
      public bool isSetUnderlyingOriginalNotionalPercentageOutstanding()
      { return isSetField(1456); }

      public void set(QuickFix.UnderlyingAttachmentPoint value)
      { setField(value); }
      public QuickFix.UnderlyingAttachmentPoint get(QuickFix.UnderlyingAttachmentPoint  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingAttachmentPoint getUnderlyingAttachmentPoint()
      { QuickFix.UnderlyingAttachmentPoint value = new QuickFix.UnderlyingAttachmentPoint();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingAttachmentPoint field)
      { return isSetField(field); }
      public bool isSetUnderlyingAttachmentPoint()
      { return isSetField(1459); }

      public void set(QuickFix.UnderlyingDetachmentPoint value)
      { setField(value); }
      public QuickFix.UnderlyingDetachmentPoint get(QuickFix.UnderlyingDetachmentPoint  value)
      { getField(value); return value; }
      public QuickFix.UnderlyingDetachmentPoint getUnderlyingDetachmentPoint()
      { QuickFix.UnderlyingDetachmentPoint value = new QuickFix.UnderlyingDetachmentPoint();
        getField(value); return value; }
      public bool isSet(QuickFix.UnderlyingDetachmentPoint field)
      { return isSetField(field); }
      public bool isSetUnderlyingDetachmentPoint()
      { return isSetField(1460); }

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
    public void set(QuickFix.QtyType value)
    { setField(value); }
    public QuickFix.QtyType get(QuickFix.QtyType  value)
    { getField(value); return value; }
    public QuickFix.QtyType getQtyType()
    { QuickFix.QtyType value = new QuickFix.QtyType();
      getField(value); return value; }
    public bool isSet(QuickFix.QtyType field)
    { return isSetField(field); }
    public bool isSetQtyType()
    { return isSetField(854); }

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

    public void set(QuickFix.PegOffsetValue value)
    { setField(value); }
    public QuickFix.PegOffsetValue get(QuickFix.PegOffsetValue  value)
    { getField(value); return value; }
    public QuickFix.PegOffsetValue getPegOffsetValue()
    { QuickFix.PegOffsetValue value = new QuickFix.PegOffsetValue();
      getField(value); return value; }
    public bool isSet(QuickFix.PegOffsetValue field)
    { return isSetField(field); }
    public bool isSetPegOffsetValue()
    { return isSetField(211); }

    public void set(QuickFix.PegMoveType value)
    { setField(value); }
    public QuickFix.PegMoveType get(QuickFix.PegMoveType  value)
    { getField(value); return value; }
    public QuickFix.PegMoveType getPegMoveType()
    { QuickFix.PegMoveType value = new QuickFix.PegMoveType();
      getField(value); return value; }
    public bool isSet(QuickFix.PegMoveType field)
    { return isSetField(field); }
    public bool isSetPegMoveType()
    { return isSetField(835); }

    public void set(QuickFix.PegOffsetType value)
    { setField(value); }
    public QuickFix.PegOffsetType get(QuickFix.PegOffsetType  value)
    { getField(value); return value; }
    public QuickFix.PegOffsetType getPegOffsetType()
    { QuickFix.PegOffsetType value = new QuickFix.PegOffsetType();
      getField(value); return value; }
    public bool isSet(QuickFix.PegOffsetType field)
    { return isSetField(field); }
    public bool isSetPegOffsetType()
    { return isSetField(836); }

    public void set(QuickFix.PegLimitType value)
    { setField(value); }
    public QuickFix.PegLimitType get(QuickFix.PegLimitType  value)
    { getField(value); return value; }
    public QuickFix.PegLimitType getPegLimitType()
    { QuickFix.PegLimitType value = new QuickFix.PegLimitType();
      getField(value); return value; }
    public bool isSet(QuickFix.PegLimitType field)
    { return isSetField(field); }
    public bool isSetPegLimitType()
    { return isSetField(837); }

    public void set(QuickFix.PegRoundDirection value)
    { setField(value); }
    public QuickFix.PegRoundDirection get(QuickFix.PegRoundDirection  value)
    { getField(value); return value; }
    public QuickFix.PegRoundDirection getPegRoundDirection()
    { QuickFix.PegRoundDirection value = new QuickFix.PegRoundDirection();
      getField(value); return value; }
    public bool isSet(QuickFix.PegRoundDirection field)
    { return isSetField(field); }
    public bool isSetPegRoundDirection()
    { return isSetField(838); }

    public void set(QuickFix.PegScope value)
    { setField(value); }
    public QuickFix.PegScope get(QuickFix.PegScope  value)
    { getField(value); return value; }
    public QuickFix.PegScope getPegScope()
    { QuickFix.PegScope value = new QuickFix.PegScope();
      getField(value); return value; }
    public bool isSet(QuickFix.PegScope field)
    { return isSetField(field); }
    public bool isSetPegScope()
    { return isSetField(840); }

    public void set(QuickFix.PegPriceType value)
    { setField(value); }
    public QuickFix.PegPriceType get(QuickFix.PegPriceType  value)
    { getField(value); return value; }
    public QuickFix.PegPriceType getPegPriceType()
    { QuickFix.PegPriceType value = new QuickFix.PegPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.PegPriceType field)
    { return isSetField(field); }
    public bool isSetPegPriceType()
    { return isSetField(1094); }

    public void set(QuickFix.PegSecurityIDSource value)
    { setField(value); }
    public QuickFix.PegSecurityIDSource get(QuickFix.PegSecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.PegSecurityIDSource getPegSecurityIDSource()
    { QuickFix.PegSecurityIDSource value = new QuickFix.PegSecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.PegSecurityIDSource field)
    { return isSetField(field); }
    public bool isSetPegSecurityIDSource()
    { return isSetField(1096); }

    public void set(QuickFix.PegSecurityID value)
    { setField(value); }
    public QuickFix.PegSecurityID get(QuickFix.PegSecurityID  value)
    { getField(value); return value; }
    public QuickFix.PegSecurityID getPegSecurityID()
    { QuickFix.PegSecurityID value = new QuickFix.PegSecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.PegSecurityID field)
    { return isSetField(field); }
    public bool isSetPegSecurityID()
    { return isSetField(1097); }

    public void set(QuickFix.PegSymbol value)
    { setField(value); }
    public QuickFix.PegSymbol get(QuickFix.PegSymbol  value)
    { getField(value); return value; }
    public QuickFix.PegSymbol getPegSymbol()
    { QuickFix.PegSymbol value = new QuickFix.PegSymbol();
      getField(value); return value; }
    public bool isSet(QuickFix.PegSymbol field)
    { return isSetField(field); }
    public bool isSetPegSymbol()
    { return isSetField(1098); }

    public void set(QuickFix.PegSecurityDesc value)
    { setField(value); }
    public QuickFix.PegSecurityDesc get(QuickFix.PegSecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.PegSecurityDesc getPegSecurityDesc()
    { QuickFix.PegSecurityDesc value = new QuickFix.PegSecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.PegSecurityDesc field)
    { return isSetField(field); }
    public bool isSetPegSecurityDesc()
    { return isSetField(1099); }

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

    public void set(QuickFix.DiscretionOffsetValue value)
    { setField(value); }
    public QuickFix.DiscretionOffsetValue get(QuickFix.DiscretionOffsetValue  value)
    { getField(value); return value; }
    public QuickFix.DiscretionOffsetValue getDiscretionOffsetValue()
    { QuickFix.DiscretionOffsetValue value = new QuickFix.DiscretionOffsetValue();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionOffsetValue field)
    { return isSetField(field); }
    public bool isSetDiscretionOffsetValue()
    { return isSetField(389); }

    public void set(QuickFix.DiscretionMoveType value)
    { setField(value); }
    public QuickFix.DiscretionMoveType get(QuickFix.DiscretionMoveType  value)
    { getField(value); return value; }
    public QuickFix.DiscretionMoveType getDiscretionMoveType()
    { QuickFix.DiscretionMoveType value = new QuickFix.DiscretionMoveType();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionMoveType field)
    { return isSetField(field); }
    public bool isSetDiscretionMoveType()
    { return isSetField(841); }

    public void set(QuickFix.DiscretionOffsetType value)
    { setField(value); }
    public QuickFix.DiscretionOffsetType get(QuickFix.DiscretionOffsetType  value)
    { getField(value); return value; }
    public QuickFix.DiscretionOffsetType getDiscretionOffsetType()
    { QuickFix.DiscretionOffsetType value = new QuickFix.DiscretionOffsetType();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionOffsetType field)
    { return isSetField(field); }
    public bool isSetDiscretionOffsetType()
    { return isSetField(842); }

    public void set(QuickFix.DiscretionLimitType value)
    { setField(value); }
    public QuickFix.DiscretionLimitType get(QuickFix.DiscretionLimitType  value)
    { getField(value); return value; }
    public QuickFix.DiscretionLimitType getDiscretionLimitType()
    { QuickFix.DiscretionLimitType value = new QuickFix.DiscretionLimitType();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionLimitType field)
    { return isSetField(field); }
    public bool isSetDiscretionLimitType()
    { return isSetField(843); }

    public void set(QuickFix.DiscretionRoundDirection value)
    { setField(value); }
    public QuickFix.DiscretionRoundDirection get(QuickFix.DiscretionRoundDirection  value)
    { getField(value); return value; }
    public QuickFix.DiscretionRoundDirection getDiscretionRoundDirection()
    { QuickFix.DiscretionRoundDirection value = new QuickFix.DiscretionRoundDirection();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionRoundDirection field)
    { return isSetField(field); }
    public bool isSetDiscretionRoundDirection()
    { return isSetField(844); }

    public void set(QuickFix.DiscretionScope value)
    { setField(value); }
    public QuickFix.DiscretionScope get(QuickFix.DiscretionScope  value)
    { getField(value); return value; }
    public QuickFix.DiscretionScope getDiscretionScope()
    { QuickFix.DiscretionScope value = new QuickFix.DiscretionScope();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionScope field)
    { return isSetField(field); }
    public bool isSetDiscretionScope()
    { return isSetField(846); }

    public void set(QuickFix.PeggedPrice value)
    { setField(value); }
    public QuickFix.PeggedPrice get(QuickFix.PeggedPrice  value)
    { getField(value); return value; }
    public QuickFix.PeggedPrice getPeggedPrice()
    { QuickFix.PeggedPrice value = new QuickFix.PeggedPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.PeggedPrice field)
    { return isSetField(field); }
    public bool isSetPeggedPrice()
    { return isSetField(839); }

    public void set(QuickFix.DiscretionPrice value)
    { setField(value); }
    public QuickFix.DiscretionPrice get(QuickFix.DiscretionPrice  value)
    { getField(value); return value; }
    public QuickFix.DiscretionPrice getDiscretionPrice()
    { QuickFix.DiscretionPrice value = new QuickFix.DiscretionPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.DiscretionPrice field)
    { return isSetField(field); }
    public bool isSetDiscretionPrice()
    { return isSetField(845); }

    public void set(QuickFix.TargetStrategy value)
    { setField(value); }
    public QuickFix.TargetStrategy get(QuickFix.TargetStrategy  value)
    { getField(value); return value; }
    public QuickFix.TargetStrategy getTargetStrategy()
    { QuickFix.TargetStrategy value = new QuickFix.TargetStrategy();
      getField(value); return value; }
    public bool isSet(QuickFix.TargetStrategy field)
    { return isSetField(field); }
    public bool isSetTargetStrategy()
    { return isSetField(847); }

    public void set(QuickFix.TargetStrategyParameters value)
    { setField(value); }
    public QuickFix.TargetStrategyParameters get(QuickFix.TargetStrategyParameters  value)
    { getField(value); return value; }
    public QuickFix.TargetStrategyParameters getTargetStrategyParameters()
    { QuickFix.TargetStrategyParameters value = new QuickFix.TargetStrategyParameters();
      getField(value); return value; }
    public bool isSet(QuickFix.TargetStrategyParameters field)
    { return isSetField(field); }
    public bool isSetTargetStrategyParameters()
    { return isSetField(848); }

    public void set(QuickFix.ParticipationRate value)
    { setField(value); }
    public QuickFix.ParticipationRate get(QuickFix.ParticipationRate  value)
    { getField(value); return value; }
    public QuickFix.ParticipationRate getParticipationRate()
    { QuickFix.ParticipationRate value = new QuickFix.ParticipationRate();
      getField(value); return value; }
    public bool isSet(QuickFix.ParticipationRate field)
    { return isSetField(field); }
    public bool isSetParticipationRate()
    { return isSetField(849); }

    public void set(QuickFix.TargetStrategyPerformance value)
    { setField(value); }
    public QuickFix.TargetStrategyPerformance get(QuickFix.TargetStrategyPerformance  value)
    { getField(value); return value; }
    public QuickFix.TargetStrategyPerformance getTargetStrategyPerformance()
    { QuickFix.TargetStrategyPerformance value = new QuickFix.TargetStrategyPerformance();
      getField(value); return value; }
    public bool isSet(QuickFix.TargetStrategyPerformance field)
    { return isSetField(field); }
    public bool isSetTargetStrategyPerformance()
    { return isSetField(850); }

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

    public void set(QuickFix.LastParPx value)
    { setField(value); }
    public QuickFix.LastParPx get(QuickFix.LastParPx  value)
    { getField(value); return value; }
    public QuickFix.LastParPx getLastParPx()
    { QuickFix.LastParPx value = new QuickFix.LastParPx();
      getField(value); return value; }
    public bool isSet(QuickFix.LastParPx field)
    { return isSetField(field); }
    public bool isSetLastParPx()
    { return isSetField(669); }

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

    public void set(QuickFix.TimeBracket value)
    { setField(value); }
    public QuickFix.TimeBracket get(QuickFix.TimeBracket  value)
    { getField(value); return value; }
    public QuickFix.TimeBracket getTimeBracket()
    { QuickFix.TimeBracket value = new QuickFix.TimeBracket();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeBracket field)
    { return isSetField(field); }
    public bool isSetTimeBracket()
    { return isSetField(943); }

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

    public void set(QuickFix.BenchmarkPrice value)
    { setField(value); }
    public QuickFix.BenchmarkPrice get(QuickFix.BenchmarkPrice  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPrice getBenchmarkPrice()
    { QuickFix.BenchmarkPrice value = new QuickFix.BenchmarkPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPrice field)
    { return isSetField(field); }
    public bool isSetBenchmarkPrice()
    { return isSetField(662); }

    public void set(QuickFix.BenchmarkPriceType value)
    { setField(value); }
    public QuickFix.BenchmarkPriceType get(QuickFix.BenchmarkPriceType  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkPriceType getBenchmarkPriceType()
    { QuickFix.BenchmarkPriceType value = new QuickFix.BenchmarkPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkPriceType field)
    { return isSetField(field); }
    public bool isSetBenchmarkPriceType()
    { return isSetField(663); }

    public void set(QuickFix.BenchmarkSecurityID value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityID get(QuickFix.BenchmarkSecurityID  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityID getBenchmarkSecurityID()
    { QuickFix.BenchmarkSecurityID value = new QuickFix.BenchmarkSecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityID field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityID()
    { return isSetField(699); }

    public void set(QuickFix.BenchmarkSecurityIDSource value)
    { setField(value); }
    public QuickFix.BenchmarkSecurityIDSource get(QuickFix.BenchmarkSecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.BenchmarkSecurityIDSource getBenchmarkSecurityIDSource()
    { QuickFix.BenchmarkSecurityIDSource value = new QuickFix.BenchmarkSecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.BenchmarkSecurityIDSource field)
    { return isSetField(field); }
    public bool isSetBenchmarkSecurityIDSource()
    { return isSetField(761); }

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

    public void set(QuickFix.YieldCalcDate value)
    { setField(value); }
    public QuickFix.YieldCalcDate get(QuickFix.YieldCalcDate  value)
    { getField(value); return value; }
    public QuickFix.YieldCalcDate getYieldCalcDate()
    { QuickFix.YieldCalcDate value = new QuickFix.YieldCalcDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldCalcDate field)
    { return isSetField(field); }
    public bool isSetYieldCalcDate()
    { return isSetField(701); }

    public void set(QuickFix.YieldRedemptionDate value)
    { setField(value); }
    public QuickFix.YieldRedemptionDate get(QuickFix.YieldRedemptionDate  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionDate getYieldRedemptionDate()
    { QuickFix.YieldRedemptionDate value = new QuickFix.YieldRedemptionDate();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionDate field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionDate()
    { return isSetField(696); }

    public void set(QuickFix.YieldRedemptionPrice value)
    { setField(value); }
    public QuickFix.YieldRedemptionPrice get(QuickFix.YieldRedemptionPrice  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPrice getYieldRedemptionPrice()
    { QuickFix.YieldRedemptionPrice value = new QuickFix.YieldRedemptionPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPrice field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPrice()
    { return isSetField(697); }

    public void set(QuickFix.YieldRedemptionPriceType value)
    { setField(value); }
    public QuickFix.YieldRedemptionPriceType get(QuickFix.YieldRedemptionPriceType  value)
    { getField(value); return value; }
    public QuickFix.YieldRedemptionPriceType getYieldRedemptionPriceType()
    { QuickFix.YieldRedemptionPriceType value = new QuickFix.YieldRedemptionPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.YieldRedemptionPriceType field)
    { return isSetField(field); }
    public bool isSetYieldRedemptionPriceType()
    { return isSetField(698); }

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

    public void set(QuickFix.InterestAtMaturity value)
    { setField(value); }
    public QuickFix.InterestAtMaturity get(QuickFix.InterestAtMaturity  value)
    { getField(value); return value; }
    public QuickFix.InterestAtMaturity getInterestAtMaturity()
    { QuickFix.InterestAtMaturity value = new QuickFix.InterestAtMaturity();
      getField(value); return value; }
    public bool isSet(QuickFix.InterestAtMaturity field)
    { return isSetField(field); }
    public bool isSetInterestAtMaturity()
    { return isSetField(738); }

    public void set(QuickFix.EndAccruedInterestAmt value)
    { setField(value); }
    public QuickFix.EndAccruedInterestAmt get(QuickFix.EndAccruedInterestAmt  value)
    { getField(value); return value; }
    public QuickFix.EndAccruedInterestAmt getEndAccruedInterestAmt()
    { QuickFix.EndAccruedInterestAmt value = new QuickFix.EndAccruedInterestAmt();
      getField(value); return value; }
    public bool isSet(QuickFix.EndAccruedInterestAmt field)
    { return isSetField(field); }
    public bool isSetEndAccruedInterestAmt()
    { return isSetField(920); }

    public void set(QuickFix.StartCash value)
    { setField(value); }
    public QuickFix.StartCash get(QuickFix.StartCash  value)
    { getField(value); return value; }
    public QuickFix.StartCash getStartCash()
    { QuickFix.StartCash value = new QuickFix.StartCash();
      getField(value); return value; }
    public bool isSet(QuickFix.StartCash field)
    { return isSetField(field); }
    public bool isSetStartCash()
    { return isSetField(921); }

    public void set(QuickFix.EndCash value)
    { setField(value); }
    public QuickFix.EndCash get(QuickFix.EndCash  value)
    { getField(value); return value; }
    public QuickFix.EndCash getEndCash()
    { QuickFix.EndCash value = new QuickFix.EndCash();
      getField(value); return value; }
    public bool isSet(QuickFix.EndCash field)
    { return isSetField(field); }
    public bool isSetEndCash()
    { return isSetField(922); }

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

    public void set(QuickFix.BookingType value)
    { setField(value); }
    public QuickFix.BookingType get(QuickFix.BookingType  value)
    { getField(value); return value; }
    public QuickFix.BookingType getBookingType()
    { QuickFix.BookingType value = new QuickFix.BookingType();
      getField(value); return value; }
    public bool isSet(QuickFix.BookingType field)
    { return isSetField(field); }
    public bool isSetBookingType()
    { return isSetField(775); }

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

    public void set(QuickFix.SettlDate2 value)
    { setField(value); }
    public QuickFix.SettlDate2 get(QuickFix.SettlDate2  value)
    { getField(value); return value; }
    public QuickFix.SettlDate2 getSettlDate2()
    { QuickFix.SettlDate2 value = new QuickFix.SettlDate2();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlDate2 field)
    { return isSetField(field); }
    public bool isSetSettlDate2()
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

    public void set(QuickFix.LastLiquidityInd value)
    { setField(value); }
    public QuickFix.LastLiquidityInd get(QuickFix.LastLiquidityInd  value)
    { getField(value); return value; }
    public QuickFix.LastLiquidityInd getLastLiquidityInd()
    { QuickFix.LastLiquidityInd value = new QuickFix.LastLiquidityInd();
      getField(value); return value; }
    public bool isSet(QuickFix.LastLiquidityInd field)
    { return isSetField(field); }
    public bool isSetLastLiquidityInd()
    { return isSetField(851); }

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
    static int[] message_order = new int[] {600,601,602,603,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,999,1001,1017,566,1212,1358,1420,1224,1421,1422,1436,1440,687,690,683,564,565,654,587,588,637,685,675,1073,1074,1075,948,1366,670,1379,1381,1383,1384,1418,0};
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

      public void set(QuickFix.LegSecuritySubType value)
      { setField(value); }
      public QuickFix.LegSecuritySubType get(QuickFix.LegSecuritySubType  value)
      { getField(value); return value; }
      public QuickFix.LegSecuritySubType getLegSecuritySubType()
      { QuickFix.LegSecuritySubType value = new QuickFix.LegSecuritySubType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSecuritySubType field)
      { return isSetField(field); }
      public bool isSetLegSecuritySubType()
      { return isSetField(764); }

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

      public void set(QuickFix.LegStrikeCurrency value)
      { setField(value); }
      public QuickFix.LegStrikeCurrency get(QuickFix.LegStrikeCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegStrikeCurrency getLegStrikeCurrency()
      { QuickFix.LegStrikeCurrency value = new QuickFix.LegStrikeCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegStrikeCurrency field)
      { return isSetField(field); }
      public bool isSetLegStrikeCurrency()
      { return isSetField(942); }

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

      public void set(QuickFix.LegCurrency value)
      { setField(value); }
      public QuickFix.LegCurrency get(QuickFix.LegCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegCurrency getLegCurrency()
      { QuickFix.LegCurrency value = new QuickFix.LegCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCurrency field)
      { return isSetField(field); }
      public bool isSetLegCurrency()
      { return isSetField(556); }

      public void set(QuickFix.LegPool value)
      { setField(value); }
      public QuickFix.LegPool get(QuickFix.LegPool  value)
      { getField(value); return value; }
      public QuickFix.LegPool getLegPool()
      { QuickFix.LegPool value = new QuickFix.LegPool();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPool field)
      { return isSetField(field); }
      public bool isSetLegPool()
      { return isSetField(740); }

      public void set(QuickFix.LegDatedDate value)
      { setField(value); }
      public QuickFix.LegDatedDate get(QuickFix.LegDatedDate  value)
      { getField(value); return value; }
      public QuickFix.LegDatedDate getLegDatedDate()
      { QuickFix.LegDatedDate value = new QuickFix.LegDatedDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegDatedDate field)
      { return isSetField(field); }
      public bool isSetLegDatedDate()
      { return isSetField(739); }

      public void set(QuickFix.LegContractSettlMonth value)
      { setField(value); }
      public QuickFix.LegContractSettlMonth get(QuickFix.LegContractSettlMonth  value)
      { getField(value); return value; }
      public QuickFix.LegContractSettlMonth getLegContractSettlMonth()
      { QuickFix.LegContractSettlMonth value = new QuickFix.LegContractSettlMonth();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractSettlMonth field)
      { return isSetField(field); }
      public bool isSetLegContractSettlMonth()
      { return isSetField(955); }

      public void set(QuickFix.LegInterestAccrualDate value)
      { setField(value); }
      public QuickFix.LegInterestAccrualDate get(QuickFix.LegInterestAccrualDate  value)
      { getField(value); return value; }
      public QuickFix.LegInterestAccrualDate getLegInterestAccrualDate()
      { QuickFix.LegInterestAccrualDate value = new QuickFix.LegInterestAccrualDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegInterestAccrualDate field)
      { return isSetField(field); }
      public bool isSetLegInterestAccrualDate()
      { return isSetField(956); }

      public void set(QuickFix.LegUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasure get(QuickFix.LegUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasure getLegUnitOfMeasure()
      { QuickFix.LegUnitOfMeasure value = new QuickFix.LegUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasure()
      { return isSetField(999); }

      public void set(QuickFix.LegTimeUnit value)
      { setField(value); }
      public QuickFix.LegTimeUnit get(QuickFix.LegTimeUnit  value)
      { getField(value); return value; }
      public QuickFix.LegTimeUnit getLegTimeUnit()
      { QuickFix.LegTimeUnit value = new QuickFix.LegTimeUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.LegTimeUnit field)
      { return isSetField(field); }
      public bool isSetLegTimeUnit()
      { return isSetField(1001); }

      public void set(QuickFix.LegOptionRatio value)
      { setField(value); }
      public QuickFix.LegOptionRatio get(QuickFix.LegOptionRatio  value)
      { getField(value); return value; }
      public QuickFix.LegOptionRatio getLegOptionRatio()
      { QuickFix.LegOptionRatio value = new QuickFix.LegOptionRatio();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOptionRatio field)
      { return isSetField(field); }
      public bool isSetLegOptionRatio()
      { return isSetField(1017); }

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

      public void set(QuickFix.LegMaturityTime value)
      { setField(value); }
      public QuickFix.LegMaturityTime get(QuickFix.LegMaturityTime  value)
      { getField(value); return value; }
      public QuickFix.LegMaturityTime getLegMaturityTime()
      { QuickFix.LegMaturityTime value = new QuickFix.LegMaturityTime();
        getField(value); return value; }
      public bool isSet(QuickFix.LegMaturityTime field)
      { return isSetField(field); }
      public bool isSetLegMaturityTime()
      { return isSetField(1212); }

      public void set(QuickFix.LegPutOrCall value)
      { setField(value); }
      public QuickFix.LegPutOrCall get(QuickFix.LegPutOrCall  value)
      { getField(value); return value; }
      public QuickFix.LegPutOrCall getLegPutOrCall()
      { QuickFix.LegPutOrCall value = new QuickFix.LegPutOrCall();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPutOrCall field)
      { return isSetField(field); }
      public bool isSetLegPutOrCall()
      { return isSetField(1358); }

      public void set(QuickFix.LegExerciseStyle value)
      { setField(value); }
      public QuickFix.LegExerciseStyle get(QuickFix.LegExerciseStyle  value)
      { getField(value); return value; }
      public QuickFix.LegExerciseStyle getLegExerciseStyle()
      { QuickFix.LegExerciseStyle value = new QuickFix.LegExerciseStyle();
        getField(value); return value; }
      public bool isSet(QuickFix.LegExerciseStyle field)
      { return isSetField(field); }
      public bool isSetLegExerciseStyle()
      { return isSetField(1420); }

      public void set(QuickFix.LegUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegUnitOfMeasureQty get(QuickFix.LegUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegUnitOfMeasureQty getLegUnitOfMeasureQty()
      { QuickFix.LegUnitOfMeasureQty value = new QuickFix.LegUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegUnitOfMeasureQty()
      { return isSetField(1224); }

      public void set(QuickFix.LegPriceUnitOfMeasure value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasure get(QuickFix.LegPriceUnitOfMeasure  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasure getLegPriceUnitOfMeasure()
      { QuickFix.LegPriceUnitOfMeasure value = new QuickFix.LegPriceUnitOfMeasure();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasure field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasure()
      { return isSetField(1421); }

      public void set(QuickFix.LegPriceUnitOfMeasureQty value)
      { setField(value); }
      public QuickFix.LegPriceUnitOfMeasureQty get(QuickFix.LegPriceUnitOfMeasureQty  value)
      { getField(value); return value; }
      public QuickFix.LegPriceUnitOfMeasureQty getLegPriceUnitOfMeasureQty()
      { QuickFix.LegPriceUnitOfMeasureQty value = new QuickFix.LegPriceUnitOfMeasureQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegPriceUnitOfMeasureQty field)
      { return isSetField(field); }
      public bool isSetLegPriceUnitOfMeasureQty()
      { return isSetField(1422); }

      public void set(QuickFix.LegContractMultiplierUnit value)
      { setField(value); }
      public QuickFix.LegContractMultiplierUnit get(QuickFix.LegContractMultiplierUnit  value)
      { getField(value); return value; }
      public QuickFix.LegContractMultiplierUnit getLegContractMultiplierUnit()
      { QuickFix.LegContractMultiplierUnit value = new QuickFix.LegContractMultiplierUnit();
        getField(value); return value; }
      public bool isSet(QuickFix.LegContractMultiplierUnit field)
      { return isSetField(field); }
      public bool isSetLegContractMultiplierUnit()
      { return isSetField(1436); }

      public void set(QuickFix.LegFlowScheduleType value)
      { setField(value); }
      public QuickFix.LegFlowScheduleType get(QuickFix.LegFlowScheduleType  value)
      { getField(value); return value; }
      public QuickFix.LegFlowScheduleType getLegFlowScheduleType()
      { QuickFix.LegFlowScheduleType value = new QuickFix.LegFlowScheduleType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegFlowScheduleType field)
      { return isSetField(field); }
      public bool isSetLegFlowScheduleType()
      { return isSetField(1440); }

      public void set(QuickFix.LegQty value)
      { setField(value); }
      public QuickFix.LegQty get(QuickFix.LegQty  value)
      { getField(value); return value; }
      public QuickFix.LegQty getLegQty()
      { QuickFix.LegQty value = new QuickFix.LegQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegQty field)
      { return isSetField(field); }
      public bool isSetLegQty()
      { return isSetField(687); }

      public void set(QuickFix.LegSwapType value)
      { setField(value); }
      public QuickFix.LegSwapType get(QuickFix.LegSwapType  value)
      { getField(value); return value; }
      public QuickFix.LegSwapType getLegSwapType()
      { QuickFix.LegSwapType value = new QuickFix.LegSwapType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSwapType field)
      { return isSetField(field); }
      public bool isSetLegSwapType()
      { return isSetField(690); }

      public void set(QuickFix.NoLegStipulations value)
      { setField(value); }
      public QuickFix.NoLegStipulations get(QuickFix.NoLegStipulations  value)
      { getField(value); return value; }
      public QuickFix.NoLegStipulations getNoLegStipulations()
      { QuickFix.NoLegStipulations value = new QuickFix.NoLegStipulations();
        getField(value); return value; }
      public bool isSet(QuickFix.NoLegStipulations field)
      { return isSetField(field); }
      public bool isSetNoLegStipulations()
      { return isSetField(683); }

      public class NoLegStipulations: QuickFix.Group
      {
      public NoLegStipulations() : base(683,688,message_order ) {}
      static int[] message_order = new int[] {688,689,0};
        public void set(QuickFix.LegStipulationType value)
        { setField(value); }
        public QuickFix.LegStipulationType get(QuickFix.LegStipulationType  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationType getLegStipulationType()
        { QuickFix.LegStipulationType value = new QuickFix.LegStipulationType();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationType field)
        { return isSetField(field); }
        public bool isSetLegStipulationType()
        { return isSetField(688); }

        public void set(QuickFix.LegStipulationValue value)
        { setField(value); }
        public QuickFix.LegStipulationValue get(QuickFix.LegStipulationValue  value)
        { getField(value); return value; }
        public QuickFix.LegStipulationValue getLegStipulationValue()
        { QuickFix.LegStipulationValue value = new QuickFix.LegStipulationValue();
          getField(value); return value; }
        public bool isSet(QuickFix.LegStipulationValue field)
        { return isSetField(field); }
        public bool isSetLegStipulationValue()
        { return isSetField(689); }

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

      public void set(QuickFix.LegSettlType value)
      { setField(value); }
      public QuickFix.LegSettlType get(QuickFix.LegSettlType  value)
      { getField(value); return value; }
      public QuickFix.LegSettlType getLegSettlType()
      { QuickFix.LegSettlType value = new QuickFix.LegSettlType();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlType field)
      { return isSetField(field); }
      public bool isSetLegSettlType()
      { return isSetField(587); }

      public void set(QuickFix.LegSettlDate value)
      { setField(value); }
      public QuickFix.LegSettlDate get(QuickFix.LegSettlDate  value)
      { getField(value); return value; }
      public QuickFix.LegSettlDate getLegSettlDate()
      { QuickFix.LegSettlDate value = new QuickFix.LegSettlDate();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlDate field)
      { return isSetField(field); }
      public bool isSetLegSettlDate()
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

      public void set(QuickFix.LegOrderQty value)
      { setField(value); }
      public QuickFix.LegOrderQty get(QuickFix.LegOrderQty  value)
      { getField(value); return value; }
      public QuickFix.LegOrderQty getLegOrderQty()
      { QuickFix.LegOrderQty value = new QuickFix.LegOrderQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegOrderQty field)
      { return isSetField(field); }
      public bool isSetLegOrderQty()
      { return isSetField(685); }

      public void set(QuickFix.LegSettlCurrency value)
      { setField(value); }
      public QuickFix.LegSettlCurrency get(QuickFix.LegSettlCurrency  value)
      { getField(value); return value; }
      public QuickFix.LegSettlCurrency getLegSettlCurrency()
      { QuickFix.LegSettlCurrency value = new QuickFix.LegSettlCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.LegSettlCurrency field)
      { return isSetField(field); }
      public bool isSetLegSettlCurrency()
      { return isSetField(675); }

      public void set(QuickFix.LegLastForwardPoints value)
      { setField(value); }
      public QuickFix.LegLastForwardPoints get(QuickFix.LegLastForwardPoints  value)
      { getField(value); return value; }
      public QuickFix.LegLastForwardPoints getLegLastForwardPoints()
      { QuickFix.LegLastForwardPoints value = new QuickFix.LegLastForwardPoints();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastForwardPoints field)
      { return isSetField(field); }
      public bool isSetLegLastForwardPoints()
      { return isSetField(1073); }

      public void set(QuickFix.LegCalculatedCcyLastQty value)
      { setField(value); }
      public QuickFix.LegCalculatedCcyLastQty get(QuickFix.LegCalculatedCcyLastQty  value)
      { getField(value); return value; }
      public QuickFix.LegCalculatedCcyLastQty getLegCalculatedCcyLastQty()
      { QuickFix.LegCalculatedCcyLastQty value = new QuickFix.LegCalculatedCcyLastQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCalculatedCcyLastQty field)
      { return isSetField(field); }
      public bool isSetLegCalculatedCcyLastQty()
      { return isSetField(1074); }

      public void set(QuickFix.LegGrossTradeAmt value)
      { setField(value); }
      public QuickFix.LegGrossTradeAmt get(QuickFix.LegGrossTradeAmt  value)
      { getField(value); return value; }
      public QuickFix.LegGrossTradeAmt getLegGrossTradeAmt()
      { QuickFix.LegGrossTradeAmt value = new QuickFix.LegGrossTradeAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.LegGrossTradeAmt field)
      { return isSetField(field); }
      public bool isSetLegGrossTradeAmt()
      { return isSetField(1075); }

      public void set(QuickFix.NoNested3PartyIDs value)
      { setField(value); }
      public QuickFix.NoNested3PartyIDs get(QuickFix.NoNested3PartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNested3PartyIDs getNoNested3PartyIDs()
      { QuickFix.NoNested3PartyIDs value = new QuickFix.NoNested3PartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNested3PartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNested3PartyIDs()
      { return isSetField(948); }

      public class NoNested3PartyIDs: QuickFix.Group
      {
      public NoNested3PartyIDs() : base(948,949,message_order ) {}
      static int[] message_order = new int[] {949,950,951,952,0};
        public void set(QuickFix.Nested3PartyID value)
        { setField(value); }
        public QuickFix.Nested3PartyID get(QuickFix.Nested3PartyID  value)
        { getField(value); return value; }
        public QuickFix.Nested3PartyID getNested3PartyID()
        { QuickFix.Nested3PartyID value = new QuickFix.Nested3PartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested3PartyID field)
        { return isSetField(field); }
        public bool isSetNested3PartyID()
        { return isSetField(949); }

        public void set(QuickFix.Nested3PartyIDSource value)
        { setField(value); }
        public QuickFix.Nested3PartyIDSource get(QuickFix.Nested3PartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.Nested3PartyIDSource getNested3PartyIDSource()
        { QuickFix.Nested3PartyIDSource value = new QuickFix.Nested3PartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested3PartyIDSource field)
        { return isSetField(field); }
        public bool isSetNested3PartyIDSource()
        { return isSetField(950); }

        public void set(QuickFix.Nested3PartyRole value)
        { setField(value); }
        public QuickFix.Nested3PartyRole get(QuickFix.Nested3PartyRole  value)
        { getField(value); return value; }
        public QuickFix.Nested3PartyRole getNested3PartyRole()
        { QuickFix.Nested3PartyRole value = new QuickFix.Nested3PartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested3PartyRole field)
        { return isSetField(field); }
        public bool isSetNested3PartyRole()
        { return isSetField(951); }

        public void set(QuickFix.NoNested3PartySubIDs value)
        { setField(value); }
        public QuickFix.NoNested3PartySubIDs get(QuickFix.NoNested3PartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNested3PartySubIDs getNoNested3PartySubIDs()
        { QuickFix.NoNested3PartySubIDs value = new QuickFix.NoNested3PartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNested3PartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNested3PartySubIDs()
        { return isSetField(952); }

        public class NoNested3PartySubIDs: QuickFix.Group
        {
        public NoNested3PartySubIDs() : base(952,953,message_order ) {}
        static int[] message_order = new int[] {953,954,0};
          public void set(QuickFix.Nested3PartySubID value)
          { setField(value); }
          public QuickFix.Nested3PartySubID get(QuickFix.Nested3PartySubID  value)
          { getField(value); return value; }
          public QuickFix.Nested3PartySubID getNested3PartySubID()
          { QuickFix.Nested3PartySubID value = new QuickFix.Nested3PartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested3PartySubID field)
          { return isSetField(field); }
          public bool isSetNested3PartySubID()
          { return isSetField(953); }

          public void set(QuickFix.Nested3PartySubIDType value)
          { setField(value); }
          public QuickFix.Nested3PartySubIDType get(QuickFix.Nested3PartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.Nested3PartySubIDType getNested3PartySubIDType()
          { QuickFix.Nested3PartySubIDType value = new QuickFix.Nested3PartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested3PartySubIDType field)
          { return isSetField(field); }
          public bool isSetNested3PartySubIDType()
          { return isSetField(954); }

        };
      };
      public void set(QuickFix.LegAllocID value)
      { setField(value); }
      public QuickFix.LegAllocID get(QuickFix.LegAllocID  value)
      { getField(value); return value; }
      public QuickFix.LegAllocID getLegAllocID()
      { QuickFix.LegAllocID value = new QuickFix.LegAllocID();
        getField(value); return value; }
      public bool isSet(QuickFix.LegAllocID field)
      { return isSetField(field); }
      public bool isSetLegAllocID()
      { return isSetField(1366); }

      public void set(QuickFix.NoLegAllocs value)
      { setField(value); }
      public QuickFix.NoLegAllocs get(QuickFix.NoLegAllocs  value)
      { getField(value); return value; }
      public QuickFix.NoLegAllocs getNoLegAllocs()
      { QuickFix.NoLegAllocs value = new QuickFix.NoLegAllocs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoLegAllocs field)
      { return isSetField(field); }
      public bool isSetNoLegAllocs()
      { return isSetField(670); }

      public class NoLegAllocs: QuickFix.Group
      {
      public NoLegAllocs() : base(670,671,message_order ) {}
      static int[] message_order = new int[] {671,672,673,674,1367,756,0};
        public void set(QuickFix.LegAllocAccount value)
        { setField(value); }
        public QuickFix.LegAllocAccount get(QuickFix.LegAllocAccount  value)
        { getField(value); return value; }
        public QuickFix.LegAllocAccount getLegAllocAccount()
        { QuickFix.LegAllocAccount value = new QuickFix.LegAllocAccount();
          getField(value); return value; }
        public bool isSet(QuickFix.LegAllocAccount field)
        { return isSetField(field); }
        public bool isSetLegAllocAccount()
        { return isSetField(671); }

        public void set(QuickFix.LegIndividualAllocID value)
        { setField(value); }
        public QuickFix.LegIndividualAllocID get(QuickFix.LegIndividualAllocID  value)
        { getField(value); return value; }
        public QuickFix.LegIndividualAllocID getLegIndividualAllocID()
        { QuickFix.LegIndividualAllocID value = new QuickFix.LegIndividualAllocID();
          getField(value); return value; }
        public bool isSet(QuickFix.LegIndividualAllocID field)
        { return isSetField(field); }
        public bool isSetLegIndividualAllocID()
        { return isSetField(672); }

        public void set(QuickFix.LegAllocQty value)
        { setField(value); }
        public QuickFix.LegAllocQty get(QuickFix.LegAllocQty  value)
        { getField(value); return value; }
        public QuickFix.LegAllocQty getLegAllocQty()
        { QuickFix.LegAllocQty value = new QuickFix.LegAllocQty();
          getField(value); return value; }
        public bool isSet(QuickFix.LegAllocQty field)
        { return isSetField(field); }
        public bool isSetLegAllocQty()
        { return isSetField(673); }

        public void set(QuickFix.LegAllocAcctIDSource value)
        { setField(value); }
        public QuickFix.LegAllocAcctIDSource get(QuickFix.LegAllocAcctIDSource  value)
        { getField(value); return value; }
        public QuickFix.LegAllocAcctIDSource getLegAllocAcctIDSource()
        { QuickFix.LegAllocAcctIDSource value = new QuickFix.LegAllocAcctIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.LegAllocAcctIDSource field)
        { return isSetField(field); }
        public bool isSetLegAllocAcctIDSource()
        { return isSetField(674); }

        public void set(QuickFix.LegAllocSettlCurrency value)
        { setField(value); }
        public QuickFix.LegAllocSettlCurrency get(QuickFix.LegAllocSettlCurrency  value)
        { getField(value); return value; }
        public QuickFix.LegAllocSettlCurrency getLegAllocSettlCurrency()
        { QuickFix.LegAllocSettlCurrency value = new QuickFix.LegAllocSettlCurrency();
          getField(value); return value; }
        public bool isSet(QuickFix.LegAllocSettlCurrency field)
        { return isSetField(field); }
        public bool isSetLegAllocSettlCurrency()
        { return isSetField(1367); }

        public void set(QuickFix.NoNested2PartyIDs value)
        { setField(value); }
        public QuickFix.NoNested2PartyIDs get(QuickFix.NoNested2PartyIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNested2PartyIDs getNoNested2PartyIDs()
        { QuickFix.NoNested2PartyIDs value = new QuickFix.NoNested2PartyIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNested2PartyIDs field)
        { return isSetField(field); }
        public bool isSetNoNested2PartyIDs()
        { return isSetField(756); }

        public class NoNested2PartyIDs: QuickFix.Group
        {
        public NoNested2PartyIDs() : base(756,757,message_order ) {}
        static int[] message_order = new int[] {757,758,759,806,0};
          public void set(QuickFix.Nested2PartyID value)
          { setField(value); }
          public QuickFix.Nested2PartyID get(QuickFix.Nested2PartyID  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyID getNested2PartyID()
          { QuickFix.Nested2PartyID value = new QuickFix.Nested2PartyID();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyID field)
          { return isSetField(field); }
          public bool isSetNested2PartyID()
          { return isSetField(757); }

          public void set(QuickFix.Nested2PartyIDSource value)
          { setField(value); }
          public QuickFix.Nested2PartyIDSource get(QuickFix.Nested2PartyIDSource  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyIDSource getNested2PartyIDSource()
          { QuickFix.Nested2PartyIDSource value = new QuickFix.Nested2PartyIDSource();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyIDSource field)
          { return isSetField(field); }
          public bool isSetNested2PartyIDSource()
          { return isSetField(758); }

          public void set(QuickFix.Nested2PartyRole value)
          { setField(value); }
          public QuickFix.Nested2PartyRole get(QuickFix.Nested2PartyRole  value)
          { getField(value); return value; }
          public QuickFix.Nested2PartyRole getNested2PartyRole()
          { QuickFix.Nested2PartyRole value = new QuickFix.Nested2PartyRole();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested2PartyRole field)
          { return isSetField(field); }
          public bool isSetNested2PartyRole()
          { return isSetField(759); }

          public void set(QuickFix.NoNested2PartySubIDs value)
          { setField(value); }
          public QuickFix.NoNested2PartySubIDs get(QuickFix.NoNested2PartySubIDs  value)
          { getField(value); return value; }
          public QuickFix.NoNested2PartySubIDs getNoNested2PartySubIDs()
          { QuickFix.NoNested2PartySubIDs value = new QuickFix.NoNested2PartySubIDs();
            getField(value); return value; }
          public bool isSet(QuickFix.NoNested2PartySubIDs field)
          { return isSetField(field); }
          public bool isSetNoNested2PartySubIDs()
          { return isSetField(806); }

          public class NoNested2PartySubIDs: QuickFix.Group
          {
          public NoNested2PartySubIDs() : base(806,760,message_order ) {}
          static int[] message_order = new int[] {760,807,0};
            public void set(QuickFix.Nested2PartySubID value)
            { setField(value); }
            public QuickFix.Nested2PartySubID get(QuickFix.Nested2PartySubID  value)
            { getField(value); return value; }
            public QuickFix.Nested2PartySubID getNested2PartySubID()
            { QuickFix.Nested2PartySubID value = new QuickFix.Nested2PartySubID();
              getField(value); return value; }
            public bool isSet(QuickFix.Nested2PartySubID field)
            { return isSetField(field); }
            public bool isSetNested2PartySubID()
            { return isSetField(760); }

            public void set(QuickFix.Nested2PartySubIDType value)
            { setField(value); }
            public QuickFix.Nested2PartySubIDType get(QuickFix.Nested2PartySubIDType  value)
            { getField(value); return value; }
            public QuickFix.Nested2PartySubIDType getNested2PartySubIDType()
            { QuickFix.Nested2PartySubIDType value = new QuickFix.Nested2PartySubIDType();
              getField(value); return value; }
            public bool isSet(QuickFix.Nested2PartySubIDType field)
            { return isSetField(field); }
            public bool isSetNested2PartySubIDType()
            { return isSetField(807); }

          };
        };
      };
      public void set(QuickFix.LegVolatility value)
      { setField(value); }
      public QuickFix.LegVolatility get(QuickFix.LegVolatility  value)
      { getField(value); return value; }
      public QuickFix.LegVolatility getLegVolatility()
      { QuickFix.LegVolatility value = new QuickFix.LegVolatility();
        getField(value); return value; }
      public bool isSet(QuickFix.LegVolatility field)
      { return isSetField(field); }
      public bool isSetLegVolatility()
      { return isSetField(1379); }

      public void set(QuickFix.LegDividendYield value)
      { setField(value); }
      public QuickFix.LegDividendYield get(QuickFix.LegDividendYield  value)
      { getField(value); return value; }
      public QuickFix.LegDividendYield getLegDividendYield()
      { QuickFix.LegDividendYield value = new QuickFix.LegDividendYield();
        getField(value); return value; }
      public bool isSet(QuickFix.LegDividendYield field)
      { return isSetField(field); }
      public bool isSetLegDividendYield()
      { return isSetField(1381); }

      public void set(QuickFix.LegCurrencyRatio value)
      { setField(value); }
      public QuickFix.LegCurrencyRatio get(QuickFix.LegCurrencyRatio  value)
      { getField(value); return value; }
      public QuickFix.LegCurrencyRatio getLegCurrencyRatio()
      { QuickFix.LegCurrencyRatio value = new QuickFix.LegCurrencyRatio();
        getField(value); return value; }
      public bool isSet(QuickFix.LegCurrencyRatio field)
      { return isSetField(field); }
      public bool isSetLegCurrencyRatio()
      { return isSetField(1383); }

      public void set(QuickFix.LegExecInst value)
      { setField(value); }
      public QuickFix.LegExecInst get(QuickFix.LegExecInst  value)
      { getField(value); return value; }
      public QuickFix.LegExecInst getLegExecInst()
      { QuickFix.LegExecInst value = new QuickFix.LegExecInst();
        getField(value); return value; }
      public bool isSet(QuickFix.LegExecInst field)
      { return isSetField(field); }
      public bool isSetLegExecInst()
      { return isSetField(1384); }

      public void set(QuickFix.LegLastQty value)
      { setField(value); }
      public QuickFix.LegLastQty get(QuickFix.LegLastQty  value)
      { getField(value); return value; }
      public QuickFix.LegLastQty getLegLastQty()
      { QuickFix.LegLastQty value = new QuickFix.LegLastQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LegLastQty field)
      { return isSetField(field); }
      public bool isSetLegLastQty()
      { return isSetField(1418); }

    };
    public void set(QuickFix.CopyMsgIndicator value)
    { setField(value); }
    public QuickFix.CopyMsgIndicator get(QuickFix.CopyMsgIndicator  value)
    { getField(value); return value; }
    public QuickFix.CopyMsgIndicator getCopyMsgIndicator()
    { QuickFix.CopyMsgIndicator value = new QuickFix.CopyMsgIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.CopyMsgIndicator field)
    { return isSetField(field); }
    public bool isSetCopyMsgIndicator()
    { return isSetField(797); }

    public void set(QuickFix.NoMiscFees value)
    { setField(value); }
    public QuickFix.NoMiscFees get(QuickFix.NoMiscFees  value)
    { getField(value); return value; }
    public QuickFix.NoMiscFees getNoMiscFees()
    { QuickFix.NoMiscFees value = new QuickFix.NoMiscFees();
      getField(value); return value; }
    public bool isSet(QuickFix.NoMiscFees field)
    { return isSetField(field); }
    public bool isSetNoMiscFees()
    { return isSetField(136); }

    public class NoMiscFees: QuickFix.Group
    {
    public NoMiscFees() : base(136,137,message_order ) {}
    static int[] message_order = new int[] {137,138,139,891,0};
      public void set(QuickFix.MiscFeeAmt value)
      { setField(value); }
      public QuickFix.MiscFeeAmt get(QuickFix.MiscFeeAmt  value)
      { getField(value); return value; }
      public QuickFix.MiscFeeAmt getMiscFeeAmt()
      { QuickFix.MiscFeeAmt value = new QuickFix.MiscFeeAmt();
        getField(value); return value; }
      public bool isSet(QuickFix.MiscFeeAmt field)
      { return isSetField(field); }
      public bool isSetMiscFeeAmt()
      { return isSetField(137); }

      public void set(QuickFix.MiscFeeCurr value)
      { setField(value); }
      public QuickFix.MiscFeeCurr get(QuickFix.MiscFeeCurr  value)
      { getField(value); return value; }
      public QuickFix.MiscFeeCurr getMiscFeeCurr()
      { QuickFix.MiscFeeCurr value = new QuickFix.MiscFeeCurr();
        getField(value); return value; }
      public bool isSet(QuickFix.MiscFeeCurr field)
      { return isSetField(field); }
      public bool isSetMiscFeeCurr()
      { return isSetField(138); }

      public void set(QuickFix.MiscFeeType value)
      { setField(value); }
      public QuickFix.MiscFeeType get(QuickFix.MiscFeeType  value)
      { getField(value); return value; }
      public QuickFix.MiscFeeType getMiscFeeType()
      { QuickFix.MiscFeeType value = new QuickFix.MiscFeeType();
        getField(value); return value; }
      public bool isSet(QuickFix.MiscFeeType field)
      { return isSetField(field); }
      public bool isSetMiscFeeType()
      { return isSetField(139); }

      public void set(QuickFix.MiscFeeBasis value)
      { setField(value); }
      public QuickFix.MiscFeeBasis get(QuickFix.MiscFeeBasis  value)
      { getField(value); return value; }
      public QuickFix.MiscFeeBasis getMiscFeeBasis()
      { QuickFix.MiscFeeBasis value = new QuickFix.MiscFeeBasis();
        getField(value); return value; }
      public bool isSet(QuickFix.MiscFeeBasis field)
      { return isSetField(field); }
      public bool isSetMiscFeeBasis()
      { return isSetField(891); }

    };
    public void set(QuickFix.NoStrategyParameters value)
    { setField(value); }
    public QuickFix.NoStrategyParameters get(QuickFix.NoStrategyParameters  value)
    { getField(value); return value; }
    public QuickFix.NoStrategyParameters getNoStrategyParameters()
    { QuickFix.NoStrategyParameters value = new QuickFix.NoStrategyParameters();
      getField(value); return value; }
    public bool isSet(QuickFix.NoStrategyParameters field)
    { return isSetField(field); }
    public bool isSetNoStrategyParameters()
    { return isSetField(957); }

    public class NoStrategyParameters: QuickFix.Group
    {
    public NoStrategyParameters() : base(957,958,message_order ) {}
    static int[] message_order = new int[] {958,959,960,0};
      public void set(QuickFix.StrategyParameterName value)
      { setField(value); }
      public QuickFix.StrategyParameterName get(QuickFix.StrategyParameterName  value)
      { getField(value); return value; }
      public QuickFix.StrategyParameterName getStrategyParameterName()
      { QuickFix.StrategyParameterName value = new QuickFix.StrategyParameterName();
        getField(value); return value; }
      public bool isSet(QuickFix.StrategyParameterName field)
      { return isSetField(field); }
      public bool isSetStrategyParameterName()
      { return isSetField(958); }

      public void set(QuickFix.StrategyParameterType value)
      { setField(value); }
      public QuickFix.StrategyParameterType get(QuickFix.StrategyParameterType  value)
      { getField(value); return value; }
      public QuickFix.StrategyParameterType getStrategyParameterType()
      { QuickFix.StrategyParameterType value = new QuickFix.StrategyParameterType();
        getField(value); return value; }
      public bool isSet(QuickFix.StrategyParameterType field)
      { return isSetField(field); }
      public bool isSetStrategyParameterType()
      { return isSetField(959); }

      public void set(QuickFix.StrategyParameterValue value)
      { setField(value); }
      public QuickFix.StrategyParameterValue get(QuickFix.StrategyParameterValue  value)
      { getField(value); return value; }
      public QuickFix.StrategyParameterValue getStrategyParameterValue()
      { QuickFix.StrategyParameterValue value = new QuickFix.StrategyParameterValue();
        getField(value); return value; }
      public bool isSet(QuickFix.StrategyParameterValue field)
      { return isSetField(field); }
      public bool isSetStrategyParameterValue()
      { return isSetField(960); }

    };
    public void set(QuickFix.HostCrossID value)
    { setField(value); }
    public QuickFix.HostCrossID get(QuickFix.HostCrossID  value)
    { getField(value); return value; }
    public QuickFix.HostCrossID getHostCrossID()
    { QuickFix.HostCrossID value = new QuickFix.HostCrossID();
      getField(value); return value; }
    public bool isSet(QuickFix.HostCrossID field)
    { return isSetField(field); }
    public bool isSetHostCrossID()
    { return isSetField(961); }

    public void set(QuickFix.ManualOrderIndicator value)
    { setField(value); }
    public QuickFix.ManualOrderIndicator get(QuickFix.ManualOrderIndicator  value)
    { getField(value); return value; }
    public QuickFix.ManualOrderIndicator getManualOrderIndicator()
    { QuickFix.ManualOrderIndicator value = new QuickFix.ManualOrderIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.ManualOrderIndicator field)
    { return isSetField(field); }
    public bool isSetManualOrderIndicator()
    { return isSetField(1028); }

    public void set(QuickFix.CustDirectedOrder value)
    { setField(value); }
    public QuickFix.CustDirectedOrder get(QuickFix.CustDirectedOrder  value)
    { getField(value); return value; }
    public QuickFix.CustDirectedOrder getCustDirectedOrder()
    { QuickFix.CustDirectedOrder value = new QuickFix.CustDirectedOrder();
      getField(value); return value; }
    public bool isSet(QuickFix.CustDirectedOrder field)
    { return isSetField(field); }
    public bool isSetCustDirectedOrder()
    { return isSetField(1029); }

    public void set(QuickFix.ReceivedDeptID value)
    { setField(value); }
    public QuickFix.ReceivedDeptID get(QuickFix.ReceivedDeptID  value)
    { getField(value); return value; }
    public QuickFix.ReceivedDeptID getReceivedDeptID()
    { QuickFix.ReceivedDeptID value = new QuickFix.ReceivedDeptID();
      getField(value); return value; }
    public bool isSet(QuickFix.ReceivedDeptID field)
    { return isSetField(field); }
    public bool isSetReceivedDeptID()
    { return isSetField(1030); }

    public void set(QuickFix.CustOrderHandlingInst value)
    { setField(value); }
    public QuickFix.CustOrderHandlingInst get(QuickFix.CustOrderHandlingInst  value)
    { getField(value); return value; }
    public QuickFix.CustOrderHandlingInst getCustOrderHandlingInst()
    { QuickFix.CustOrderHandlingInst value = new QuickFix.CustOrderHandlingInst();
      getField(value); return value; }
    public bool isSet(QuickFix.CustOrderHandlingInst field)
    { return isSetField(field); }
    public bool isSetCustOrderHandlingInst()
    { return isSetField(1031); }

    public void set(QuickFix.OrderHandlingInstSource value)
    { setField(value); }
    public QuickFix.OrderHandlingInstSource get(QuickFix.OrderHandlingInstSource  value)
    { getField(value); return value; }
    public QuickFix.OrderHandlingInstSource getOrderHandlingInstSource()
    { QuickFix.OrderHandlingInstSource value = new QuickFix.OrderHandlingInstSource();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderHandlingInstSource field)
    { return isSetField(field); }
    public bool isSetOrderHandlingInstSource()
    { return isSetField(1032); }

    public void set(QuickFix.NoTrdRegTimestamps value)
    { setField(value); }
    public QuickFix.NoTrdRegTimestamps get(QuickFix.NoTrdRegTimestamps  value)
    { getField(value); return value; }
    public QuickFix.NoTrdRegTimestamps getNoTrdRegTimestamps()
    { QuickFix.NoTrdRegTimestamps value = new QuickFix.NoTrdRegTimestamps();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTrdRegTimestamps field)
    { return isSetField(field); }
    public bool isSetNoTrdRegTimestamps()
    { return isSetField(768); }

    public class NoTrdRegTimestamps: QuickFix.Group
    {
    public NoTrdRegTimestamps() : base(768,769,message_order ) {}
    static int[] message_order = new int[] {769,770,771,1033,1034,1035,0};
      public void set(QuickFix.TrdRegTimestamp value)
      { setField(value); }
      public QuickFix.TrdRegTimestamp get(QuickFix.TrdRegTimestamp  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestamp getTrdRegTimestamp()
      { QuickFix.TrdRegTimestamp value = new QuickFix.TrdRegTimestamp();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestamp field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestamp()
      { return isSetField(769); }

      public void set(QuickFix.TrdRegTimestampType value)
      { setField(value); }
      public QuickFix.TrdRegTimestampType get(QuickFix.TrdRegTimestampType  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestampType getTrdRegTimestampType()
      { QuickFix.TrdRegTimestampType value = new QuickFix.TrdRegTimestampType();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestampType field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestampType()
      { return isSetField(770); }

      public void set(QuickFix.TrdRegTimestampOrigin value)
      { setField(value); }
      public QuickFix.TrdRegTimestampOrigin get(QuickFix.TrdRegTimestampOrigin  value)
      { getField(value); return value; }
      public QuickFix.TrdRegTimestampOrigin getTrdRegTimestampOrigin()
      { QuickFix.TrdRegTimestampOrigin value = new QuickFix.TrdRegTimestampOrigin();
        getField(value); return value; }
      public bool isSet(QuickFix.TrdRegTimestampOrigin field)
      { return isSetField(field); }
      public bool isSetTrdRegTimestampOrigin()
      { return isSetField(771); }

      public void set(QuickFix.DeskType value)
      { setField(value); }
      public QuickFix.DeskType get(QuickFix.DeskType  value)
      { getField(value); return value; }
      public QuickFix.DeskType getDeskType()
      { QuickFix.DeskType value = new QuickFix.DeskType();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskType field)
      { return isSetField(field); }
      public bool isSetDeskType()
      { return isSetField(1033); }

      public void set(QuickFix.DeskTypeSource value)
      { setField(value); }
      public QuickFix.DeskTypeSource get(QuickFix.DeskTypeSource  value)
      { getField(value); return value; }
      public QuickFix.DeskTypeSource getDeskTypeSource()
      { QuickFix.DeskTypeSource value = new QuickFix.DeskTypeSource();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskTypeSource field)
      { return isSetField(field); }
      public bool isSetDeskTypeSource()
      { return isSetField(1034); }

      public void set(QuickFix.DeskOrderHandlingInst value)
      { setField(value); }
      public QuickFix.DeskOrderHandlingInst get(QuickFix.DeskOrderHandlingInst  value)
      { getField(value); return value; }
      public QuickFix.DeskOrderHandlingInst getDeskOrderHandlingInst()
      { QuickFix.DeskOrderHandlingInst value = new QuickFix.DeskOrderHandlingInst();
        getField(value); return value; }
      public bool isSet(QuickFix.DeskOrderHandlingInst field)
      { return isSetField(field); }
      public bool isSetDeskOrderHandlingInst()
      { return isSetField(1035); }

    };
    public void set(QuickFix.AggressorIndicator value)
    { setField(value); }
    public QuickFix.AggressorIndicator get(QuickFix.AggressorIndicator  value)
    { getField(value); return value; }
    public QuickFix.AggressorIndicator getAggressorIndicator()
    { QuickFix.AggressorIndicator value = new QuickFix.AggressorIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.AggressorIndicator field)
    { return isSetField(field); }
    public bool isSetAggressorIndicator()
    { return isSetField(1057); }

    public void set(QuickFix.CalculatedCcyLastQty value)
    { setField(value); }
    public QuickFix.CalculatedCcyLastQty get(QuickFix.CalculatedCcyLastQty  value)
    { getField(value); return value; }
    public QuickFix.CalculatedCcyLastQty getCalculatedCcyLastQty()
    { QuickFix.CalculatedCcyLastQty value = new QuickFix.CalculatedCcyLastQty();
      getField(value); return value; }
    public bool isSet(QuickFix.CalculatedCcyLastQty field)
    { return isSetField(field); }
    public bool isSetCalculatedCcyLastQty()
    { return isSetField(1056); }

    public void set(QuickFix.LastSwapPoints value)
    { setField(value); }
    public QuickFix.LastSwapPoints get(QuickFix.LastSwapPoints  value)
    { getField(value); return value; }
    public QuickFix.LastSwapPoints getLastSwapPoints()
    { QuickFix.LastSwapPoints value = new QuickFix.LastSwapPoints();
      getField(value); return value; }
    public bool isSet(QuickFix.LastSwapPoints field)
    { return isSetField(field); }
    public bool isSetLastSwapPoints()
    { return isSetField(1071); }

    public void set(QuickFix.MatchType value)
    { setField(value); }
    public QuickFix.MatchType get(QuickFix.MatchType  value)
    { getField(value); return value; }
    public QuickFix.MatchType getMatchType()
    { QuickFix.MatchType value = new QuickFix.MatchType();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchType field)
    { return isSetField(field); }
    public bool isSetMatchType()
    { return isSetField(574); }

    public void set(QuickFix.OrderCategory value)
    { setField(value); }
    public QuickFix.OrderCategory get(QuickFix.OrderCategory  value)
    { getField(value); return value; }
    public QuickFix.OrderCategory getOrderCategory()
    { QuickFix.OrderCategory value = new QuickFix.OrderCategory();
      getField(value); return value; }
    public bool isSet(QuickFix.OrderCategory field)
    { return isSetField(field); }
    public bool isSetOrderCategory()
    { return isSetField(1115); }

    public void set(QuickFix.LotType value)
    { setField(value); }
    public QuickFix.LotType get(QuickFix.LotType  value)
    { getField(value); return value; }
    public QuickFix.LotType getLotType()
    { QuickFix.LotType value = new QuickFix.LotType();
      getField(value); return value; }
    public bool isSet(QuickFix.LotType field)
    { return isSetField(field); }
    public bool isSetLotType()
    { return isSetField(1093); }

    public void set(QuickFix.PriceProtectionScope value)
    { setField(value); }
    public QuickFix.PriceProtectionScope get(QuickFix.PriceProtectionScope  value)
    { getField(value); return value; }
    public QuickFix.PriceProtectionScope getPriceProtectionScope()
    { QuickFix.PriceProtectionScope value = new QuickFix.PriceProtectionScope();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceProtectionScope field)
    { return isSetField(field); }
    public bool isSetPriceProtectionScope()
    { return isSetField(1092); }

    public void set(QuickFix.TriggerType value)
    { setField(value); }
    public QuickFix.TriggerType get(QuickFix.TriggerType  value)
    { getField(value); return value; }
    public QuickFix.TriggerType getTriggerType()
    { QuickFix.TriggerType value = new QuickFix.TriggerType();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerType field)
    { return isSetField(field); }
    public bool isSetTriggerType()
    { return isSetField(1100); }

    public void set(QuickFix.TriggerAction value)
    { setField(value); }
    public QuickFix.TriggerAction get(QuickFix.TriggerAction  value)
    { getField(value); return value; }
    public QuickFix.TriggerAction getTriggerAction()
    { QuickFix.TriggerAction value = new QuickFix.TriggerAction();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerAction field)
    { return isSetField(field); }
    public bool isSetTriggerAction()
    { return isSetField(1101); }

    public void set(QuickFix.TriggerPrice value)
    { setField(value); }
    public QuickFix.TriggerPrice get(QuickFix.TriggerPrice  value)
    { getField(value); return value; }
    public QuickFix.TriggerPrice getTriggerPrice()
    { QuickFix.TriggerPrice value = new QuickFix.TriggerPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerPrice field)
    { return isSetField(field); }
    public bool isSetTriggerPrice()
    { return isSetField(1102); }

    public void set(QuickFix.TriggerSymbol value)
    { setField(value); }
    public QuickFix.TriggerSymbol get(QuickFix.TriggerSymbol  value)
    { getField(value); return value; }
    public QuickFix.TriggerSymbol getTriggerSymbol()
    { QuickFix.TriggerSymbol value = new QuickFix.TriggerSymbol();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerSymbol field)
    { return isSetField(field); }
    public bool isSetTriggerSymbol()
    { return isSetField(1103); }

    public void set(QuickFix.TriggerSecurityID value)
    { setField(value); }
    public QuickFix.TriggerSecurityID get(QuickFix.TriggerSecurityID  value)
    { getField(value); return value; }
    public QuickFix.TriggerSecurityID getTriggerSecurityID()
    { QuickFix.TriggerSecurityID value = new QuickFix.TriggerSecurityID();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerSecurityID field)
    { return isSetField(field); }
    public bool isSetTriggerSecurityID()
    { return isSetField(1104); }

    public void set(QuickFix.TriggerSecurityIDSource value)
    { setField(value); }
    public QuickFix.TriggerSecurityIDSource get(QuickFix.TriggerSecurityIDSource  value)
    { getField(value); return value; }
    public QuickFix.TriggerSecurityIDSource getTriggerSecurityIDSource()
    { QuickFix.TriggerSecurityIDSource value = new QuickFix.TriggerSecurityIDSource();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerSecurityIDSource field)
    { return isSetField(field); }
    public bool isSetTriggerSecurityIDSource()
    { return isSetField(1105); }

    public void set(QuickFix.TriggerSecurityDesc value)
    { setField(value); }
    public QuickFix.TriggerSecurityDesc get(QuickFix.TriggerSecurityDesc  value)
    { getField(value); return value; }
    public QuickFix.TriggerSecurityDesc getTriggerSecurityDesc()
    { QuickFix.TriggerSecurityDesc value = new QuickFix.TriggerSecurityDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerSecurityDesc field)
    { return isSetField(field); }
    public bool isSetTriggerSecurityDesc()
    { return isSetField(1106); }

    public void set(QuickFix.TriggerPriceType value)
    { setField(value); }
    public QuickFix.TriggerPriceType get(QuickFix.TriggerPriceType  value)
    { getField(value); return value; }
    public QuickFix.TriggerPriceType getTriggerPriceType()
    { QuickFix.TriggerPriceType value = new QuickFix.TriggerPriceType();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerPriceType field)
    { return isSetField(field); }
    public bool isSetTriggerPriceType()
    { return isSetField(1107); }

    public void set(QuickFix.TriggerPriceTypeScope value)
    { setField(value); }
    public QuickFix.TriggerPriceTypeScope get(QuickFix.TriggerPriceTypeScope  value)
    { getField(value); return value; }
    public QuickFix.TriggerPriceTypeScope getTriggerPriceTypeScope()
    { QuickFix.TriggerPriceTypeScope value = new QuickFix.TriggerPriceTypeScope();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerPriceTypeScope field)
    { return isSetField(field); }
    public bool isSetTriggerPriceTypeScope()
    { return isSetField(1108); }

    public void set(QuickFix.TriggerPriceDirection value)
    { setField(value); }
    public QuickFix.TriggerPriceDirection get(QuickFix.TriggerPriceDirection  value)
    { getField(value); return value; }
    public QuickFix.TriggerPriceDirection getTriggerPriceDirection()
    { QuickFix.TriggerPriceDirection value = new QuickFix.TriggerPriceDirection();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerPriceDirection field)
    { return isSetField(field); }
    public bool isSetTriggerPriceDirection()
    { return isSetField(1109); }

    public void set(QuickFix.TriggerNewPrice value)
    { setField(value); }
    public QuickFix.TriggerNewPrice get(QuickFix.TriggerNewPrice  value)
    { getField(value); return value; }
    public QuickFix.TriggerNewPrice getTriggerNewPrice()
    { QuickFix.TriggerNewPrice value = new QuickFix.TriggerNewPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerNewPrice field)
    { return isSetField(field); }
    public bool isSetTriggerNewPrice()
    { return isSetField(1110); }

    public void set(QuickFix.TriggerOrderType value)
    { setField(value); }
    public QuickFix.TriggerOrderType get(QuickFix.TriggerOrderType  value)
    { getField(value); return value; }
    public QuickFix.TriggerOrderType getTriggerOrderType()
    { QuickFix.TriggerOrderType value = new QuickFix.TriggerOrderType();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerOrderType field)
    { return isSetField(field); }
    public bool isSetTriggerOrderType()
    { return isSetField(1111); }

    public void set(QuickFix.TriggerNewQty value)
    { setField(value); }
    public QuickFix.TriggerNewQty get(QuickFix.TriggerNewQty  value)
    { getField(value); return value; }
    public QuickFix.TriggerNewQty getTriggerNewQty()
    { QuickFix.TriggerNewQty value = new QuickFix.TriggerNewQty();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerNewQty field)
    { return isSetField(field); }
    public bool isSetTriggerNewQty()
    { return isSetField(1112); }

    public void set(QuickFix.TriggerTradingSessionID value)
    { setField(value); }
    public QuickFix.TriggerTradingSessionID get(QuickFix.TriggerTradingSessionID  value)
    { getField(value); return value; }
    public QuickFix.TriggerTradingSessionID getTriggerTradingSessionID()
    { QuickFix.TriggerTradingSessionID value = new QuickFix.TriggerTradingSessionID();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerTradingSessionID field)
    { return isSetField(field); }
    public bool isSetTriggerTradingSessionID()
    { return isSetField(1113); }

    public void set(QuickFix.TriggerTradingSessionSubID value)
    { setField(value); }
    public QuickFix.TriggerTradingSessionSubID get(QuickFix.TriggerTradingSessionSubID  value)
    { getField(value); return value; }
    public QuickFix.TriggerTradingSessionSubID getTriggerTradingSessionSubID()
    { QuickFix.TriggerTradingSessionSubID value = new QuickFix.TriggerTradingSessionSubID();
      getField(value); return value; }
    public bool isSet(QuickFix.TriggerTradingSessionSubID field)
    { return isSetField(field); }
    public bool isSetTriggerTradingSessionSubID()
    { return isSetField(1114); }

    public void set(QuickFix.PeggedRefPrice value)
    { setField(value); }
    public QuickFix.PeggedRefPrice get(QuickFix.PeggedRefPrice  value)
    { getField(value); return value; }
    public QuickFix.PeggedRefPrice getPeggedRefPrice()
    { QuickFix.PeggedRefPrice value = new QuickFix.PeggedRefPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.PeggedRefPrice field)
    { return isSetField(field); }
    public bool isSetPeggedRefPrice()
    { return isSetField(1095); }

    public void set(QuickFix.PreTradeAnonymity value)
    { setField(value); }
    public QuickFix.PreTradeAnonymity get(QuickFix.PreTradeAnonymity  value)
    { getField(value); return value; }
    public QuickFix.PreTradeAnonymity getPreTradeAnonymity()
    { QuickFix.PreTradeAnonymity value = new QuickFix.PreTradeAnonymity();
      getField(value); return value; }
    public bool isSet(QuickFix.PreTradeAnonymity field)
    { return isSetField(field); }
    public bool isSetPreTradeAnonymity()
    { return isSetField(1091); }

    public void set(QuickFix.MatchIncrement value)
    { setField(value); }
    public QuickFix.MatchIncrement get(QuickFix.MatchIncrement  value)
    { getField(value); return value; }
    public QuickFix.MatchIncrement getMatchIncrement()
    { QuickFix.MatchIncrement value = new QuickFix.MatchIncrement();
      getField(value); return value; }
    public bool isSet(QuickFix.MatchIncrement field)
    { return isSetField(field); }
    public bool isSetMatchIncrement()
    { return isSetField(1089); }

    public void set(QuickFix.MaxPriceLevels value)
    { setField(value); }
    public QuickFix.MaxPriceLevels get(QuickFix.MaxPriceLevels  value)
    { getField(value); return value; }
    public QuickFix.MaxPriceLevels getMaxPriceLevels()
    { QuickFix.MaxPriceLevels value = new QuickFix.MaxPriceLevels();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxPriceLevels field)
    { return isSetField(field); }
    public bool isSetMaxPriceLevels()
    { return isSetField(1090); }

    public void set(QuickFix.SecondaryDisplayQty value)
    { setField(value); }
    public QuickFix.SecondaryDisplayQty get(QuickFix.SecondaryDisplayQty  value)
    { getField(value); return value; }
    public QuickFix.SecondaryDisplayQty getSecondaryDisplayQty()
    { QuickFix.SecondaryDisplayQty value = new QuickFix.SecondaryDisplayQty();
      getField(value); return value; }
    public bool isSet(QuickFix.SecondaryDisplayQty field)
    { return isSetField(field); }
    public bool isSetSecondaryDisplayQty()
    { return isSetField(1082); }

    public void set(QuickFix.DisplayWhen value)
    { setField(value); }
    public QuickFix.DisplayWhen get(QuickFix.DisplayWhen  value)
    { getField(value); return value; }
    public QuickFix.DisplayWhen getDisplayWhen()
    { QuickFix.DisplayWhen value = new QuickFix.DisplayWhen();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayWhen field)
    { return isSetField(field); }
    public bool isSetDisplayWhen()
    { return isSetField(1083); }

    public void set(QuickFix.DisplayMethod value)
    { setField(value); }
    public QuickFix.DisplayMethod get(QuickFix.DisplayMethod  value)
    { getField(value); return value; }
    public QuickFix.DisplayMethod getDisplayMethod()
    { QuickFix.DisplayMethod value = new QuickFix.DisplayMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayMethod field)
    { return isSetField(field); }
    public bool isSetDisplayMethod()
    { return isSetField(1084); }

    public void set(QuickFix.DisplayLowQty value)
    { setField(value); }
    public QuickFix.DisplayLowQty get(QuickFix.DisplayLowQty  value)
    { getField(value); return value; }
    public QuickFix.DisplayLowQty getDisplayLowQty()
    { QuickFix.DisplayLowQty value = new QuickFix.DisplayLowQty();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayLowQty field)
    { return isSetField(field); }
    public bool isSetDisplayLowQty()
    { return isSetField(1085); }

    public void set(QuickFix.DisplayHighQty value)
    { setField(value); }
    public QuickFix.DisplayHighQty get(QuickFix.DisplayHighQty  value)
    { getField(value); return value; }
    public QuickFix.DisplayHighQty getDisplayHighQty()
    { QuickFix.DisplayHighQty value = new QuickFix.DisplayHighQty();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayHighQty field)
    { return isSetField(field); }
    public bool isSetDisplayHighQty()
    { return isSetField(1086); }

    public void set(QuickFix.DisplayMinIncr value)
    { setField(value); }
    public QuickFix.DisplayMinIncr get(QuickFix.DisplayMinIncr  value)
    { getField(value); return value; }
    public QuickFix.DisplayMinIncr getDisplayMinIncr()
    { QuickFix.DisplayMinIncr value = new QuickFix.DisplayMinIncr();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayMinIncr field)
    { return isSetField(field); }
    public bool isSetDisplayMinIncr()
    { return isSetField(1087); }

    public void set(QuickFix.RefreshQty value)
    { setField(value); }
    public QuickFix.RefreshQty get(QuickFix.RefreshQty  value)
    { getField(value); return value; }
    public QuickFix.RefreshQty getRefreshQty()
    { QuickFix.RefreshQty value = new QuickFix.RefreshQty();
      getField(value); return value; }
    public bool isSet(QuickFix.RefreshQty field)
    { return isSetField(field); }
    public bool isSetRefreshQty()
    { return isSetField(1088); }

    public void set(QuickFix.DisplayQty value)
    { setField(value); }
    public QuickFix.DisplayQty get(QuickFix.DisplayQty  value)
    { getField(value); return value; }
    public QuickFix.DisplayQty getDisplayQty()
    { QuickFix.DisplayQty value = new QuickFix.DisplayQty();
      getField(value); return value; }
    public bool isSet(QuickFix.DisplayQty field)
    { return isSetField(field); }
    public bool isSetDisplayQty()
    { return isSetField(1138); }

    public void set(QuickFix.Volatility value)
    { setField(value); }
    public QuickFix.Volatility get(QuickFix.Volatility  value)
    { getField(value); return value; }
    public QuickFix.Volatility getVolatility()
    { QuickFix.Volatility value = new QuickFix.Volatility();
      getField(value); return value; }
    public bool isSet(QuickFix.Volatility field)
    { return isSetField(field); }
    public bool isSetVolatility()
    { return isSetField(1188); }

    public void set(QuickFix.TimeToExpiration value)
    { setField(value); }
    public QuickFix.TimeToExpiration get(QuickFix.TimeToExpiration  value)
    { getField(value); return value; }
    public QuickFix.TimeToExpiration getTimeToExpiration()
    { QuickFix.TimeToExpiration value = new QuickFix.TimeToExpiration();
      getField(value); return value; }
    public bool isSet(QuickFix.TimeToExpiration field)
    { return isSetField(field); }
    public bool isSetTimeToExpiration()
    { return isSetField(1189); }

    public void set(QuickFix.RiskFreeRate value)
    { setField(value); }
    public QuickFix.RiskFreeRate get(QuickFix.RiskFreeRate  value)
    { getField(value); return value; }
    public QuickFix.RiskFreeRate getRiskFreeRate()
    { QuickFix.RiskFreeRate value = new QuickFix.RiskFreeRate();
      getField(value); return value; }
    public bool isSet(QuickFix.RiskFreeRate field)
    { return isSetField(field); }
    public bool isSetRiskFreeRate()
    { return isSetField(1190); }

    public void set(QuickFix.PriceDelta value)
    { setField(value); }
    public QuickFix.PriceDelta get(QuickFix.PriceDelta  value)
    { getField(value); return value; }
    public QuickFix.PriceDelta getPriceDelta()
    { QuickFix.PriceDelta value = new QuickFix.PriceDelta();
      getField(value); return value; }
    public bool isSet(QuickFix.PriceDelta field)
    { return isSetField(field); }
    public bool isSetPriceDelta()
    { return isSetField(811); }

    public void set(QuickFix.TrdMatchID value)
    { setField(value); }
    public QuickFix.TrdMatchID get(QuickFix.TrdMatchID  value)
    { getField(value); return value; }
    public QuickFix.TrdMatchID getTrdMatchID()
    { QuickFix.TrdMatchID value = new QuickFix.TrdMatchID();
      getField(value); return value; }
    public bool isSet(QuickFix.TrdMatchID field)
    { return isSetField(field); }
    public bool isSetTrdMatchID()
    { return isSetField(880); }

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

    public void set(QuickFix.NoAllocs value)
    { setField(value); }
    public QuickFix.NoAllocs get(QuickFix.NoAllocs  value)
    { getField(value); return value; }
    public QuickFix.NoAllocs getNoAllocs()
    { QuickFix.NoAllocs value = new QuickFix.NoAllocs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoAllocs field)
    { return isSetField(field); }
    public bool isSetNoAllocs()
    { return isSetField(78); }

    public class NoAllocs: QuickFix.Group
    {
    public NoAllocs() : base(78,79,message_order ) {}
    static int[] message_order = new int[] {79,661,736,467,539,80,0};
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

      public void set(QuickFix.AllocAcctIDSource value)
      { setField(value); }
      public QuickFix.AllocAcctIDSource get(QuickFix.AllocAcctIDSource  value)
      { getField(value); return value; }
      public QuickFix.AllocAcctIDSource getAllocAcctIDSource()
      { QuickFix.AllocAcctIDSource value = new QuickFix.AllocAcctIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocAcctIDSource field)
      { return isSetField(field); }
      public bool isSetAllocAcctIDSource()
      { return isSetField(661); }

      public void set(QuickFix.AllocSettlCurrency value)
      { setField(value); }
      public QuickFix.AllocSettlCurrency get(QuickFix.AllocSettlCurrency  value)
      { getField(value); return value; }
      public QuickFix.AllocSettlCurrency getAllocSettlCurrency()
      { QuickFix.AllocSettlCurrency value = new QuickFix.AllocSettlCurrency();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocSettlCurrency field)
      { return isSetField(field); }
      public bool isSetAllocSettlCurrency()
      { return isSetField(736); }

      public void set(QuickFix.IndividualAllocID value)
      { setField(value); }
      public QuickFix.IndividualAllocID get(QuickFix.IndividualAllocID  value)
      { getField(value); return value; }
      public QuickFix.IndividualAllocID getIndividualAllocID()
      { QuickFix.IndividualAllocID value = new QuickFix.IndividualAllocID();
        getField(value); return value; }
      public bool isSet(QuickFix.IndividualAllocID field)
      { return isSetField(field); }
      public bool isSetIndividualAllocID()
      { return isSetField(467); }

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
      static int[] message_order = new int[] {524,525,538,804,0};
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

        public void set(QuickFix.NoNestedPartySubIDs value)
        { setField(value); }
        public QuickFix.NoNestedPartySubIDs get(QuickFix.NoNestedPartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNestedPartySubIDs getNoNestedPartySubIDs()
        { QuickFix.NoNestedPartySubIDs value = new QuickFix.NoNestedPartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNestedPartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNestedPartySubIDs()
        { return isSetField(804); }

        public class NoNestedPartySubIDs: QuickFix.Group
        {
        public NoNestedPartySubIDs() : base(804,545,message_order ) {}
        static int[] message_order = new int[] {545,805,0};
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

          public void set(QuickFix.NestedPartySubIDType value)
          { setField(value); }
          public QuickFix.NestedPartySubIDType get(QuickFix.NestedPartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.NestedPartySubIDType getNestedPartySubIDType()
          { QuickFix.NestedPartySubIDType value = new QuickFix.NestedPartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.NestedPartySubIDType field)
          { return isSetField(field); }
          public bool isSetNestedPartySubIDType()
          { return isSetField(805); }

        };
      };
      public void set(QuickFix.AllocQty value)
      { setField(value); }
      public QuickFix.AllocQty get(QuickFix.AllocQty  value)
      { getField(value); return value; }
      public QuickFix.AllocQty getAllocQty()
      { QuickFix.AllocQty value = new QuickFix.AllocQty();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocQty field)
      { return isSetField(field); }
      public bool isSetAllocQty()
      { return isSetField(80); }

    };
    public void set(QuickFix.TotNoFills value)
    { setField(value); }
    public QuickFix.TotNoFills get(QuickFix.TotNoFills  value)
    { getField(value); return value; }
    public QuickFix.TotNoFills getTotNoFills()
    { QuickFix.TotNoFills value = new QuickFix.TotNoFills();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoFills field)
    { return isSetField(field); }
    public bool isSetTotNoFills()
    { return isSetField(1361); }

    public void set(QuickFix.LastFragment value)
    { setField(value); }
    public QuickFix.LastFragment get(QuickFix.LastFragment  value)
    { getField(value); return value; }
    public QuickFix.LastFragment getLastFragment()
    { QuickFix.LastFragment value = new QuickFix.LastFragment();
      getField(value); return value; }
    public bool isSet(QuickFix.LastFragment field)
    { return isSetField(field); }
    public bool isSetLastFragment()
    { return isSetField(893); }

    public void set(QuickFix.NoFills value)
    { setField(value); }
    public QuickFix.NoFills get(QuickFix.NoFills  value)
    { getField(value); return value; }
    public QuickFix.NoFills getNoFills()
    { QuickFix.NoFills value = new QuickFix.NoFills();
      getField(value); return value; }
    public bool isSet(QuickFix.NoFills field)
    { return isSetField(field); }
    public bool isSetNoFills()
    { return isSetField(1362); }

    public class NoFills: QuickFix.Group
    {
    public NoFills() : base(1362,1363,message_order ) {}
    static int[] message_order = new int[] {1363,1364,1365,1414,1443,0};
      public void set(QuickFix.FillExecID value)
      { setField(value); }
      public QuickFix.FillExecID get(QuickFix.FillExecID  value)
      { getField(value); return value; }
      public QuickFix.FillExecID getFillExecID()
      { QuickFix.FillExecID value = new QuickFix.FillExecID();
        getField(value); return value; }
      public bool isSet(QuickFix.FillExecID field)
      { return isSetField(field); }
      public bool isSetFillExecID()
      { return isSetField(1363); }

      public void set(QuickFix.FillPx value)
      { setField(value); }
      public QuickFix.FillPx get(QuickFix.FillPx  value)
      { getField(value); return value; }
      public QuickFix.FillPx getFillPx()
      { QuickFix.FillPx value = new QuickFix.FillPx();
        getField(value); return value; }
      public bool isSet(QuickFix.FillPx field)
      { return isSetField(field); }
      public bool isSetFillPx()
      { return isSetField(1364); }

      public void set(QuickFix.FillQty value)
      { setField(value); }
      public QuickFix.FillQty get(QuickFix.FillQty  value)
      { getField(value); return value; }
      public QuickFix.FillQty getFillQty()
      { QuickFix.FillQty value = new QuickFix.FillQty();
        getField(value); return value; }
      public bool isSet(QuickFix.FillQty field)
      { return isSetField(field); }
      public bool isSetFillQty()
      { return isSetField(1365); }

      public void set(QuickFix.NoNested4PartyIDs value)
      { setField(value); }
      public QuickFix.NoNested4PartyIDs get(QuickFix.NoNested4PartyIDs  value)
      { getField(value); return value; }
      public QuickFix.NoNested4PartyIDs getNoNested4PartyIDs()
      { QuickFix.NoNested4PartyIDs value = new QuickFix.NoNested4PartyIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoNested4PartyIDs field)
      { return isSetField(field); }
      public bool isSetNoNested4PartyIDs()
      { return isSetField(1414); }

      public class NoNested4PartyIDs: QuickFix.Group
      {
      public NoNested4PartyIDs() : base(1414,1415,message_order ) {}
      static int[] message_order = new int[] {1415,1416,1417,1413,0};
        public void set(QuickFix.Nested4PartyID value)
        { setField(value); }
        public QuickFix.Nested4PartyID get(QuickFix.Nested4PartyID  value)
        { getField(value); return value; }
        public QuickFix.Nested4PartyID getNested4PartyID()
        { QuickFix.Nested4PartyID value = new QuickFix.Nested4PartyID();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested4PartyID field)
        { return isSetField(field); }
        public bool isSetNested4PartyID()
        { return isSetField(1415); }

        public void set(QuickFix.Nested4PartyIDSource value)
        { setField(value); }
        public QuickFix.Nested4PartyIDSource get(QuickFix.Nested4PartyIDSource  value)
        { getField(value); return value; }
        public QuickFix.Nested4PartyIDSource getNested4PartyIDSource()
        { QuickFix.Nested4PartyIDSource value = new QuickFix.Nested4PartyIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested4PartyIDSource field)
        { return isSetField(field); }
        public bool isSetNested4PartyIDSource()
        { return isSetField(1416); }

        public void set(QuickFix.Nested4PartyRole value)
        { setField(value); }
        public QuickFix.Nested4PartyRole get(QuickFix.Nested4PartyRole  value)
        { getField(value); return value; }
        public QuickFix.Nested4PartyRole getNested4PartyRole()
        { QuickFix.Nested4PartyRole value = new QuickFix.Nested4PartyRole();
          getField(value); return value; }
        public bool isSet(QuickFix.Nested4PartyRole field)
        { return isSetField(field); }
        public bool isSetNested4PartyRole()
        { return isSetField(1417); }

        public void set(QuickFix.NoNested4PartySubIDs value)
        { setField(value); }
        public QuickFix.NoNested4PartySubIDs get(QuickFix.NoNested4PartySubIDs  value)
        { getField(value); return value; }
        public QuickFix.NoNested4PartySubIDs getNoNested4PartySubIDs()
        { QuickFix.NoNested4PartySubIDs value = new QuickFix.NoNested4PartySubIDs();
          getField(value); return value; }
        public bool isSet(QuickFix.NoNested4PartySubIDs field)
        { return isSetField(field); }
        public bool isSetNoNested4PartySubIDs()
        { return isSetField(1413); }

        public class NoNested4PartySubIDs: QuickFix.Group
        {
        public NoNested4PartySubIDs() : base(1413,1412,message_order ) {}
        static int[] message_order = new int[] {1412,1411,0};
          public void set(QuickFix.Nested4PartySubID value)
          { setField(value); }
          public QuickFix.Nested4PartySubID get(QuickFix.Nested4PartySubID  value)
          { getField(value); return value; }
          public QuickFix.Nested4PartySubID getNested4PartySubID()
          { QuickFix.Nested4PartySubID value = new QuickFix.Nested4PartySubID();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested4PartySubID field)
          { return isSetField(field); }
          public bool isSetNested4PartySubID()
          { return isSetField(1412); }

          public void set(QuickFix.Nested4PartySubIDType value)
          { setField(value); }
          public QuickFix.Nested4PartySubIDType get(QuickFix.Nested4PartySubIDType  value)
          { getField(value); return value; }
          public QuickFix.Nested4PartySubIDType getNested4PartySubIDType()
          { QuickFix.Nested4PartySubIDType value = new QuickFix.Nested4PartySubIDType();
            getField(value); return value; }
          public bool isSet(QuickFix.Nested4PartySubIDType field)
          { return isSetField(field); }
          public bool isSetNested4PartySubIDType()
          { return isSetField(1411); }

        };
      };
      public void set(QuickFix.FillLiquidityInd value)
      { setField(value); }
      public QuickFix.FillLiquidityInd get(QuickFix.FillLiquidityInd  value)
      { getField(value); return value; }
      public QuickFix.FillLiquidityInd getFillLiquidityInd()
      { QuickFix.FillLiquidityInd value = new QuickFix.FillLiquidityInd();
        getField(value); return value; }
      public bool isSet(QuickFix.FillLiquidityInd field)
      { return isSetField(field); }
      public bool isSetFillLiquidityInd()
      { return isSetField(1443); }

    };
    public void set(QuickFix.DividendYield value)
    { setField(value); }
    public QuickFix.DividendYield get(QuickFix.DividendYield  value)
    { getField(value); return value; }
    public QuickFix.DividendYield getDividendYield()
    { QuickFix.DividendYield value = new QuickFix.DividendYield();
      getField(value); return value; }
    public bool isSet(QuickFix.DividendYield field)
    { return isSetField(field); }
    public bool isSetDividendYield()
    { return isSetField(1380); }

    public void set(QuickFix.ApplID value)
    { setField(value); }
    public QuickFix.ApplID get(QuickFix.ApplID  value)
    { getField(value); return value; }
    public QuickFix.ApplID getApplID()
    { QuickFix.ApplID value = new QuickFix.ApplID();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplID field)
    { return isSetField(field); }
    public bool isSetApplID()
    { return isSetField(1180); }

    public void set(QuickFix.ApplSeqNum value)
    { setField(value); }
    public QuickFix.ApplSeqNum get(QuickFix.ApplSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplSeqNum getApplSeqNum()
    { QuickFix.ApplSeqNum value = new QuickFix.ApplSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplSeqNum field)
    { return isSetField(field); }
    public bool isSetApplSeqNum()
    { return isSetField(1181); }

    public void set(QuickFix.ApplLastSeqNum value)
    { setField(value); }
    public QuickFix.ApplLastSeqNum get(QuickFix.ApplLastSeqNum  value)
    { getField(value); return value; }
    public QuickFix.ApplLastSeqNum getApplLastSeqNum()
    { QuickFix.ApplLastSeqNum value = new QuickFix.ApplLastSeqNum();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplLastSeqNum field)
    { return isSetField(field); }
    public bool isSetApplLastSeqNum()
    { return isSetField(1350); }

    public void set(QuickFix.ApplResendFlag value)
    { setField(value); }
    public QuickFix.ApplResendFlag get(QuickFix.ApplResendFlag  value)
    { getField(value); return value; }
    public QuickFix.ApplResendFlag getApplResendFlag()
    { QuickFix.ApplResendFlag value = new QuickFix.ApplResendFlag();
      getField(value); return value; }
    public bool isSet(QuickFix.ApplResendFlag field)
    { return isSetField(field); }
    public bool isSetApplResendFlag()
    { return isSetField(1352); }

    public void set(QuickFix.NoRateSources value)
    { setField(value); }
    public QuickFix.NoRateSources get(QuickFix.NoRateSources  value)
    { getField(value); return value; }
    public QuickFix.NoRateSources getNoRateSources()
    { QuickFix.NoRateSources value = new QuickFix.NoRateSources();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRateSources field)
    { return isSetField(field); }
    public bool isSetNoRateSources()
    { return isSetField(1445); }

    public class NoRateSources: QuickFix.Group
    {
    public NoRateSources() : base(1445,1446,message_order ) {}
    static int[] message_order = new int[] {1446,1447,1448,0};
      public void set(QuickFix.RateSource value)
      { setField(value); }
      public QuickFix.RateSource get(QuickFix.RateSource  value)
      { getField(value); return value; }
      public QuickFix.RateSource getRateSource()
      { QuickFix.RateSource value = new QuickFix.RateSource();
        getField(value); return value; }
      public bool isSet(QuickFix.RateSource field)
      { return isSetField(field); }
      public bool isSetRateSource()
      { return isSetField(1446); }

      public void set(QuickFix.RateSourceType value)
      { setField(value); }
      public QuickFix.RateSourceType get(QuickFix.RateSourceType  value)
      { getField(value); return value; }
      public QuickFix.RateSourceType getRateSourceType()
      { QuickFix.RateSourceType value = new QuickFix.RateSourceType();
        getField(value); return value; }
      public bool isSet(QuickFix.RateSourceType field)
      { return isSetField(field); }
      public bool isSetRateSourceType()
      { return isSetField(1447); }

      public void set(QuickFix.ReferencePage value)
      { setField(value); }
      public QuickFix.ReferencePage get(QuickFix.ReferencePage  value)
      { getField(value); return value; }
      public QuickFix.ReferencePage getReferencePage()
      { QuickFix.ReferencePage value = new QuickFix.ReferencePage();
        getField(value); return value; }
      public bool isSet(QuickFix.ReferencePage field)
      { return isSetField(field); }
      public bool isSetReferencePage()
      { return isSetField(1448); }

    };
  };

}

