package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class SecondaryAllocID extends StringField 
{ 
  public static final int FIELD = 793; 

  public SecondaryAllocID() 
  { 
    super(793);
  } 
  public SecondaryAllocID(String data) 
  { 
    super(793, data);
  } 
} 
