package org.quickfix.fix41;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class IndicationofInterest extends Message
{
  public IndicationofInterest()
  {
    getHeader().setField(new MsgType("6"));
  }
  public IndicationofInterest(
    org.quickfix.field.IOIid aIOIid,
    org.quickfix.field.IOITransType aIOITransType,
    org.quickfix.field.Symbol aSymbol,
    org.quickfix.field.Side aSide,
    org.quickfix.field.IOIShares aIOIShares ) {

    getHeader().setField(new MsgType("6"));
    set(aIOIid);
    set(aIOITransType);
    set(aSymbol);
    set(aSide);
    set(aIOIShares);
  }

  public void set(org.quickfix.field.IOIid value)
  { setField(value); }
  public org.quickfix.field.IOIid get(org.quickfix.field.IOIid  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIid getIOIid() throws FieldNotFound
  { org.quickfix.field.IOIid value = new org.quickfix.field.IOIid();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIid field)
  { return isSetField(field); }
  public boolean isSetIOIid()
  { return isSetField(23); }
  public void set(org.quickfix.field.IOITransType value)
  { setField(value); }
  public org.quickfix.field.IOITransType get(org.quickfix.field.IOITransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOITransType getIOITransType() throws FieldNotFound
  { org.quickfix.field.IOITransType value = new org.quickfix.field.IOITransType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOITransType field)
  { return isSetField(field); }
  public boolean isSetIOITransType()
  { return isSetField(28); }
  public void set(org.quickfix.field.IOIRefID value)
  { setField(value); }
  public org.quickfix.field.IOIRefID get(org.quickfix.field.IOIRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIRefID getIOIRefID() throws FieldNotFound
  { org.quickfix.field.IOIRefID value = new org.quickfix.field.IOIRefID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIRefID field)
  { return isSetField(field); }
  public boolean isSetIOIRefID()
  { return isSetField(26); }
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
  public void set(org.quickfix.field.Side value)
  { setField(value); }
  public org.quickfix.field.Side get(org.quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Side getSide() throws FieldNotFound
  { org.quickfix.field.Side value = new org.quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(org.quickfix.field.IOIShares value)
  { setField(value); }
  public org.quickfix.field.IOIShares get(org.quickfix.field.IOIShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIShares getIOIShares() throws FieldNotFound
  { org.quickfix.field.IOIShares value = new org.quickfix.field.IOIShares();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIShares field)
  { return isSetField(field); }
  public boolean isSetIOIShares()
  { return isSetField(27); }
  public void set(org.quickfix.field.Price value)
  { setField(value); }
  public org.quickfix.field.Price get(org.quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Price getPrice() throws FieldNotFound
  { org.quickfix.field.Price value = new org.quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
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
  public void set(org.quickfix.field.IOIQltyInd value)
  { setField(value); }
  public org.quickfix.field.IOIQltyInd get(org.quickfix.field.IOIQltyInd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIQltyInd getIOIQltyInd() throws FieldNotFound
  { org.quickfix.field.IOIQltyInd value = new org.quickfix.field.IOIQltyInd();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIQltyInd field)
  { return isSetField(field); }
  public boolean isSetIOIQltyInd()
  { return isSetField(25); }
  public void set(org.quickfix.field.IOIOthSvc value)
  { setField(value); }
  public org.quickfix.field.IOIOthSvc get(org.quickfix.field.IOIOthSvc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIOthSvc getIOIOthSvc() throws FieldNotFound
  { org.quickfix.field.IOIOthSvc value = new org.quickfix.field.IOIOthSvc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIOthSvc field)
  { return isSetField(field); }
  public boolean isSetIOIOthSvc()
  { return isSetField(24); }
  public void set(org.quickfix.field.IOINaturalFlag value)
  { setField(value); }
  public org.quickfix.field.IOINaturalFlag get(org.quickfix.field.IOINaturalFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOINaturalFlag getIOINaturalFlag() throws FieldNotFound
  { org.quickfix.field.IOINaturalFlag value = new org.quickfix.field.IOINaturalFlag();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOINaturalFlag field)
  { return isSetField(field); }
  public boolean isSetIOINaturalFlag()
  { return isSetField(130); }
  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Text getText() throws FieldNotFound
  { org.quickfix.field.Text value = new org.quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
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
  public void set(org.quickfix.field.URLLink value)
  { setField(value); }
  public org.quickfix.field.URLLink get(org.quickfix.field.URLLink  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.URLLink getURLLink() throws FieldNotFound
  { org.quickfix.field.URLLink value = new org.quickfix.field.URLLink();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.URLLink field)
  { return isSetField(field); }
  public boolean isSetURLLink()
  { return isSetField(149); }
  public void set(org.quickfix.field.NoIOIQualifiers value)
  { setField(value); }
  public org.quickfix.field.NoIOIQualifiers get(org.quickfix.field.NoIOIQualifiers  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoIOIQualifiers getNoIOIQualifiers() throws FieldNotFound
  { org.quickfix.field.NoIOIQualifiers value = new org.quickfix.field.NoIOIQualifiers();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoIOIQualifiers field)
  { return isSetField(field); }
  public boolean isSetNoIOIQualifiers()
  { return isSetField(199); }
  public static class NoIOIQualifiers extends Group {
    public NoIOIQualifiers() {
      super(199,104,
      new int[] {104,0 } ); }
  public void set(org.quickfix.field.IOIQualifier value)
  { setField(value); }
  public org.quickfix.field.IOIQualifier get(org.quickfix.field.IOIQualifier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IOIQualifier getIOIQualifier() throws FieldNotFound
  { org.quickfix.field.IOIQualifier value = new org.quickfix.field.IOIQualifier();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IOIQualifier field)
  { return isSetField(field); }
  public boolean isSetIOIQualifier()
  { return isSetField(104); }
}
}

