package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PriceType extends IntField 
{ 
  public static final int FIELD = 423; 
public static final int PERCENTAGE = 1; 
public static final int PER_UNIT = 2; 
public static final int FIXED_AMOUNT = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int SPREAD = 6; 
public static final int TED_PRICE = 7; 
public static final int TED_YIELD = 8; 
public static final int YIELD = 9; 

  public PriceType() 
  { 
    super(423);
  } 
  public PriceType(int data) 
  { 
    super(423, data);
  } 
} 
