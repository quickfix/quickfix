package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class PosAmt extends DoubleField 
{ 
  public static final int FIELD = 708; 

  public PosAmt() 
  { 
    super(708);
  } 
  public PosAmt(double data) 
  { 
    super(708, data);
  } 
} 
