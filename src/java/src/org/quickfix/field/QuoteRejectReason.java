package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteRejectReason extends IntField 
{ 
  public static final int FIELD = 300; 
public static final int UNKN_SYM = 1; 
public static final int EXCH_CLSD = 2; 
public static final int ORD_EX_LIM = 3; 
public static final int TOO_LATE = 4; 
public static final int UNKN_ORD = 5; 
public static final int DUP_ORD = 6; 
public static final int INV_SPREAD = 7; 
public static final int INV_PX = 8; 
public static final int NOT_AUTH = 9; 
public static final int OTHER = 99; 

  public QuoteRejectReason() 
  { 
    super(300);
  } 
  public QuoteRejectReason(int data) 
  { 
    super(300, data);
  } 
} 
