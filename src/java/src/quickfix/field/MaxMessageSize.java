package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MaxMessageSize extends IntField 
{ 
  public static final int FIELD = 383; 

  public MaxMessageSize() 
  { 
    super(383);
  } 
  public MaxMessageSize(int data) 
  { 
    super(383, data);
  } 
} 
