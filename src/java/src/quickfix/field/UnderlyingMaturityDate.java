package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingMaturityDate extends StringField 
{ 
  public static final int FIELD = 542; 

  public UnderlyingMaturityDate() 
  { 
    super(542);
  } 
  public UnderlyingMaturityDate(String data) 
  { 
    super(542, data);
  } 
} 
