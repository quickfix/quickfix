package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LastMkt extends StringField 
{ 
  public static final int FIELD = 30; 

  public LastMkt() 
  { 
    super(30);
  } 
  public LastMkt(String data) 
  { 
    super(30, data);
  } 
} 
