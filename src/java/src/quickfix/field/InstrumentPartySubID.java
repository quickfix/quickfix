package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InstrumentPartySubID extends StringField 
{ 
  public static final int FIELD = 1053; 

  public InstrumentPartySubID() 
  { 
    super(1053);
  } 
  public InstrumentPartySubID(String data) 
  { 
    super(1053, data);
  } 
} 
