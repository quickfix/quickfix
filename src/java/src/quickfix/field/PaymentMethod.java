package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PaymentMethod extends IntField 
{ 
  public static final int FIELD = 492; 
public static final int CREST = 1; 
public static final int NSCC = 2; 
public static final int EUROCLEAR = 3; 
public static final int CLEARSTREAM = 4; 
public static final int CHEQUE = 5; 
public static final int TELEGRAPHIC_TRANSFER = 6; 
public static final int FEDWIRE = 7; 
public static final int DEBIT_CARD = 8; 
public static final int DIRECT_DEBIT = 9; 

  public PaymentMethod() 
  { 
    super(492);
  } 
  public PaymentMethod(int data) 
  { 
    super(492, data);
  } 
} 
