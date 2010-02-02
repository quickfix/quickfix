package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class CxlType extends CharField 
{ 
  public static final int FIELD = 125; 
public static final char PARTIAL_CANCEL = 'P'; 
public static final char FULL_REMAINING_QUANTITY = 'F'; 

  public CxlType() 
  { 
    super(125);
  } 
  public CxlType(char data) 
  { 
    super(125, data);
  } 
} 
