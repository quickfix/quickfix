package quickfix.fix42;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class SecurityStatus extends Message
{
  public SecurityStatus()
  {
    getHeader().setField(new MsgType("f"));
  }
  public SecurityStatus(
    quickfix.field.Symbol aSymbol ) {

    getHeader().setField(new MsgType("f"));
    set(aSymbol);
  }

  public void set(quickfix.field.SecurityStatusReqID value)
  { setField(value); }
  public quickfix.field.SecurityStatusReqID get(quickfix.field.SecurityStatusReqID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityStatusReqID getSecurityStatusReqID() throws FieldNotFound
  { quickfix.field.SecurityStatusReqID value = new quickfix.field.SecurityStatusReqID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityStatusReqID field)
  { return isSetField(field); }
  public boolean isSetSecurityStatusReqID()
  { return isSetField(324); }
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
  public void set(quickfix.field.TradingSessionID value)
  { setField(value); }
  public quickfix.field.TradingSessionID get(quickfix.field.TradingSessionID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradingSessionID getTradingSessionID() throws FieldNotFound
  { quickfix.field.TradingSessionID value = new quickfix.field.TradingSessionID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradingSessionID field)
  { return isSetField(field); }
  public boolean isSetTradingSessionID()
  { return isSetField(336); }
  public void set(quickfix.field.UnsolicitedIndicator value)
  { setField(value); }
  public quickfix.field.UnsolicitedIndicator get(quickfix.field.UnsolicitedIndicator  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.UnsolicitedIndicator getUnsolicitedIndicator() throws FieldNotFound
  { quickfix.field.UnsolicitedIndicator value = new quickfix.field.UnsolicitedIndicator();
    getField(value); return value; }
  public boolean isSet(quickfix.field.UnsolicitedIndicator field)
  { return isSetField(field); }
  public boolean isSetUnsolicitedIndicator()
  { return isSetField(325); }
  public void set(quickfix.field.SecurityTradingStatus value)
  { setField(value); }
  public quickfix.field.SecurityTradingStatus get(quickfix.field.SecurityTradingStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecurityTradingStatus getSecurityTradingStatus() throws FieldNotFound
  { quickfix.field.SecurityTradingStatus value = new quickfix.field.SecurityTradingStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecurityTradingStatus field)
  { return isSetField(field); }
  public boolean isSetSecurityTradingStatus()
  { return isSetField(326); }
  public void set(quickfix.field.FinancialStatus value)
  { setField(value); }
  public quickfix.field.FinancialStatus get(quickfix.field.FinancialStatus  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.FinancialStatus getFinancialStatus() throws FieldNotFound
  { quickfix.field.FinancialStatus value = new quickfix.field.FinancialStatus();
    getField(value); return value; }
  public boolean isSet(quickfix.field.FinancialStatus field)
  { return isSetField(field); }
  public boolean isSetFinancialStatus()
  { return isSetField(291); }
  public void set(quickfix.field.CorporateAction value)
  { setField(value); }
  public quickfix.field.CorporateAction get(quickfix.field.CorporateAction  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CorporateAction getCorporateAction() throws FieldNotFound
  { quickfix.field.CorporateAction value = new quickfix.field.CorporateAction();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CorporateAction field)
  { return isSetField(field); }
  public boolean isSetCorporateAction()
  { return isSetField(292); }
  public void set(quickfix.field.HaltReason value)
  { setField(value); }
  public quickfix.field.HaltReason get(quickfix.field.HaltReason  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.HaltReason getHaltReason() throws FieldNotFound
  { quickfix.field.HaltReason value = new quickfix.field.HaltReason();
    getField(value); return value; }
  public boolean isSet(quickfix.field.HaltReason field)
  { return isSetField(field); }
  public boolean isSetHaltReason()
  { return isSetField(327); }
  public void set(quickfix.field.InViewOfCommon value)
  { setField(value); }
  public quickfix.field.InViewOfCommon get(quickfix.field.InViewOfCommon  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.InViewOfCommon getInViewOfCommon() throws FieldNotFound
  { quickfix.field.InViewOfCommon value = new quickfix.field.InViewOfCommon();
    getField(value); return value; }
  public boolean isSet(quickfix.field.InViewOfCommon field)
  { return isSetField(field); }
  public boolean isSetInViewOfCommon()
  { return isSetField(328); }
  public void set(quickfix.field.DueToRelated value)
  { setField(value); }
  public quickfix.field.DueToRelated get(quickfix.field.DueToRelated  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.DueToRelated getDueToRelated() throws FieldNotFound
  { quickfix.field.DueToRelated value = new quickfix.field.DueToRelated();
    getField(value); return value; }
  public boolean isSet(quickfix.field.DueToRelated field)
  { return isSetField(field); }
  public boolean isSetDueToRelated()
  { return isSetField(329); }
  public void set(quickfix.field.BuyVolume value)
  { setField(value); }
  public quickfix.field.BuyVolume get(quickfix.field.BuyVolume  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BuyVolume getBuyVolume() throws FieldNotFound
  { quickfix.field.BuyVolume value = new quickfix.field.BuyVolume();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BuyVolume field)
  { return isSetField(field); }
  public boolean isSetBuyVolume()
  { return isSetField(330); }
  public void set(quickfix.field.SellVolume value)
  { setField(value); }
  public quickfix.field.SellVolume get(quickfix.field.SellVolume  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SellVolume getSellVolume() throws FieldNotFound
  { quickfix.field.SellVolume value = new quickfix.field.SellVolume();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SellVolume field)
  { return isSetField(field); }
  public boolean isSetSellVolume()
  { return isSetField(331); }
  public void set(quickfix.field.HighPx value)
  { setField(value); }
  public quickfix.field.HighPx get(quickfix.field.HighPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.HighPx getHighPx() throws FieldNotFound
  { quickfix.field.HighPx value = new quickfix.field.HighPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.HighPx field)
  { return isSetField(field); }
  public boolean isSetHighPx()
  { return isSetField(332); }
  public void set(quickfix.field.LowPx value)
  { setField(value); }
  public quickfix.field.LowPx get(quickfix.field.LowPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LowPx getLowPx() throws FieldNotFound
  { quickfix.field.LowPx value = new quickfix.field.LowPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LowPx field)
  { return isSetField(field); }
  public boolean isSetLowPx()
  { return isSetField(333); }
  public void set(quickfix.field.LastPx value)
  { setField(value); }
  public quickfix.field.LastPx get(quickfix.field.LastPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastPx getLastPx() throws FieldNotFound
  { quickfix.field.LastPx value = new quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }
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
  public void set(quickfix.field.Adjustment value)
  { setField(value); }
  public quickfix.field.Adjustment get(quickfix.field.Adjustment  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Adjustment getAdjustment() throws FieldNotFound
  { quickfix.field.Adjustment value = new quickfix.field.Adjustment();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Adjustment field)
  { return isSetField(field); }
  public boolean isSetAdjustment()
  { return isSetField(334); }
}

