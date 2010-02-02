package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RootPartySubID extends StringField 
{ 
  public static final int FIELD = 1121; 

  public RootPartySubID() 
  { 
    super(1121);
  } 
  public RootPartySubID(String data) 
  { 
    super(1121, data);
  } 
} 
