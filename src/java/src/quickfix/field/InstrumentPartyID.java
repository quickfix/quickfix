package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class InstrumentPartyID extends StringField 
{ 
  public static final int FIELD = 1019; 

  public InstrumentPartyID() 
  { 
    super(1019);
  } 
  public InstrumentPartyID(String data) 
  { 
    super(1019, data);
  } 
} 
