package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class DeliveryType extends IntField 
{ 
  public static final int FIELD = 919; 
public static final int VERSUS_PAYMENT = 0; 
public static final int FREE = 1; 
public static final int TRI_PARTY = 2; 
public static final int HOLD_IN_CUSTODY = 3; 

  public DeliveryType() 
  { 
    super(919);
  } 
  public DeliveryType(int data) 
  { 
    super(919, data);
  } 
} 
