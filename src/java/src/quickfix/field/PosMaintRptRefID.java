package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PosMaintRptRefID extends StringField 
{ 
  public static final int FIELD = 714; 

  public PosMaintRptRefID() 
  { 
    super(714);
  } 
  public PosMaintRptRefID(String data) 
  { 
    super(714, data);
  } 
} 
