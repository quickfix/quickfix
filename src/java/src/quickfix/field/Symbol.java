package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class Symbol extends StringField 
{ 
  public static final int FIELD = 55; 

  public Symbol() 
  { 
    super(55);
  } 
  public Symbol(String data) 
  { 
    super(55, data);
  } 
} 
