package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MDEntrySpotRate extends DoubleField 
{ 
  public static final int FIELD = 1026; 

  public MDEntrySpotRate() 
  { 
    super(1026);
  } 
  public MDEntrySpotRate(double data) 
  { 
    super(1026, data);
  } 
} 
