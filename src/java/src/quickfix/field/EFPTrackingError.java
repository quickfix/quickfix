package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class EFPTrackingError extends DoubleField 
{ 
  public static final int FIELD = 405; 

  public EFPTrackingError() 
  { 
    super(405);
  } 
  public EFPTrackingError(double data) 
  { 
    super(405, data);
  } 
} 
