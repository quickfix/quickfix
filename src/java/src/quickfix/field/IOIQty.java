package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class IOIQty extends StringField 
{ 
  public static final int FIELD = 27; 
public static final String _1000000000 = "0"; 
public static final String SMALL = "S"; 
public static final String MEDIUM = "M"; 
public static final String LARGE = "L"; 
public static final String UNDISCLOSED_QUANTITY = "U"; 

  public IOIQty() 
  { 
    super(27);
  } 
  public IOIQty(String data) 
  { 
    super(27, data);
  } 
} 
