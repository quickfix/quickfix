package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegStipulationValue extends StringField 
{ 
  public static final int FIELD = 689; 

  public LegStipulationValue() 
  { 
    super(689);
  } 
  public LegStipulationValue(String data) 
  { 
    super(689, data);
  } 
} 
