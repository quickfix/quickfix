package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TotNoAllocs extends IntField 
{ 
  public static final int FIELD = 892; 

  public TotNoAllocs() 
  { 
    super(892);
  } 
  public TotNoAllocs(int data) 
  { 
    super(892, data);
  } 
} 
