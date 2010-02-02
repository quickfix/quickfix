package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RptSys extends StringField 
{ 
  public static final int FIELD = 1135; 

  public RptSys() 
  { 
    super(1135);
  } 
  public RptSys(String data) 
  { 
    super(1135, data);
  } 
} 
