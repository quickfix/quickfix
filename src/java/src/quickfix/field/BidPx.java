package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class BidPx extends DoubleField 
{ 
  public static final int FIELD = 132; 

  public BidPx() 
  { 
    super(132);
  } 
  public BidPx(double data) 
  { 
    super(132, data);
  } 
} 
