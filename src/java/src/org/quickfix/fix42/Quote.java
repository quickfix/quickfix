package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Quote extends Message
{
  public Quote()
  {
    getHeader().setField(new MsgType("S"));
  }
  public Quote(
    org.quickfix.field.QuoteID aQuoteID,
    org.quickfix.field.Symbol aSymbol ) {

    getHeader().setField(new MsgType("S"));
    set(aQuoteID);
    set(aSymbol);
  }

  public void set(org.quickfix.field.QuoteReqID value)
  { setField(value); }
  public org.quickfix.field.QuoteReqID get(org.quickfix.field.QuoteReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteReqID getQuoteReqID() throws FieldNotFound
  { org.quickfix.field.QuoteReqID value = new org.quickfix.field.QuoteReqID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteReqID field)
  { return isSetField(field); }
  public boolean isSetQuoteReqID()
  { return isSetField(131); }
  public void set(org.quickfix.field.QuoteID value)
  { setField(value); }
  public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound
  { org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteID field)
  { return isSetField(field); }
  public boolean isSetQuoteID()
  { return isSetField(117); }
  public void set(org.quickfix.field.QuoteResponseLevel value)
  { setField(value); }
  public org.quickfix.field.QuoteResponseLevel get(org.quickfix.field.QuoteResponseLevel  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.QuoteResponseLevel getQuoteResponseLevel() throws FieldNotFound
  { org.quickfix.field.QuoteResponseLevel value = new org.quickfix.field.QuoteResponseLevel();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.QuoteResponseLevel field)
  { return isSetField(field); }
  public boolean isSetQuoteResponseLevel()
  { return isSetField(301); }
  public void set(org.quickfix.field.TradingSessionID value)
  { setField(value); }
  public org.quickfix.field.TradingSessionID get(org.quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { org.quickfix.field.TradingSessionID value = new org.quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(org.quickfix.field.Symbol value)
  { setField(value); }
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Symbol getSymbol() throws FieldNotFound
  { org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Symbol field)
  { return isSetField(field); }
  public boolean isSetSymbol()
  { return isSetField(55); }
  public void set(org.quickfix.field.SymbolSfx value)
  { setField(value); }
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound
  { org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SymbolSfx field)
  { return isSetField(field); }
  public boolean isSetSymbolSfx()
  { return isSetField(65); }
  public void set(org.quickfix.field.SecurityID value)
  { setField(value); }
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound
  { org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityID field)
  { return isSetField(field); }
  public boolean isSetSecurityID()
  { return isSetField(48); }
  public void set(org.quickfix.field.IDSource value)
  { setField(value); }
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IDSource field)
  { return isSetField(field); }
  public boolean isSetIDSource()
  { return isSetField(22); }
  public void set(org.quickfix.field.SecurityType value)
  { setField(value); }
  public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound
  { org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityType field)
  { return isSetField(field); }
  public boolean isSetSecurityType()
  { return isSetField(167); }
  public void set(org.quickfix.field.MaturityMonthYear value)
  { setField(value); }
  public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound
  { org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityMonthYear field)
  { return isSetField(field); }
  public boolean isSetMaturityMonthYear()
  { return isSetField(200); }
  public void set(org.quickfix.field.MaturityDay value)
  { setField(value); }
  public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound
  { org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MaturityDay field)
  { return isSetField(field); }
  public boolean isSetMaturityDay()
  { return isSetField(205); }
  public void set(org.quickfix.field.PutOrCall value)
  { setField(value); }
  public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound
  { org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.PutOrCall field)
  { return isSetField(field); }
  public boolean isSetPutOrCall()
  { return isSetField(201); }
  public void set(org.quickfix.field.StrikePrice value)
  { setField(value); }
  public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound
  { org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.StrikePrice field)
  { return isSetField(field); }
  public boolean isSetStrikePrice()
  { return isSetField(202); }
  public void set(org.quickfix.field.OptAttribute value)
  { setField(value); }
  public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound
  { org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OptAttribute field)
  { return isSetField(field); }
  public boolean isSetOptAttribute()
  { return isSetField(206); }
  public void set(org.quickfix.field.ContractMultiplier value)
  { setField(value); }
  public org.quickfix.field.ContractMultiplier get(org.quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { org.quickfix.field.ContractMultiplier value = new org.quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(org.quickfix.field.CouponRate value)
  { setField(value); }
  public org.quickfix.field.CouponRate get(org.quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { org.quickfix.field.CouponRate value = new org.quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
  public void set(org.quickfix.field.SecurityExchange value)
  { setField(value); }
  public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound
  { org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityExchange field)
  { return isSetField(field); }
  public boolean isSetSecurityExchange()
  { return isSetField(207); }
  public void set(org.quickfix.field.Issuer value)
  { setField(value); }
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Issuer getIssuer() throws FieldNotFound
  { org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Issuer field)
  { return isSetField(field); }
  public boolean isSetIssuer()
  { return isSetField(106); }
  public void set(org.quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuerLen get(org.quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { org.quickfix.field.EncodedIssuerLen value = new org.quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(org.quickfix.field.EncodedIssuer value)
  { setField(value); }
  public org.quickfix.field.EncodedIssuer get(org.quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { org.quickfix.field.EncodedIssuer value = new org.quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
  public void set(org.quickfix.field.SecurityDesc value)
  { setField(value); }
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }
  public void set(org.quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDescLen get(org.quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDescLen value = new org.quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(org.quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public org.quickfix.field.EncodedSecurityDesc get(org.quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { org.quickfix.field.EncodedSecurityDesc value = new org.quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
  public void set(org.quickfix.field.BidPx value)
  { setField(value); }
  public org.quickfix.field.BidPx get(org.quickfix.field.BidPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BidPx getBidPx() throws FieldNotFound
  { org.quickfix.field.BidPx value = new org.quickfix.field.BidPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BidPx field)
  { return isSetField(field); }
  public boolean isSetBidPx()
  { return isSetField(132); }
  public void set(org.quickfix.field.OfferPx value)
  { setField(value); }
  public org.quickfix.field.OfferPx get(org.quickfix.field.OfferPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OfferPx getOfferPx() throws FieldNotFound
  { org.quickfix.field.OfferPx value = new org.quickfix.field.OfferPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OfferPx field)
  { return isSetField(field); }
  public boolean isSetOfferPx()
  { return isSetField(133); }
  public void set(org.quickfix.field.BidSize value)
  { setField(value); }
  public org.quickfix.field.BidSize get(org.quickfix.field.BidSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BidSize getBidSize() throws FieldNotFound
  { org.quickfix.field.BidSize value = new org.quickfix.field.BidSize();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BidSize field)
  { return isSetField(field); }
  public boolean isSetBidSize()
  { return isSetField(134); }
  public void set(org.quickfix.field.OfferSize value)
  { setField(value); }
  public org.quickfix.field.OfferSize get(org.quickfix.field.OfferSize  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OfferSize getOfferSize() throws FieldNotFound
  { org.quickfix.field.OfferSize value = new org.quickfix.field.OfferSize();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OfferSize field)
  { return isSetField(field); }
  public boolean isSetOfferSize()
  { return isSetField(135); }
  public void set(org.quickfix.field.ValidUntilTime value)
  { setField(value); }
  public org.quickfix.field.ValidUntilTime get(org.quickfix.field.ValidUntilTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ValidUntilTime getValidUntilTime() throws FieldNotFound
  { org.quickfix.field.ValidUntilTime value = new org.quickfix.field.ValidUntilTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ValidUntilTime field)
  { return isSetField(field); }
  public boolean isSetValidUntilTime()
  { return isSetField(62); }
  public void set(org.quickfix.field.BidSpotRate value)
  { setField(value); }
  public org.quickfix.field.BidSpotRate get(org.quickfix.field.BidSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BidSpotRate getBidSpotRate() throws FieldNotFound
  { org.quickfix.field.BidSpotRate value = new org.quickfix.field.BidSpotRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BidSpotRate field)
  { return isSetField(field); }
  public boolean isSetBidSpotRate()
  { return isSetField(188); }
  public void set(org.quickfix.field.OfferSpotRate value)
  { setField(value); }
  public org.quickfix.field.OfferSpotRate get(org.quickfix.field.OfferSpotRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OfferSpotRate getOfferSpotRate() throws FieldNotFound
  { org.quickfix.field.OfferSpotRate value = new org.quickfix.field.OfferSpotRate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OfferSpotRate field)
  { return isSetField(field); }
  public boolean isSetOfferSpotRate()
  { return isSetField(190); }
  public void set(org.quickfix.field.BidForwardPoints value)
  { setField(value); }
  public org.quickfix.field.BidForwardPoints get(org.quickfix.field.BidForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BidForwardPoints getBidForwardPoints() throws FieldNotFound
  { org.quickfix.field.BidForwardPoints value = new org.quickfix.field.BidForwardPoints();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BidForwardPoints field)
  { return isSetField(field); }
  public boolean isSetBidForwardPoints()
  { return isSetField(189); }
  public void set(org.quickfix.field.OfferForwardPoints value)
  { setField(value); }
  public org.quickfix.field.OfferForwardPoints get(org.quickfix.field.OfferForwardPoints  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OfferForwardPoints getOfferForwardPoints() throws FieldNotFound
  { org.quickfix.field.OfferForwardPoints value = new org.quickfix.field.OfferForwardPoints();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OfferForwardPoints field)
  { return isSetField(field); }
  public boolean isSetOfferForwardPoints()
  { return isSetField(191); }
  public void set(org.quickfix.field.TransactTime value)
  { setField(value); }
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }
  public void set(org.quickfix.field.FutSettDate value)
  { setField(value); }
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }
  public void set(org.quickfix.field.OrdType value)
  { setField(value); }
  public org.quickfix.field.OrdType get(org.quickfix.field.OrdType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrdType getOrdType() throws FieldNotFound
  { org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrdType field)
  { return isSetField(field); }
  public boolean isSetOrdType()
  { return isSetField(40); }
  public void set(org.quickfix.field.FutSettDate2 value)
  { setField(value); }
  public org.quickfix.field.FutSettDate2 get(org.quickfix.field.FutSettDate2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate2 getFutSettDate2() throws FieldNotFound
  { org.quickfix.field.FutSettDate2 value = new org.quickfix.field.FutSettDate2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate2 field)
  { return isSetField(field); }
  public boolean isSetFutSettDate2()
  { return isSetField(193); }
  public void set(org.quickfix.field.OrderQty2 value)
  { setField(value); }
  public org.quickfix.field.OrderQty2 get(org.quickfix.field.OrderQty2  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderQty2 getOrderQty2() throws FieldNotFound
  { org.quickfix.field.OrderQty2 value = new org.quickfix.field.OrderQty2();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderQty2 field)
  { return isSetField(field); }
  public boolean isSetOrderQty2()
  { return isSetField(192); }
  public void set(org.quickfix.field.Currency value)
  { setField(value); }
  public org.quickfix.field.Currency get(org.quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
}

