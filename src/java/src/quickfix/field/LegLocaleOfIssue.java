package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegLocaleOfIssue extends StringField 
{ 
  public static final int FIELD = 598; 

  public LegLocaleOfIssue() 
  { 
    super(598);
  } 
  public LegLocaleOfIssue(String data) 
  { 
    super(598, data);
  } 
} 
