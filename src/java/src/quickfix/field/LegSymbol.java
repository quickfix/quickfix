package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSymbol extends StringField 
{ 
  public static final int FIELD = 600; 

  public LegSymbol() 
  { 
    super(600);
  } 
  public LegSymbol(String data) 
  { 
    super(600, data);
  } 
} 
