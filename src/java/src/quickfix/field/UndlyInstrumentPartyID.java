package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UndlyInstrumentPartyID extends StringField 
{ 
  public static final int FIELD = 1059; 

  public UndlyInstrumentPartyID() 
  { 
    super(1059);
  } 
  public UndlyInstrumentPartyID(String data) 
  { 
    super(1059, data);
  } 
} 
