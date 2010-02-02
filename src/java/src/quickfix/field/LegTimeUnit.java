package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegTimeUnit extends StringField 
{ 
  public static final int FIELD = 1001; 

  public LegTimeUnit() 
  { 
    super(1001);
  } 
  public LegTimeUnit(String data) 
  { 
    super(1001, data);
  } 
} 
