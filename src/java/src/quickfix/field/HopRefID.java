package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class HopRefID extends IntField 
{ 
  public static final int FIELD = 630; 

  public HopRefID() 
  { 
    super(630);
  } 
  public HopRefID(int data) 
  { 
    super(630, data);
  } 
} 
