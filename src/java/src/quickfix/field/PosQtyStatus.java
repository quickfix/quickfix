package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PosQtyStatus extends IntField 
{ 
  public static final int FIELD = 706; 
public static final int SUBMITTED = 0; 
public static final int ACCEPTED = 1; 
public static final int REJECTED = 2; 

  public PosQtyStatus() 
  { 
    super(706);
  } 
  public PosQtyStatus(int data) 
  { 
    super(706, data);
  } 
} 
