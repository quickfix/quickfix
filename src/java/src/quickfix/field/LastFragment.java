package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class LastFragment extends BooleanField 
{ 
  public static final int FIELD = 893; 

  public LastFragment() 
  { 
    super(893);
  } 
  public LastFragment(boolean data) 
  { 
    super(893, data);
  } 
} 
