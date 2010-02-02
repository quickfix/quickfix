package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class MDReportID extends IntField 
{ 
  public static final int FIELD = 963; 

  public MDReportID() 
  { 
    super(963);
  } 
  public MDReportID(int data) 
  { 
    super(963, data);
  } 
} 
