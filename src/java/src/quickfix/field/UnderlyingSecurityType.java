package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecurityType extends StringField 
{ 
  public static final int FIELD = 310; 

  public UnderlyingSecurityType() 
  { 
    super(310);
  } 
  public UnderlyingSecurityType(String data) 
  { 
    super(310, data);
  } 
} 
