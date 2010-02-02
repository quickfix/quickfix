package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class SecurityUpdateAction extends CharField 
{ 
  public static final int FIELD = 980; 
public static final char ADD = 'A'; 
public static final char DELETE = 'D'; 
public static final char MODIFY = 'M'; 

  public SecurityUpdateAction() 
  { 
    super(980);
  } 
  public SecurityUpdateAction(char data) 
  { 
    super(980, data);
  } 
} 
