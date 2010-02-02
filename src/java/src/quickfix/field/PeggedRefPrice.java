package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class PeggedRefPrice extends DoubleField 
{ 
  public static final int FIELD = 1095; 

  public PeggedRefPrice() 
  { 
    super(1095);
  } 
  public PeggedRefPrice(double data) 
  { 
    super(1095, data);
  } 
} 
