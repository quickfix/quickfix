package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class AllocAcctIDSource extends IntField 
{ 
  public static final int FIELD = 661; 

  public AllocAcctIDSource() 
  { 
    super(661);
  } 
  public AllocAcctIDSource(int data) 
  { 
    super(661, data);
  } 
} 
