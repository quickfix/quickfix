package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeliverToLocationID extends StringField 
{ 
  public static final int FIELD = 145; 

  public DeliverToLocationID() 
  { 
    super(145);
  } 
  public DeliverToLocationID(String data) 
  { 
    super(145, data);
  } 
} 
