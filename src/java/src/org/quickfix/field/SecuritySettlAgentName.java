package org.quickfix.field;
import org.quickfix.StringField;
import java.util.Date;

public class SecuritySettlAgentName extends StringField {

    public SecuritySettlAgentName() {
        super(176);
    }
    public SecuritySettlAgentName(String data) {
        super(176, data);
    }
}
