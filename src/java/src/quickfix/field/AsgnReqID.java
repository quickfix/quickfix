package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AsgnReqID extends StringField 
{ 
  public static final int FIELD = 831; 

  public AsgnReqID() 
  { 
    super(831);
  } 
  public AsgnReqID(String data) 
  { 
    super(831, data);
  } 
} 
