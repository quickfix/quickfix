package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ListExecInst extends StringField 
{ 
  public static final int FIELD = 69; 

  public ListExecInst() 
  { 
    super(69);
  } 
  public ListExecInst(String data) 
  { 
    super(69, data);
  } 
} 
