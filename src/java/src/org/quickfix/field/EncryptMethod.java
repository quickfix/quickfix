package org.quickfix.field;
import org.quickfix.IntField;
import java.util.Date;

public class EncryptMethod extends IntField {
    public static final int NONE_OTHER = 0;
    public static final int PKCS = 1;
    public static final int DES = 2;
    public static final int PKCSDES = 3;
    public static final int PGPDES = 4;
    public static final int PGPDESMD5 = 5;
    public static final int PEMDESMD5 = 6;

    public EncryptMethod() {
        super(98);
    }
    public EncryptMethod(int data) {
        super(98, data);
    }
}
