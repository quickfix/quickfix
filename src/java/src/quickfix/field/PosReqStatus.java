package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PosReqStatus extends IntField 
{ 
  public static final int FIELD = 729; 
public static final int COMPLETED = 0; 
public static final int COMPLETED_WITH_WARNINGS = 1; 
public static final int REJECTED = 2; 

  public PosReqStatus() 
  { 
    super(729);
  } 
  public PosReqStatus(int data) 
  { 
    super(729, data);
  } 
} 
