package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class InstrAttribType extends IntField 
{ 
  public static final int FIELD = 871; 
public static final int FLAT = 1; 
public static final int ZERO_COUPON = 2; 
public static final int INTEREST_BEARING = 3; 
public static final int NO_PERIODIC_PAYMENTS = 4; 
public static final int VARIABLE_RATE = 5; 
public static final int LESS_FEE_FOR_PUT = 6; 
public static final int STEPPED_COUPON = 7; 
public static final int COUPON_PERIOD = 8; 
public static final int WHEN_AND_IF_ISSUED = 9; 

  public InstrAttribType() 
  { 
    super(871);
  } 
  public InstrAttribType(int data) 
  { 
    super(871, data);
  } 
} 
