package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoQuoteQualifiers extends IntField 
{ 
  public static final int FIELD = 735; 

  public NoQuoteQualifiers() 
  { 
    super(735);
  } 
  public NoQuoteQualifiers(int data) 
  { 
    super(735, data);
  } 
} 
