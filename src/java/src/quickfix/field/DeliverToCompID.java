package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeliverToCompID extends StringField 
{ 
  public static final int FIELD = 128; 

  public DeliverToCompID() 
  { 
    super(128);
  } 
  public DeliverToCompID(String data) 
  { 
    super(128, data);
  } 
} 
