package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class MultiLegReportingType extends CharField 
{ 
  public static final int FIELD = 442; 
public static final char SINGLE_SECURITY = '1'; 
public static final char INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = '2'; 
public static final char MULTI_LEG_SECURITY = '3'; 

  public MultiLegReportingType() 
  { 
    super(442);
  } 
  public MultiLegReportingType(char data) 
  { 
    super(442, data);
  } 
} 
