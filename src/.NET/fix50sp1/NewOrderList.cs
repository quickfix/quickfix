namespace QuickFix50Sp1
{

  public class NewOrderList : Message
  {
    public NewOrderList() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("E"); }

    public NewOrderList(
      QuickFix.ListID aListID,
      QuickFix.BidType aBidType,
      QuickFix.TotNoOrders aTotNoOrders )
    : base(MsgType()) {
      set(aListID);
      set(aBidType);
      set(aTotNoOrders);
    }

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

    public void set(QuickFix.BidID value)
    { setField(value); }
    public QuickFix.BidID get(QuickFix.BidID  value)
    { getField(value); return value; }
    public QuickFix.BidID getBidID()
    { QuickFix.BidID value = new QuickFix.BidID();
      getField(value); return value; }
    public bool isSet(QuickFix.BidID field)
    { return isSetField(field); }
    public bool isSetBidID()
    { return isSetField(390); }

    public void set(QuickFix.ClientBidID value)
    { setField(value); }
    public QuickFix.ClientBidID get(QuickFix.ClientBidID  value)
    { getField(value); return value; }
    public QuickFix.ClientBidID getClientBidID()
    { QuickFix.ClientBidID value = new QuickFix.ClientBidID();
      getField(value); return value; }
    public bool isSet(QuickFix.ClientBidID field)
    { return isSetField(field); }
    public bool isSetClientBidID()
    { return isSetField(391); }

    public void set(QuickFix.ProgRptReqs value)
    { setField(value); }
    public QuickFix.ProgRptReqs get(QuickFix.ProgRptReqs  value)
    { getField(value); return value; }
    public QuickFix.ProgRptReqs getProgRptReqs()
    { QuickFix.ProgRptReqs value = new QuickFix.ProgRptReqs();
      getField(value); return value; }
    public bool isSet(QuickFix.ProgRptReqs field)
    { return isSetField(field); }
    public bool isSetProgRptReqs()
    { return isSetField(414); }

    public void set(QuickFix.BidType value)
    { setField(value); }
    public QuickFix.BidType get(QuickFix.BidType  value)
    { getField(value); return value; }
    public QuickFix.BidType getBidType()
    { QuickFix.BidType value = new QuickFix.BidType();
      getField(value); return value; }
    public bool isSet(QuickFix.BidType field)
    { return isSetField(field); }
    public bool isSetBidType()
    { return isSetField(394); }

    public void set(QuickFix.ProgPeriodInterval value)
    { setField(value); }
    public QuickFix.ProgPeriodInterval get(QuickFix.ProgPeriodInterval  value)
    { getField(value); return value; }
    public QuickFix.ProgPeriodInterval getProgPeriodInterval()
    { QuickFix.ProgPeriodInterval value = new QuickFix.ProgPeriodInterval();
      getField(value); return value; }
    public bool isSet(QuickFix.ProgPeriodInterval field)
    { return isSetField(field); }
    public bool isSetProgPeriodInterval()
    { return isSetField(415); }

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

    public void set(QuickFix.ListExecInstType value)
    { setField(value); }
    public QuickFix.ListExecInstType get(QuickFix.ListExecInstType  value)
    { getField(value); return value; }
    public QuickFix.ListExecInstType getListExecInstType()
    { QuickFix.ListExecInstType value = new QuickFix.ListExecInstType();
      getField(value); return value; }
    public bool isSet(QuickFix.ListExecInstType field)
    { return isSetField(field); }
    public bool isSetListExecInstType()
    { return isSetField(433); }

    public void set(QuickFix.ListExecInst value)
    { setField(value); }
    public QuickFix.ListExecInst get(QuickFix.ListExecInst  value)
    { getField(value); return value; }
    public QuickFix.ListExecInst getListExecInst()
    { QuickFix.ListExecInst value = new QuickFix.ListExecInst();
      getField(value); return value; }
    public bool isSet(QuickFix.ListExecInst field)
    { return isSetField(field); }
    public bool isSetListExecInst()
    { return isSetField(69); }

    public void set(QuickFix.EncodedListExecInstLen value)
    { setField(value); }
    public QuickFix.EncodedListExecInstLen get(QuickFix.EncodedListExecInstLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedListExecInstLen getEncodedListExecInstLen()
    { QuickFix.EncodedListExecInstLen value = new QuickFix.EncodedListExecInstLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedListExecInstLen field)
    { return isSetField(field); }
    public bool isSetEncodedListExecInstLen()
    { return isSetField(352); }

    public void set(QuickFix.EncodedListExecInst value)
    { setField(value); }
    public QuickFix.EncodedListExecInst get(QuickFix.EncodedListExecInst  value)
    { getField(value); return value; }
    public QuickFix.EncodedListExecInst getEncodedListExecInst()
    { QuickFix.EncodedListExecInst value = new QuickFix.EncodedListExecInst();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedListExecInst field)
    { return isSetField(field); }
    public bool isSetEncodedListExecInst()
    { return isSetField(353); }

    public void set(QuickFix.AllowableOneSidednessPct value)
    { setField(value); }
    public QuickFix.AllowableOneSidednessPct get(QuickFix.AllowableOneSidednessPct  value)
    { getField(value); return value; }
    public QuickFix.AllowableOneSidednessPct getAllowableOneSidednessPct()
    { QuickFix.AllowableOneSidednessPct value = new QuickFix.AllowableOneSidednessPct();
      getField(value); return value; }
    public bool isSet(QuickFix.AllowableOneSidednessPct field)
    { return isSetField(field); }
    public bool isSetAllowableOneSidednessPct()
    { return isSetField(765); }

    public void set(QuickFix.AllowableOneSidednessValue value)
    { setField(value); }
    public QuickFix.AllowableOneSidednessValue get(QuickFix.AllowableOneSidednessValue  value)
    { getField(value); return value; }
    public QuickFix.AllowableOneSidednessValue getAllowableOneSidednessValue()
    { QuickFix.AllowableOneSidednessValue value = new QuickFix.AllowableOneSidednessValue();
      getField(value); return value; }
    public bool isSet(QuickFix.AllowableOneSidednessValue field)
    { return isSetField(field); }
    public bool isSetAllowableOneSidednessValue()
    { return isSetField(766); }

    public void set(QuickFix.AllowableOneSidednessCurr value)
    { setField(value); }
    public QuickFix.AllowableOneSidednessCurr get(QuickFix.AllowableOneSidednessCurr  value)
    { getField(value); return value; }
    public QuickFix.AllowableOneSidednessCurr getAllowableOneSidednessCurr()
    { QuickFix.AllowableOneSidednessCurr value = new QuickFix.AllowableOneSidednessCurr();
      getField(value); return value; }
    public bool isSet(QuickFix.AllowableOneSidednessCurr field)
    { return isSetField(field); }
    public bool isSetAllowableOneSidednessCurr()
    { return isSetField(767); }

    public void set(QuickFix.TotNoOrders value)
    { setField(value); }
    public QuickFix.TotNoOrders get(QuickFix.TotNoOrders  value)
    { getField(value); return value; }
    public QuickFix.TotNoOrders getTotNoOrders()
    { QuickFix.TotNoOrders value = new QuickFix.TotNoOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.TotNoOrders field)
    { return isSetField(field); }
    public bool isSetTotNoOrders()
    { return isSetField(68); }

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

    public void set(QuickFix.NoOrders value)
    { setField(value); }
    public QuickFix.NoOrders get(QuickFix.NoOrders  value)
    { getField(value); return value; }
    public QuickFix.NoOrders getNoOrders()
    { QuickFix.NoOrders value = new QuickFix.NoOrders();
      getField(value); return value; }
    public bool isSet(QuickFix.NoOrders field)
    { return isSetField(field); }
    public bool isSetNoOrders()
    { return isSetField(73); }

    public class NoOrders: QuickFix.Group
    {
    public NoOrders() : base(73,11,message_order ) {}
    static int[] message_order = new int[] {11,526,67,583,160,453,229,75,1,660,581,589,590,70,591,78,63,64,544,635,21,18,110,111,100,386,81,55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,965,966,1049,967,968,969,970,971,996,997,1079,1151,1146,1147,1227,1191,1192,1193,1194,1195,1196,1198,1199,1200,201,1244,1242,1197,711,140,54,401,114,60,232,854,38,152,516,468,469,40,423,44,99,218,220,221,222,662,663,699,761,235,236,701,696,697,698,15,376,377,23,117,59,168,432,126,427,12,13,479,497,528,529,582,121,120,775,58,354,355,193,192,640,77,203,210,211,835,836,837,838,840,1094,1096,1097,1098,1099,388,389,841,842,843,844,846,847,848,849,494,957,1089,1090,1082,1083,1084,1085,1086,1087,1088,1138,1092,1100,1101,1102,1103,1104,1105,1106,1107,1108,1109,1110,1111,1112,1113,1114,1080,1081,1091,1133,0};
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

      public void set(QuickFix.ListSeqNo value)
      { setField(value); }
      public QuickFix.ListSeqNo get(QuickFix.ListSeqNo  value)
      { getField(value); return value; }
      public QuickFix.ListSeqNo getListSeqNo()
      { QuickFix.ListSeqNo value = new QuickFix.ListSeqNo();
        getField(value); return value; }
      public bool isSet(QuickFix.ListSeqNo field)
      { return isSetField(field); }
      public bool isSetListSeqNo()
      { return isSetField(67); }

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

      public void set(QuickFix.OptPayAmount value)
      { setField(value); }
      public QuickFix.OptPayAmount get(QuickFix.OptPayAmount  value)
      { getField(value); return value; }
      public QuickFix.OptPayAmount getOptPayAmount()
      { QuickFix.OptPayAmount value = new QuickFix.OptPayAmount();
        getField(value); return value; }
      public bool isSet(QuickFix.OptPayAmount field)
      { return isSetField(field); }
      public bool isSetOptPayAmount()
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

      public void set(QuickFix.FuturesValuationMethod value)
      { setField(value); }
      public QuickFix.FuturesValuationMethod get(QuickFix.FuturesValuationMethod  value)
      { getField(value); return value; }
      public QuickFix.FuturesValuationMethod getFuturesValuationMethod()
      { QuickFix.FuturesValuationMethod value = new QuickFix.FuturesValuationMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.FuturesValuationMethod field)
      { return isSetField(field); }
      public bool isSetFuturesValuationMethod()
      { return isSetField(1197); }

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
      static int[] message_order = new int[] {311,312,309,305,462,463,310,763,313,542,241,242,243,244,245,246,256,595,592,593,594,247,316,941,317,436,435,308,306,362,363,307,364,365,877,878,318,879,810,882,883,884,885,886,972,975,973,974,998,1000,1038,1039,1044,1045,1046,1213,315,1419,1423,1424,1425,0};
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

      public void set(QuickFix.SideValueInd value)
      { setField(value); }
      public QuickFix.SideValueInd get(QuickFix.SideValueInd  value)
      { getField(value); return value; }
      public QuickFix.SideValueInd getSideValueInd()
      { QuickFix.SideValueInd value = new QuickFix.SideValueInd();
        getField(value); return value; }
      public bool isSet(QuickFix.SideValueInd field)
      { return isSetField(field); }
      public bool isSetSideValueInd()
      { return isSetField(401); }

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

      public void set(QuickFix.Price2 value)
      { setField(value); }
      public QuickFix.Price2 get(QuickFix.Price2  value)
      { getField(value); return value; }
      public QuickFix.Price2 getPrice2()
      { QuickFix.Price2 value = new QuickFix.Price2();
        getField(value); return value; }
      public bool isSet(QuickFix.Price2 field)
      { return isSetField(field); }
      public bool isSetPrice2()
      { return isSetField(640); }

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

      public void set(QuickFix.RefOrderID value)
      { setField(value); }
      public QuickFix.RefOrderID get(QuickFix.RefOrderID  value)
      { getField(value); return value; }
      public QuickFix.RefOrderID getRefOrderID()
      { QuickFix.RefOrderID value = new QuickFix.RefOrderID();
        getField(value); return value; }
      public bool isSet(QuickFix.RefOrderID field)
      { return isSetField(field); }
      public bool isSetRefOrderID()
      { return isSetField(1080); }

      public void set(QuickFix.RefOrderIDSource value)
      { setField(value); }
      public QuickFix.RefOrderIDSource get(QuickFix.RefOrderIDSource  value)
      { getField(value); return value; }
      public QuickFix.RefOrderIDSource getRefOrderIDSource()
      { QuickFix.RefOrderIDSource value = new QuickFix.RefOrderIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.RefOrderIDSource field)
      { return isSetField(field); }
      public bool isSetRefOrderIDSource()
      { return isSetField(1081); }

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

      public void set(QuickFix.ExDestinationIDSource value)
      { setField(value); }
      public QuickFix.ExDestinationIDSource get(QuickFix.ExDestinationIDSource  value)
      { getField(value); return value; }
      public QuickFix.ExDestinationIDSource getExDestinationIDSource()
      { QuickFix.ExDestinationIDSource value = new QuickFix.ExDestinationIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.ExDestinationIDSource field)
      { return isSetField(field); }
      public bool isSetExDestinationIDSource()
      { return isSetField(1133); }

    };
    public void set(QuickFix.NoRootPartyIDs value)
    { setField(value); }
    public QuickFix.NoRootPartyIDs get(QuickFix.NoRootPartyIDs  value)
    { getField(value); return value; }
    public QuickFix.NoRootPartyIDs getNoRootPartyIDs()
    { QuickFix.NoRootPartyIDs value = new QuickFix.NoRootPartyIDs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRootPartyIDs field)
    { return isSetField(field); }
    public bool isSetNoRootPartyIDs()
    { return isSetField(1116); }

    public class NoRootPartyIDs: QuickFix.Group
    {
    public NoRootPartyIDs() : base(1116,1117,message_order ) {}
    static int[] message_order = new int[] {1117,1118,1119,1120,0};
      public void set(QuickFix.RootPartyID value)
      { setField(value); }
      public QuickFix.RootPartyID get(QuickFix.RootPartyID  value)
      { getField(value); return value; }
      public QuickFix.RootPartyID getRootPartyID()
      { QuickFix.RootPartyID value = new QuickFix.RootPartyID();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyID field)
      { return isSetField(field); }
      public bool isSetRootPartyID()
      { return isSetField(1117); }

      public void set(QuickFix.RootPartyIDSource value)
      { setField(value); }
      public QuickFix.RootPartyIDSource get(QuickFix.RootPartyIDSource  value)
      { getField(value); return value; }
      public QuickFix.RootPartyIDSource getRootPartyIDSource()
      { QuickFix.RootPartyIDSource value = new QuickFix.RootPartyIDSource();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyIDSource field)
      { return isSetField(field); }
      public bool isSetRootPartyIDSource()
      { return isSetField(1118); }

      public void set(QuickFix.RootPartyRole value)
      { setField(value); }
      public QuickFix.RootPartyRole get(QuickFix.RootPartyRole  value)
      { getField(value); return value; }
      public QuickFix.RootPartyRole getRootPartyRole()
      { QuickFix.RootPartyRole value = new QuickFix.RootPartyRole();
        getField(value); return value; }
      public bool isSet(QuickFix.RootPartyRole field)
      { return isSetField(field); }
      public bool isSetRootPartyRole()
      { return isSetField(1119); }

      public void set(QuickFix.NoRootPartySubIDs value)
      { setField(value); }
      public QuickFix.NoRootPartySubIDs get(QuickFix.NoRootPartySubIDs  value)
      { getField(value); return value; }
      public QuickFix.NoRootPartySubIDs getNoRootPartySubIDs()
      { QuickFix.NoRootPartySubIDs value = new QuickFix.NoRootPartySubIDs();
        getField(value); return value; }
      public bool isSet(QuickFix.NoRootPartySubIDs field)
      { return isSetField(field); }
      public bool isSetNoRootPartySubIDs()
      { return isSetField(1120); }

      public class NoRootPartySubIDs: QuickFix.Group
      {
      public NoRootPartySubIDs() : base(1120,1121,message_order ) {}
      static int[] message_order = new int[] {1121,1122,0};
        public void set(QuickFix.RootPartySubID value)
        { setField(value); }
        public QuickFix.RootPartySubID get(QuickFix.RootPartySubID  value)
        { getField(value); return value; }
        public QuickFix.RootPartySubID getRootPartySubID()
        { QuickFix.RootPartySubID value = new QuickFix.RootPartySubID();
          getField(value); return value; }
        public bool isSet(QuickFix.RootPartySubID field)
        { return isSetField(field); }
        public bool isSetRootPartySubID()
        { return isSetField(1121); }

        public void set(QuickFix.RootPartySubIDType value)
        { setField(value); }
        public QuickFix.RootPartySubIDType get(QuickFix.RootPartySubIDType  value)
        { getField(value); return value; }
        public QuickFix.RootPartySubIDType getRootPartySubIDType()
        { QuickFix.RootPartySubIDType value = new QuickFix.RootPartySubIDType();
          getField(value); return value; }
        public bool isSet(QuickFix.RootPartySubIDType field)
        { return isSetField(field); }
        public bool isSetRootPartySubIDType()
        { return isSetField(1122); }

      };
    };
    public void set(QuickFix.ContingencyType value)
    { setField(value); }
    public QuickFix.ContingencyType get(QuickFix.ContingencyType  value)
    { getField(value); return value; }
    public QuickFix.ContingencyType getContingencyType()
    { QuickFix.ContingencyType value = new QuickFix.ContingencyType();
      getField(value); return value; }
    public bool isSet(QuickFix.ContingencyType field)
    { return isSetField(field); }
    public bool isSetContingencyType()
    { return isSetField(1385); }

  };

}

