package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class UserStatus extends IntField 
{ 
  public static final int FIELD = 926; 
public static final int LOGGED_IN = 1; 
public static final int NOT_LOGGED_IN = 2; 
public static final int USER_NOT_RECOGNISED = 3; 
public static final int PASSWORD_INCORRECT = 4; 
public static final int PASSWORD_CHANGED = 5; 
public static final int OTHER = 6; 

  public UserStatus() 
  { 
    super(926);
  } 
  public UserStatus(int data) 
  { 
    super(926, data);
  } 
} 
