package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnderlyingUnitofMeasure extends StringField 
{ 
  public static final int FIELD = 998; 

  public UnderlyingUnitofMeasure() 
  { 
    super(998);
  } 
  public UnderlyingUnitofMeasure(String data) 
  { 
    super(998, data);
  } 
} 
