package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PegMoveType extends IntField 
{ 
  public static final int FIELD = 835; 
public static final int FLOATING = 0; 
public static final int FIXED = 1; 

  public PegMoveType() 
  { 
    super(835);
  } 
  public PegMoveType(int data) 
  { 
    super(835, data);
  } 
} 
