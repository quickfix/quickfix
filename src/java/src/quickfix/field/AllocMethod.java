package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocMethod extends IntField 
{ 
  public static final int FIELD = 1002; 
public static final int AUTOMATIC = 1; 
public static final int GUARANTOR = 2; 
public static final int MANUAL = 3; 

  public AllocMethod() 
  { 
    super(1002);
  } 
  public AllocMethod(int data) 
  { 
    super(1002, data);
  } 
} 
