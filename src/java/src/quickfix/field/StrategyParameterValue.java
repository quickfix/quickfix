package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class StrategyParameterValue extends StringField 
{ 
  public static final int FIELD = 960; 

  public StrategyParameterValue() 
  { 
    super(960);
  } 
  public StrategyParameterValue(String data) 
  { 
    super(960, data);
  } 
} 
