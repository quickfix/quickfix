package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MatchType extends StringField 
{ 
  public static final int FIELD = 574; 

  public MatchType() 
  { 
    super(574);
  } 
  public MatchType(String data) 
  { 
    super(574, data);
  } 
} 
