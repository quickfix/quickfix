package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Allocation extends Message
{

  public Allocation()
  {
    getHeader().setField(new MsgType("J"));
  }
  public Allocation(
    org.quickfix.field.AllocID aAllocID,
    org.quickfix.field.AllocTransType aAllocTransType,
    org.quickfix.field.Side aSide,
    org.quickfix.field.Symbol aSymbol,
    org.quickfix.field.Shares aShares,
    org.quickfix.field.AvgPx aAvgPx,
    org.quickfix.field.TradeDate aTradeDate )
  {
    getHeader().setField(new MsgType("J"));
    set(aAllocID);
    set(aAllocTransType);
    set(aSide);
    set(aSymbol);
    set(aShares);
    set(aAvgPx);
    set(aTradeDate);
  }

  public void set(org.quickfix.field.AllocID value)
  { setField(value); }
  public org.quickfix.field.AllocID get(org.quickfix.field.AllocID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocID getAllocID() throws FieldNotFound
  { org.quickfix.field.AllocID value = new org.quickfix.field.AllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocID field)
  { return isSetField(field); }
  public boolean isSetAllocID()
  { return isSetField(70); }

  public void set(org.quickfix.field.AllocTransType value)
  { setField(value); }
  public org.quickfix.field.AllocTransType get(org.quickfix.field.AllocTransType value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocTransType getAllocTransType() throws FieldNotFound
  { org.quickfix.field.AllocTransType value = new org.quickfix.field.AllocTransType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocTransType field)
  { return isSetField(field); }
  public boolean isSetAllocTransType()
  { return isSetField(71); }

  public void set(org.quickfix.field.RefAllocID value)
  { setField(value); }
  public org.quickfix.field.RefAllocID get(org.quickfix.field.RefAllocID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.RefAllocID getRefAllocID() throws FieldNotFound
  { org.quickfix.field.RefAllocID value = new org.quickfix.field.RefAllocID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.RefAllocID field)
  { return isSetField(field); }
  public boolean isSetRefAllocID()
  { return isSetField(72); }
  public void set(org.quickfix.field.NoOrders value)
  { setField(value); }
  public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound
  { org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoOrders field)
  { return isSetField(field); }
  public boolean isSetNoOrders()
  { return isSetField(73); }

public static class NoOrders extends Group {
  public NoOrders() {
    super(73, 11,
    new int[] {
               11,
               37,
               66,
               105,
               0 }
);
  }
  public void set(org.quickfix.field.ClOrdID value)
  { setField(value); }
  public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound
  { org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClOrdID field)
  { return isSetField(field); }
  public boolean isSetClOrdID()
  { return isSetField(11); }

  public void set(org.quickfix.field.OrderID value)
  { setField(value); }
  public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OrderID getOrderID() throws FieldNotFound
  { org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OrderID field)
  { return isSetField(field); }
  public boolean isSetOrderID()
  { return isSetField(37); }

  public void set(org.quickfix.field.ListID value)
  { setField(value); }
  public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ListID getListID() throws FieldNotFound
  { org.quickfix.field.ListID value = new org.quickfix.field.ListID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ListID field)
  { return isSetField(field); }
  public boolean isSetListID()
  { return isSetField(66); }

  public void set(org.quickfix.field.WaveNo value)
  { setField(value); }
  public org.quickfix.field.WaveNo get(org.quickfix.field.WaveNo value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.WaveNo getWaveNo() throws FieldNotFound
  { org.quickfix.field.WaveNo value = new org.quickfix.field.WaveNo();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.WaveNo field)
  { return isSetField(field); }
  public boolean isSetWaveNo()
  { return isSetField(105); }

}
  public void set(org.quickfix.field.NoExecs value)
  { setField(value); }
  public org.quickfix.field.NoExecs get(org.quickfix.field.NoExecs value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoExecs getNoExecs() throws FieldNotFound
  { org.quickfix.field.NoExecs value = new org.quickfix.field.NoExecs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoExecs field)
  { return isSetField(field); }
  public boolean isSetNoExecs()
  { return isSetField(124); }

public static class NoExecs extends Group {
  public NoExecs() {
    super(124, 17,
    new int[] {
               17,
               32,
               31,
               30,
               0 }
);
  }
  public void set(org.quickfix.field.ExecID value)
  { setField(value); }
  public org.quickfix.field.ExecID get(org.quickfix.field.ExecID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecID getExecID() throws FieldNotFound
  { org.quickfix.field.ExecID value = new org.quickfix.field.ExecID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecID field)
  { return isSetField(field); }
  public boolean isSetExecID()
  { return isSetField(17); }

  public void set(org.quickfix.field.LastShares value)
  { setField(value); }
  public org.quickfix.field.LastShares get(org.quickfix.field.LastShares value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastShares getLastShares() throws FieldNotFound
  { org.quickfix.field.LastShares value = new org.quickfix.field.LastShares();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastShares field)
  { return isSetField(field); }
  public boolean isSetLastShares()
  { return isSetField(32); }

  public void set(org.quickfix.field.LastPx value)
  { setField(value); }
  public org.quickfix.field.LastPx get(org.quickfix.field.LastPx value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastPx getLastPx() throws FieldNotFound
  { org.quickfix.field.LastPx value = new org.quickfix.field.LastPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastPx field)
  { return isSetField(field); }
  public boolean isSetLastPx()
  { return isSetField(31); }

  public void set(org.quickfix.field.LastMkt value)
  { setField(value); }
  public org.quickfix.field.LastMkt get(org.quickfix.field.LastMkt value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.LastMkt getLastMkt() throws FieldNotFound
  { org.quickfix.field.LastMkt value = new org.quickfix.field.LastMkt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.LastMkt field)
  { return isSetField(field); }
  public boolean isSetLastMkt()
  { return isSetField(30); }

}

  public void set(org.quickfix.field.Side value)
  { setField(value); }
  public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Side getSide() throws FieldNotFound
  { org.quickfix.field.Side value = new org.quickfix.field.Side();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Side field)
  { return isSetField(field); }
  public boolean isSetSide()
  { return isSetField(54); }

  public void set(org.quickfix.field.Symbol value)
  { setField(value); }
  public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound
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
  public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound
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
  public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound
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
  public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.IDSource getIDSource() throws FieldNotFound
  { org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.IDSource field)
  { return isSetField(field); }
  public boolean isSetIDSource()
  { return isSetField(22); }

  public void set(org.quickfix.field.Issuer value)
  { setField(value); }
  public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound
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
  public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound
  { org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SecurityDesc field)
  { return isSetField(field); }
  public boolean isSetSecurityDesc()
  { return isSetField(107); }

  public void set(org.quickfix.field.Shares value)
  { setField(value); }
  public org.quickfix.field.Shares get(org.quickfix.field.Shares value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Shares getShares() throws FieldNotFound
  { org.quickfix.field.Shares value = new org.quickfix.field.Shares();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Shares field)
  { return isSetField(field); }
  public boolean isSetShares()
  { return isSetField(53); }

  public void set(org.quickfix.field.AvgPx value)
  { setField(value); }
  public org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound
  { org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AvgPx field)
  { return isSetField(field); }
  public boolean isSetAvgPx()
  { return isSetField(6); }

  public void set(org.quickfix.field.Currency value)
  { setField(value); }
  public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Currency getCurrency() throws FieldNotFound
  { org.quickfix.field.Currency value = new org.quickfix.field.Currency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Currency field)
  { return isSetField(field); }
  public boolean isSetCurrency()
  { return isSetField(15); }

  public void set(org.quickfix.field.AvgPrxPrecision value)
  { setField(value); }
  public org.quickfix.field.AvgPrxPrecision get(org.quickfix.field.AvgPrxPrecision value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AvgPrxPrecision getAvgPrxPrecision() throws FieldNotFound
  { org.quickfix.field.AvgPrxPrecision value = new org.quickfix.field.AvgPrxPrecision();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AvgPrxPrecision field)
  { return isSetField(field); }
  public boolean isSetAvgPrxPrecision()
  { return isSetField(74); }

  public void set(org.quickfix.field.TradeDate value)
  { setField(value); }
  public org.quickfix.field.TradeDate get(org.quickfix.field.TradeDate value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TradeDate getTradeDate() throws FieldNotFound
  { org.quickfix.field.TradeDate value = new org.quickfix.field.TradeDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TradeDate field)
  { return isSetField(field); }
  public boolean isSetTradeDate()
  { return isSetField(75); }

  public void set(org.quickfix.field.TransactTime value)
  { setField(value); }
  public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound
  { org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.TransactTime field)
  { return isSetField(field); }
  public boolean isSetTransactTime()
  { return isSetField(60); }

  public void set(org.quickfix.field.SettlmntTyp value)
  { setField(value); }
  public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound
  { org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlmntTyp field)
  { return isSetField(field); }
  public boolean isSetSettlmntTyp()
  { return isSetField(63); }

  public void set(org.quickfix.field.FutSettDate value)
  { setField(value); }
  public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound
  { org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.FutSettDate field)
  { return isSetField(field); }
  public boolean isSetFutSettDate()
  { return isSetField(64); }

  public void set(org.quickfix.field.NetMoney value)
  { setField(value); }
  public org.quickfix.field.NetMoney get(org.quickfix.field.NetMoney value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NetMoney getNetMoney() throws FieldNotFound
  { org.quickfix.field.NetMoney value = new org.quickfix.field.NetMoney();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NetMoney field)
  { return isSetField(field); }
  public boolean isSetNetMoney()
  { return isSetField(118); }
  public void set(org.quickfix.field.NoMiscFees value)
  { setField(value); }
  public org.quickfix.field.NoMiscFees get(org.quickfix.field.NoMiscFees value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoMiscFees getNoMiscFees() throws FieldNotFound
  { org.quickfix.field.NoMiscFees value = new org.quickfix.field.NoMiscFees();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoMiscFees field)
  { return isSetField(field); }
  public boolean isSetNoMiscFees()
  { return isSetField(136); }

public static class NoMiscFees extends Group {
  public NoMiscFees() {
    super(136, 137,
    new int[] {
               137,
               138,
               139,
               0 }
);
  }
  public void set(org.quickfix.field.MiscFeeAmt value)
  { setField(value); }
  public org.quickfix.field.MiscFeeAmt get(org.quickfix.field.MiscFeeAmt value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeAmt getMiscFeeAmt() throws FieldNotFound
  { org.quickfix.field.MiscFeeAmt value = new org.quickfix.field.MiscFeeAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeAmt field)
  { return isSetField(field); }
  public boolean isSetMiscFeeAmt()
  { return isSetField(137); }

  public void set(org.quickfix.field.MiscFeeCurr value)
  { setField(value); }
  public org.quickfix.field.MiscFeeCurr get(org.quickfix.field.MiscFeeCurr value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeCurr getMiscFeeCurr() throws FieldNotFound
  { org.quickfix.field.MiscFeeCurr value = new org.quickfix.field.MiscFeeCurr();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeCurr field)
  { return isSetField(field); }
  public boolean isSetMiscFeeCurr()
  { return isSetField(138); }

  public void set(org.quickfix.field.MiscFeeType value)
  { setField(value); }
  public org.quickfix.field.MiscFeeType get(org.quickfix.field.MiscFeeType value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.MiscFeeType getMiscFeeType() throws FieldNotFound
  { org.quickfix.field.MiscFeeType value = new org.quickfix.field.MiscFeeType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.MiscFeeType field)
  { return isSetField(field); }
  public boolean isSetMiscFeeType()
  { return isSetField(139); }

}

  public void set(org.quickfix.field.SettlCurrAmt value)
  { setField(value); }
  public org.quickfix.field.SettlCurrAmt get(org.quickfix.field.SettlCurrAmt value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrAmt getSettlCurrAmt() throws FieldNotFound
  { org.quickfix.field.SettlCurrAmt value = new org.quickfix.field.SettlCurrAmt();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrAmt field)
  { return isSetField(field); }
  public boolean isSetSettlCurrAmt()
  { return isSetField(119); }

  public void set(org.quickfix.field.SettlCurrency value)
  { setField(value); }
  public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound
  { org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.SettlCurrency field)
  { return isSetField(field); }
  public boolean isSetSettlCurrency()
  { return isSetField(120); }

  public void set(org.quickfix.field.OpenClose value)
  { setField(value); }
  public org.quickfix.field.OpenClose get(org.quickfix.field.OpenClose value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.OpenClose getOpenClose() throws FieldNotFound
  { org.quickfix.field.OpenClose value = new org.quickfix.field.OpenClose();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.OpenClose field)
  { return isSetField(field); }
  public boolean isSetOpenClose()
  { return isSetField(77); }

  public void set(org.quickfix.field.Text value)
  { setField(value); }
  public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Text getText() throws FieldNotFound
  { org.quickfix.field.Text value = new org.quickfix.field.Text();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Text field)
  { return isSetField(field); }
  public boolean isSetText()
  { return isSetField(58); }
  public void set(org.quickfix.field.NoAllocs value)
  { setField(value); }
  public org.quickfix.field.NoAllocs get(org.quickfix.field.NoAllocs value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoAllocs getNoAllocs() throws FieldNotFound
  { org.quickfix.field.NoAllocs value = new org.quickfix.field.NoAllocs();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoAllocs field)
  { return isSetField(field); }
  public boolean isSetNoAllocs()
  { return isSetField(78); }

public static class NoAllocs extends Group {
  public NoAllocs() {
    super(78, 12,
    new int[] {
               79,
               80,
               81,
               76,
               109,
               12,
               13,
               0 }
);
  }
  public void set(org.quickfix.field.AllocAccount value)
  { setField(value); }
  public org.quickfix.field.AllocAccount get(org.quickfix.field.AllocAccount value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocAccount getAllocAccount() throws FieldNotFound
  { org.quickfix.field.AllocAccount value = new org.quickfix.field.AllocAccount();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocAccount field)
  { return isSetField(field); }
  public boolean isSetAllocAccount()
  { return isSetField(79); }

  public void set(org.quickfix.field.AllocShares value)
  { setField(value); }
  public org.quickfix.field.AllocShares get(org.quickfix.field.AllocShares value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.AllocShares getAllocShares() throws FieldNotFound
  { org.quickfix.field.AllocShares value = new org.quickfix.field.AllocShares();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.AllocShares field)
  { return isSetField(field); }
  public boolean isSetAllocShares()
  { return isSetField(80); }

  public void set(org.quickfix.field.ProcessCode value)
  { setField(value); }
  public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound
  { org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ProcessCode field)
  { return isSetField(field); }
  public boolean isSetProcessCode()
  { return isSetField(81); }

  public void set(org.quickfix.field.ExecBroker value)
  { setField(value); }
  public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound
  { org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ExecBroker field)
  { return isSetField(field); }
  public boolean isSetExecBroker()
  { return isSetField(76); }

  public void set(org.quickfix.field.ClientID value)
  { setField(value); }
  public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.ClientID getClientID() throws FieldNotFound
  { org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.ClientID field)
  { return isSetField(field); }
  public boolean isSetClientID()
  { return isSetField(109); }

  public void set(org.quickfix.field.Commission value)
  { setField(value); }
  public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.Commission getCommission() throws FieldNotFound
  { org.quickfix.field.Commission value = new org.quickfix.field.Commission();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.Commission field)
  { return isSetField(field); }
  public boolean isSetCommission()
  { return isSetField(12); }

  public void set(org.quickfix.field.CommType value)
  { setField(value); }
  public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.CommType getCommType() throws FieldNotFound
  { org.quickfix.field.CommType value = new org.quickfix.field.CommType();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.CommType field)
  { return isSetField(field); }
  public boolean isSetCommType()
  { return isSetField(13); }

  public void set(org.quickfix.field.NoDlvyInst value)
  { setField(value); }
  public org.quickfix.field.NoDlvyInst get(org.quickfix.field.NoDlvyInst value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.NoDlvyInst getNoDlvyInst() throws FieldNotFound
  { org.quickfix.field.NoDlvyInst value = new org.quickfix.field.NoDlvyInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.NoDlvyInst field)
  { return isSetField(field); }
  public boolean isSetNoDlvyInst()
  { return isSetField(85); }

public static class NoDlvyInst extends Group {
  public NoDlvyInst() {
    super(85, 86,
    new int[] {
               92,
               86,
               0 }
);
  }
  public void set(org.quickfix.field.BrokerOfCredit value)
  { setField(value); }
  public org.quickfix.field.BrokerOfCredit get(org.quickfix.field.BrokerOfCredit value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.BrokerOfCredit getBrokerOfCredit() throws FieldNotFound
  { org.quickfix.field.BrokerOfCredit value = new org.quickfix.field.BrokerOfCredit();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.BrokerOfCredit field)
  { return isSetField(field); }
  public boolean isSetBrokerOfCredit()
  { return isSetField(92); }

  public void set(org.quickfix.field.DlvyInst value)
  { setField(value); }
  public org.quickfix.field.DlvyInst get(org.quickfix.field.DlvyInst value) throws FieldNotFound
  { getField(value); return value; }
  public org.quickfix.field.DlvyInst getDlvyInst() throws FieldNotFound
  { org.quickfix.field.DlvyInst value = new org.quickfix.field.DlvyInst();
    getField(value); return value; }
  public boolean isSet(org.quickfix.field.DlvyInst field)
  { return isSetField(field); }
  public boolean isSetDlvyInst()
  { return isSetField(86); }

}
}
}
