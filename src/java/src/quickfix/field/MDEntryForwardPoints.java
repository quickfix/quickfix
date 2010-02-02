package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MDEntryForwardPoints extends DoubleField 
{ 
  public static final int FIELD = 1027; 

  public MDEntryForwardPoints() 
  { 
    super(1027);
  } 
  public MDEntryForwardPoints(double data) 
  { 
    super(1027, data);
  } 
} 
