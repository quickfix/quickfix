package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class NetworkResponseID extends StringField 
{ 
  public static final int FIELD = 932; 

  public NetworkResponseID() 
  { 
    super(932);
  } 
  public NetworkResponseID(String data) 
  { 
    super(932, data);
  } 
} 
