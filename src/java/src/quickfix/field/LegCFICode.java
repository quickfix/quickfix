package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegCFICode extends StringField 
{ 
  public static final int FIELD = 608; 

  public LegCFICode() 
  { 
    super(608);
  } 
  public LegCFICode(String data) 
  { 
    super(608, data);
  } 
} 
