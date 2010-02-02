package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MaturityTime extends StringField 
{ 
  public static final int FIELD = 1079; 

  public MaturityTime() 
  { 
    super(1079);
  } 
  public MaturityTime(String data) 
  { 
    super(1079, data);
  } 
} 
