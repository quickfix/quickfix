package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoSecurityTypes extends IntField 
{ 
  public static final int FIELD = 558; 

  public NoSecurityTypes() 
  { 
    super(558);
  } 
  public NoSecurityTypes(int data) 
  { 
    super(558, data);
  } 
} 
