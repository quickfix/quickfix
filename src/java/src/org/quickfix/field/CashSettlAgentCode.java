package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class CashSettlAgentCode extends StringField {

    public CashSettlAgentCode() {
        super(183);
    }
    public CashSettlAgentCode(String data) {
        super(183, data);
    }
}
