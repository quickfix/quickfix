package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoEvents extends IntField 
{ 
  public static final int FIELD = 864; 

  public NoEvents() 
  { 
    super(864);
  } 
  public NoEvents(int data) 
  { 
    super(864, data);
  } 
} 
