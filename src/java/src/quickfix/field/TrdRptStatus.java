package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TrdRptStatus extends IntField 
{ 
  public static final int FIELD = 939; 
public static final int ACCEPTED = 0; 
public static final int REJECTED = 1; 

  public TrdRptStatus() 
  { 
    super(939);
  } 
  public TrdRptStatus(int data) 
  { 
    super(939, data);
  } 
} 
