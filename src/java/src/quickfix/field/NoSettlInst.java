package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoSettlInst extends IntField 
{ 
  public static final int FIELD = 778; 

  public NoSettlInst() 
  { 
    super(778);
  } 
  public NoSettlInst(int data) 
  { 
    super(778, data);
  } 
} 
