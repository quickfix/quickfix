namespace QuickFix50Sp2
{

  public class MarketDefinitionRequest : Message
  {
    public MarketDefinitionRequest() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("BT"); }

    public MarketDefinitionRequest(
      QuickFix.MarketReqID aMarketReqID,
      QuickFix.SubscriptionRequestType aSubscriptionRequestType )
    : base(MsgType()) {
      set(aMarketReqID);
      set(aSubscriptionRequestType);
    }

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

  };

}

