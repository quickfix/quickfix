package quickfix.fix41;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class News extends Message
{
  public News()
  {
    getHeader().setField(new MsgType("B"));
  }
  public News(
    quickfix.field.Headline aHeadline ) {

    getHeader().setField(new MsgType("B"));
    set(aHeadline);
  }

  public void set(quickfix.field.OrigTime value)
  { setField(value); }
  public quickfix.field.OrigTime get(quickfix.field.OrigTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrigTime getOrigTime() throws FieldNotFound
  { quickfix.field.OrigTime value = new quickfix.field.OrigTime();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrigTime field)
  { return isSetField(field); }
  public boolean isSetOrigTime()
  { return isSetField(42); }
  public void set(quickfix.field.Urgency value)
  { setField(value); }
  public quickfix.field.Urgency get(quickfix.field.Urgency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Urgency getUrgency() throws FieldNotFound
  { quickfix.field.Urgency value = new quickfix.field.Urgency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Urgency field)
  { return isSetField(field); }
  public boolean isSetUrgency()
  { return isSetField(61); }
  public void set(quickfix.field.Headline value)
  { setField(value); }
  public quickfix.field.Headline get(quickfix.field.Headline  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Headline getHeadline() throws FieldNotFound
  { quickfix.field.Headline value = new quickfix.field.Headline();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Headline field)
  { return isSetField(field); }
  public boolean isSetHeadline()
  { return isSetField(148); }
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
  public void set(quickfix.field.RawDataLength value)
  { setField(value); }
  public quickfix.field.RawDataLength get(quickfix.field.RawDataLength  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { quickfix.field.RawDataLength value = new quickfix.field.RawDataLength();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawDataLength field)
  { return isSetField(field); }
  public boolean isSetRawDataLength()
  { return isSetField(95); }
  public void set(quickfix.field.RawData value)
  { setField(value); }
  public quickfix.field.RawData get(quickfix.field.RawData  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RawData getRawData() throws FieldNotFound
  { quickfix.field.RawData value = new quickfix.field.RawData();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RawData field)
  { return isSetField(field); }
  public boolean isSetRawData()
  { return isSetField(96); }
  public void set(quickfix.field.NoRelatedSym value)
  { setField(value); }
  public quickfix.field.NoRelatedSym get(quickfix.field.NoRelatedSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { quickfix.field.NoRelatedSym value = new quickfix.field.NoRelatedSym();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRelatedSym field)
  { return isSetField(field); }
  public boolean isSetNoRelatedSym()
  { return isSetField(146); }
  public static class NoRelatedSym extends Group {
    public NoRelatedSym() {
      super(146,46,
      new int[] {46,65,48,22,167,200,205,201,202,206,207,106,107,0 } ); }
  public void set(quickfix.field.RelatdSym value)
  { setField(value); }
  public quickfix.field.RelatdSym get(quickfix.field.RelatdSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound
  { quickfix.field.RelatdSym value = new quickfix.field.RelatdSym();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RelatdSym field)
  { return isSetField(field); }
  public boolean isSetRelatdSym()
  { return isSetField(46); }
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
}
  public void set(quickfix.field.LinesOfText value)
  { setField(value); }
  public quickfix.field.LinesOfText get(quickfix.field.LinesOfText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound
  { quickfix.field.LinesOfText value = new quickfix.field.LinesOfText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LinesOfText field)
  { return isSetField(field); }
  public boolean isSetLinesOfText()
  { return isSetField(33); }
  public static class LinesOfText extends Group {
    public LinesOfText() {
      super(33,58,
      new int[] {58,0 } ); }
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
}
}

