package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Currency extends StringField 
{ 
  public static final int FIELD = 15; 

  public Currency() 
  { 
    super(15);
  } 
  public Currency(String data) 
  { 
    super(15, data);
  } 
} 
