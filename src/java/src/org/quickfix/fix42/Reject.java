package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Reject extends Message {

    public Reject() {
        getHeader().setField(new MsgType("3"));
    }
    public Reject(
        org.quickfix.field.RefSeqNum aRefSeqNum ) {
        getHeader().setField(new MsgType("3"));
        set(aRefSeqNum);
    }

    public void set(org.quickfix.field.RefSeqNum value) {
        setField(value);
    }
    public org.quickfix.field.RefSeqNum get(org.quickfix.field.RefSeqNum value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.RefSeqNum getRefSeqNum() throws FieldNotFound {
        org.quickfix.field.RefSeqNum value = new org.quickfix.field.RefSeqNum();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.RefTagID value) {
        setField(value);
    }
    public org.quickfix.field.RefTagID get(org.quickfix.field.RefTagID value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.RefTagID getRefTagID() throws FieldNotFound {
        org.quickfix.field.RefTagID value = new org.quickfix.field.RefTagID();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.RefMsgType value) {
        setField(value);
    }
    public org.quickfix.field.RefMsgType get(org.quickfix.field.RefMsgType value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.RefMsgType getRefMsgType() throws FieldNotFound {
        org.quickfix.field.RefMsgType value = new org.quickfix.field.RefMsgType();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.SessionRejectReason value) {
        setField(value);
    }
    public org.quickfix.field.SessionRejectReason get(org.quickfix.field.SessionRejectReason value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.SessionRejectReason getSessionRejectReason() throws FieldNotFound {
        org.quickfix.field.SessionRejectReason value = new org.quickfix.field.SessionRejectReason();
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

    public void set(org.quickfix.field.EncodedTextLen value) {
        setField(value);
    }
    public org.quickfix.field.EncodedTextLen get(org.quickfix.field.EncodedTextLen value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.EncodedTextLen getEncodedTextLen() throws FieldNotFound {
        org.quickfix.field.EncodedTextLen value = new org.quickfix.field.EncodedTextLen();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.EncodedText value) {
        setField(value);
    }
    public org.quickfix.field.EncodedText get(org.quickfix.field.EncodedText value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.EncodedText getEncodedText() throws FieldNotFound {
        org.quickfix.field.EncodedText value = new org.quickfix.field.EncodedText();
        getField(value);
        return value;
    }
}
