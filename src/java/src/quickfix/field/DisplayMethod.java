package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class DisplayMethod extends CharField 
{ 
  public static final int FIELD = 1084; 
public static final char INITIAL = '1'; 
public static final char NEW = '2'; 
public static final char RANDOM = '3'; 

  public DisplayMethod() 
  { 
    super(1084);
  } 
  public DisplayMethod(char data) 
  { 
    super(1084, data);
  } 
} 
