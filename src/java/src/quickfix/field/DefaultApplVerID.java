package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DefaultApplVerID extends StringField 
{ 
  public static final int FIELD = 1137; 

  public DefaultApplVerID() 
  { 
    super(1137);
  } 
  public DefaultApplVerID(String data) 
  { 
    super(1137, data);
  } 
} 
