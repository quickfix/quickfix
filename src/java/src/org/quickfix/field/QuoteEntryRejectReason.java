package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteEntryRejectReason extends IntField 
{ 
  public static final int FIELD = 368; 
public static final int UNKNWN_SYM = 1; 
public static final int EXCH_CLSD = 2; 
public static final int ORD_EXC_LIM = 3; 
public static final int TOO_LATE = 4; 
public static final int UNKN_ORD = 5; 
public static final int DUP_ORD = 6; 
public static final int INV_BID_ASK = 7; 
public static final int INV_PX = 8; 
public static final int NOT_AUTH = 9; 
public static final int OTHER = 99; 

  public QuoteEntryRejectReason() 
  { 
    super(368);
  } 
  public QuoteEntryRejectReason(int data) 
  { 
    super(368, data);
  } 
} 
