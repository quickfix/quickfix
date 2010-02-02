package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class LotType extends CharField 
{ 
  public static final int FIELD = 1093; 
public static final char ODD_LOT = '1'; 
public static final char ROUND_LOT = '2'; 
public static final char BLOCK_LOT = '3'; 

  public LotType() 
  { 
    super(1093);
  } 
  public LotType(char data) 
  { 
    super(1093, data);
  } 
} 
