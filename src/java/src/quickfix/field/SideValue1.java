package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class SideValue1 extends DoubleField 
{ 
  public static final int FIELD = 396; 

  public SideValue1() 
  { 
    super(396);
  } 
  public SideValue1(double data) 
  { 
    super(396, data);
  } 
} 
