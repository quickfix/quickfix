package quickfix.field; 
import quickfix.BooleanField; 
import java.util.Date; 

public class ReportToExch extends BooleanField 
{ 
  public static final int FIELD = 113; 

  public ReportToExch() 
  { 
    super(113);
  } 
  public ReportToExch(boolean data) 
  { 
    super(113, data);
  } 
} 
