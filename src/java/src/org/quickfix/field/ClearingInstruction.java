package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ClearingInstruction extends IntField 
{ 
  public static final int FIELD = 577; 
public static final int PROCESS_NORMALLY = 0; 
public static final int EXCLUDE_FROM_ALL_NETTING = 1; 
public static final int BILATERAL_NETTING_ONLY = 2; 
public static final int EX_CLEARING = 3; 
public static final int SPECIAL_TRADE = 4; 
public static final int MULTILATERAL_NETTING = 5; 
public static final int CLEAR_AGAINST_CENTRAL_COUNTERPARTY = 6; 
public static final int EXCLUDE_FROM_CENTRAL_COUNTERPARTY = 7; 
public static final int MANUAL_MODE = 8; 
public static final int AUTOMATIC_POSTING_MODE = 9; 
public static final int AUTOMATIC_GIVE_UP_MODE = 10; 

  public ClearingInstruction() 
  { 
    super(577);
  } 
  public ClearingInstruction(int data) 
  { 
    super(577, data);
  } 
} 
