package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class QuotePriceType extends IntField 
{ 
  public static final int FIELD = 692; 
public static final int PERCENT = 1; 
public static final int PER_SHARE = 2; 
public static final int FIXED_AMOUNT = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int BASIS_POINTS_RELATIVE_TO_BENCHMARK = 6; 
public static final int TED_PRICE = 7; 
public static final int TED_YIELD = 8; 
public static final int YIELD_SPREAD = 9; 

  public QuotePriceType() 
  { 
    super(692);
  } 
  public QuotePriceType(int data) 
  { 
    super(692, data);
  } 
} 
