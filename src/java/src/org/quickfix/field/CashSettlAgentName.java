package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class CashSettlAgentName extends StringField {

    public CashSettlAgentName() {
        super(182);
    }
    public CashSettlAgentName(String data) {
        super(182, data);
    }
}
