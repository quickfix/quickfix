package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class GapFillFlag extends BooleanField 
{ 
public static final boolean GAP_FILL_MESSAGE_MSGSEQNUM_FIELD_VALID = true; 
public static final boolean SEQUENCE_RESET_IGNORE_MSGSEQNUM = false; 

  public GapFillFlag() 
  { 
    super(123);
  } 
  public GapFillFlag(boolean data) 
  { 
    super(123, data);
  } 
} 
