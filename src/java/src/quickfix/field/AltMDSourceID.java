package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AltMDSourceID extends StringField 
{ 
  public static final int FIELD = 817; 

  public AltMDSourceID() 
  { 
    super(817);
  } 
  public AltMDSourceID(String data) 
  { 
    super(817, data);
  } 
} 
