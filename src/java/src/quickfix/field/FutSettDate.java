package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class FutSettDate extends StringField 
{ 
  public static final int FIELD = 64; 

  public FutSettDate() 
  { 
    super(64);
  } 
  public FutSettDate(String data) 
  { 
    super(64, data);
  } 
} 
