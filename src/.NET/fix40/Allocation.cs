namespace QuickFix40
{

  public class Allocation : Message
  {
    public Allocation() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("J"); }

    public Allocation(
      QuickFix.AllocID aAllocID,
      QuickFix.AllocTransType aAllocTransType,
      QuickFix.Side aSide,
      QuickFix.Symbol aSymbol,
      QuickFix.Shares aShares,
      QuickFix.AvgPx aAvgPx,
      QuickFix.TradeDate aTradeDate )
    : base(MsgType()) {
      set(aAllocID);
      set(aAllocTransType);
      set(aSide);
      set(aSymbol);
      set(aShares);
      set(aAvgPx);
      set(aTradeDate);
    }

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

    public void set(QuickFix.AllocTransType value)
    { setField(value); }
    public QuickFix.AllocTransType get(QuickFix.AllocTransType  value)
    { getField(value); return value; }
    public QuickFix.AllocTransType getAllocTransType()
    { QuickFix.AllocTransType value = new QuickFix.AllocTransType();
      getField(value); return value; }
    public bool isSet(QuickFix.AllocTransType field)
    { return isSetField(field); }
    public bool isSetAllocTransType()
    { return isSetField(71); }

    public void set(QuickFix.RefAllocID value)
    { setField(value); }
    public QuickFix.RefAllocID get(QuickFix.RefAllocID  value)
    { getField(value); return value; }
    public QuickFix.RefAllocID getRefAllocID()
    { QuickFix.RefAllocID value = new QuickFix.RefAllocID();
      getField(value); return value; }
    public bool isSet(QuickFix.RefAllocID field)
    { return isSetField(field); }
    public bool isSetRefAllocID()
    { return isSetField(72); }

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

    public void set(QuickFix.Shares value)
    { setField(value); }
    public QuickFix.Shares get(QuickFix.Shares  value)
    { getField(value); return value; }
    public QuickFix.Shares getShares()
    { QuickFix.Shares value = new QuickFix.Shares();
      getField(value); return value; }
    public bool isSet(QuickFix.Shares field)
    { return isSetField(field); }
    public bool isSetShares()
    { return isSetField(53); }

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

    public void set(QuickFix.AvgPrxPrecision value)
    { setField(value); }
    public QuickFix.AvgPrxPrecision get(QuickFix.AvgPrxPrecision  value)
    { getField(value); return value; }
    public QuickFix.AvgPrxPrecision getAvgPrxPrecision()
    { QuickFix.AvgPrxPrecision value = new QuickFix.AvgPrxPrecision();
      getField(value); return value; }
    public bool isSet(QuickFix.AvgPrxPrecision field)
    { return isSetField(field); }
    public bool isSetAvgPrxPrecision()
    { return isSetField(74); }

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
    static int[] message_order = new int[] {11,37,66,105,0};
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

      public void set(QuickFix.WaveNo value)
      { setField(value); }
      public QuickFix.WaveNo get(QuickFix.WaveNo  value)
      { getField(value); return value; }
      public QuickFix.WaveNo getWaveNo()
      { QuickFix.WaveNo value = new QuickFix.WaveNo();
        getField(value); return value; }
      public bool isSet(QuickFix.WaveNo field)
      { return isSetField(field); }
      public bool isSetWaveNo()
      { return isSetField(105); }

    };
    public void set(QuickFix.NoExecs value)
    { setField(value); }
    public QuickFix.NoExecs get(QuickFix.NoExecs  value)
    { getField(value); return value; }
    public QuickFix.NoExecs getNoExecs()
    { QuickFix.NoExecs value = new QuickFix.NoExecs();
      getField(value); return value; }
    public bool isSet(QuickFix.NoExecs field)
    { return isSetField(field); }
    public bool isSetNoExecs()
    { return isSetField(124); }

    public class NoExecs: QuickFix.Group
    {
    public NoExecs() : base(124,17,message_order ) {}
    static int[] message_order = new int[] {17,32,31,30,0};
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

    };
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
    static int[] message_order = new int[] {137,138,139,0};
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

    };
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
    static int[] message_order = new int[] {79,80,81,76,109,12,13,85,92,86,0};
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

      public void set(QuickFix.AllocShares value)
      { setField(value); }
      public QuickFix.AllocShares get(QuickFix.AllocShares  value)
      { getField(value); return value; }
      public QuickFix.AllocShares getAllocShares()
      { QuickFix.AllocShares value = new QuickFix.AllocShares();
        getField(value); return value; }
      public bool isSet(QuickFix.AllocShares field)
      { return isSetField(field); }
      public bool isSetAllocShares()
      { return isSetField(80); }

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

      public void set(QuickFix.NoDlvyInst value)
      { setField(value); }
      public QuickFix.NoDlvyInst get(QuickFix.NoDlvyInst  value)
      { getField(value); return value; }
      public QuickFix.NoDlvyInst getNoDlvyInst()
      { QuickFix.NoDlvyInst value = new QuickFix.NoDlvyInst();
        getField(value); return value; }
      public bool isSet(QuickFix.NoDlvyInst field)
      { return isSetField(field); }
      public bool isSetNoDlvyInst()
      { return isSetField(85); }

      public void set(QuickFix.BrokerOfCredit value)
      { setField(value); }
      public QuickFix.BrokerOfCredit get(QuickFix.BrokerOfCredit  value)
      { getField(value); return value; }
      public QuickFix.BrokerOfCredit getBrokerOfCredit()
      { QuickFix.BrokerOfCredit value = new QuickFix.BrokerOfCredit();
        getField(value); return value; }
      public bool isSet(QuickFix.BrokerOfCredit field)
      { return isSetField(field); }
      public bool isSetBrokerOfCredit()
      { return isSetField(92); }

      public void set(QuickFix.DlvyInst value)
      { setField(value); }
      public QuickFix.DlvyInst get(QuickFix.DlvyInst  value)
      { getField(value); return value; }
      public QuickFix.DlvyInst getDlvyInst()
      { QuickFix.DlvyInst value = new QuickFix.DlvyInst();
        getField(value); return value; }
      public bool isSet(QuickFix.DlvyInst field)
      { return isSetField(field); }
      public bool isSetDlvyInst()
      { return isSetField(86); }

    };
  };

}

