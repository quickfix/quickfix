package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class MassCancelRejectReason extends IntField 
{ 
  public static final int FIELD = 532; 
public static final int MASS_CXL_NOT_SUPPORTED = 0; 
public static final int INVALID_SECURITY = 1; 
public static final int INVALID_UNDERLYING = 2; 
public static final int INVALID_PRODUCT = 3; 
public static final int INVALID_CFICODE = 4; 
public static final int INVALID_SECURITY_TYPE = 5; 
public static final int INVALID_TRD_SESSION = 6; 
public static final int OTHER = 99; 

  public MassCancelRejectReason() 
  { 
    super(532);
  } 
  public MassCancelRejectReason(int data) 
  { 
    super(532, data);
  } 
} 
