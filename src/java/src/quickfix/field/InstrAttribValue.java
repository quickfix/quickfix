package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InstrAttribValue extends StringField 
{ 
  public static final int FIELD = 872; 

  public InstrAttribValue() 
  { 
    super(872);
  } 
  public InstrAttribValue(String data) 
  { 
    super(872, data);
  } 
} 
