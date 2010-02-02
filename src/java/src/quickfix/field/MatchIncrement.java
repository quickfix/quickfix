package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MatchIncrement extends DoubleField 
{ 
  public static final int FIELD = 1089; 

  public MatchIncrement() 
  { 
    super(1089);
  } 
  public MatchIncrement(double data) 
  { 
    super(1089, data);
  } 
} 
