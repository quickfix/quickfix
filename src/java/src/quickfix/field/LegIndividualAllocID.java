package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegIndividualAllocID extends StringField 
{ 
  public static final int FIELD = 672; 

  public LegIndividualAllocID() 
  { 
    super(672);
  } 
  public LegIndividualAllocID(String data) 
  { 
    super(672, data);
  } 
} 
