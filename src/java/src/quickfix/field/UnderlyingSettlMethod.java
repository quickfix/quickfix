package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSettlMethod extends StringField 
{ 
  public static final int FIELD = 1039; 

  public UnderlyingSettlMethod() 
  { 
    super(1039);
  } 
  public UnderlyingSettlMethod(String data) 
  { 
    super(1039, data);
  } 
} 
