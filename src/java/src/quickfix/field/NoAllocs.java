package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoAllocs extends IntField 
{ 
  public static final int FIELD = 78; 

  public NoAllocs() 
  { 
    super(78);
  } 
  public NoAllocs(int data) 
  { 
    super(78, data);
  } 
} 
