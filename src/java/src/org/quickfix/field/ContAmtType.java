package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class ContAmtType extends IntField 
{ 
  public static final int FIELD = 519; 

  public ContAmtType() 
  { 
    super(519);
  } 
  public ContAmtType(int data) 
  { 
    super(519, data);
  } 
} 
