package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class QuantityDate extends StringField 
{ 
  public static final int FIELD = 976; 

  public QuantityDate() 
  { 
    super(976);
  } 
  public QuantityDate(String data) 
  { 
    super(976, data);
  } 
} 
