package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class PreviouslyReported extends BooleanField 
{ 
  public static final int FIELD = 570; 
public static final boolean PREVIOUSLY_REPORTED_TO_COUNTERPARTY = true; 
public static final boolean NOT_REPORTED_TO_COUNTERPARTY = false; 

  public PreviouslyReported() 
  { 
    super(570);
  } 
  public PreviouslyReported(boolean data) 
  { 
    super(570, data);
  } 
} 
