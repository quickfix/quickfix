package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PegOffsetType extends IntField 
{ 
  public static final int FIELD = 836; 
public static final int PRICE = 0; 
public static final int BASIS_POINTS = 1; 
public static final int TICKS = 2; 
public static final int PRICE_TIER_LEVEL = 3; 

  public PegOffsetType() 
  { 
    super(836);
  } 
  public PegOffsetType(int data) 
  { 
    super(836, data);
  } 
} 
