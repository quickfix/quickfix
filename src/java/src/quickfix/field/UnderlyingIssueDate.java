package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingIssueDate extends StringField 
{ 
  public static final int FIELD = 242; 

  public UnderlyingIssueDate() 
  { 
    super(242);
  } 
  public UnderlyingIssueDate(String data) 
  { 
    super(242, data);
  } 
} 
