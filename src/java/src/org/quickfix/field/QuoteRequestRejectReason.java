package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteRequestRejectReason extends IntField 
{ 
  public static final int FIELD = 658; 

  public QuoteRequestRejectReason() 
  { 
    super(658);
  } 
  public QuoteRequestRejectReason(int data) 
  { 
    super(658, data);
  } 
} 
