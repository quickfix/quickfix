package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class PosMaintRptID extends StringField 
{ 
  public static final int FIELD = 721; 

  public PosMaintRptID() 
  { 
    super(721);
  } 
  public PosMaintRptID(String data) 
  { 
    super(721, data);
  } 
} 
