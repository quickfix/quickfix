package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNumReports extends IntField 
{ 
  public static final int FIELD = 911; 

  public TotNumReports() 
  { 
    super(911);
  } 
  public TotNumReports(int data) 
  { 
    super(911, data);
  } 
} 
