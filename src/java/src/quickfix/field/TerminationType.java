package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TerminationType extends IntField 
{ 
  public static final int FIELD = 788; 
public static final int OVERNIGHT = 1; 
public static final int TERM = 2; 
public static final int FLEXIBLE = 3; 
public static final int OPEN = 4; 

  public TerminationType() 
  { 
    super(788);
  } 
  public TerminationType(int data) 
  { 
    super(788, data);
  } 
} 
