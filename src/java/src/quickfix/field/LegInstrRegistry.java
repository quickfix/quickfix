package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegInstrRegistry extends StringField 
{ 
  public static final int FIELD = 599; 

  public LegInstrRegistry() 
  { 
    super(599);
  } 
  public LegInstrRegistry(String data) 
  { 
    super(599, data);
  } 
} 
