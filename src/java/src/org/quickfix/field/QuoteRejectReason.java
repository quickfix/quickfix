package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteRejectReason extends IntField 
{ 
  public static final int FIELD = 300; 

  public QuoteRejectReason() 
  { 
    super(300);
  } 
  public QuoteRejectReason(int data) 
  { 
    super(300, data);
  } 
} 
