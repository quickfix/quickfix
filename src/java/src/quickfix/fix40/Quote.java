package quickfix.fix40;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Quote extends Message
{
  public Quote()
  {
    getHeader().setField(new MsgType("S"));
  }
  public Quote(
    quickfix.field.QuoteID aQuoteID,
    quickfix.field.Symbol aSymbol,
    quickfix.field.BidPx aBidPx ) {

    getHeader().setField(new MsgType("S"));
    set(aQuoteID);
    set(aSymbol);
    set(aBidPx);
  }

  public void set(quickfix.field.QuoteReqID value)
  { setField(value); }
  public quickfix.field.QuoteReqID get(quickfix.field.QuoteReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound
  { quickfix.field.QuoteReqID value = new quickfix.field.QuoteReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteReqID field)
  { return isSetField(field); }
  public boolean isSetQuoteReqID()
  { return isSetField(131); }
  public void set(quickfix.field.QuoteID value)
  { setField(value); }
  public quickfix.field.QuoteID get(quickfix.field.QuoteID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { quickfix.field.QuoteID value = new quickfix.field.QuoteID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.QuoteID field)
  { return isSetField(field); }
  public boolean isSetQuoteID()
  { return isSetField(117); }
  public void set(quickfix.field.Symbol value)
  { setField(value); }
  public quickfix.field.Symbol get(quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Symbol getSymbol() throws FieldNotFound
  { quickfix.field.Symbol value = new quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(quickfix.field.SymbolSfx value)
  { setField(value); }
  public quickfix.field.SymbolSfx get(quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { quickfix.field.SymbolSfx value = new quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(quickfix.field.SecurityID value)
  { setField(value); }
  public quickfix.field.SecurityID get(quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { quickfix.field.SecurityID value = new quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(quickfix.field.IDSource value)
  { setField(value); }
  public quickfix.field.IDSource get(quickfix.field.IDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IDSource getIDSource() throws FieldNotFound
  { quickfix.field.IDSource value = new quickfix.field.IDSource();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IDSource field)
  { return isSetField(field); }
  public boolean isSetIDSource()
  { return isSetField(22); }
  public void set(quickfix.field.Issuer value)
  { setField(value); }
  public quickfix.field.Issuer get(quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Issuer getIssuer() throws FieldNotFound
  { quickfix.field.Issuer value = new quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(quickfix.field.SecurityDesc value)
  { setField(value); }
  public quickfix.field.SecurityDesc get(quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { quickfix.field.SecurityDesc value = new quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(quickfix.field.BidPx value)
  { setField(value); }
  public quickfix.field.BidPx get(quickfix.field.BidPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidPx getBidPx() throws FieldNotFound
  { quickfix.field.BidPx value = new quickfix.field.BidPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidPx field)
  { return isSetField(field); }
  public boolean isSetBidPx()
  { return isSetField(132); }
  public void set(quickfix.field.OfferPx value)
  { setField(value); }
  public quickfix.field.OfferPx get(quickfix.field.OfferPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferPx getOfferPx() throws FieldNotFound
  { quickfix.field.OfferPx value = new quickfix.field.OfferPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferPx field)
  { return isSetField(field); }
  public boolean isSetOfferPx()
  { return isSetField(133); }
  public void set(quickfix.field.BidSize value)
  { setField(value); }
  public quickfix.field.BidSize get(quickfix.field.BidSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidSize getBidSize() throws FieldNotFound
  { quickfix.field.BidSize value = new quickfix.field.BidSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidSize field)
  { return isSetField(field); }
  public boolean isSetBidSize()
  { return isSetField(134); }
  public void set(quickfix.field.OfferSize value)
  { setField(value); }
  public quickfix.field.OfferSize get(quickfix.field.OfferSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferSize getOfferSize() throws FieldNotFound
  { quickfix.field.OfferSize value = new quickfix.field.OfferSize();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferSize field)
  { return isSetField(field); }
  public boolean isSetOfferSize()
  { return isSetField(135); }
  public void set(quickfix.field.ValidUntilTime value)
  { setField(value); }
  public quickfix.field.ValidUntilTime get(quickfix.field.ValidUntilTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound
  { quickfix.field.ValidUntilTime value = new quickfix.field.ValidUntilTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ValidUntilTime field)
  { return isSetField(field); }
  public boolean isSetValidUntilTime()
  { return isSetField(62); }
}

