package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AsgnRptID extends StringField 
{ 
  public static final int FIELD = 833; 

  public AsgnRptID() 
  { 
    super(833);
  } 
  public AsgnRptID(String data) 
  { 
    super(833, data);
  } 
} 
