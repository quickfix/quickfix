package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PegScope extends IntField 
{ 
  public static final int FIELD = 840; 
public static final int LOCAL_EXCHANGE_ECNATS = 1; 
public static final int NATIONAL = 2; 
public static final int GLOBAL = 3; 
public static final int NATIONAL_EXCLUDING_LOCAL = 4; 

  public PegScope() 
  { 
    super(840);
  } 
  public PegScope(int data) 
  { 
    super(840, data);
  } 
} 
