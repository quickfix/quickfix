package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MDEntrySeller extends StringField 
{ 
  public static final int FIELD = 289; 

  public MDEntrySeller() 
  { 
    super(289);
  } 
  public MDEntrySeller(String data) 
  { 
    super(289, data);
  } 
} 
