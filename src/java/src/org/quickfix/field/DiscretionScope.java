package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class DiscretionScope extends IntField 
{ 
  public static final int FIELD = 846; 
public static final int LOCAL_EXCHANGE_ECNATS = 1; 
public static final int NATIONAL = 2; 
public static final int GLOBAL = 3; 
public static final int NATIONAL_EXCLUDING_LOCAL = 4; 

  public DiscretionScope() 
  { 
    super(846);
  } 
  public DiscretionScope(int data) 
  { 
    super(846, data);
  } 
} 
