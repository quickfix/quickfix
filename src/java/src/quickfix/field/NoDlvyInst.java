package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoDlvyInst extends IntField 
{ 
  public static final int FIELD = 85; 

  public NoDlvyInst() 
  { 
    super(85);
  } 
  public NoDlvyInst(int data) 
  { 
    super(85, data);
  } 
} 
