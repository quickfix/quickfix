package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ComplianceID extends StringField 
{ 
  public static final int FIELD = 376; 

  public ComplianceID() 
  { 
    super(376);
  } 
  public ComplianceID(String data) 
  { 
    super(376, data);
  } 
} 
