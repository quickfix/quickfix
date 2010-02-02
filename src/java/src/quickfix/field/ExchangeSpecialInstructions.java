package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExchangeSpecialInstructions extends StringField 
{ 
  public static final int FIELD = 1139; 

  public ExchangeSpecialInstructions() 
  { 
    super(1139);
  } 
  public ExchangeSpecialInstructions(String data) 
  { 
    super(1139, data);
  } 
} 
