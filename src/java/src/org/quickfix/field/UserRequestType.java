package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class UserRequestType extends IntField 
{ 
  public static final int FIELD = 924; 
public static final int LOG_ON_USER = 1; 
public static final int LOG_OFF_USER = 2; 
public static final int CHANGE_PASSWORD_FOR_USER = 3; 
public static final int REQUEST_INDIVIDUAL_USER_STATUS = 4; 

  public UserRequestType() 
  { 
    super(924);
  } 
  public UserRequestType(int data) 
  { 
    super(924, data);
  } 
} 
