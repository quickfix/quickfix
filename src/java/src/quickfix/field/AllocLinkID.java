package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AllocLinkID extends StringField 
{ 
  public static final int FIELD = 196; 

  public AllocLinkID() 
  { 
    super(196);
  } 
  public AllocLinkID(String data) 
  { 
    super(196, data);
  } 
} 
