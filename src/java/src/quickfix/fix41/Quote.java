package quickfix.fix41;
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
    quickfix.field.Symbol aSymbol ) {

    getHeader().setField(new MsgType("S"));
    set(aQuoteID);
    set(aSymbol);
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
  public void set(quickfix.field.SecurityType value)
  { setField(value); }
  public quickfix.field.SecurityType get(quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { quickfix.field.SecurityType value = new quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public quickfix.field.MaturityMonthYear get(quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { quickfix.field.MaturityMonthYear value = new quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(quickfix.field.MaturityDay value)
  { setField(value); }
  public quickfix.field.MaturityDay get(quickfix.field.MaturityDay  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound
  { quickfix.field.MaturityDay value = new quickfix.field.MaturityDay();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MaturityDay field)
  { return isSetField(field); }
  public boolean isSetMaturityDay()
  { return isSetField(205); }
  public void set(quickfix.field.PutOrCall value)
  { setField(value); }
  public quickfix.field.PutOrCall get(quickfix.field.PutOrCall  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound
  { quickfix.field.PutOrCall value = new quickfix.field.PutOrCall();
    getField(value); return value; }
  public boolean isSet(quickfix.field.PutOrCall field)
  { return isSetField(field); }
  public boolean isSetPutOrCall()
  { return isSetField(201); }
  public void set(quickfix.field.StrikePrice value)
  { setField(value); }
  public quickfix.field.StrikePrice get(quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { quickfix.field.StrikePrice value = new quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(quickfix.field.OptAttribute value)
  { setField(value); }
  public quickfix.field.OptAttribute get(quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { quickfix.field.OptAttribute value = new quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(quickfix.field.SecurityExchange value)
  { setField(value); }
  public quickfix.field.SecurityExchange get(quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { quickfix.field.SecurityExchange value = new quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
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
  public void set(quickfix.field.BidSpotRate value)
  { setField(value); }
  public quickfix.field.BidSpotRate get(quickfix.field.BidSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound
  { quickfix.field.BidSpotRate value = new quickfix.field.BidSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidSpotRate field)
  { return isSetField(field); }
  public boolean isSetBidSpotRate()
  { return isSetField(188); }
  public void set(quickfix.field.OfferSpotRate value)
  { setField(value); }
  public quickfix.field.OfferSpotRate get(quickfix.field.OfferSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound
  { quickfix.field.OfferSpotRate value = new quickfix.field.OfferSpotRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferSpotRate field)
  { return isSetField(field); }
  public boolean isSetOfferSpotRate()
  { return isSetField(190); }
  public void set(quickfix.field.BidForwardPoints value)
  { setField(value); }
  public quickfix.field.BidForwardPoints get(quickfix.field.BidForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound
  { quickfix.field.BidForwardPoints value = new quickfix.field.BidForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BidForwardPoints field)
  { return isSetField(field); }
  public boolean isSetBidForwardPoints()
  { return isSetField(189); }
  public void set(quickfix.field.OfferForwardPoints value)
  { setField(value); }
  public quickfix.field.OfferForwardPoints get(quickfix.field.OfferForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound
  { quickfix.field.OfferForwardPoints value = new quickfix.field.OfferForwardPoints();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OfferForwardPoints field)
  { return isSetField(field); }
  public boolean isSetOfferForwardPoints()
  { return isSetField(191); }
  public void set(quickfix.field.TransactTime value)
  { setField(value); }
  public quickfix.field.TransactTime get(quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { quickfix.field.TransactTime value = new quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(quickfix.field.FutSettDate value)
  { setField(value); }
  public quickfix.field.FutSettDate get(quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { quickfix.field.FutSettDate value = new quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(quickfix.field.OrdType value)
  { setField(value); }
  public quickfix.field.OrdType get(quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrdType getOrdType() throws FieldNotFound
  { quickfix.field.OrdType value = new quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(quickfix.field.FutSettDate2 value)
  { setField(value); }
  public quickfix.field.FutSettDate2 get(quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { quickfix.field.FutSettDate2 value = new quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(quickfix.field.OrderQty2 value)
  { setField(value); }
  public quickfix.field.OrderQty2 get(quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { quickfix.field.OrderQty2 value = new quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
}

