package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class Pool extends StringField 
{ 
  public static final int FIELD = 691; 

  public Pool() 
  { 
    super(691);
  } 
  public Pool(String data) 
  { 
    super(691, data);
  } 
} 
