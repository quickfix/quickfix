package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TargetStrategyParameters extends StringField 
{ 
  public static final int FIELD = 848; 

  public TargetStrategyParameters() 
  { 
    super(848);
  } 
  public TargetStrategyParameters(String data) 
  { 
    super(848, data);
  } 
} 
