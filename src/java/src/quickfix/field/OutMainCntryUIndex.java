package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class OutMainCntryUIndex extends DoubleField 
{ 
  public static final int FIELD = 412; 

  public OutMainCntryUIndex() 
  { 
    super(412);
  } 
  public OutMainCntryUIndex(double data) 
  { 
    super(412, data);
  } 
} 
