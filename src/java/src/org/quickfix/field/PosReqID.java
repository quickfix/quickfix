package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PosReqID extends StringField 
{ 
  public static final int FIELD = 710; 

  public PosReqID() 
  { 
    super(710);
  } 
  public PosReqID(String data) 
  { 
    super(710, data);
  } 
} 
