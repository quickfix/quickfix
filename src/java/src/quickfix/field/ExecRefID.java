package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExecRefID extends StringField 
{ 
  public static final int FIELD = 19; 

  public ExecRefID() 
  { 
    super(19);
  } 
  public ExecRefID(String data) 
  { 
    super(19, data);
  } 
} 
