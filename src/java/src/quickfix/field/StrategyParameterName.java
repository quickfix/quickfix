package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StrategyParameterName extends StringField 
{ 
  public static final int FIELD = 958; 

  public StrategyParameterName() 
  { 
    super(958);
  } 
  public StrategyParameterName(String data) 
  { 
    super(958, data);
  } 
} 
