package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TotalNumSecurityTypes extends IntField 
{ 
  public static final int FIELD = 557; 

  public TotalNumSecurityTypes() 
  { 
    super(557);
  } 
  public TotalNumSecurityTypes(int data) 
  { 
    super(557, data);
  } 
} 
