package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityReqID extends StringField 
{ 
  public static final int FIELD = 320; 

  public SecurityReqID() 
  { 
    super(320);
  } 
  public SecurityReqID(String data) 
  { 
    super(320, data);
  } 
} 
