package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TriggerAction extends CharField 
{ 
  public static final int FIELD = 1101; 
public static final char ACTIVATE = '1'; 
public static final char MODIFY = '2'; 
public static final char CANCEL = '3'; 

  public TriggerAction() 
  { 
    super(1101);
  } 
  public TriggerAction(char data) 
  { 
    super(1101, data);
  } 
} 
