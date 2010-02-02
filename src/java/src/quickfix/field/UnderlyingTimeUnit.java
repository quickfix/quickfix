package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingTimeUnit extends StringField 
{ 
  public static final int FIELD = 1000; 

  public UnderlyingTimeUnit() 
  { 
    super(1000);
  } 
  public UnderlyingTimeUnit(String data) 
  { 
    super(1000, data);
  } 
} 
