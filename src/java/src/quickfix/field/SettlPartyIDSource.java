package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class SettlPartyIDSource extends CharField 
{ 
  public static final int FIELD = 783; 

  public SettlPartyIDSource() 
  { 
    super(783);
  } 
  public SettlPartyIDSource(char data) 
  { 
    super(783, data);
  } 
} 
