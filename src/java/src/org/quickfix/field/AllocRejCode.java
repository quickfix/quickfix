package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocRejCode extends IntField 
{ 
  public static final int FIELD = 88; 
public static final int UNKNOWN_ACCT = 0; 
public static final int INCORRECT_QTY = 1; 
public static final int INCORRECT_AVG_PRC = 2; 
public static final int INCORRECT_BRK_MNC = 3; 
public static final int COMM_DIFF = 4; 
public static final int UNKNOWN_ORD_ID = 5; 
public static final int UNKNOWN_LIST_ID = 6; 
public static final int OTHER = 7; 
public static final int INCORRECT_ALLOCATED_QUANTITY = 8; 
public static final int CALCULATION_DIFFERENCE = 9; 
public static final int UNKNOWN_OR_STALE_EXEC_ID = 10; 
public static final int MISMATCHED_DATA = 11; 
public static final int UNKNOWN_CL_ORD_ID = 12; 
public static final int WAREHOUSE_REQUEST_REJECTED = 13; 

  public AllocRejCode() 
  { 
    super(88);
  } 
  public AllocRejCode(int data) 
  { 
    super(88, data);
  } 
} 
