package org.quickfix.fix40;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Advertisement extends Message {

    public Advertisement() {
        getHeader().setField(new MsgType("7"));
    }
    public Advertisement(
        org.quickfix.field.AdvId aAdvId,
        org.quickfix.field.AdvTransType aAdvTransType,
        org.quickfix.field.Symbol aSymbol,
        org.quickfix.field.AdvSide aAdvSide,
        org.quickfix.field.Shares aShares ) {
        getHeader().setField(new MsgType("7"));
        set(aAdvId);
        set(aAdvTransType);
        set(aSymbol);
        set(aAdvSide);
        set(aShares);
    }

    public void set(org.quickfix.field.AdvId value) {
        setField(value);
    }
    public org.quickfix.field.AdvId get(org.quickfix.field.AdvId value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.AdvId getAdvId() throws FieldNotFound {
        org.quickfix.field.AdvId value = new org.quickfix.field.AdvId();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.AdvTransType value) {
        setField(value);
    }
    public org.quickfix.field.AdvTransType get(org.quickfix.field.AdvTransType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.AdvTransType getAdvTransType() throws FieldNotFound {
        org.quickfix.field.AdvTransType value = new org.quickfix.field.AdvTransType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.AdvRefID value) {
        setField(value);
    }
    public org.quickfix.field.AdvRefID get(org.quickfix.field.AdvRefID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.AdvRefID getAdvRefID() throws FieldNotFound {
        org.quickfix.field.AdvRefID value = new org.quickfix.field.AdvRefID();
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

    public void set(org.quickfix.field.AdvSide value) {
        setField(value);
    }
    public org.quickfix.field.AdvSide get(org.quickfix.field.AdvSide value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.AdvSide getAdvSide() throws FieldNotFound {
        org.quickfix.field.AdvSide value = new org.quickfix.field.AdvSide();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.Shares value) {
        setField(value);
    }
    public org.quickfix.field.Shares get(org.quickfix.field.Shares value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.Shares getShares() throws FieldNotFound {
        org.quickfix.field.Shares value = new org.quickfix.field.Shares();
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

    public void set(org.quickfix.field.TransactTime value) {
        setField(value);
    }
    public org.quickfix.field.TransactTime get(org.quickfix.field.TransactTime value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.TransactTime getTransactTime() throws FieldNotFound {
        org.quickfix.field.TransactTime value = new org.quickfix.field.TransactTime();
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
