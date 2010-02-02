package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class PegSecurityIDSource extends StringField 
{ 
  public static final int FIELD = 1096; 

  public PegSecurityIDSource() 
  { 
    super(1096);
  } 
  public PegSecurityIDSource(String data) 
  { 
    super(1096, data);
  } 
} 
