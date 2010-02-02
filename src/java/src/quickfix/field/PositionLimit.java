package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PositionLimit extends IntField 
{ 
  public static final int FIELD = 970; 

  public PositionLimit() 
  { 
    super(970);
  } 
  public PositionLimit(int data) 
  { 
    super(970, data);
  } 
} 
