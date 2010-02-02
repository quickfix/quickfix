package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ReportedPxDiff extends BooleanField 
{ 
  public static final int FIELD = 1134; 

  public ReportedPxDiff() 
  { 
    super(1134);
  } 
  public ReportedPxDiff(boolean data) 
  { 
    super(1134, data);
  } 
} 
