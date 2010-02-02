package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ContIntRptID extends StringField 
{ 
  public static final int FIELD = 977; 

  public ContIntRptID() 
  { 
    super(977);
  } 
  public ContIntRptID(String data) 
  { 
    super(977, data);
  } 
} 
