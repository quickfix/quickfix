package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MultiLegRptTypeReq extends IntField 
{ 
  public static final int FIELD = 563; 
public static final int REPORT_BY_MULITLEG_SECURITY_ONLY = 0; 
public static final int REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY = 1; 
public static final int REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY = 2; 

  public MultiLegRptTypeReq() 
  { 
    super(563);
  } 
  public MultiLegRptTypeReq(int data) 
  { 
    super(563, data);
  } 
} 
