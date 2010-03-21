namespace QuickFix50Sp2
{

  public class AdjustedPositionReport : Message
  {
    public AdjustedPositionReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BL"); }

    public AdjustedPositionReport(
      QuickFix.PosMaintRptID aPosMaintRptID,
      QuickFix.ClearingBusinessDate aClearingBusinessDate )
    : base(MsgType()) {
      set(aPosMaintRptID);
      set(aClearingBusinessDate);
    }

    public void set(QuickFix.PosMaintRptID value)
    { setField(value); }
    public QuickFix.PosMaintRptID get(QuickFix.PosMaintRptID  value)
    { getField(value); return value; }
    public QuickFix.PosMaintRptID getPosMaintRptID()
    { QuickFix.PosMaintRptID value = new QuickFix.PosMaintRptID();
      getField(value); return value; }
    public bool isSet(QuickFix.PosMaintRptID field)
    { return isSetField(field); }
    public bool isSetPosMaintRptID()
    { return isSetField(721); }

    public void set(QuickFix.PosReqType value)
    { setField(value); }
    public QuickFix.PosReqType get(QuickFix.PosReqType  value)
    { getField(value); return value; }
    public QuickFix.PosReqType getPosReqType()
    { QuickFix.PosReqType value = new QuickFix.PosReqType();
      getField(value); return value; }
    public bool isSet(QuickFix.PosReqType field)
    { return isSetField(field); }
    public bool isSetPosReqType()
    { return isSetField(724); }

    public void set(QuickFix.ClearingBusinessDate value)
    { setField(value); }
    public QuickFix.ClearingBusinessDate get(QuickFix.ClearingBusinessDate  value)
    { getField(value); return value; }
    public QuickFix.ClearingBusinessDate getClearingBusinessDate()
    { QuickFix.ClearingBusinessDate value = new QuickFix.ClearingBusinessDate();
      getField(value); return value; }
    public bool isSet(QuickFix.ClearingBusinessDate field)
    { return isSetField(field); }
    public bool isSetClearingBusinessDate()
    { return isSetField(715); }

    public void set(QuickFix.SettlSessID value)
    { setField(value); }
    public QuickFix.SettlSessID get(QuickFix.SettlSessID  value)
    { getField(value); return value; }
    public QuickFix.SettlSessID getSettlSessID()
    { QuickFix.SettlSessID value = new QuickFix.SettlSessID();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlSessID field)
    { return isSetField(field); }
    public bool isSetSettlSessID()
    { return isSetField(716); }

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
    public void set(QuickFix.NoPositions value)
    { setField(value); }
    public QuickFix.NoPositions get(QuickFix.NoPositions  value)
    { getField(value); return value; }
    public QuickFix.NoPositions getNoPositions()
    { QuickFix.NoPositions value = new QuickFix.NoPositions();
      getField(value); return value; }
    public bool isSet(QuickFix.NoPositions field)
    { return isSetField(field); }
    public bool isSetNoPositions()
    { return isSetField(702); }

    public class NoPositions: QuickFix.Group
    {
    public NoPositions() : base(702,703,message_order ) {}
    static int[] message_order = new int[] {703,704,705,706,539,976,0};
      public void set(QuickFix.PosType value)
      { setField(value); }
      public QuickFix.PosType get(QuickFix.PosType  value)
      { getField(value); return value; }
      public QuickFix.PosType getPosType()
      { QuickFix.PosType value = new QuickFix.PosType();
        getField(value); return value; }
      public bool isSet(QuickFix.PosType field)
      { return isSetField(field); }
      public bool isSetPosType()
      { return isSetField(703); }

      public void set(QuickFix.LongQty value)
      { setField(value); }
      public QuickFix.LongQty get(QuickFix.LongQty  value)
      { getField(value); return value; }
      public QuickFix.LongQty getLongQty()
      { QuickFix.LongQty value = new QuickFix.LongQty();
        getField(value); return value; }
      public bool isSet(QuickFix.LongQty field)
      { return isSetField(field); }
      public bool isSetLongQty()
      { return isSetField(704); }

      public void set(QuickFix.ShortQty value)
      { setField(value); }
      public QuickFix.ShortQty get(QuickFix.ShortQty  value)
      { getField(value); return value; }
      public QuickFix.ShortQty getShortQty()
      { QuickFix.ShortQty value = new QuickFix.ShortQty();
        getField(value); return value; }
      public bool isSet(QuickFix.ShortQty field)
      { return isSetField(field); }
      public bool isSetShortQty()
      { return isSetField(705); }

      public void set(QuickFix.PosQtyStatus value)
      { setField(value); }
      public QuickFix.PosQtyStatus get(QuickFix.PosQtyStatus  value)
      { getField(value); return value; }
      public QuickFix.PosQtyStatus getPosQtyStatus()
      { QuickFix.PosQtyStatus value = new QuickFix.PosQtyStatus();
        getField(value); return value; }
      public bool isSet(QuickFix.PosQtyStatus field)
      { return isSetField(field); }
      public bool isSetPosQtyStatus()
      { return isSetField(706); }

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
      public void set(QuickFix.QuantityDate value)
      { setField(value); }
      public QuickFix.QuantityDate get(QuickFix.QuantityDate  value)
      { getField(value); return value; }
      public QuickFix.QuantityDate getQuantityDate()
      { QuickFix.QuantityDate value = new QuickFix.QuantityDate();
        getField(value); return value; }
      public bool isSet(QuickFix.QuantityDate field)
      { return isSetField(field); }
      public bool isSetQuantityDate()
      { return isSetField(976); }

    };
    public void set(QuickFix.NoRelatedSym value)
    { setField(value); }
    public QuickFix.NoRelatedSym get(QuickFix.NoRelatedSym  value)
    { getField(value); return value; }
    public QuickFix.NoRelatedSym getNoRelatedSym()
    { QuickFix.NoRelatedSym value = new QuickFix.NoRelatedSym();
      getField(value); return value; }
    public bool isSet(QuickFix.NoRelatedSym field)
    { return isSetField(field); }
    public bool isSetNoRelatedSym()
    { return isSetField(146); }

    public class NoRelatedSym: QuickFix.Group
    {
    public NoRelatedSym() : base(146,55,message_order ) {}
    static int[] message_order = new int[] {55,65,48,22,460,461,167,762,200,541,224,225,239,226,227,228,255,543,470,471,472,240,202,947,206,231,223,207,106,348,349,107,350,351,691,667,875,876,873,874,965,966,1049,967,968,969,970,971,996,997,1079,1151,1146,1147,1227,1191,1192,1193,1194,1195,1196,1198,1199,1200,201,1244,1242,1197,1435,1439,1449,1450,1451,1452,1457,1458,1478,1479,1480,1481,1482,0};
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

    };
    public void set(QuickFix.SettlPrice value)
    { setField(value); }
    public QuickFix.SettlPrice get(QuickFix.SettlPrice  value)
    { getField(value); return value; }
    public QuickFix.SettlPrice getSettlPrice()
    { QuickFix.SettlPrice value = new QuickFix.SettlPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.SettlPrice field)
    { return isSetField(field); }
    public bool isSetSettlPrice()
    { return isSetField(730); }

    public void set(QuickFix.PriorSettlPrice value)
    { setField(value); }
    public QuickFix.PriorSettlPrice get(QuickFix.PriorSettlPrice  value)
    { getField(value); return value; }
    public QuickFix.PriorSettlPrice getPriorSettlPrice()
    { QuickFix.PriorSettlPrice value = new QuickFix.PriorSettlPrice();
      getField(value); return value; }
    public bool isSet(QuickFix.PriorSettlPrice field)
    { return isSetField(field); }
    public bool isSetPriorSettlPrice()
    { return isSetField(734); }

    public void set(QuickFix.PosMaintRptRefID value)
    { setField(value); }
    public QuickFix.PosMaintRptRefID get(QuickFix.PosMaintRptRefID  value)
    { getField(value); return value; }
    public QuickFix.PosMaintRptRefID getPosMaintRptRefID()
    { QuickFix.PosMaintRptRefID value = new QuickFix.PosMaintRptRefID();
      getField(value); return value; }
    public bool isSet(QuickFix.PosMaintRptRefID field)
    { return isSetField(field); }
    public bool isSetPosMaintRptRefID()
    { return isSetField(714); }

  };

}

