package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class AllocTransType extends CharField 
{ 
  public static final int FIELD = 71; 
public static final char NEW = '0'; 
public static final char REPLACE = '1'; 
public static final char CANCEL = '2'; 

  public AllocTransType() 
  { 
    super(71);
  } 
  public AllocTransType(char data) 
  { 
    super(71, data);
  } 
} 
