package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeliveryDate extends StringField 
{ 
  public static final int FIELD = 743; 

  public DeliveryDate() 
  { 
    super(743);
  } 
  public DeliveryDate(String data) 
  { 
    super(743, data);
  } 
} 
