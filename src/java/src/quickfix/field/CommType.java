package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class CommType extends CharField 
{ 
  public static final int FIELD = 13; 
public static final char PER_UNIT = '1'; 
public static final char PERCENTAGE = '2'; 
public static final char ABSOLUTE = '3'; 
public static final char PERCENTAGE_WAIVED_CASH_DISCOUNT = '4'; 
public static final char PERCENTAGE_WAIVED_ENHANCED_UNITS = '5'; 
public static final char POINTS_PER_BOND_OR_OR_CONTRACT = '6'; 

  public CommType() 
  { 
    super(13);
  } 
  public CommType(char data) 
  { 
    super(13, data);
  } 
} 
