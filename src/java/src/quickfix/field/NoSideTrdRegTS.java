package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoSideTrdRegTS extends IntField 
{ 
  public static final int FIELD = 1016; 

  public NoSideTrdRegTS() 
  { 
    super(1016);
  } 
  public NoSideTrdRegTS(int data) 
  { 
    super(1016, data);
  } 
} 
