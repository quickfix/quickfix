package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SettlCurrency extends StringField 
{ 
  public static final int FIELD = 120; 

  public SettlCurrency() 
  { 
    super(120);
  } 
  public SettlCurrency(String data) 
  { 
    super(120, data);
  } 
} 
