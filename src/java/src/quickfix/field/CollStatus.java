package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class CollStatus extends IntField 
{ 
  public static final int FIELD = 910; 
public static final int UNASSIGNED = 0; 
public static final int PARTIALLY_ASSIGNED = 1; 
public static final int ASSIGNMENT_PROPOSED = 2; 
public static final int ASSIGNED = 3; 
public static final int CHALLENGED = 4; 

  public CollStatus() 
  { 
    super(910);
  } 
  public CollStatus(int data) 
  { 
    super(910, data);
  } 
} 
