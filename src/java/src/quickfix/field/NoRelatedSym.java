package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoRelatedSym extends IntField 
{ 
  public static final int FIELD = 146; 

  public NoRelatedSym() 
  { 
    super(146);
  } 
  public NoRelatedSym(int data) 
  { 
    super(146, data);
  } 
} 
