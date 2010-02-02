package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class PriceProtectionScope extends CharField 
{ 
  public static final int FIELD = 1092; 
public static final char NONE = '0'; 
public static final char LOCAL = '1'; 
public static final char NATIONAL = '2'; 
public static final char GLOBAL = '3'; 

  public PriceProtectionScope() 
  { 
    super(1092);
  } 
  public PriceProtectionScope(char data) 
  { 
    super(1092, data);
  } 
} 
