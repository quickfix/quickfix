package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class IssueDate extends StringField 
{ 
  public static final int FIELD = 225; 

  public IssueDate() 
  { 
    super(225);
  } 
  public IssueDate(String data) 
  { 
    super(225, data);
  } 
} 
