package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class RefAllocID extends StringField 
{ 
  public static final int FIELD = 72; 

  public RefAllocID() 
  { 
    super(72);
  } 
  public RefAllocID(String data) 
  { 
    super(72, data);
  } 
} 
