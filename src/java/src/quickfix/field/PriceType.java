package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PriceType extends IntField 
{ 
  public static final int FIELD = 423; 
public static final int PERCENTAGE = 1; 
public static final int FIXED_CABINET_TRADE_PRICE = 10; 
public static final int VARIABLE_CABINET_TRADE_PRICE = 11; 
public static final int PER_UNIT = 2; 
public static final int FIXED_AMOUNT = 3; 
public static final int DISCOUNT = 4; 
public static final int PREMIUM = 5; 
public static final int SPREAD = 6; 
public static final int TED_PRICE = 7; 
public static final int TED_YIELD = 8; 
public static final int YIELD = 9; 
public static final int PRODUCT_TICKS_IN_HALFS = 13; 
public static final int PRODUCT_TICKS_IN_FOURTHS = 14; 
public static final int PRODUCT_TICKS_IN_EIGHTS = 15; 
public static final int PRODUCT_TICKS_IN_SIXTEENTHS = 16; 
public static final int PRODUCT_TICKS_IN_THIRTY_SECONDS = 17; 
public static final int PRODUCT_TICKS_IN_SIXTY_FORTHS = 18; 
public static final int PRODUCT_TICKS_IN_ONE_TWENTY_EIGHTS = 19; 

  public PriceType() 
  { 
    super(423);
  } 
  public PriceType(int data) 
  { 
    super(423, data);
  } 
} 
