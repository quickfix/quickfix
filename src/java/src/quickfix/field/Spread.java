package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Spread extends DoubleField 
{ 
  public static final int FIELD = 218; 

  public Spread() 
  { 
    super(218);
  } 
  public Spread(double data) 
  { 
    super(218, data);
  } 
} 
