package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class NetMoney extends DoubleField 
{ 
  public static final int FIELD = 118; 

  public NetMoney() 
  { 
    super(118);
  } 
  public NetMoney(double data) 
  { 
    super(118, data);
  } 
} 
