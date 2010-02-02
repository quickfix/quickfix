package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PositionCurrency extends StringField 
{ 
  public static final int FIELD = 1055; 

  public PositionCurrency() 
  { 
    super(1055);
  } 
  public PositionCurrency(String data) 
  { 
    super(1055, data);
  } 
} 
