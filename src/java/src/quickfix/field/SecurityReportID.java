package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SecurityReportID extends IntField 
{ 
  public static final int FIELD = 964; 

  public SecurityReportID() 
  { 
    super(964);
  } 
  public SecurityReportID(int data) 
  { 
    super(964, data);
  } 
} 
