package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class SolicitedFlag extends BooleanField 
{ 
  public static final int FIELD = 377; 

  public SolicitedFlag() 
  { 
    super(377);
  } 
  public SolicitedFlag(boolean data) 
  { 
    super(377, data);
  } 
} 
