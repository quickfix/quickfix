package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class Shares extends DoubleField 
{ 
  public static final int FIELD = 53; 

  public Shares() 
  { 
    super(53);
  } 
  public Shares(double data) 
  { 
    super(53, data);
  } 
} 
