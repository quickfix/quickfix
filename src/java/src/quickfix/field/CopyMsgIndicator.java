package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class CopyMsgIndicator extends BooleanField 
{ 
  public static final int FIELD = 797; 

  public CopyMsgIndicator() 
  { 
    super(797);
  } 
  public CopyMsgIndicator(boolean data) 
  { 
    super(797, data);
  } 
} 
