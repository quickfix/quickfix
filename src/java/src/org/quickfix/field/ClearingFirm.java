package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClearingFirm extends StringField 
{ 

  public ClearingFirm() 
  { 
    super(439);
  } 
  public ClearingFirm(String data) 
  { 
    super(439, data);
  } 
} 
