package org.quickfix;

import java.util.Date;

public abstract class FieldMap {

    public Field getField(Field field) throws FieldNotFound {
        if (field instanceof StringField)
            return getField((StringField)field);
        else if (field instanceof CharField)
            return getField((CharField)field);
        else if (field instanceof IntField)
            return getField((IntField)field);
        else if (field instanceof DoubleField)
            return getField((DoubleField)field);
        else if (field instanceof BooleanField)
            return getField((BooleanField)field);
        else if (field instanceof UtcTimeStampField)
            return getField((UtcTimeStampField)field);
        else if (field instanceof UtcTimeOnlyField)
            return getField((UtcTimeOnlyField)field);
        else if (field instanceof UtcDateField)
            return getField((UtcDateField)field);
        else
            throw new RuntimeException("Invalid field type" + field.getClass());
    }

    public abstract void setString(int field, String value);
    public abstract void setBoolean(int field, boolean value);
    public abstract void setChar(int field, char value);
    public abstract void setInt(int field, int value);
    public abstract void setDouble(int field, double value);
    public abstract void setUtcTimeStamp(int field, Date value);
    public abstract void setUtcTimeOnly(int field, Date value);
    public abstract void setUtcDate(int field, Date value);
    public abstract String getString(int field) throws FieldNotFound;
    public abstract boolean getBoolean(int field) throws FieldNotFound;
    public abstract char getChar(int field) throws FieldNotFound;
    public abstract int getInt(int field) throws FieldNotFound;
    public abstract double getDouble(int field) throws FieldNotFound;
    public abstract Date getUtcTimeStamp(int field) throws FieldNotFound;
    public abstract Date getUtcTimeOnly(int field) throws FieldNotFound;
    public abstract Date getUtcDate(int field) throws FieldNotFound;
    public abstract void setField(StringField field);
    public abstract void setField(BooleanField field);
    public abstract void setField(CharField field);
    public abstract void setField(IntField field);
    public abstract void setField(DoubleField field);
    public abstract void setField(UtcTimeStampField field);
    public abstract void setField(UtcTimeOnlyField field);
    public abstract void setField(UtcDateField field);
    public abstract StringField getField(StringField field) throws FieldNotFound;
    public abstract BooleanField getField(BooleanField field) throws FieldNotFound;
    public abstract CharField getField(CharField field) throws FieldNotFound;
    public abstract IntField getField(IntField field) throws FieldNotFound;
    public abstract DoubleField getField(DoubleField field) throws FieldNotFound;
    public abstract UtcTimeStampField getField(UtcTimeStampField field) throws FieldNotFound;
    public abstract UtcTimeOnlyField getField(UtcTimeOnlyField field) throws FieldNotFound;
    public abstract UtcDateField getField(UtcDateField field) throws FieldNotFound;
}
