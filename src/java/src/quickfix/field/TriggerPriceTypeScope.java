package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TriggerPriceTypeScope extends CharField 
{ 
  public static final int FIELD = 1108; 
public static final char NONE = '0'; 
public static final char LOCAL = '1'; 
public static final char NATIONAL = '2'; 
public static final char GLOBAL = '3'; 

  public TriggerPriceTypeScope() 
  { 
    super(1108);
  } 
  public TriggerPriceTypeScope(char data) 
  { 
    super(1108, data);
  } 
} 
