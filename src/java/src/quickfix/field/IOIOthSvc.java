package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class IOIOthSvc extends CharField 
{ 
  public static final int FIELD = 24; 

  public IOIOthSvc() 
  { 
    super(24);
  } 
  public IOIOthSvc(char data) 
  { 
    super(24, data);
  } 
} 
