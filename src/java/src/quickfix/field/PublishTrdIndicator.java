package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class PublishTrdIndicator extends BooleanField 
{ 
  public static final int FIELD = 852; 

  public PublishTrdIndicator() 
  { 
    super(852);
  } 
  public PublishTrdIndicator(boolean data) 
  { 
    super(852, data);
  } 
} 
