package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SenderLocationID extends StringField 
{ 
  public static final int FIELD = 142; 

  public SenderLocationID() 
  { 
    super(142);
  } 
  public SenderLocationID(String data) 
  { 
    super(142, data);
  } 
} 
