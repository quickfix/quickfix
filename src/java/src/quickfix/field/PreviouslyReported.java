package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class PreviouslyReported extends BooleanField 
{ 
  public static final int FIELD = 570; 

  public PreviouslyReported() 
  { 
    super(570);
  } 
  public PreviouslyReported(boolean data) 
  { 
    super(570, data);
  } 
} 
