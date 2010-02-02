package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PegSymbol extends StringField 
{ 
  public static final int FIELD = 1098; 

  public PegSymbol() 
  { 
    super(1098);
  } 
  public PegSymbol(String data) 
  { 
    super(1098, data);
  } 
} 
