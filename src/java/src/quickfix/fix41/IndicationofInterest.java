package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class IndicationofInterest extends Message
{
  public IndicationofInterest()
  {
    getHeader().setField(new MsgType("6"));
  }
  public IndicationofInterest(
    quickfix.field.IOIid aIOIid,
    quickfix.field.IOITransType aIOITransType,
    quickfix.field.Symbol aSymbol,
    quickfix.field.Side aSide,
    quickfix.field.IOIShares aIOIShares ) {

    getHeader().setField(new MsgType("6"));
    set(aIOIid);
    set(aIOITransType);
    set(aSymbol);
    set(aSide);
    set(aIOIShares);
  }

  public void set(quickfix.field.IOIid value)
  { setField(value); }
  public quickfix.field.IOIid get(quickfix.field.IOIid  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIid getIOIid() throws FieldNotFound
  { quickfix.field.IOIid value = new quickfix.field.IOIid();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIid field)
  { return isSetField(field); }
  public boolean isSetIOIid()
  { return isSetField(23); }
  public void set(quickfix.field.IOITransType value)
  { setField(value); }
  public quickfix.field.IOITransType get(quickfix.field.IOITransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOITransType getIOITransType() throws FieldNotFound
  { quickfix.field.IOITransType value = new quickfix.field.IOITransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOITransType field)
  { return isSetField(field); }
  public boolean isSetIOITransType()
  { return isSetField(28); }
  public void set(quickfix.field.IOIRefID value)
  { setField(value); }
  public quickfix.field.IOIRefID get(quickfix.field.IOIRefID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIRefID getIOIRefID() throws FieldNotFound
  { quickfix.field.IOIRefID value = new quickfix.field.IOIRefID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIRefID field)
  { return isSetField(field); }
  public boolean isSetIOIRefID()
  { return isSetField(26); }
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
  public void set(quickfix.field.Side value)
  { setField(value); }
  public quickfix.field.Side get(quickfix.field.Side  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Side getSide() throws FieldNotFound
  { quickfix.field.Side value = new quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }
  public void set(quickfix.field.IOIShares value)
  { setField(value); }
  public quickfix.field.IOIShares get(quickfix.field.IOIShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIShares getIOIShares() throws FieldNotFound
  { quickfix.field.IOIShares value = new quickfix.field.IOIShares();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIShares field)
  { return isSetField(field); }
  public boolean isSetIOIShares()
  { return isSetField(27); }
  public void set(quickfix.field.Price value)
  { setField(value); }
  public quickfix.field.Price get(quickfix.field.Price  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Price getPrice() throws FieldNotFound
  { quickfix.field.Price value = new quickfix.field.Price();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Price field)
  { return isSetField(field); }
  public boolean isSetPrice()
  { return isSetField(44); }
  public void set(quickfix.field.Currency value)
  { setField(value); }
  public quickfix.field.Currency get(quickfix.field.Currency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Currency getCurrency() throws FieldNotFound
  { quickfix.field.Currency value = new quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }
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
  public void set(quickfix.field.IOIQltyInd value)
  { setField(value); }
  public quickfix.field.IOIQltyInd get(quickfix.field.IOIQltyInd  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIQltyInd getIOIQltyInd() throws FieldNotFound
  { quickfix.field.IOIQltyInd value = new quickfix.field.IOIQltyInd();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIQltyInd field)
  { return isSetField(field); }
  public boolean isSetIOIQltyInd()
  { return isSetField(25); }
  public void set(quickfix.field.IOIOthSvc value)
  { setField(value); }
  public quickfix.field.IOIOthSvc get(quickfix.field.IOIOthSvc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIOthSvc getIOIOthSvc() throws FieldNotFound
  { quickfix.field.IOIOthSvc value = new quickfix.field.IOIOthSvc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIOthSvc field)
  { return isSetField(field); }
  public boolean isSetIOIOthSvc()
  { return isSetField(24); }
  public void set(quickfix.field.IOINaturalFlag value)
  { setField(value); }
  public quickfix.field.IOINaturalFlag get(quickfix.field.IOINaturalFlag  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOINaturalFlag getIOINaturalFlag() throws FieldNotFound
  { quickfix.field.IOINaturalFlag value = new quickfix.field.IOINaturalFlag();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOINaturalFlag field)
  { return isSetField(field); }
  public boolean isSetIOINaturalFlag()
  { return isSetField(130); }
  public void set(quickfix.field.Text value)
  { setField(value); }
  public quickfix.field.Text get(quickfix.field.Text  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Text getText() throws FieldNotFound
  { quickfix.field.Text value = new quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
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
  public void set(quickfix.field.URLLink value)
  { setField(value); }
  public quickfix.field.URLLink get(quickfix.field.URLLink  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.URLLink getURLLink() throws FieldNotFound
  { quickfix.field.URLLink value = new quickfix.field.URLLink();
    getField(value); return value; }
  public boolean isSet(quickfix.field.URLLink field)
  { return isSetField(field); }
  public boolean isSetURLLink()
  { return isSetField(149); }
  public void set(quickfix.field.NoIOIQualifiers value)
  { setField(value); }
  public quickfix.field.NoIOIQualifiers get(quickfix.field.NoIOIQualifiers  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoIOIQualifiers getNoIOIQualifiers() throws FieldNotFound
  { quickfix.field.NoIOIQualifiers value = new quickfix.field.NoIOIQualifiers();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoIOIQualifiers field)
  { return isSetField(field); }
  public boolean isSetNoIOIQualifiers()
  { return isSetField(199); }
  public static class NoIOIQualifiers extends Group {
    public NoIOIQualifiers() {
      super(199,104,
      new int[] {104,0 } ); }
  public void set(quickfix.field.IOIQualifier value)
  { setField(value); }
  public quickfix.field.IOIQualifier get(quickfix.field.IOIQualifier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.IOIQualifier getIOIQualifier() throws FieldNotFound
  { quickfix.field.IOIQualifier value = new quickfix.field.IOIQualifier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.IOIQualifier field)
  { return isSetField(field); }
  public boolean isSetIOIQualifier()
  { return isSetField(104); }
}
}

