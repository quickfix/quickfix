package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingSecuritySubType extends StringField 
{ 
  public static final int FIELD = 763; 

  public UnderlyingSecuritySubType() 
  { 
    super(763);
  } 
  public UnderlyingSecuritySubType(String data) 
  { 
    super(763, data);
  } 
} 
