package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DlvyInst extends StringField 
{ 
  public static final int FIELD = 86; 

  public DlvyInst() 
  { 
    super(86);
  } 
  public DlvyInst(String data) 
  { 
    super(86, data);
  } 
} 
