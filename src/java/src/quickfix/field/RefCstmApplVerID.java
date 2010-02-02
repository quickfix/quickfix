package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefCstmApplVerID extends StringField 
{ 
  public static final int FIELD = 1131; 

  public RefCstmApplVerID() 
  { 
    super(1131);
  } 
  public RefCstmApplVerID(String data) 
  { 
    super(1131, data);
  } 
} 
