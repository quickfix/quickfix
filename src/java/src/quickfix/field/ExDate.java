package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExDate extends StringField 
{ 
  public static final int FIELD = 230; 

  public ExDate() 
  { 
    super(230);
  } 
  public ExDate(String data) 
  { 
    super(230, data);
  } 
} 
