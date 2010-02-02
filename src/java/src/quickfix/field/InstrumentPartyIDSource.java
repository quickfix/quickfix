package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class InstrumentPartyIDSource extends CharField 
{ 
  public static final int FIELD = 1050; 

  public InstrumentPartyIDSource() 
  { 
    super(1050);
  } 
  public InstrumentPartyIDSource(char data) 
  { 
    super(1050, data);
  } 
} 
