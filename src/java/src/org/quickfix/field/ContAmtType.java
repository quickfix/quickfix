package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ContAmtType extends IntField 
{ 
  public static final int FIELD = 519; 
public static final int COMMISSION_AMOUNT = 1; 
public static final int COMMISSION_PERCENT = 2; 
public static final int INITIAL_CHARGE_AMOUNT = 3; 
public static final int INITIAL_CHARGE_PERCENT = 4; 
public static final int DISCOUNT_AMOUNT = 5; 
public static final int DISCOUNT_PERCENT = 6; 
public static final int DILUTION_LEVY_AMOUNT = 7; 
public static final int DILUTION_LEVY_PERCENT = 8; 
public static final int EXIT_CHARGE_AMOUNT = 9; 

  public ContAmtType() 
  { 
    super(519);
  } 
  public ContAmtType(int data) 
  { 
    super(519, data);
  } 
} 
