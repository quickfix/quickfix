package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class OptAttribute extends CharField 
{ 
  public static final int FIELD = 206; 

  public OptAttribute() 
  { 
    super(206);
  } 
  public OptAttribute(char data) 
  { 
    super(206, data);
  } 
} 
