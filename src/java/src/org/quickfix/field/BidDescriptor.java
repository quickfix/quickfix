package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BidDescriptor extends StringField 
{ 

  public BidDescriptor() 
  { 
    super(400);
  } 
  public BidDescriptor(String data) 
  { 
    super(400, data);
  } 
} 
