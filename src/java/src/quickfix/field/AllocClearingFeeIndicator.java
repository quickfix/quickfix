package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocClearingFeeIndicator extends StringField 
{ 
  public static final int FIELD = 1136; 

  public AllocClearingFeeIndicator() 
  { 
    super(1136);
  } 
  public AllocClearingFeeIndicator(String data) 
  { 
    super(1136, data);
  } 
} 
