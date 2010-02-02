package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollApplType extends IntField 
{ 
  public static final int FIELD = 1043; 
public static final int SPECIFIC_DEPOSIT = 0; 
public static final int GENERAL = 1; 

  public CollApplType() 
  { 
    super(1043);
  } 
  public CollApplType(int data) 
  { 
    super(1043, data);
  } 
} 
