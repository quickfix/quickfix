package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class UndlyInstrumentPartyIDSource extends CharField 
{ 
  public static final int FIELD = 1060; 

  public UndlyInstrumentPartyIDSource() 
  { 
    super(1060);
  } 
  public UndlyInstrumentPartyIDSource(char data) 
  { 
    super(1060, data);
  } 
} 
