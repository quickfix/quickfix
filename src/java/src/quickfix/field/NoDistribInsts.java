package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoDistribInsts extends IntField 
{ 
  public static final int FIELD = 510; 

  public NoDistribInsts() 
  { 
    super(510);
  } 
  public NoDistribInsts(int data) 
  { 
    super(510, data);
  } 
} 
