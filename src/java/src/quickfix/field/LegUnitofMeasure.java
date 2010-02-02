package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegUnitofMeasure extends StringField 
{ 
  public static final int FIELD = 999; 

  public LegUnitofMeasure() 
  { 
    super(999);
  } 
  public LegUnitofMeasure(String data) 
  { 
    super(999, data);
  } 
} 
