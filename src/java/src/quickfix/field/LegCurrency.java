package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegCurrency extends StringField 
{ 
  public static final int FIELD = 556; 

  public LegCurrency() 
  { 
    super(556);
  } 
  public LegCurrency(String data) 
  { 
    super(556, data);
  } 
} 
