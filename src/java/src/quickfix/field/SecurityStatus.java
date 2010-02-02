package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SecurityStatus extends StringField 
{ 
  public static final int FIELD = 965; 
public static final String ACTIVE = "1"; 
public static final String INACTIVE = "2"; 

  public SecurityStatus() 
  { 
    super(965);
  } 
  public SecurityStatus(String data) 
  { 
    super(965, data);
  } 
} 
