package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ExecBroker extends StringField 
{ 
  public static final int FIELD = 76; 

  public ExecBroker() 
  { 
    super(76);
  } 
  public ExecBroker(String data) 
  { 
    super(76, data);
  } 
} 
