package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class AsOfIndicator extends CharField 
{ 
  public static final int FIELD = 1015; 
public static final char FALSE = '0'; 
public static final char TRUE = '1'; 

  public AsOfIndicator() 
  { 
    super(1015);
  } 
  public AsOfIndicator(char data) 
  { 
    super(1015, data);
  } 
} 
