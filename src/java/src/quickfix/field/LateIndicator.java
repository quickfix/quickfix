package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class LateIndicator extends BooleanField 
{ 
  public static final int FIELD = 978; 

  public LateIndicator() 
  { 
    super(978);
  } 
  public LateIndicator(boolean data) 
  { 
    super(978, data);
  } 
} 
