package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MassCancelRejectReason extends CharField 
{ 
  public static final int FIELD = 532; 

  public MassCancelRejectReason() 
  { 
    super(532);
  } 
  public MassCancelRejectReason(char data) 
  { 
    super(532, data);
  } 
} 
