package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNoRelatedSym extends IntField 
{ 
  public static final int FIELD = 393; 

  public TotNoRelatedSym() 
  { 
    super(393);
  } 
  public TotNoRelatedSym(int data) 
  { 
    super(393, data);
  } 
} 
