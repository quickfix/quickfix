package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MaxShow extends DoubleField 
{ 
  public static final int FIELD = 210; 

  public MaxShow() 
  { 
    super(210);
  } 
  public MaxShow(double data) 
  { 
    super(210, data);
  } 
} 
