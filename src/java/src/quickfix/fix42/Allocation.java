package quickfix.fix42;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Allocation extends Message
{
  public Allocation()
  {
    getHeader().setField(new MsgType("J"));
  }
  public Allocation(
    quickfix.field.AllocID aAllocID,
    quickfix.field.AllocTransType aAllocTransType,
    quickfix.field.Side aSide,
    quickfix.field.Symbol aSymbol,
    quickfix.field.Shares aShares,
    quickfix.field.AvgPx aAvgPx,
    quickfix.field.TradeDate aTradeDate ) {

    getHeader().setField(new MsgType("J"));
    set(aAllocID);
    set(aAllocTransType);
    set(aSide);
    set(aSymbol);
    set(aShares);
    set(aAvgPx);
    set(aTradeDate);
  }

  public void set(quickfix.field.AllocID value)
  { setField(value); }
  public quickfix.field.AllocID get(quickfix.field.AllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocID getAllocID() throws FieldNotFound
  { quickfix.field.AllocID value = new quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }
  public void set(quickfix.field.AllocTransType value)
  { setField(value); }
  public quickfix.field.AllocTransType get(quickfix.field.AllocTransType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocTransType getAllocTransType() throws FieldNotFound
  { quickfix.field.AllocTransType value = new quickfix.field.AllocTransType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocTransType field)
  { return isSetField(field); }
  public boolean isSetAllocTransType()
  { return isSetField(71); }
  public void set(quickfix.field.RefAllocID value)
  { setField(value); }
  public quickfix.field.RefAllocID get(quickfix.field.RefAllocID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.RefAllocID getRefAllocID() throws FieldNotFound
  { quickfix.field.RefAllocID value = new quickfix.field.RefAllocID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.RefAllocID field)
  { return isSetField(field); }
  public boolean isSetRefAllocID()
  { return isSetField(72); }
  public void set(quickfix.field.AllocLinkID value)
  { setField(value); }
  public quickfix.field.AllocLinkID get(quickfix.field.AllocLinkID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocLinkID getAllocLinkID() throws FieldNotFound
  { quickfix.field.AllocLinkID value = new quickfix.field.AllocLinkID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocLinkID field)
  { return isSetField(field); }
  public boolean isSetAllocLinkID()
  { return isSetField(196); }
  public void set(quickfix.field.AllocLinkType value)
  { setField(value); }
  public quickfix.field.AllocLinkType get(quickfix.field.AllocLinkType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocLinkType getAllocLinkType() throws FieldNotFound
  { quickfix.field.AllocLinkType value = new quickfix.field.AllocLinkType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocLinkType field)
  { return isSetField(field); }
  public boolean isSetAllocLinkType()
  { return isSetField(197); }
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
  public void set(quickfix.field.Shares value)
  { setField(value); }
  public quickfix.field.Shares get(quickfix.field.Shares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Shares getShares() throws FieldNotFound
  { quickfix.field.Shares value = new quickfix.field.Shares();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Shares field)
  { return isSetField(field); }
  public boolean isSetShares()
  { return isSetField(53); }
  public void set(quickfix.field.LastMkt value)
  { setField(value); }
  public quickfix.field.LastMkt get(quickfix.field.LastMkt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { quickfix.field.LastMkt value = new quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }
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
  public void set(quickfix.field.AvgPx value)
  { setField(value); }
  public quickfix.field.AvgPx get(quickfix.field.AvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { quickfix.field.AvgPx value = new quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }
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
  public void set(quickfix.field.AvgPrxPrecision value)
  { setField(value); }
  public quickfix.field.AvgPrxPrecision get(quickfix.field.AvgPrxPrecision  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AvgPrxPrecision getAvgPrxPrecision() throws FieldNotFound
  { quickfix.field.AvgPrxPrecision value = new quickfix.field.AvgPrxPrecision();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AvgPrxPrecision field)
  { return isSetField(field); }
  public boolean isSetAvgPrxPrecision()
  { return isSetField(74); }
  public void set(quickfix.field.TradeDate value)
  { setField(value); }
  public quickfix.field.TradeDate get(quickfix.field.TradeDate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { quickfix.field.TradeDate value = new quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }
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
  public void set(quickfix.field.SettlmntTyp value)
  { setField(value); }
  public quickfix.field.SettlmntTyp get(quickfix.field.SettlmntTyp  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { quickfix.field.SettlmntTyp value = new quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }
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
  public void set(quickfix.field.GrossTradeAmt value)
  { setField(value); }
  public quickfix.field.GrossTradeAmt get(quickfix.field.GrossTradeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.GrossTradeAmt getGrossTradeAmt() throws FieldNotFound
  { quickfix.field.GrossTradeAmt value = new quickfix.field.GrossTradeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.GrossTradeAmt field)
  { return isSetField(field); }
  public boolean isSetGrossTradeAmt()
  { return isSetField(381); }
  public void set(quickfix.field.NetMoney value)
  { setField(value); }
  public quickfix.field.NetMoney get(quickfix.field.NetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { quickfix.field.NetMoney value = new quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(quickfix.field.OpenClose value)
  { setField(value); }
  public quickfix.field.OpenClose get(quickfix.field.OpenClose  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OpenClose getOpenClose() throws FieldNotFound
  { quickfix.field.OpenClose value = new quickfix.field.OpenClose();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OpenClose field)
  { return isSetField(field); }
  public boolean isSetOpenClose()
  { return isSetField(77); }
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
  public void set(quickfix.field.NumDaysInterest value)
  { setField(value); }
  public quickfix.field.NumDaysInterest get(quickfix.field.NumDaysInterest  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NumDaysInterest getNumDaysInterest() throws FieldNotFound
  { quickfix.field.NumDaysInterest value = new quickfix.field.NumDaysInterest();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NumDaysInterest field)
  { return isSetField(field); }
  public boolean isSetNumDaysInterest()
  { return isSetField(157); }
  public void set(quickfix.field.AccruedInterestRate value)
  { setField(value); }
  public quickfix.field.AccruedInterestRate get(quickfix.field.AccruedInterestRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestRate getAccruedInterestRate() throws FieldNotFound
  { quickfix.field.AccruedInterestRate value = new quickfix.field.AccruedInterestRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestRate field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestRate()
  { return isSetField(158); }
  public void set(quickfix.field.NoOrders value)
  { setField(value); }
  public quickfix.field.NoOrders get(quickfix.field.NoOrders  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { quickfix.field.NoOrders value = new quickfix.field.NoOrders();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoOrders field)
  { return isSetField(field); }
  public boolean isSetNoOrders()
  { return isSetField(73); }
  public static class NoOrders extends Group {
    public NoOrders() {
      super(73,11,
      new int[] {11,37,198,66,105,0 } ); }
  public void set(quickfix.field.ClOrdID value)
  { setField(value); }
  public quickfix.field.ClOrdID get(quickfix.field.ClOrdID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { quickfix.field.ClOrdID value = new quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }
  public void set(quickfix.field.OrderID value)
  { setField(value); }
  public quickfix.field.OrderID get(quickfix.field.OrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.OrderID getOrderID() throws FieldNotFound
  { quickfix.field.OrderID value = new quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }
  public void set(quickfix.field.SecondaryOrderID value)
  { setField(value); }
  public quickfix.field.SecondaryOrderID get(quickfix.field.SecondaryOrderID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SecondaryOrderID getSecondaryOrderID() throws FieldNotFound
  { quickfix.field.SecondaryOrderID value = new quickfix.field.SecondaryOrderID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SecondaryOrderID field)
  { return isSetField(field); }
  public boolean isSetSecondaryOrderID()
  { return isSetField(198); }
  public void set(quickfix.field.ListID value)
  { setField(value); }
  public quickfix.field.ListID get(quickfix.field.ListID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ListID getListID() throws FieldNotFound
  { quickfix.field.ListID value = new quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }
  public void set(quickfix.field.WaveNo value)
  { setField(value); }
  public quickfix.field.WaveNo get(quickfix.field.WaveNo  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.WaveNo getWaveNo() throws FieldNotFound
  { quickfix.field.WaveNo value = new quickfix.field.WaveNo();
    getField(value); return value; }
  public boolean isSet(quickfix.field.WaveNo field)
  { return isSetField(field); }
  public boolean isSetWaveNo()
  { return isSetField(105); }
}
  public void set(quickfix.field.NoExecs value)
  { setField(value); }
  public quickfix.field.NoExecs get(quickfix.field.NoExecs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoExecs getNoExecs() throws FieldNotFound
  { quickfix.field.NoExecs value = new quickfix.field.NoExecs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoExecs field)
  { return isSetField(field); }
  public boolean isSetNoExecs()
  { return isSetField(124); }
  public static class NoExecs extends Group {
    public NoExecs() {
      super(124,32,
      new int[] {32,17,31,29,0 } ); }
  public void set(quickfix.field.LastShares value)
  { setField(value); }
  public quickfix.field.LastShares get(quickfix.field.LastShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastShares getLastShares() throws FieldNotFound
  { quickfix.field.LastShares value = new quickfix.field.LastShares();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastShares field)
  { return isSetField(field); }
  public boolean isSetLastShares()
  { return isSetField(32); }
  public void set(quickfix.field.ExecID value)
  { setField(value); }
  public quickfix.field.ExecID get(quickfix.field.ExecID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecID getExecID() throws FieldNotFound
  { quickfix.field.ExecID value = new quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }
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
  public void set(quickfix.field.LastCapacity value)
  { setField(value); }
  public quickfix.field.LastCapacity get(quickfix.field.LastCapacity  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.LastCapacity getLastCapacity() throws FieldNotFound
  { quickfix.field.LastCapacity value = new quickfix.field.LastCapacity();
    getField(value); return value; }
  public boolean isSet(quickfix.field.LastCapacity field)
  { return isSetField(field); }
  public boolean isSetLastCapacity()
  { return isSetField(29); }
}
  public void set(quickfix.field.NoAllocs value)
  { setField(value); }
  public quickfix.field.NoAllocs get(quickfix.field.NoAllocs  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { quickfix.field.NoAllocs value = new quickfix.field.NoAllocs();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoAllocs field)
  { return isSetField(field); }
  public boolean isSetNoAllocs()
  { return isSetField(78); }
  public static class NoAllocs extends Group {
    public NoAllocs() {
      super(78,79,
      new int[] {79,366,80,81,92,208,209,161,360,361,76,109,12,13,153,154,119,120,155,156,159,160,136,0 } ); }
  public void set(quickfix.field.AllocAccount value)
  { setField(value); }
  public quickfix.field.AllocAccount get(quickfix.field.AllocAccount  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { quickfix.field.AllocAccount value = new quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }
  public void set(quickfix.field.AllocPrice value)
  { setField(value); }
  public quickfix.field.AllocPrice get(quickfix.field.AllocPrice  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocPrice getAllocPrice() throws FieldNotFound
  { quickfix.field.AllocPrice value = new quickfix.field.AllocPrice();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocPrice field)
  { return isSetField(field); }
  public boolean isSetAllocPrice()
  { return isSetField(366); }
  public void set(quickfix.field.AllocShares value)
  { setField(value); }
  public quickfix.field.AllocShares get(quickfix.field.AllocShares  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocShares getAllocShares() throws FieldNotFound
  { quickfix.field.AllocShares value = new quickfix.field.AllocShares();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocShares field)
  { return isSetField(field); }
  public boolean isSetAllocShares()
  { return isSetField(80); }
  public void set(quickfix.field.ProcessCode value)
  { setField(value); }
  public quickfix.field.ProcessCode get(quickfix.field.ProcessCode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { quickfix.field.ProcessCode value = new quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }
  public void set(quickfix.field.BrokerOfCredit value)
  { setField(value); }
  public quickfix.field.BrokerOfCredit get(quickfix.field.BrokerOfCredit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.BrokerOfCredit getBrokerOfCredit() throws FieldNotFound
  { quickfix.field.BrokerOfCredit value = new quickfix.field.BrokerOfCredit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.BrokerOfCredit field)
  { return isSetField(field); }
  public boolean isSetBrokerOfCredit()
  { return isSetField(92); }
  public void set(quickfix.field.NotifyBrokerOfCredit value)
  { setField(value); }
  public quickfix.field.NotifyBrokerOfCredit get(quickfix.field.NotifyBrokerOfCredit  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NotifyBrokerOfCredit getNotifyBrokerOfCredit() throws FieldNotFound
  { quickfix.field.NotifyBrokerOfCredit value = new quickfix.field.NotifyBrokerOfCredit();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NotifyBrokerOfCredit field)
  { return isSetField(field); }
  public boolean isSetNotifyBrokerOfCredit()
  { return isSetField(208); }
  public void set(quickfix.field.AllocHandlInst value)
  { setField(value); }
  public quickfix.field.AllocHandlInst get(quickfix.field.AllocHandlInst  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocHandlInst getAllocHandlInst() throws FieldNotFound
  { quickfix.field.AllocHandlInst value = new quickfix.field.AllocHandlInst();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocHandlInst field)
  { return isSetField(field); }
  public boolean isSetAllocHandlInst()
  { return isSetField(209); }
  public void set(quickfix.field.AllocText value)
  { setField(value); }
  public quickfix.field.AllocText get(quickfix.field.AllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocText getAllocText() throws FieldNotFound
  { quickfix.field.AllocText value = new quickfix.field.AllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocText field)
  { return isSetField(field); }
  public boolean isSetAllocText()
  { return isSetField(161); }
  public void set(quickfix.field.EncodedAllocTextLen value)
  { setField(value); }
  public quickfix.field.EncodedAllocTextLen get(quickfix.field.EncodedAllocTextLen  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocTextLen getEncodedAllocTextLen() throws FieldNotFound
  { quickfix.field.EncodedAllocTextLen value = new quickfix.field.EncodedAllocTextLen();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocTextLen field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocTextLen()
  { return isSetField(360); }
  public void set(quickfix.field.EncodedAllocText value)
  { setField(value); }
  public quickfix.field.EncodedAllocText get(quickfix.field.EncodedAllocText  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.EncodedAllocText getEncodedAllocText() throws FieldNotFound
  { quickfix.field.EncodedAllocText value = new quickfix.field.EncodedAllocText();
    getField(value); return value; }
  public boolean isSet(quickfix.field.EncodedAllocText field)
  { return isSetField(field); }
  public boolean isSetEncodedAllocText()
  { return isSetField(361); }
  public void set(quickfix.field.ExecBroker value)
  { setField(value); }
  public quickfix.field.ExecBroker get(quickfix.field.ExecBroker  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { quickfix.field.ExecBroker value = new quickfix.field.ExecBroker();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ExecBroker field)
  { return isSetField(field); }
  public boolean isSetExecBroker()
  { return isSetField(76); }
  public void set(quickfix.field.ClientID value)
  { setField(value); }
  public quickfix.field.ClientID get(quickfix.field.ClientID  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.ClientID getClientID() throws FieldNotFound
  { quickfix.field.ClientID value = new quickfix.field.ClientID();
    getField(value); return value; }
  public boolean isSet(quickfix.field.ClientID field)
  { return isSetField(field); }
  public boolean isSetClientID()
  { return isSetField(109); }
  public void set(quickfix.field.Commission value)
  { setField(value); }
  public quickfix.field.Commission get(quickfix.field.Commission  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.Commission getCommission() throws FieldNotFound
  { quickfix.field.Commission value = new quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }
  public void set(quickfix.field.CommType value)
  { setField(value); }
  public quickfix.field.CommType get(quickfix.field.CommType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.CommType getCommType() throws FieldNotFound
  { quickfix.field.CommType value = new quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }
  public void set(quickfix.field.AllocAvgPx value)
  { setField(value); }
  public quickfix.field.AllocAvgPx get(quickfix.field.AllocAvgPx  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocAvgPx getAllocAvgPx() throws FieldNotFound
  { quickfix.field.AllocAvgPx value = new quickfix.field.AllocAvgPx();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocAvgPx field)
  { return isSetField(field); }
  public boolean isSetAllocAvgPx()
  { return isSetField(153); }
  public void set(quickfix.field.AllocNetMoney value)
  { setField(value); }
  public quickfix.field.AllocNetMoney get(quickfix.field.AllocNetMoney  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AllocNetMoney getAllocNetMoney() throws FieldNotFound
  { quickfix.field.AllocNetMoney value = new quickfix.field.AllocNetMoney();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AllocNetMoney field)
  { return isSetField(field); }
  public boolean isSetAllocNetMoney()
  { return isSetField(154); }
  public void set(quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public quickfix.field.SettlCurrAmt get(quickfix.field.SettlCurrAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { quickfix.field.SettlCurrAmt value = new quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }
  public void set(quickfix.field.SettlCurrency value)
  { setField(value); }
  public quickfix.field.SettlCurrency get(quickfix.field.SettlCurrency  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { quickfix.field.SettlCurrency value = new quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }
  public void set(quickfix.field.SettlCurrFxRate value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRate get(quickfix.field.SettlCurrFxRate  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRate getSettlCurrFxRate() throws FieldNotFound
  { quickfix.field.SettlCurrFxRate value = new quickfix.field.SettlCurrFxRate();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRate field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRate()
  { return isSetField(155); }
  public void set(quickfix.field.SettlCurrFxRateCalc value)
  { setField(value); }
  public quickfix.field.SettlCurrFxRateCalc get(quickfix.field.SettlCurrFxRateCalc  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlCurrFxRateCalc getSettlCurrFxRateCalc() throws FieldNotFound
  { quickfix.field.SettlCurrFxRateCalc value = new quickfix.field.SettlCurrFxRateCalc();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlCurrFxRateCalc field)
  { return isSetField(field); }
  public boolean isSetSettlCurrFxRateCalc()
  { return isSetField(156); }
  public void set(quickfix.field.AccruedInterestAmt value)
  { setField(value); }
  public quickfix.field.AccruedInterestAmt get(quickfix.field.AccruedInterestAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.AccruedInterestAmt getAccruedInterestAmt() throws FieldNotFound
  { quickfix.field.AccruedInterestAmt value = new quickfix.field.AccruedInterestAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.AccruedInterestAmt field)
  { return isSetField(field); }
  public boolean isSetAccruedInterestAmt()
  { return isSetField(159); }
  public void set(quickfix.field.SettlInstMode value)
  { setField(value); }
  public quickfix.field.SettlInstMode get(quickfix.field.SettlInstMode  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.SettlInstMode getSettlInstMode() throws FieldNotFound
  { quickfix.field.SettlInstMode value = new quickfix.field.SettlInstMode();
    getField(value); return value; }
  public boolean isSet(quickfix.field.SettlInstMode field)
  { return isSetField(field); }
  public boolean isSetSettlInstMode()
  { return isSetField(160); }
  public void set(quickfix.field.NoMiscFees value)
  { setField(value); }
  public quickfix.field.NoMiscFees get(quickfix.field.NoMiscFees  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { quickfix.field.NoMiscFees value = new quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }
  public static class NoMiscFees extends Group {
    public NoMiscFees() {
      super(136,137,
      new int[] {137,138,139,0 } ); }
  public void set(quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public quickfix.field.MiscFeeAmt get(quickfix.field.MiscFeeAmt  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { quickfix.field.MiscFeeAmt value = new quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }
  public void set(quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public quickfix.field.MiscFeeCurr get(quickfix.field.MiscFeeCurr  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { quickfix.field.MiscFeeCurr value = new quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }
  public void set(quickfix.field.MiscFeeType value)
  { setField(value); }
  public quickfix.field.MiscFeeType get(quickfix.field.MiscFeeType  value)
    throws FieldNotFound
  { getField(value); return value; }
  public quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { quickfix.field.MiscFeeType value = new quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }
}
}
}

