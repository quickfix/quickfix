package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SideMultiLegReportingType extends IntField 
{ 
  public static final int FIELD = 752; 
public static final int SINGLE_SECURITY = 1; 
public static final int INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY = 2; 
public static final int MULTI_LEG_SECURITY = 3; 

  public SideMultiLegReportingType() 
  { 
    super(752);
  } 
  public SideMultiLegReportingType(int data) 
  { 
    super(752, data);
  } 
} 
