package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingStateOrProvinceOfIssue extends StringField 
{ 
  public static final int FIELD = 593; 

  public UnderlyingStateOrProvinceOfIssue() 
  { 
    super(593);
  } 
  public UnderlyingStateOrProvinceOfIssue(String data) 
  { 
    super(593, data);
  } 
} 
