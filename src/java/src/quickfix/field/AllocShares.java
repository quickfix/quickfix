package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllocShares extends DoubleField 
{ 
  public static final int FIELD = 80; 

  public AllocShares() 
  { 
    super(80);
  } 
  public AllocShares(double data) 
  { 
    super(80, data);
  } 
} 
