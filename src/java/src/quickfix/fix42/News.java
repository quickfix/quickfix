package quickfix.fix42;
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
  public void set(quickfix.field.EncodedHeadlineLen value)
  { setField(value); }
  public quickfix.field.EncodedHeadlineLen get(quickfix.field.EncodedHeadlineLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedHeadlineLen getEncodedHeadlineLen() throws FieldNotFound
  { quickfix.field.EncodedHeadlineLen value = new quickfix.field.EncodedHeadlineLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedHeadlineLen field)
  { return isSetField(field); }
  public boolean isSetEncodedHeadlineLen()
  { return isSetField(358); }
  public void set(quickfix.field.EncodedHeadline value)
  { setField(value); }
  public quickfix.field.EncodedHeadline get(quickfix.field.EncodedHeadline  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedHeadline getEncodedHeadline() throws FieldNotFound
  { quickfix.field.EncodedHeadline value = new quickfix.field.EncodedHeadline();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedHeadline field)
  { return isSetField(field); }
  public boolean isSetEncodedHeadline()
  { return isSetField(359); }
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
  public void set(quickfix.field.NoRoutingIDs value)
  { setField(value); }
  public quickfix.field.NoRoutingIDs get(quickfix.field.NoRoutingIDs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoRoutingIDs getNoRoutingIDs() throws FieldNotFound
  { quickfix.field.NoRoutingIDs value = new quickfix.field.NoRoutingIDs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoRoutingIDs field)
  { return isSetField(field); }
  public boolean isSetNoRoutingIDs()
  { return isSetField(215); }
  public static class NoRoutingIDs extends Group {
    public NoRoutingIDs() {
      super(215,216,
      new int[] {216,217,0 } ); }
  public void set(quickfix.field.RoutingType value)
  { setField(value); }
  public quickfix.field.RoutingType get(quickfix.field.RoutingType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoutingType getRoutingType() throws FieldNotFound
  { quickfix.field.RoutingType value = new quickfix.field.RoutingType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoutingType field)
  { return isSetField(field); }
  public boolean isSetRoutingType()
  { return isSetField(216); }
  public void set(quickfix.field.RoutingID value)
  { setField(value); }
  public quickfix.field.RoutingID get(quickfix.field.RoutingID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RoutingID getRoutingID() throws FieldNotFound
  { quickfix.field.RoutingID value = new quickfix.field.RoutingID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RoutingID field)
  { return isSetField(field); }
  public boolean isSetRoutingID()
  { return isSetField(217); }
}
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
      new int[] {46,65,48,22,167,200,205,201,202,206,231,223,207,106,348,349,107,350,351,0 } ); }
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
  public void set(quickfix.field.ContractMultiplier value)
  { setField(value); }
  public quickfix.field.ContractMultiplier get(quickfix.field.ContractMultiplier  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ContractMultiplier getContractMultiplier() throws FieldNotFound
  { quickfix.field.ContractMultiplier value = new quickfix.field.ContractMultiplier();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ContractMultiplier field)
  { return isSetField(field); }
  public boolean isSetContractMultiplier()
  { return isSetField(231); }
  public void set(quickfix.field.CouponRate value)
  { setField(value); }
  public quickfix.field.CouponRate get(quickfix.field.CouponRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CouponRate getCouponRate() throws FieldNotFound
  { quickfix.field.CouponRate value = new quickfix.field.CouponRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CouponRate field)
  { return isSetField(field); }
  public boolean isSetCouponRate()
  { return isSetField(223); }
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
  public void set(quickfix.field.EncodedIssuerLen value)
  { setField(value); }
  public quickfix.field.EncodedIssuerLen get(quickfix.field.EncodedIssuerLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuerLen getEncodedIssuerLen() throws FieldNotFound
  { quickfix.field.EncodedIssuerLen value = new quickfix.field.EncodedIssuerLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuerLen field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuerLen()
  { return isSetField(348); }
  public void set(quickfix.field.EncodedIssuer value)
  { setField(value); }
  public quickfix.field.EncodedIssuer get(quickfix.field.EncodedIssuer  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedIssuer getEncodedIssuer() throws FieldNotFound
  { quickfix.field.EncodedIssuer value = new quickfix.field.EncodedIssuer();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedIssuer field)
  { return isSetField(field); }
  public boolean isSetEncodedIssuer()
  { return isSetField(349); }
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
  public void set(quickfix.field.EncodedSecurityDescLen value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDescLen get(quickfix.field.EncodedSecurityDescLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDescLen getEncodedSecurityDescLen() throws FieldNotFound
  { quickfix.field.EncodedSecurityDescLen value = new quickfix.field.EncodedSecurityDescLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDescLen field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDescLen()
  { return isSetField(350); }
  public void set(quickfix.field.EncodedSecurityDesc value)
  { setField(value); }
  public quickfix.field.EncodedSecurityDesc get(quickfix.field.EncodedSecurityDesc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedSecurityDesc getEncodedSecurityDesc() throws FieldNotFound
  { quickfix.field.EncodedSecurityDesc value = new quickfix.field.EncodedSecurityDesc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedSecurityDesc field)
  { return isSetField(field); }
  public boolean isSetEncodedSecurityDesc()
  { return isSetField(351); }
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
      new int[] {58,354,355,0 } ); }
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
  public void set(quickfix.field.EncodedTextLen value)
  { setField(value); }
  public quickfix.field.EncodedTextLen get(quickfix.field.EncodedTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound
  { quickfix.field.EncodedTextLen value = new quickfix.field.EncodedTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedTextLen()
  { return isSetField(354); }
  public void set(quickfix.field.EncodedText value)
  { setField(value); }
  public quickfix.field.EncodedText get(quickfix.field.EncodedText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedText getEncodedText() throws FieldNotFound
  { quickfix.field.EncodedText value = new quickfix.field.EncodedText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedText field)
  { return isSetField(field); }
  public boolean isSetEncodedText()
  { return isSetField(355); }
}
}

