package org.quickfix.field;
import org.quickfix.DoubleField;
import java.util.Date;

public class EFPTrackingError extends DoubleField {

    public EFPTrackingError() {
        super(405);
    }
    public EFPTrackingError(double data) {
        super(405, data);
    }
}
