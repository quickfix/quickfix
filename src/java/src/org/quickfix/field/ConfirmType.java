package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ConfirmType extends IntField 
{ 
  public static final int FIELD = 773; 
public static final int STATUS = 1; 
public static final int CONFIRMATION = 2; 
public static final int CONFIRMATION_REQUEST_REJECTED = 3; 

  public ConfirmType() 
  { 
    super(773);
  } 
  public ConfirmType(int data) 
  { 
    super(773, data);
  } 
} 
