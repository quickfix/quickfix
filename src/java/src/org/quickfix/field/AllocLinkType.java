package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class AllocLinkType extends IntField {
    public static final int FX_NETTING = 0;
    public static final int FX_SWAP = 1;

    public AllocLinkType() {
        super(197);
    }
    public AllocLinkType(int data) {
        super(197, data);
    }
}
