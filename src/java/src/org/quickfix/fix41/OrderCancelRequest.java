package org.quickfix.fix41;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class OrderCancelRequest extends Message {

    public OrderCancelRequest() {
        getHeader().setField(new MsgType("F"));
    }
    public OrderCancelRequest(
        org.quickfix.field.OrigClOrdID aOrigClOrdID,
        org.quickfix.field.ClOrdID aClOrdID,
        org.quickfix.field.Symbol aSymbol,
        org.quickfix.field.Side aSide ) {
        getHeader().setField(new MsgType("F"));
        set(aOrigClOrdID);
        set(aClOrdID);
        set(aSymbol);
        set(aSide);
    }

    public void set(org.quickfix.field.OrigClOrdID value) {
        setField(value);
    }
    public org.quickfix.field.OrigClOrdID get(org.quickfix.field.OrigClOrdID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.OrigClOrdID getOrigClOrdID() throws FieldNotFound {
        org.quickfix.field.OrigClOrdID value = new org.quickfix.field.OrigClOrdID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.OrderID value) {
        setField(value);
    }
    public org.quickfix.field.OrderID get(org.quickfix.field.OrderID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.OrderID getOrderID() throws FieldNotFound {
        org.quickfix.field.OrderID value = new org.quickfix.field.OrderID();
        getField(value);
        return value;
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

    public void set(org.quickfix.field.ListID value) {
        setField(value);
    }
    public org.quickfix.field.ListID get(org.quickfix.field.ListID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.ListID getListID() throws FieldNotFound {
        org.quickfix.field.ListID value = new org.quickfix.field.ListID();
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

    public void set(org.quickfix.field.SecurityType value) {
        setField(value);
    }
    public org.quickfix.field.SecurityType get(org.quickfix.field.SecurityType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SecurityType getSecurityType() throws FieldNotFound {
        org.quickfix.field.SecurityType value = new org.quickfix.field.SecurityType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.MaturityMonthYear value) {
        setField(value);
    }
    public org.quickfix.field.MaturityMonthYear get(org.quickfix.field.MaturityMonthYear value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.MaturityMonthYear getMaturityMonthYear() throws FieldNotFound {
        org.quickfix.field.MaturityMonthYear value = new org.quickfix.field.MaturityMonthYear();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.MaturityDay value) {
        setField(value);
    }
    public org.quickfix.field.MaturityDay get(org.quickfix.field.MaturityDay value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.MaturityDay getMaturityDay() throws FieldNotFound {
        org.quickfix.field.MaturityDay value = new org.quickfix.field.MaturityDay();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.PutOrCall value) {
        setField(value);
    }
    public org.quickfix.field.PutOrCall get(org.quickfix.field.PutOrCall value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.PutOrCall getPutOrCall() throws FieldNotFound {
        org.quickfix.field.PutOrCall value = new org.quickfix.field.PutOrCall();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.StrikePrice value) {
        setField(value);
    }
    public org.quickfix.field.StrikePrice get(org.quickfix.field.StrikePrice value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.StrikePrice getStrikePrice() throws FieldNotFound {
        org.quickfix.field.StrikePrice value = new org.quickfix.field.StrikePrice();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.OptAttribute value) {
        setField(value);
    }
    public org.quickfix.field.OptAttribute get(org.quickfix.field.OptAttribute value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.OptAttribute getOptAttribute() throws FieldNotFound {
        org.quickfix.field.OptAttribute value = new org.quickfix.field.OptAttribute();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SecurityExchange value) {
        setField(value);
    }
    public org.quickfix.field.SecurityExchange get(org.quickfix.field.SecurityExchange value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SecurityExchange getSecurityExchange() throws FieldNotFound {
        org.quickfix.field.SecurityExchange value = new org.quickfix.field.SecurityExchange();
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

    public void set(org.quickfix.field.CashOrderQty value) {
        setField(value);
    }
    public org.quickfix.field.CashOrderQty get(org.quickfix.field.CashOrderQty value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.CashOrderQty getCashOrderQty() throws FieldNotFound {
        org.quickfix.field.CashOrderQty value = new org.quickfix.field.CashOrderQty();
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
