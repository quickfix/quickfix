package org.quickfix.fix41;
import org.quickfix.FieldNotFound;
import org.quickfix.Group;
import org.quickfix.field.*;

public class ListStatus extends Message {

    public ListStatus() {
        getHeader().setField(new MsgType("N"));
    }
    public ListStatus(
        org.quickfix.field.ListID aListID,
        org.quickfix.field.NoRpts aNoRpts,
        org.quickfix.field.RptSeq aRptSeq,
        org.quickfix.field.NoOrders aNoOrders ) {
        getHeader().setField(new MsgType("N"));
        set(aListID);
        set(aNoRpts);
        set(aRptSeq);
        set(aNoOrders);
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

    public void set(org.quickfix.field.WaveNo value) {
        setField(value);
    }
    public org.quickfix.field.WaveNo get(org.quickfix.field.WaveNo value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.WaveNo getWaveNo() throws FieldNotFound {
        org.quickfix.field.WaveNo value = new org.quickfix.field.WaveNo();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.NoRpts value) {
        setField(value);
    }
    public org.quickfix.field.NoRpts get(org.quickfix.field.NoRpts value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.NoRpts getNoRpts() throws FieldNotFound {
        org.quickfix.field.NoRpts value = new org.quickfix.field.NoRpts();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.RptSeq value) {
        setField(value);
    }
    public org.quickfix.field.RptSeq get(org.quickfix.field.RptSeq value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.RptSeq getRptSeq() throws FieldNotFound {
        org.quickfix.field.RptSeq value = new org.quickfix.field.RptSeq();
        getField(value);
        return value;
    }

    public void set(org.quickfix.field.NoOrders value) {
        setField(value);
    }
    public org.quickfix.field.NoOrders get(org.quickfix.field.NoOrders value) throws FieldNotFound {
        getField(value);
        return value;
    }
    public org.quickfix.field.NoOrders getNoOrders() throws FieldNotFound {
        org.quickfix.field.NoOrders value = new org.quickfix.field.NoOrders();
        getField(value);
        return value;
    }

    public class NoOrders extends Group {
        public NoOrders() {
            super(73,11);
        }
        void set(org.quickfix.field.ClOrdID value) {
            setField(value);
        }
        org.quickfix.field.ClOrdID get(org.quickfix.field.ClOrdID value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.ClOrdID getClOrdID() throws FieldNotFound {
            org.quickfix.field.ClOrdID value = new org.quickfix.field.ClOrdID();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CumQty value) {
            setField(value);
        }
        org.quickfix.field.CumQty get(org.quickfix.field.CumQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CumQty getCumQty() throws FieldNotFound {
            org.quickfix.field.CumQty value = new org.quickfix.field.CumQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.LeavesQty value) {
            setField(value);
        }
        org.quickfix.field.LeavesQty get(org.quickfix.field.LeavesQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.LeavesQty getLeavesQty() throws FieldNotFound {
            org.quickfix.field.LeavesQty value = new org.quickfix.field.LeavesQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.CxlQty value) {
            setField(value);
        }
        org.quickfix.field.CxlQty get(org.quickfix.field.CxlQty value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.CxlQty getCxlQty() throws FieldNotFound {
            org.quickfix.field.CxlQty value = new org.quickfix.field.CxlQty();
            getField(value);
            return value;
        }

        void set(org.quickfix.field.AvgPx value) {
            setField(value);
        }
        org.quickfix.field.AvgPx get(org.quickfix.field.AvgPx value) throws FieldNotFound {
            getField(value);
            return value;
        }
        org.quickfix.field.AvgPx getAvgPx() throws FieldNotFound {
            org.quickfix.field.AvgPx value = new org.quickfix.field.AvgPx();
            getField(value);
            return value;
        }

    }
}
