package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PosTransType extends IntField 
{ 
  public static final int FIELD = 709; 
public static final int EXERCISE = 1; 
public static final int DO_NOT_EXERCISE = 2; 
public static final int POSITION_ADJUSTMENT = 3; 
public static final int POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION = 4; 
public static final int PLEDGE = 5; 

  public PosTransType() 
  { 
    super(709);
  } 
  public PosTransType(int data) 
  { 
    super(709, data);
  } 
} 
