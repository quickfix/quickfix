package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class SideMultiLegReportingType extends IntField 
{ 
  public static final int FIELD = 752; 
public static final int SINGLE_SECURITY = 1; 
public static final int INDIVIDUAL_LEG_OF_AMULTILEG_SECURITY = 2; 
public static final int MULTILEG_SECURITY = 3; 

  public SideMultiLegReportingType() 
  { 
    super(752);
  } 
  public SideMultiLegReportingType(int data) 
  { 
    super(752, data);
  } 
} 
