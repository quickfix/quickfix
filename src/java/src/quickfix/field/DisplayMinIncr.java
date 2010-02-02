package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DisplayMinIncr extends DoubleField 
{ 
  public static final int FIELD = 1087; 

  public DisplayMinIncr() 
  { 
    super(1087);
  } 
  public DisplayMinIncr(double data) 
  { 
    super(1087, data);
  } 
} 
