package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotQuoteEntries extends IntField 
{ 
  public static final int FIELD = 304; 

  public TotQuoteEntries() 
  { 
    super(304);
  } 
  public TotQuoteEntries(int data) 
  { 
    super(304, data);
  } 
} 
