package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class LinesOfText extends IntField {

    public LinesOfText() {
        super(33);
    }
    public LinesOfText(int data) {
        super(33, data);
    }
}
