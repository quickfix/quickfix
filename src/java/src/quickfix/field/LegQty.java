package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class LegQty extends DoubleField 
{ 
  public static final int FIELD = 687; 

  public LegQty() 
  { 
    super(687);
  } 
  public LegQty(double data) 
  { 
    super(687, data);
  } 
} 
