package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class OrigPosReqRefID extends StringField 
{ 
  public static final int FIELD = 713; 

  public OrigPosReqRefID() 
  { 
    super(713);
  } 
  public OrigPosReqRefID(String data) 
  { 
    super(713, data);
  } 
} 
