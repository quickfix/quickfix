package org.quickfix.fix41;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class News extends Message
{
  public News()
  {
    getHeader().setField(new MsgType("B"));
  }
  public News(
    org.quickfix.field.Headline aHeadline ) {

    getHeader().setField(new MsgType("B"));
    set(aHeadline);
  }

  public void set(org.quickfix.field.OrigTime value)
  { setField(value); }
  public org.quickfix.field.OrigTime get(org.quickfix.field.OrigTime  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrigTime getOrigTime() throws FieldNotFound
  { org.quickfix.field.OrigTime value = new org.quickfix.field.OrigTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrigTime field)
  { return isSetField(field); }
  public boolean isSetOrigTime()
  { return isSetField(42); }
  public void set(org.quickfix.field.Urgency value)
  { setField(value); }
  public org.quickfix.field.Urgency get(org.quickfix.field.Urgency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Urgency getUrgency() throws FieldNotFound
  { org.quickfix.field.Urgency value = new org.quickfix.field.Urgency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Urgency field)
  { return isSetField(field); }
  public boolean isSetUrgency()
  { return isSetField(61); }
  public void set(org.quickfix.field.Headline value)
  { setField(value); }
  public org.quickfix.field.Headline get(org.quickfix.field.Headline  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Headline getHeadline() throws FieldNotFound
  { org.quickfix.field.Headline value = new org.quickfix.field.Headline();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Headline field)
  { return isSetField(field); }
  public boolean isSetHeadline()
  { return isSetField(148); }
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
  public void set(org.quickfix.field.RawDataLength value)
  { setField(value); }
  public org.quickfix.field.RawDataLength get(org.quickfix.field.RawDataLength  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RawDataLength getRawDataLength() throws FieldNotFound
  { org.quickfix.field.RawDataLength value = new org.quickfix.field.RawDataLength();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RawDataLength field)
  { return isSetField(field); }
  public boolean isSetRawDataLength()
  { return isSetField(95); }
  public void set(org.quickfix.field.RawData value)
  { setField(value); }
  public org.quickfix.field.RawData get(org.quickfix.field.RawData  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RawData getRawData() throws FieldNotFound
  { org.quickfix.field.RawData value = new org.quickfix.field.RawData();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RawData field)
  { return isSetField(field); }
  public boolean isSetRawData()
  { return isSetField(96); }
  public void set(org.quickfix.field.NoRelatedSym value)
  { setField(value); }
  public org.quickfix.field.NoRelatedSym get(org.quickfix.field.NoRelatedSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoRelatedSym getNoRelatedSym() throws FieldNotFound
  { org.quickfix.field.NoRelatedSym value = new org.quickfix.field.NoRelatedSym();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoRelatedSym field)
  { return isSetField(field); }
  public boolean isSetNoRelatedSym()
  { return isSetField(146); }
  public static class NoRelatedSym extends Group {
    public NoRelatedSym() {
      super(146,46,
      new int[] {46,65,48,22,167,200,205,201,202,206,207,106,107,0 } ); }
  public void set(org.quickfix.field.RelatdSym value)
  { setField(value); }
  public org.quickfix.field.RelatdSym get(org.quickfix.field.RelatdSym  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RelatdSym getRelatdSym() throws FieldNotFound
  { org.quickfix.field.RelatdSym value = new org.quickfix.field.RelatdSym();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RelatdSym field)
  { return isSetField(field); }
  public boolean isSetRelatdSym()
  { return isSetField(46); }
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
}
  public void set(org.quickfix.field.LinesOfText value)
  { setField(value); }
  public org.quickfix.field.LinesOfText get(org.quickfix.field.LinesOfText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LinesOfText getLinesOfText() throws FieldNotFound
  { org.quickfix.field.LinesOfText value = new org.quickfix.field.LinesOfText();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LinesOfText field)
  { return isSetField(field); }
  public boolean isSetLinesOfText()
  { return isSetField(33); }
  public static class LinesOfText extends Group {
    public LinesOfText() {
      super(33,58,
      new int[] {58,0 } ); }
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
}
}

