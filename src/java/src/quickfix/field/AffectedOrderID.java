package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AffectedOrderID extends StringField 
{ 
  public static final int FIELD = 535; 

  public AffectedOrderID() 
  { 
    super(535);
  } 
  public AffectedOrderID(String data) 
  { 
    super(535, data);
  } 
} 
