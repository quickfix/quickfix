package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegAllocAcctIDSource extends StringField 
{ 
  public static final int FIELD = 674; 

  public LegAllocAcctIDSource() 
  { 
    super(674);
  } 
  public LegAllocAcctIDSource(String data) 
  { 
    super(674, data);
  } 
} 
