package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ContraTrader extends StringField 
{ 
  public static final int FIELD = 337; 

  public ContraTrader() 
  { 
    super(337);
  } 
  public ContraTrader(String data) 
  { 
    super(337, data);
  } 
} 
