package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteAckStatus extends IntField 
{ 

  public QuoteAckStatus() 
  { 
    super(297);
  } 
  public QuoteAckStatus(int data) 
  { 
    super(297, data);
  } 
} 
