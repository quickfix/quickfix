package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoSecurityAltID extends IntField 
{ 
  public static final int FIELD = 454; 

  public NoSecurityAltID() 
  { 
    super(454);
  } 
  public NoSecurityAltID(int data) 
  { 
    super(454, data);
  } 
} 
