package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class StandInstDbType extends IntField 
{ 
  public static final int FIELD = 169; 
public static final int OTHER = 0; 
public static final int SID = 1; 
public static final int ALERT = 2; 
public static final int CUSTODIAN = 3; 
public static final int ACCOUNT_NET = 4; 

  public StandInstDbType() 
  { 
    super(169);
  } 
  public StandInstDbType(int data) 
  { 
    super(169, data);
  } 
} 
