package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegLastPx extends DoubleField 
{ 
  public static final int FIELD = 637; 

  public LegLastPx() 
  { 
    super(637);
  } 
  public LegLastPx(double data) 
  { 
    super(637, data);
  } 
} 
