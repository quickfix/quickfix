package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SideValue2 extends DoubleField 
{ 
  public static final int FIELD = 397; 

  public SideValue2() 
  { 
    super(397);
  } 
  public SideValue2(double data) 
  { 
    super(397, data);
  } 
} 
