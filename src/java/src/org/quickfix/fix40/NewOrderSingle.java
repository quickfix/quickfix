package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class NewOrderSingle extends Message {

    public NewOrderSingle() {
        getHeader().setField(new MsgType("D"));
    }
    public NewOrderSingle(
        org.quickfix.field.ClOrdID aClOrdID,
        org.quickfix.field.HandlInst aHandlInst,
        org.quickfix.field.Symbol aSymbol,
        org.quickfix.field.Side aSide,
        org.quickfix.field.OrderQty aOrderQty,
        org.quickfix.field.OrdType aOrdType ) {
        getHeader().setField(new MsgType("D"));
        set(aClOrdID);
        set(aHandlInst);
        set(aSymbol);
        set(aSide);
        set(aOrderQty);
        set(aOrdType);
    }

    public void set(org.quickfix.field.ClOrdID value) {
        setField(value);
    }
    public org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound {
        org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ClientID value) {
        setField(value);
    }
    public org.quickfix.field.ClientID get(org.quickfix.field.ClientID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ClientID getClientID() throws FieldNotFound {
        org.quickfix.field.ClientID value = new org.quickfix.field.ClientID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ExecBroker value) {
        setField(value);
    }
    public org.quickfix.field.ExecBroker get(org.quickfix.field.ExecBroker value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ExecBroker getExecBroker() throws FieldNotFound {
        org.quickfix.field.ExecBroker value = new org.quickfix.field.ExecBroker();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Account value) {
        setField(value);
    }
    public org.quickfix.field.Account get(org.quickfix.field.Account value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Account getAccount() throws FieldNotFound {
        org.quickfix.field.Account value = new org.quickfix.field.Account();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SettlmntTyp value) {
        setField(value);
    }
    public org.quickfix.field.SettlmntTyp get(org.quickfix.field.SettlmntTyp value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SettlmntTyp getSettlmntTyp() throws FieldNotFound {
        org.quickfix.field.SettlmntTyp value = new org.quickfix.field.SettlmntTyp();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.FutSettDate value) {
        setField(value);
    }
    public org.quickfix.field.FutSettDate get(org.quickfix.field.FutSettDate value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.FutSettDate getFutSettDate() throws FieldNotFound {
        org.quickfix.field.FutSettDate value = new org.quickfix.field.FutSettDate();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.HandlInst value) {
        setField(value);
    }
    public org.quickfix.field.HandlInst get(org.quickfix.field.HandlInst value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.HandlInst getHandlInst() throws FieldNotFound {
        org.quickfix.field.HandlInst value = new org.quickfix.field.HandlInst();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ExecInst value) {
        setField(value);
    }
    public org.quickfix.field.ExecInst get(org.quickfix.field.ExecInst value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ExecInst getExecInst() throws FieldNotFound {
        org.quickfix.field.ExecInst value = new org.quickfix.field.ExecInst();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.MinQty value) {
        setField(value);
    }
    public org.quickfix.field.MinQty get(org.quickfix.field.MinQty value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.MinQty getMinQty() throws FieldNotFound {
        org.quickfix.field.MinQty value = new org.quickfix.field.MinQty();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.MaxFloor value) {
        setField(value);
    }
    public org.quickfix.field.MaxFloor get(org.quickfix.field.MaxFloor value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.MaxFloor getMaxFloor() throws FieldNotFound {
        org.quickfix.field.MaxFloor value = new org.quickfix.field.MaxFloor();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ExDestination value) {
        setField(value);
    }
    public org.quickfix.field.ExDestination get(org.quickfix.field.ExDestination value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ExDestination getExDestination() throws FieldNotFound {
        org.quickfix.field.ExDestination value = new org.quickfix.field.ExDestination();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ProcessCode value) {
        setField(value);
    }
    public org.quickfix.field.ProcessCode get(org.quickfix.field.ProcessCode value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ProcessCode getProcessCode() throws FieldNotFound {
        org.quickfix.field.ProcessCode value = new org.quickfix.field.ProcessCode();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Symbol value) {
        setField(value);
    }
    public org.quickfix.field.Symbol get(org.quickfix.field.Symbol value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Symbol getSymbol() throws FieldNotFound {
        org.quickfix.field.Symbol value = new org.quickfix.field.Symbol();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SymbolSfx value) {
        setField(value);
    }
    public org.quickfix.field.SymbolSfx get(org.quickfix.field.SymbolSfx value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SymbolSfx getSymbolSfx() throws FieldNotFound {
        org.quickfix.field.SymbolSfx value = new org.quickfix.field.SymbolSfx();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SecurityID value) {
        setField(value);
    }
    public org.quickfix.field.SecurityID get(org.quickfix.field.SecurityID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SecurityID getSecurityID() throws FieldNotFound {
        org.quickfix.field.SecurityID value = new org.quickfix.field.SecurityID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.IDSource value) {
        setField(value);
    }
    public org.quickfix.field.IDSource get(org.quickfix.field.IDSource value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.IDSource getIDSource() throws FieldNotFound {
        org.quickfix.field.IDSource value = new org.quickfix.field.IDSource();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Issuer value) {
        setField(value);
    }
    public org.quickfix.field.Issuer get(org.quickfix.field.Issuer value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Issuer getIssuer() throws FieldNotFound {
        org.quickfix.field.Issuer value = new org.quickfix.field.Issuer();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SecurityDesc value) {
        setField(value);
    }
    public org.quickfix.field.SecurityDesc get(org.quickfix.field.SecurityDesc value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SecurityDesc getSecurityDesc() throws FieldNotFound {
        org.quickfix.field.SecurityDesc value = new org.quickfix.field.SecurityDesc();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.PrevClosePx value) {
        setField(value);
    }
    public org.quickfix.field.PrevClosePx get(org.quickfix.field.PrevClosePx value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.PrevClosePx getPrevClosePx() throws FieldNotFound {
        org.quickfix.field.PrevClosePx value = new org.quickfix.field.PrevClosePx();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Side value) {
        setField(value);
    }
    public org.quickfix.field.Side get(org.quickfix.field.Side value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Side getSide() throws FieldNotFound {
        org.quickfix.field.Side value = new org.quickfix.field.Side();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.LocateReqd value) {
        setField(value);
    }
    public org.quickfix.field.LocateReqd get(org.quickfix.field.LocateReqd value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.LocateReqd getLocateReqd() throws FieldNotFound {
        org.quickfix.field.LocateReqd value = new org.quickfix.field.LocateReqd();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.OrderQty value) {
        setField(value);
    }
    public org.quickfix.field.OrderQty get(org.quickfix.field.OrderQty value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.OrderQty getOrderQty() throws FieldNotFound {
        org.quickfix.field.OrderQty value = new org.quickfix.field.OrderQty();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.OrdType value) {
        setField(value);
    }
    public org.quickfix.field.OrdType get(org.quickfix.field.OrdType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.OrdType getOrdType() throws FieldNotFound {
        org.quickfix.field.OrdType value = new org.quickfix.field.OrdType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Price value) {
        setField(value);
    }
    public org.quickfix.field.Price get(org.quickfix.field.Price value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Price getPrice() throws FieldNotFound {
        org.quickfix.field.Price value = new org.quickfix.field.Price();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.StopPx value) {
        setField(value);
    }
    public org.quickfix.field.StopPx get(org.quickfix.field.StopPx value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.StopPx getStopPx() throws FieldNotFound {
        org.quickfix.field.StopPx value = new org.quickfix.field.StopPx();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Currency value) {
        setField(value);
    }
    public org.quickfix.field.Currency get(org.quickfix.field.Currency value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Currency getCurrency() throws FieldNotFound {
        org.quickfix.field.Currency value = new org.quickfix.field.Currency();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.IOIid value) {
        setField(value);
    }
    public org.quickfix.field.IOIid get(org.quickfix.field.IOIid value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.IOIid getIOIid() throws FieldNotFound {
        org.quickfix.field.IOIid value = new org.quickfix.field.IOIid();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.QuoteID value) {
        setField(value);
    }
    public org.quickfix.field.QuoteID get(org.quickfix.field.QuoteID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.QuoteID getQuoteID() throws FieldNotFound {
        org.quickfix.field.QuoteID value = new org.quickfix.field.QuoteID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.TimeInForce value) {
        setField(value);
    }
    public org.quickfix.field.TimeInForce get(org.quickfix.field.TimeInForce value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.TimeInForce getTimeInForce() throws FieldNotFound {
        org.quickfix.field.TimeInForce value = new org.quickfix.field.TimeInForce();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ExpireTime value) {
        setField(value);
    }
    public org.quickfix.field.ExpireTime get(org.quickfix.field.ExpireTime value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ExpireTime getExpireTime() throws FieldNotFound {
        org.quickfix.field.ExpireTime value = new org.quickfix.field.ExpireTime();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Commission value) {
        setField(value);
    }
    public org.quickfix.field.Commission get(org.quickfix.field.Commission value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Commission getCommission() throws FieldNotFound {
        org.quickfix.field.Commission value = new org.quickfix.field.Commission();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.CommType value) {
        setField(value);
    }
    public org.quickfix.field.CommType get(org.quickfix.field.CommType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.CommType getCommType() throws FieldNotFound {
        org.quickfix.field.CommType value = new org.quickfix.field.CommType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Rule80A value) {
        setField(value);
    }
    public org.quickfix.field.Rule80A get(org.quickfix.field.Rule80A value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Rule80A getRule80A() throws FieldNotFound {
        org.quickfix.field.Rule80A value = new org.quickfix.field.Rule80A();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.ForexReq value) {
        setField(value);
    }
    public org.quickfix.field.ForexReq get(org.quickfix.field.ForexReq value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ForexReq getForexReq() throws FieldNotFound {
        org.quickfix.field.ForexReq value = new org.quickfix.field.ForexReq();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SettlCurrency value) {
        setField(value);
    }
    public org.quickfix.field.SettlCurrency get(org.quickfix.field.SettlCurrency value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SettlCurrency getSettlCurrency() throws FieldNotFound {
        org.quickfix.field.SettlCurrency value = new org.quickfix.field.SettlCurrency();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Text value) {
        setField(value);
    }
    public org.quickfix.field.Text get(org.quickfix.field.Text value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Text getText() throws FieldNotFound {
        org.quickfix.field.Text value = new org.quickfix.field.Text();
        getField(value);
        return value;
    }
}
