package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class StandInstDbType extends IntField 
{ 
  public static final int FIELD = 169; 
public static final int OTHER = 0; 
public static final int DTC_SID = 1; 
public static final int THOMSON_ALERT = 2; 
public static final int A_GLOBAL_CUSTODIAN = 3; 

  public StandInstDbType() 
  { 
    super(169);
  } 
  public StandInstDbType(int data) 
  { 
    super(169, data);
  } 
} 
