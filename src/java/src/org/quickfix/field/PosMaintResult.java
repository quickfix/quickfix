package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PosMaintResult extends IntField 
{ 
  public static final int FIELD = 723; 
public static final int SUCCESSFUL_COMPLETION = 0; 
public static final int REJECTED = 1; 
public static final int OTHER = 99; 

  public PosMaintResult() 
  { 
    super(723);
  } 
  public PosMaintResult(int data) 
  { 
    super(723, data);
  } 
} 
