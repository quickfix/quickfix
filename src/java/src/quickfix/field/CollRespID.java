package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CollRespID extends StringField 
{ 
  public static final int FIELD = 904; 

  public CollRespID() 
  { 
    super(904);
  } 
  public CollRespID(String data) 
  { 
    super(904, data);
  } 
} 
