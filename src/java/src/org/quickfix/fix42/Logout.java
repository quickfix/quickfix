package org.quickfix.fix42;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class Logout extends Message {

    public Logout() {
        getHeader().setField(new MsgType("5"));
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
