package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoUnderlyingSecurityAltID extends IntField 
{ 
  public static final int FIELD = 457; 

  public NoUnderlyingSecurityAltID() 
  { 
    super(457);
  } 
  public NoUnderlyingSecurityAltID(int data) 
  { 
    super(457, data);
  } 
} 
