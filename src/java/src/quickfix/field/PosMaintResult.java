package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class PosMaintResult extends IntField 
{ 
  public static final int FIELD = 723; 
public static final int SUCCESSFUL_COMPLETION_NO_WARNINGS_OR_ERRORS = 0; 
public static final int REJECTED = 1; 

  public PosMaintResult() 
  { 
    super(723);
  } 
  public PosMaintResult(int data) 
  { 
    super(723, data);
  } 
} 
