package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ManualOrderIndicator extends BooleanField 
{ 
  public static final int FIELD = 1028; 

  public ManualOrderIndicator() 
  { 
    super(1028);
  } 
  public ManualOrderIndicator(boolean data) 
  { 
    super(1028, data);
  } 
} 
