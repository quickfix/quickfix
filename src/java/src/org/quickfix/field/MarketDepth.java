package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class MarketDepth extends IntField {
    public static final int FULL_BOOK = 0;
    public static final int TOP_OF_BOOK = 1;

    public MarketDepth() {
        super(264);
    }
    public MarketDepth(int data) {
        super(264, data);
    }
}
