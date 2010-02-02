package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class HostCrossID extends StringField 
{ 
  public static final int FIELD = 961; 

  public HostCrossID() 
  { 
    super(961);
  } 
  public HostCrossID(String data) 
  { 
    super(961, data);
  } 
} 
