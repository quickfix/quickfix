package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class MDImplicitDelete extends BooleanField 
{ 
  public static final int FIELD = 547; 
public static final boolean CLIENT_DELETES_BIDS = true; 
public static final boolean SERVER_DELETES_BIDS = false; 

  public MDImplicitDelete() 
  { 
    super(547);
  } 
  public MDImplicitDelete(boolean data) 
  { 
    super(547, data);
  } 
} 
