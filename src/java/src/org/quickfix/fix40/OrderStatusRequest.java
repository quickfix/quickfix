package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class OrderStatusRequest extends Message {

    public OrderStatusRequest() {
        getHeader().setField(new MsgType("H"));
    }
    public OrderStatusRequest(
        org.quickfix.field.ClOrdID aClOrdID,
        org.quickfix.field.Symbol aSymbol,
        org.quickfix.field.Side aSide ) {
        getHeader().setField(new MsgType("H"));
        set(aClOrdID);
        set(aSymbol);
        set(aSide);
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
}
