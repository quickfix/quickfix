package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class DiscretionOffset extends DoubleField 
{ 
  public static final int FIELD = 389; 

  public DiscretionOffset() 
  { 
    super(389);
  } 
  public DiscretionOffset(double data) 
  { 
    super(389, data);
  } 
} 
