package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class LegPositionEffect extends CharField 
{ 
  public static final int FIELD = 564; 

  public LegPositionEffect() 
  { 
    super(564);
  } 
  public LegPositionEffect(char data) 
  { 
    super(564, data);
  } 
} 
