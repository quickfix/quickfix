package org.quickfix.field; 
import org.quickfix.IntField; 
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
public static final int WHEN_ISSUED = 9; 
public static final int ORIGINAL_ISSUE_DISCOUNT = 10; 
public static final int CALLABLE_PUTTABLE = 11; 
public static final int ESCROWED_TO_MATURITY = 12; 
public static final int ESCROWED_TO_REDEMPTION_DATE = 13; 
public static final int PREREFUNDED = 14; 
public static final int IN_DEFAULT = 15; 
public static final int UNRATED = 16; 
public static final int TAXABLE = 17; 
public static final int INDEXED = 18; 
public static final int SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX = 19; 
public static final int ORIGINAL_ISSUE_DISCOUNT_PRICE = 20; 
public static final int CALLABLE_BELOW_MATURITY_VALUE = 21; 
public static final int CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED = 22; 
public static final int TEXT = 99; 

  public InstrAttribType() 
  { 
    super(871);
  } 
  public InstrAttribType(int data) 
  { 
    super(871, data);
  } 
} 
