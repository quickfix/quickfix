package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class RefTagID extends IntField 
{ 
  public static final int FIELD = 371; 

  public RefTagID() 
  { 
    super(371);
  } 
  public RefTagID(int data) 
  { 
    super(371, data);
  } 
} 
