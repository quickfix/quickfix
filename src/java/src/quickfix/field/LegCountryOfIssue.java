package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegCountryOfIssue extends StringField 
{ 
  public static final int FIELD = 596; 

  public LegCountryOfIssue() 
  { 
    super(596);
  } 
  public LegCountryOfIssue(String data) 
  { 
    super(596, data);
  } 
} 
