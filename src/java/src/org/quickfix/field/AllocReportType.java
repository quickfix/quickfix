package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocReportType extends IntField 
{ 
  public static final int FIELD = 794; 
public static final int SELLSIDE_CALCULATED_USING_PRELIMINARY = 3; 
public static final int SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY = 4; 
public static final int WAREHOUSE_RECAP = 5; 
public static final int REQUEST_TO_INTERMEDIARY = 8; 

  public AllocReportType() 
  { 
    super(794);
  } 
  public AllocReportType(int data) 
  { 
    super(794, data);
  } 
} 
