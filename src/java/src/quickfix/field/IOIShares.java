package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class IOIShares extends StringField 
{ 
  public static final int FIELD = 27; 

  public IOIShares() 
  { 
    super(27);
  } 
  public IOIShares(String data) 
  { 
    super(27, data);
  } 
} 
