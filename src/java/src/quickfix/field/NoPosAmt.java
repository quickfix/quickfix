package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoPosAmt extends IntField 
{ 
  public static final int FIELD = 753; 

  public NoPosAmt() 
  { 
    super(753);
  } 
  public NoPosAmt(int data) 
  { 
    super(753, data);
  } 
} 
