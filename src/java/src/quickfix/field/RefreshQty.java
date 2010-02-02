package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class RefreshQty extends DoubleField 
{ 
  public static final int FIELD = 1088; 

  public RefreshQty() 
  { 
    super(1088);
  } 
  public RefreshQty(double data) 
  { 
    super(1088, data);
  } 
} 
