package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AllocLinkID extends StringField 
{ 

  public AllocLinkID() 
  { 
    super(196);
  } 
  public AllocLinkID(String data) 
  { 
    super(196, data);
  } 
} 
