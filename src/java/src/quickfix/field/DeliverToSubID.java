package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class DeliverToSubID extends StringField 
{ 
  public static final int FIELD = 129; 

  public DeliverToSubID() 
  { 
    super(129);
  } 
  public DeliverToSubID(String data) 
  { 
    super(129, data);
  } 
} 
