package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class MDImplicitDelete extends BooleanField 
{ 
  public static final int FIELD = 547; 

  public MDImplicitDelete() 
  { 
    super(547);
  } 
  public MDImplicitDelete(boolean data) 
  { 
    super(547, data);
  } 
} 
