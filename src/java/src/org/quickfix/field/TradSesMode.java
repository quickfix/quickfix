package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TradSesMode extends IntField 
{ 
  public static final int FIELD = 339; 
public static final int TESTING = 1; 
public static final int SIMULATED = 2; 
public static final int PRODUCTION = 3; 

  public TradSesMode() 
  { 
    super(339);
  } 
  public TradSesMode(int data) 
  { 
    super(339, data);
  } 
} 
