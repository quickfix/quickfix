package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PaymentMethod extends IntField 
{ 
  public static final int FIELD = 492; 
public static final int CREST = 1; 
public static final int NSCC = 2; 
public static final int EUROCLEAR = 3; 
public static final int CLEARSTREAM = 4; 
public static final int CHEQUE = 5; 
public static final int TELEGRAPHIC_TRANSFER = 6; 
public static final int FED_WIRE = 7; 
public static final int DEBIT_CARD = 8; 
public static final int DIRECT_DEBIT_BECS = 9; 
public static final int DIRECT_CREDIT_BECS = 10; 
public static final int CREDIT_CARD = 11; 
public static final int ACHDEBIT = 12; 
public static final int ACHCREDIT = 13; 
public static final int BPAY = 14; 
public static final int HIGH_VALUE_CLEARING_SYSTEM_HVACS = 15; 

  public PaymentMethod() 
  { 
    super(492);
  } 
  public PaymentMethod(int data) 
  { 
    super(492, data);
  } 
} 
