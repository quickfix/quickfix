package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LocaleOfIssue extends StringField 
{ 
  public static final int FIELD = 472; 

  public LocaleOfIssue() 
  { 
    super(472);
  } 
  public LocaleOfIssue(String data) 
  { 
    super(472, data);
  } 
} 
