package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class StartCash extends DoubleField 
{ 
  public static final int FIELD = 921; 

  public StartCash() 
  { 
    super(921);
  } 
  public StartCash(double data) 
  { 
    super(921, data);
  } 
} 
