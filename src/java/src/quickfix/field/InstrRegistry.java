package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InstrRegistry extends StringField 
{ 
  public static final int FIELD = 543; 

  public InstrRegistry() 
  { 
    super(543);
  } 
  public InstrRegistry(String data) 
  { 
    super(543, data);
  } 
} 
