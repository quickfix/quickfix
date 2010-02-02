package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoExpiration extends IntField 
{ 
  public static final int FIELD = 981; 

  public NoExpiration() 
  { 
    super(981);
  } 
  public NoExpiration(int data) 
  { 
    super(981, data);
  } 
} 
