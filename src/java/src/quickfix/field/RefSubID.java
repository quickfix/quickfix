package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefSubID extends StringField 
{ 
  public static final int FIELD = 931; 

  public RefSubID() 
  { 
    super(931);
  } 
  public RefSubID(String data) 
  { 
    super(931, data);
  } 
} 
