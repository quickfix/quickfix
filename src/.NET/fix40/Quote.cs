namespace QuickFix40
{

  public class Quote : Message
  {
    public Quote() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("S"); }

    public Quote(
      QuickFix.QuoteID aQuoteID,
      QuickFix.Symbol aSymbol,
      QuickFix.BidPx aBidPx )
    : base(MsgType()) {
      set(aQuoteID);
      set(aSymbol);
      set(aBidPx);
    }

    public void set(QuickFix.QuoteReqID value)
    { setField(value); }
    public QuickFix.QuoteReqID get(QuickFix.QuoteReqID  value)
    { getField(value); return value; }
    public QuickFix.QuoteReqID getQuoteReqID()
    { QuickFix.QuoteReqID value = new QuickFix.QuoteReqID();
      getField(value); return value; }
    public bool isSet(QuickFix.QuoteReqID field)
    { return isSetField(field); }
    public bool isSetQuoteReqID()
    { return isSetField(131); }

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

    public void set(QuickFix.BidPx value)
    { setField(value); }
    public QuickFix.BidPx get(QuickFix.BidPx  value)
    { getField(value); return value; }
    public QuickFix.BidPx getBidPx()
    { QuickFix.BidPx value = new QuickFix.BidPx();
      getField(value); return value; }
    public bool isSet(QuickFix.BidPx field)
    { return isSetField(field); }
    public bool isSetBidPx()
    { return isSetField(132); }

    public void set(QuickFix.OfferPx value)
    { setField(value); }
    public QuickFix.OfferPx get(QuickFix.OfferPx  value)
    { getField(value); return value; }
    public QuickFix.OfferPx getOfferPx()
    { QuickFix.OfferPx value = new QuickFix.OfferPx();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferPx field)
    { return isSetField(field); }
    public bool isSetOfferPx()
    { return isSetField(133); }

    public void set(QuickFix.BidSize value)
    { setField(value); }
    public QuickFix.BidSize get(QuickFix.BidSize  value)
    { getField(value); return value; }
    public QuickFix.BidSize getBidSize()
    { QuickFix.BidSize value = new QuickFix.BidSize();
      getField(value); return value; }
    public bool isSet(QuickFix.BidSize field)
    { return isSetField(field); }
    public bool isSetBidSize()
    { return isSetField(134); }

    public void set(QuickFix.OfferSize value)
    { setField(value); }
    public QuickFix.OfferSize get(QuickFix.OfferSize  value)
    { getField(value); return value; }
    public QuickFix.OfferSize getOfferSize()
    { QuickFix.OfferSize value = new QuickFix.OfferSize();
      getField(value); return value; }
    public bool isSet(QuickFix.OfferSize field)
    { return isSetField(field); }
    public bool isSetOfferSize()
    { return isSetField(135); }

    public void set(QuickFix.ValidUntilTime value)
    { setField(value); }
    public QuickFix.ValidUntilTime get(QuickFix.ValidUntilTime  value)
    { getField(value); return value; }
    public QuickFix.ValidUntilTime getValidUntilTime()
    { QuickFix.ValidUntilTime value = new QuickFix.ValidUntilTime();
      getField(value); return value; }
    public bool isSet(QuickFix.ValidUntilTime field)
    { return isSetField(field); }
    public bool isSetValidUntilTime()
    { return isSetField(62); }

  };

}

