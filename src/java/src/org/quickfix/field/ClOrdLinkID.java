package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClOrdLinkID extends StringField 
{ 
  public static final int FIELD = 583; 

  public ClOrdLinkID() 
  { 
    super(583);
  } 
  public ClOrdLinkID(String data) 
  { 
    super(583, data);
  } 
} 
