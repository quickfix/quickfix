package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class TotalTakedown extends DoubleField 
{ 
  public static final int FIELD = 237; 

  public TotalTakedown() 
  { 
    super(237);
  } 
  public TotalTakedown(double data) 
  { 
    super(237, data);
  } 
} 
