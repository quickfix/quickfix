package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MultiLegRptTypeReq extends IntField 
{ 
  public static final int FIELD = 563; 

  public MultiLegRptTypeReq() 
  { 
    super(563);
  } 
  public MultiLegRptTypeReq(int data) 
  { 
    super(563, data);
  } 
} 
