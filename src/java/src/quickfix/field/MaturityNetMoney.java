package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MaturityNetMoney extends DoubleField 
{ 
  public static final int FIELD = 890; 

  public MaturityNetMoney() 
  { 
    super(890);
  } 
  public MaturityNetMoney(double data) 
  { 
    super(890, data);
  } 
} 
