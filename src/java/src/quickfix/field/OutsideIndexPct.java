package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class OutsideIndexPct extends DoubleField 
{ 
  public static final int FIELD = 407; 

  public OutsideIndexPct() 
  { 
    super(407);
  } 
  public OutsideIndexPct(double data) 
  { 
    super(407, data);
  } 
} 
