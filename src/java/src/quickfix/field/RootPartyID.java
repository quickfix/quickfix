package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RootPartyID extends StringField 
{ 
  public static final int FIELD = 1117; 

  public RootPartyID() 
  { 
    super(1117);
  } 
  public RootPartyID(String data) 
  { 
    super(1117, data);
  } 
} 
