package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class CashSettlAgentAcctNum extends StringField {

    public CashSettlAgentAcctNum() {
        super(184);
    }
    public CashSettlAgentAcctNum(String data) {
        super(184, data);
    }
}
