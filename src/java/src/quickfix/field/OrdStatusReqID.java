package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrdStatusReqID extends StringField 
{ 
  public static final int FIELD = 790; 

  public OrdStatusReqID() 
  { 
    super(790);
  } 
  public OrdStatusReqID(String data) 
  { 
    super(790, data);
  } 
} 
