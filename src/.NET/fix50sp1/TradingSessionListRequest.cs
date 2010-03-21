namespace QuickFix50Sp1
{

  public class TradingSessionListRequest : Message
  {
    public TradingSessionListRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BI"); }

    public TradingSessionListRequest(
      QuickFix.TradSesReqID aTradSesReqID,
      QuickFix.SubscriptionRequestType aSubscriptionRequestType )
    : base(MsgType()) {
      set(aTradSesReqID);
      set(aSubscriptionRequestType);
    }

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

    public void set(QuickFix.SubscriptionRequestType value)
    { setField(value); }
    public QuickFix.SubscriptionRequestType get(QuickFix.SubscriptionRequestType  value)
    { getField(value); return value; }
    public QuickFix.SubscriptionRequestType getSubscriptionRequestType()
    { QuickFix.SubscriptionRequestType value = new QuickFix.SubscriptionRequestType();
      getField(value); return value; }
    public bool isSet(QuickFix.SubscriptionRequestType field)
    { return isSetField(field); }
    public bool isSetSubscriptionRequestType()
    { return isSetField(263); }

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

  };

}

