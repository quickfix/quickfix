package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class DistribPaymentMethod extends IntField 
{ 
  public static final int FIELD = 477; 
public static final int CREST = 1; 
public static final int NSCC = 2; 
public static final int EUROCLEAR = 3; 
public static final int CLEARSTREAM = 4; 
public static final int CHEQUE = 5; 
public static final int TELEGRAPHIC_TRANSFER = 6; 
public static final int FEDWIRE = 7; 
public static final int DIRECT_CREDIT = 8; 
public static final int ACH_CREDIT = 9; 

  public DistribPaymentMethod() 
  { 
    super(477);
  } 
  public DistribPaymentMethod(int data) 
  { 
    super(477, data);
  } 
} 
