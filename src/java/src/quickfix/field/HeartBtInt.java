package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class HeartBtInt extends IntField 
{ 
  public static final int FIELD = 108; 

  public HeartBtInt() 
  { 
    super(108);
  } 
  public HeartBtInt(int data) 
  { 
    super(108, data);
  } 
} 
