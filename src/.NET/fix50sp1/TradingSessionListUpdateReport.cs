namespace QuickFix50Sp1
{

  public class TradingSessionListUpdateReport : Message
  {
    public TradingSessionListUpdateReport() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BS"); }

    public void set(QuickFix.TradSesReqID value)
    { setField(value); }
    public QuickFix.TradSesReqID get(QuickFix.TradSesReqID  value)
    { getField(value); return value; }
    public QuickFix.TradSesReqID getTradSesReqID()
    { QuickFix.TradSesReqID value = new QuickFix.TradSesReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesReqID field)
    { return isSetField(field); }
    public bool isSetTradSesReqID()
    { return isSetField(335); }

    public void set(QuickFix.TradSesUpdateAction value)
    { setField(value); }
    public QuickFix.TradSesUpdateAction get(QuickFix.TradSesUpdateAction  value)
    { getField(value); return value; }
    public QuickFix.TradSesUpdateAction getTradSesUpdateAction()
    { QuickFix.TradSesUpdateAction value = new QuickFix.TradSesUpdateAction();
      getField(value); return value; }
    public bool isSet(QuickFix.TradSesUpdateAction field)
    { return isSetField(field); }
    public bool isSetTradSesUpdateAction()
    { return isSetField(1327); }

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
    static int[] message_order = new int[] {336,625,207,338,339,325,340,567,341,342,343,344,345,387,58,354,355,1301,1300,1326,0};
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

      public void set(QuickFix.TradSesMethod value)
      { setField(value); }
      public QuickFix.TradSesMethod get(QuickFix.TradSesMethod  value)
      { getField(value); return value; }
      public QuickFix.TradSesMethod getTradSesMethod()
      { QuickFix.TradSesMethod value = new QuickFix.TradSesMethod();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesMethod field)
      { return isSetField(field); }
      public bool isSetTradSesMethod()
      { return isSetField(338); }

      public void set(QuickFix.TradSesMode value)
      { setField(value); }
      public QuickFix.TradSesMode get(QuickFix.TradSesMode  value)
      { getField(value); return value; }
      public QuickFix.TradSesMode getTradSesMode()
      { QuickFix.TradSesMode value = new QuickFix.TradSesMode();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesMode field)
      { return isSetField(field); }
      public bool isSetTradSesMode()
      { return isSetField(339); }

      public void set(QuickFix.UnsolicitedIndicator value)
      { setField(value); }
      public QuickFix.UnsolicitedIndicator get(QuickFix.UnsolicitedIndicator  value)
      { getField(value); return value; }
      public QuickFix.UnsolicitedIndicator getUnsolicitedIndicator()
      { QuickFix.UnsolicitedIndicator value = new QuickFix.UnsolicitedIndicator();
        getField(value); return value; }
      public bool isSet(QuickFix.UnsolicitedIndicator field)
      { return isSetField(field); }
      public bool isSetUnsolicitedIndicator()
      { return isSetField(325); }

      public void set(QuickFix.TradSesStatus value)
      { setField(value); }
      public QuickFix.TradSesStatus get(QuickFix.TradSesStatus  value)
      { getField(value); return value; }
      public QuickFix.TradSesStatus getTradSesStatus()
      { QuickFix.TradSesStatus value = new QuickFix.TradSesStatus();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesStatus field)
      { return isSetField(field); }
      public bool isSetTradSesStatus()
      { return isSetField(340); }

      public void set(QuickFix.TradSesStatusRejReason value)
      { setField(value); }
      public QuickFix.TradSesStatusRejReason get(QuickFix.TradSesStatusRejReason  value)
      { getField(value); return value; }
      public QuickFix.TradSesStatusRejReason getTradSesStatusRejReason()
      { QuickFix.TradSesStatusRejReason value = new QuickFix.TradSesStatusRejReason();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesStatusRejReason field)
      { return isSetField(field); }
      public bool isSetTradSesStatusRejReason()
      { return isSetField(567); }

      public void set(QuickFix.TradSesStartTime value)
      { setField(value); }
      public QuickFix.TradSesStartTime get(QuickFix.TradSesStartTime  value)
      { getField(value); return value; }
      public QuickFix.TradSesStartTime getTradSesStartTime()
      { QuickFix.TradSesStartTime value = new QuickFix.TradSesStartTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesStartTime field)
      { return isSetField(field); }
      public bool isSetTradSesStartTime()
      { return isSetField(341); }

      public void set(QuickFix.TradSesOpenTime value)
      { setField(value); }
      public QuickFix.TradSesOpenTime get(QuickFix.TradSesOpenTime  value)
      { getField(value); return value; }
      public QuickFix.TradSesOpenTime getTradSesOpenTime()
      { QuickFix.TradSesOpenTime value = new QuickFix.TradSesOpenTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesOpenTime field)
      { return isSetField(field); }
      public bool isSetTradSesOpenTime()
      { return isSetField(342); }

      public void set(QuickFix.TradSesPreCloseTime value)
      { setField(value); }
      public QuickFix.TradSesPreCloseTime get(QuickFix.TradSesPreCloseTime  value)
      { getField(value); return value; }
      public QuickFix.TradSesPreCloseTime getTradSesPreCloseTime()
      { QuickFix.TradSesPreCloseTime value = new QuickFix.TradSesPreCloseTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesPreCloseTime field)
      { return isSetField(field); }
      public bool isSetTradSesPreCloseTime()
      { return isSetField(343); }

      public void set(QuickFix.TradSesCloseTime value)
      { setField(value); }
      public QuickFix.TradSesCloseTime get(QuickFix.TradSesCloseTime  value)
      { getField(value); return value; }
      public QuickFix.TradSesCloseTime getTradSesCloseTime()
      { QuickFix.TradSesCloseTime value = new QuickFix.TradSesCloseTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesCloseTime field)
      { return isSetField(field); }
      public bool isSetTradSesCloseTime()
      { return isSetField(344); }

      public void set(QuickFix.TradSesEndTime value)
      { setField(value); }
      public QuickFix.TradSesEndTime get(QuickFix.TradSesEndTime  value)
      { getField(value); return value; }
      public QuickFix.TradSesEndTime getTradSesEndTime()
      { QuickFix.TradSesEndTime value = new QuickFix.TradSesEndTime();
        getField(value); return value; }
      public bool isSet(QuickFix.TradSesEndTime field)
      { return isSetField(field); }
      public bool isSetTradSesEndTime()
      { return isSetField(345); }

      public void set(QuickFix.TotalVolumeTraded value)
      { setField(value); }
      public QuickFix.TotalVolumeTraded get(QuickFix.TotalVolumeTraded  value)
      { getField(value); return value; }
      public QuickFix.TotalVolumeTraded getTotalVolumeTraded()
      { QuickFix.TotalVolumeTraded value = new QuickFix.TotalVolumeTraded();
        getField(value); return value; }
      public bool isSet(QuickFix.TotalVolumeTraded field)
      { return isSetField(field); }
      public bool isSetTotalVolumeTraded()
      { return isSetField(387); }

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

      public void set(QuickFix.TradingSessionDesc value)
      { setField(value); }
      public QuickFix.TradingSessionDesc get(QuickFix.TradingSessionDesc  value)
      { getField(value); return value; }
      public QuickFix.TradingSessionDesc getTradingSessionDesc()
      { QuickFix.TradingSessionDesc value = new QuickFix.TradingSessionDesc();
        getField(value); return value; }
      public bool isSet(QuickFix.TradingSessionDesc field)
      { return isSetField(field); }
      public bool isSetTradingSessionDesc()
      { return isSetField(1326); }

    };
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

