package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocSettlInstType extends IntField 
{ 
  public static final int FIELD = 780; 
public static final int USE_DEFAULT_INSTRUCTIONS = 0; 
public static final int DERIVE_FROM_PARAMETERS_PROVIDED = 1; 
public static final int FULL_DETAILS_PROVIDED = 2; 
public static final int SSIDB_IDS_PROVIDED = 3; 
public static final int PHONE_FOR_INSTRUCTIONS = 4; 

  public AllocSettlInstType() 
  { 
    super(780);
  } 
  public AllocSettlInstType(int data) 
  { 
    super(780, data);
  } 
} 
