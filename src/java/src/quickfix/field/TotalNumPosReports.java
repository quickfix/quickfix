package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TotalNumPosReports extends IntField 
{ 
  public static final int FIELD = 727; 

  public TotalNumPosReports() 
  { 
    super(727);
  } 
  public TotalNumPosReports(int data) 
  { 
    super(727, data);
  } 
} 
