package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class EncodedListExecInst extends StringField 
{ 

  public EncodedListExecInst() 
  { 
    super(353);
  } 
  public EncodedListExecInst(String data) 
  { 
    super(353, data);
  } 
} 
