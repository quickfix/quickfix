package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class ExecPriceAdjustment extends DoubleField 
{ 
  public static final int FIELD = 485; 

  public ExecPriceAdjustment() 
  { 
    super(485);
  } 
  public ExecPriceAdjustment(double data) 
  { 
    super(485, data);
  } 
} 
