package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class LegSecurityDesc extends StringField 
{ 
  public static final int FIELD = 620; 

  public LegSecurityDesc() 
  { 
    super(620);
  } 
  public LegSecurityDesc(String data) 
  { 
    super(620, data);
  } 
} 
