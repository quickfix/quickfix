package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class TargetLocationID extends StringField 
{ 
  public static final int FIELD = 143; 

  public TargetLocationID() 
  { 
    super(143);
  } 
  public TargetLocationID(String data) 
  { 
    super(143, data);
  } 
} 
