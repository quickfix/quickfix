package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingStipValue extends StringField 
{ 
  public static final int FIELD = 889; 

  public UnderlyingStipValue() 
  { 
    super(889);
  } 
  public UnderlyingStipValue(String data) 
  { 
    super(889, data);
  } 
} 
