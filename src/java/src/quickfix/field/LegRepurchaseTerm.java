package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LegRepurchaseTerm extends IntField 
{ 
  public static final int FIELD = 251; 

  public LegRepurchaseTerm() 
  { 
    super(251);
  } 
  public LegRepurchaseTerm(int data) 
  { 
    super(251, data);
  } 
} 
