package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MassStatusReqID extends StringField 
{ 
  public static final int FIELD = 584; 

  public MassStatusReqID() 
  { 
    super(584);
  } 
  public MassStatusReqID(String data) 
  { 
    super(584, data);
  } 
} 
