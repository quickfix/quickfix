package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class ExpType extends IntField 
{ 
  public static final int FIELD = 982; 
public static final int AUTO_EXERCISE = 1; 
public static final int NON_AUTO_EXERCISE = 2; 
public static final int FINAL_WILL_BE_EXERCISED = 3; 
public static final int CONTRARY_INTENTION = 4; 
public static final int DIFFERENCE = 5; 

  public ExpType() 
  { 
    super(982);
  } 
  public ExpType(int data) 
  { 
    super(982, data);
  } 
} 
