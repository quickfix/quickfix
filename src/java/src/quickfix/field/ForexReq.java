package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ForexReq extends BooleanField 
{ 
  public static final int FIELD = 121; 

  public ForexReq() 
  { 
    super(121);
  } 
  public ForexReq(boolean data) 
  { 
    super(121, data);
  } 
} 
