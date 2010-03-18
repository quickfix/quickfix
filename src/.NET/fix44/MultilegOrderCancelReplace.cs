namespace QuickFix44
{

  public class MultilegOrderCancelReplace : Message
  {
    public MultilegOrderCancelReplace() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("AC"); }

    public MultilegOrderCancelReplace(
      QuickFix.OrigClOrdID aOrigClOrdID,
      QuickFix.ClOrdID aClOrdID,
      QuickFix.Side aSide,
      QuickFix.TransactTime aTransactTime,
      QuickFix.OrdType aOrdType )
    : base(MsgType()) {
      set(aOrigClOrdID);
      set(aClOrdID);
      set(aSide);
      set(aTransactTime);
      set(aOrdType);
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

    public void set(QuickFix.OrigOrdModTime value)
    { setField(value); }
    public QuickFix.OrigOrdModTime get(QuickFix.OrigOrdModTime  value)
    { getField(value); return value; }
    public QuickFix.OrigOrdModTime getOrigOrdModTime()
    { QuickFix.OrigOrdModTime value = new QuickFix.OrigOrdModTime();
      getField(value); return value; }
    public bool isSet(QuickFix.OrigOrdModTime field)
    { return isSetField(field); }
    public bool isSetOrigOrdModTime()
    { return isSetField(586); }

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

    public void set(QuickFix.ExDestination value)
    { setField(value); }
    public QuickFix.ExDestination get(QuickFix.ExDestination  value)
    { getField(value); return value; }
    public QuickFix.ExDestination getExDestination()
    { QuickFix.ExDestination value = new QuickFix.ExDestination();
      getField(value); return value; }
    public bool isSet(QuickFix.ExDestination field)
    { return isSetField(field); }
    public bool isSetExDestination()
    { return isSetField(100); }

    public void set(QuickFix.ProcessCode value)
    { setField(value); }
    public QuickFix.ProcessCode get(QuickFix.ProcessCode  value)
    { getField(value); return value; }
    public QuickFix.ProcessCode getProcessCode()
    { QuickFix.ProcessCode value = new QuickFix.ProcessCode();
      getField(value); return value; }
    public bool isSet(QuickFix.ProcessCode field)
    { return isSetField(field); }
    public bool isSetProcessCode()
    { return isSetField(81); }

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
    public void set(QuickFix.NoEvents value)
    { setField(value); }
    public QuickFix.NoEvents get(QuickFix.NoEvents  value)
    { getField(value); return value; }
    public QuickFix.NoEvents getNoEvents()
    { QuickFix.NoEvents value = new QuickFix.NoEvents();
      getField(value); return value; }
    public bool isSet(QuickFix.NoEvents field)
    { return isSetField(field); }
    public bool isSetNoEvents()
    { return isSetField(864); }

    public class NoEvents: QuickFix.Group
    {
    public NoEvents() : base(864,865,message_order ) {}
    static int[] message_order = new int[] {865,866,867,868,0};
      public void set(QuickFix.EventType value)
      { setField(value); }
      public QuickFix.EventType get(QuickFix.EventType  value)
      { getField(value); return value; }
      public QuickFix.EventType getEventType()
      { QuickFix.EventType value = new QuickFix.EventType();
        getField(value); return value; }
      public bool isSet(QuickFix.EventType field)
      { return isSetField(field); }
      public bool isSetEventType()
      { return isSetField(865); }

      public void set(QuickFix.EventDate value)
      { setField(value); }
      public QuickFix.EventDate get(QuickFix.EventDate  value)
      { getField(value); return value; }
      public QuickFix.EventDate getEventDate()
      { QuickFix.EventDate value = new QuickFix.EventDate();
        getField(value); return value; }
      public bool isSet(QuickFix.EventDate field)
      { return isSetField(field); }
      public bool isSetEventDate()
      { return isSetField(866); }

      public void set(QuickFix.EventPx value)
      { setField(value); }
      public QuickFix.EventPx get(QuickFix.EventPx  value)
      { getField(value); return value; }
      public QuickFix.EventPx getEventPx()
      { QuickFix.EventPx value = new QuickFix.EventPx();
        getField(value); return value; }
      public bool isSet(QuickFix.EventPx field)
      { return isSetField(field); }
      public bool isSetEventPx()
      { return isSetField(867); }

      public void set(QuickFix.EventText value)
      { setField(value); }
      public QuickFix.EventText get(QuickFix.EventText  value)
      { getField(value); return value; }
      public QuickFix.EventText getEventText()
      { QuickFix.EventText value = new QuickFix.EventText();
        getField(value); return value; }
      public bool isSet(QuickFix.EventText field)
      { return isSetField(field); }
      public bool isSetEventText()
      { return isSetField(868); }

    };
    public void set(QuickFix.PrevClosePx value)
    { setField(value); }
    public QuickFix.PrevClosePx get(QuickFix.PrevClosePx  value)
    { getField(value); return value; }
    public QuickFix.PrevClosePx getPrevClosePx()
    { QuickFix.PrevClosePx value = new QuickFix.PrevClosePx();
      getField(value); return value; }
    public bool isSet(QuickFix.PrevClosePx field)
    { return isSetField(field); }
    public bool isSetPrevClosePx()
    { return isSetField(140); }

    public void set(QuickFix.LocateReqd value)
    { setField(value); }
    public QuickFix.LocateReqd get(QuickFix.LocateReqd  value)
    { getField(value); return value; }
    public QuickFix.LocateReqd getLocateReqd()
    { QuickFix.LocateReqd value = new QuickFix.LocateReqd();
      getField(value); return value; }
    public bool isSet(QuickFix.LocateReqd field)
    { return isSetField(field); }
    public bool isSetLocateReqd()
    { return isSetField(114); }

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

    public void set(QuickFix.IOIID value)
    { setField(value); }
    public QuickFix.IOIID get(QuickFix.IOIID  value)
    { getField(value); return value; }
    public QuickFix.IOIID getIOIID()
    { QuickFix.IOIID value = new QuickFix.IOIID();
      getField(value); return value; }
    public bool isSet(QuickFix.IOIID field)
    { return isSetField(field); }
    public bool isSetIOIID()
    { return isSetField(23); }

    public void set(QuickFix.QuoteID value)
    { setField(value); }
    public QuickFix.QuoteID get(QuickFix.QuoteID  value)
    { getField(value); return value; }
    public QuickFix.QuoteID getQuoteID()
    { QuickFix.QuoteID value = new QuickFix.QuoteID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteID field)
    { return isSetField(field); }
    public bool isSetQuoteID()
    { return isSetField(117); }

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

    public void set(QuickFix.ForexReq value)
    { setField(value); }
    public QuickFix.ForexReq get(QuickFix.ForexReq  value)
    { getField(value); return value; }
    public QuickFix.ForexReq getForexReq()
    { QuickFix.ForexReq value = new QuickFix.ForexReq();
      getField(value); return value; }
    public bool isSet(QuickFix.ForexReq field)
    { return isSetField(field); }
    public bool isSetForexReq()
    { return isSetField(121); }

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

    public void set(QuickFix.CoveredOrUncovered value)
    { setField(value); }
    public QuickFix.CoveredOrUncovered get(QuickFix.CoveredOrUncovered  value)
    { getField(value); return value; }
    public QuickFix.CoveredOrUncovered getCoveredOrUncovered()
    { QuickFix.CoveredOrUncovered value = new QuickFix.CoveredOrUncovered();
      getField(value); return value; }
    public bool isSet(QuickFix.CoveredOrUncovered field)
    { return isSetField(field); }
    public bool isSetCoveredOrUncovered()
    { return isSetField(203); }

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

    public void set(QuickFix.MultiLegRptTypeReq value)
    { setField(value); }
    public QuickFix.MultiLegRptTypeReq get(QuickFix.MultiLegRptTypeReq  value)
    { getField(value); return value; }
    public QuickFix.MultiLegRptTypeReq getMultiLegRptTypeReq()
    { QuickFix.MultiLegRptTypeReq value = new QuickFix.MultiLegRptTypeReq();
      getField(value); return value; }
    public bool isSet(QuickFix.MultiLegRptTypeReq field)
    { return isSetField(field); }
    public bool isSetMultiLegRptTypeReq()
    { return isSetField(563); }

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
    static int[] message_order = new int[] {79,661,736,467,948,80,0};
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
    public void set(QuickFix.NoTradingSessions value)
    { setField(value); }
    public QuickFix.NoTradingSessions get(QuickFix.NoTradingSessions  value)
    { getField(value); return value; }
    public QuickFix.NoTradingSessions getNoTradingSessions()
    { QuickFix.NoTradingSessions value = new QuickFix.NoTradingSessions();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTradingSessions field)
    { return isSetField(field); }
    public bool isSetNoTradingSessions()
    { return isSetField(386); }

    public class NoTradingSessions: QuickFix.Group
    {
    public NoTradingSessions() : base(386,336,message_order ) {}
    static int[] message_order = new int[] {336,625,0};
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

    };
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
    static int[] message_order = new int[] {311,312,309,305,457,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,0};
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

      public void set(QuickFix.NoUnderlyingSecurityAltID value)
      { setField(value); }
      public QuickFix.NoUnderlyingSecurityAltID get(QuickFix.NoUnderlyingSecurityAltID  value)
      { getField(value); return value; }
      public QuickFix.NoUnderlyingSecurityAltID getNoUnderlyingSecurityAltID()
      { QuickFix.NoUnderlyingSecurityAltID value = new QuickFix.NoUnderlyingSecurityAltID();
        getField(value); return value; }
      public bool isSet(QuickFix.NoUnderlyingSecurityAltID field)
      { return isSetField(field); }
      public bool isSetNoUnderlyingSecurityAltID()
      { return isSetField(457); }

      public class NoUnderlyingSecurityAltID: QuickFix.Group
      {
      public NoUnderlyingSecurityAltID() : base(457,458,message_order ) {}
      static int[] message_order = new int[] {458,459,0};
        public void set(QuickFix.UnderlyingSecurityAltID value)
        { setField(value); }
        public QuickFix.UnderlyingSecurityAltID get(QuickFix.UnderlyingSecurityAltID  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingSecurityAltID getUnderlyingSecurityAltID()
        { QuickFix.UnderlyingSecurityAltID value = new QuickFix.UnderlyingSecurityAltID();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingSecurityAltID field)
        { return isSetField(field); }
        public bool isSetUnderlyingSecurityAltID()
        { return isSetField(458); }

        public void set(QuickFix.UnderlyingSecurityAltIDSource value)
        { setField(value); }
        public QuickFix.UnderlyingSecurityAltIDSource get(QuickFix.UnderlyingSecurityAltIDSource  value)
        { getField(value); return value; }
        public QuickFix.UnderlyingSecurityAltIDSource getUnderlyingSecurityAltIDSource()
        { QuickFix.UnderlyingSecurityAltIDSource value = new QuickFix.UnderlyingSecurityAltIDSource();
          getField(value); return value; }
        public bool isSet(QuickFix.UnderlyingSecurityAltIDSource field)
        { return isSetField(field); }
        public bool isSetUnderlyingSecurityAltIDSource()
        { return isSetField(459); }

      };
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
    static int[] message_order = new int[] {600,601,602,603,604,607,608,609,764,610,611,248,249,250,251,252,253,257,599,596,597,598,254,612,942,613,614,615,616,617,618,619,620,621,622,623,624,556,740,739,955,956,687,690,683,670,564,565,539,654,566,587,588,0};
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
      static int[] message_order = new int[] {671,672,756,673,674,675,0};
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

      };
    };
  };

}

