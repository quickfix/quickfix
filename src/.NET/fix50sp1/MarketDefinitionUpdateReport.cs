namespace QuickFix50Sp1
{

  public class MarketDefinitionUpdateReport : Message
  {
    public MarketDefinitionUpdateReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BV"); }

    public MarketDefinitionUpdateReport(
      QuickFix.MarketReportID aMarketReportID,
      QuickFix.MarketID aMarketID )
    : base(MsgType()) {
      set(aMarketReportID);
      set(aMarketID);
    }

    public void set(QuickFix.MarketReportID value)
    { setField(value); }
    public QuickFix.MarketReportID get(QuickFix.MarketReportID  value)
    { getField(value); return value; }
    public QuickFix.MarketReportID getMarketReportID()
    { QuickFix.MarketReportID value = new QuickFix.MarketReportID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketReportID field)
    { return isSetField(field); }
    public bool isSetMarketReportID()
    { return isSetField(1394); }

    public void set(QuickFix.MarketReqID value)
    { setField(value); }
    public QuickFix.MarketReqID get(QuickFix.MarketReqID  value)
    { getField(value); return value; }
    public QuickFix.MarketReqID getMarketReqID()
    { QuickFix.MarketReqID value = new QuickFix.MarketReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketReqID field)
    { return isSetField(field); }
    public bool isSetMarketReqID()
    { return isSetField(1393); }

    public void set(QuickFix.MarketUpdateAction value)
    { setField(value); }
    public QuickFix.MarketUpdateAction get(QuickFix.MarketUpdateAction  value)
    { getField(value); return value; }
    public QuickFix.MarketUpdateAction getMarketUpdateAction()
    { QuickFix.MarketUpdateAction value = new QuickFix.MarketUpdateAction();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketUpdateAction field)
    { return isSetField(field); }
    public bool isSetMarketUpdateAction()
    { return isSetField(1395); }

    public void set(QuickFix.MarketID value)
    { setField(value); }
    public QuickFix.MarketID get(QuickFix.MarketID  value)
    { getField(value); return value; }
    public QuickFix.MarketID getMarketID()
    { QuickFix.MarketID value = new QuickFix.MarketID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketID field)
    { return isSetField(field); }
    public bool isSetMarketID()
    { return isSetField(1301); }

    public void set(QuickFix.MarketSegmentID value)
    { setField(value); }
    public QuickFix.MarketSegmentID get(QuickFix.MarketSegmentID  value)
    { getField(value); return value; }
    public QuickFix.MarketSegmentID getMarketSegmentID()
    { QuickFix.MarketSegmentID value = new QuickFix.MarketSegmentID();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketSegmentID field)
    { return isSetField(field); }
    public bool isSetMarketSegmentID()
    { return isSetField(1300); }

    public void set(QuickFix.MarketSegmentDesc value)
    { setField(value); }
    public QuickFix.MarketSegmentDesc get(QuickFix.MarketSegmentDesc  value)
    { getField(value); return value; }
    public QuickFix.MarketSegmentDesc getMarketSegmentDesc()
    { QuickFix.MarketSegmentDesc value = new QuickFix.MarketSegmentDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.MarketSegmentDesc field)
    { return isSetField(field); }
    public bool isSetMarketSegmentDesc()
    { return isSetField(1396); }

    public void set(QuickFix.EncodedMktSegmDescLen value)
    { setField(value); }
    public QuickFix.EncodedMktSegmDescLen get(QuickFix.EncodedMktSegmDescLen  value)
    { getField(value); return value; }
    public QuickFix.EncodedMktSegmDescLen getEncodedMktSegmDescLen()
    { QuickFix.EncodedMktSegmDescLen value = new QuickFix.EncodedMktSegmDescLen();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedMktSegmDescLen field)
    { return isSetField(field); }
    public bool isSetEncodedMktSegmDescLen()
    { return isSetField(1397); }

    public void set(QuickFix.EncodedMktSegmDesc value)
    { setField(value); }
    public QuickFix.EncodedMktSegmDesc get(QuickFix.EncodedMktSegmDesc  value)
    { getField(value); return value; }
    public QuickFix.EncodedMktSegmDesc getEncodedMktSegmDesc()
    { QuickFix.EncodedMktSegmDesc value = new QuickFix.EncodedMktSegmDesc();
      getField(value); return value; }
    public bool isSet(QuickFix.EncodedMktSegmDesc field)
    { return isSetField(field); }
    public bool isSetEncodedMktSegmDesc()
    { return isSetField(1398); }

    public void set(QuickFix.ParentMktSegmID value)
    { setField(value); }
    public QuickFix.ParentMktSegmID get(QuickFix.ParentMktSegmID  value)
    { getField(value); return value; }
    public QuickFix.ParentMktSegmID getParentMktSegmID()
    { QuickFix.ParentMktSegmID value = new QuickFix.ParentMktSegmID();
      getField(value); return value; }
    public bool isSet(QuickFix.ParentMktSegmID field)
    { return isSetField(field); }
    public bool isSetParentMktSegmID()
    { return isSetField(1325); }

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

    public void set(QuickFix.ExpirationCycle value)
    { setField(value); }
    public QuickFix.ExpirationCycle get(QuickFix.ExpirationCycle  value)
    { getField(value); return value; }
    public QuickFix.ExpirationCycle getExpirationCycle()
    { QuickFix.ExpirationCycle value = new QuickFix.ExpirationCycle();
      getField(value); return value; }
    public bool isSet(QuickFix.ExpirationCycle field)
    { return isSetField(field); }
    public bool isSetExpirationCycle()
    { return isSetField(827); }

    public void set(QuickFix.MinTradeVol value)
    { setField(value); }
    public QuickFix.MinTradeVol get(QuickFix.MinTradeVol  value)
    { getField(value); return value; }
    public QuickFix.MinTradeVol getMinTradeVol()
    { QuickFix.MinTradeVol value = new QuickFix.MinTradeVol();
      getField(value); return value; }
    public bool isSet(QuickFix.MinTradeVol field)
    { return isSetField(field); }
    public bool isSetMinTradeVol()
    { return isSetField(562); }

    public void set(QuickFix.MaxTradeVol value)
    { setField(value); }
    public QuickFix.MaxTradeVol get(QuickFix.MaxTradeVol  value)
    { getField(value); return value; }
    public QuickFix.MaxTradeVol getMaxTradeVol()
    { QuickFix.MaxTradeVol value = new QuickFix.MaxTradeVol();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxTradeVol field)
    { return isSetField(field); }
    public bool isSetMaxTradeVol()
    { return isSetField(1140); }

    public void set(QuickFix.MaxPriceVariation value)
    { setField(value); }
    public QuickFix.MaxPriceVariation get(QuickFix.MaxPriceVariation  value)
    { getField(value); return value; }
    public QuickFix.MaxPriceVariation getMaxPriceVariation()
    { QuickFix.MaxPriceVariation value = new QuickFix.MaxPriceVariation();
      getField(value); return value; }
    public bool isSet(QuickFix.MaxPriceVariation field)
    { return isSetField(field); }
    public bool isSetMaxPriceVariation()
    { return isSetField(1143); }

    public void set(QuickFix.ImpliedMarketIndicator value)
    { setField(value); }
    public QuickFix.ImpliedMarketIndicator get(QuickFix.ImpliedMarketIndicator  value)
    { getField(value); return value; }
    public QuickFix.ImpliedMarketIndicator getImpliedMarketIndicator()
    { QuickFix.ImpliedMarketIndicator value = new QuickFix.ImpliedMarketIndicator();
      getField(value); return value; }
    public bool isSet(QuickFix.ImpliedMarketIndicator field)
    { return isSetField(field); }
    public bool isSetImpliedMarketIndicator()
    { return isSetField(1144); }

    public void set(QuickFix.TradingCurrency value)
    { setField(value); }
    public QuickFix.TradingCurrency get(QuickFix.TradingCurrency  value)
    { getField(value); return value; }
    public QuickFix.TradingCurrency getTradingCurrency()
    { QuickFix.TradingCurrency value = new QuickFix.TradingCurrency();
      getField(value); return value; }
    public bool isSet(QuickFix.TradingCurrency field)
    { return isSetField(field); }
    public bool isSetTradingCurrency()
    { return isSetField(1245); }

    public void set(QuickFix.RoundLot value)
    { setField(value); }
    public QuickFix.RoundLot get(QuickFix.RoundLot  value)
    { getField(value); return value; }
    public QuickFix.RoundLot getRoundLot()
    { QuickFix.RoundLot value = new QuickFix.RoundLot();
      getField(value); return value; }
    public bool isSet(QuickFix.RoundLot field)
    { return isSetField(field); }
    public bool isSetRoundLot()
    { return isSetField(561); }

    public void set(QuickFix.MultilegModel value)
    { setField(value); }
    public QuickFix.MultilegModel get(QuickFix.MultilegModel  value)
    { getField(value); return value; }
    public QuickFix.MultilegModel getMultilegModel()
    { QuickFix.MultilegModel value = new QuickFix.MultilegModel();
      getField(value); return value; }
    public bool isSet(QuickFix.MultilegModel field)
    { return isSetField(field); }
    public bool isSetMultilegModel()
    { return isSetField(1377); }

    public void set(QuickFix.MultilegPriceMethod value)
    { setField(value); }
    public QuickFix.MultilegPriceMethod get(QuickFix.MultilegPriceMethod  value)
    { getField(value); return value; }
    public QuickFix.MultilegPriceMethod getMultilegPriceMethod()
    { QuickFix.MultilegPriceMethod value = new QuickFix.MultilegPriceMethod();
      getField(value); return value; }
    public bool isSet(QuickFix.MultilegPriceMethod field)
    { return isSetField(field); }
    public bool isSetMultilegPriceMethod()
    { return isSetField(1378); }

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

    public void set(QuickFix.NoOrdTypeRules value)
    { setField(value); }
    public QuickFix.NoOrdTypeRules get(QuickFix.NoOrdTypeRules  value)
    { getField(value); return value; }
    public QuickFix.NoOrdTypeRules getNoOrdTypeRules()
    { QuickFix.NoOrdTypeRules value = new QuickFix.NoOrdTypeRules();
      getField(value); return value; }
    public bool isSet(QuickFix.NoOrdTypeRules field)
    { return isSetField(field); }
    public bool isSetNoOrdTypeRules()
    { return isSetField(1237); }

    public class NoOrdTypeRules: QuickFix.Group
    {
    public NoOrdTypeRules() : base(1237,40,message_order ) {}
    static int[] message_order = new int[] {40,0};
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

    };
    public void set(QuickFix.NoTimeInForceRules value)
    { setField(value); }
    public QuickFix.NoTimeInForceRules get(QuickFix.NoTimeInForceRules  value)
    { getField(value); return value; }
    public QuickFix.NoTimeInForceRules getNoTimeInForceRules()
    { QuickFix.NoTimeInForceRules value = new QuickFix.NoTimeInForceRules();
      getField(value); return value; }
    public bool isSet(QuickFix.NoTimeInForceRules field)
    { return isSetField(field); }
    public bool isSetNoTimeInForceRules()
    { return isSetField(1239); }

    public class NoTimeInForceRules: QuickFix.Group
    {
    public NoTimeInForceRules() : base(1239,59,message_order ) {}
    static int[] message_order = new int[] {59,0};
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

    };
    public void set(QuickFix.NoExecInstRules value)
    { setField(value); }
    public QuickFix.NoExecInstRules get(QuickFix.NoExecInstRules  value)
    { getField(value); return value; }
    public QuickFix.NoExecInstRules getNoExecInstRules()
    { QuickFix.NoExecInstRules value = new QuickFix.NoExecInstRules();
      getField(value); return value; }
    public bool isSet(QuickFix.NoExecInstRules field)
    { return isSetField(field); }
    public bool isSetNoExecInstRules()
    { return isSetField(1232); }

    public class NoExecInstRules: QuickFix.Group
    {
    public NoExecInstRules() : base(1232,1308,message_order ) {}
    static int[] message_order = new int[] {1308,0};
      public void set(QuickFix.ExecInstValue value)
      { setField(value); }
      public QuickFix.ExecInstValue get(QuickFix.ExecInstValue  value)
      { getField(value); return value; }
      public QuickFix.ExecInstValue getExecInstValue()
      { QuickFix.ExecInstValue value = new QuickFix.ExecInstValue();
        getField(value); return value; }
      public bool isSet(QuickFix.ExecInstValue field)
      { return isSetField(field); }
      public bool isSetExecInstValue()
      { return isSetField(1308); }

    };
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

  };

}

