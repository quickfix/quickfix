package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrderInputDevice extends StringField 
{ 
  public static final int FIELD = 821; 

  public OrderInputDevice() 
  { 
    super(821);
  } 
  public OrderInputDevice(String data) 
  { 
    super(821, data);
  } 
} 
