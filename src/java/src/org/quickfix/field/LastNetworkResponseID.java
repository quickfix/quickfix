package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LastNetworkResponseID extends StringField 
{ 
  public static final int FIELD = 934; 

  public LastNetworkResponseID() 
  { 
    super(934);
  } 
  public LastNetworkResponseID(String data) 
  { 
    super(934, data);
  } 
} 
