package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UndlyInstrumentPartySubID extends StringField 
{ 
  public static final int FIELD = 1063; 

  public UndlyInstrumentPartySubID() 
  { 
    super(1063);
  } 
  public UndlyInstrumentPartySubID(String data) 
  { 
    super(1063, data);
  } 
} 
