package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllocNetMoney extends DoubleField 
{ 
  public static final int FIELD = 154; 

  public AllocNetMoney() 
  { 
    super(154);
  } 
  public AllocNetMoney(double data) 
  { 
    super(154, data);
  } 
} 
