package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EncodedListExecInst extends StringField 
{ 
  public static final int FIELD = 353; 

  public EncodedListExecInst() 
  { 
    super(353);
  } 
  public EncodedListExecInst(String data) 
  { 
    super(353, data);
  } 
} 
