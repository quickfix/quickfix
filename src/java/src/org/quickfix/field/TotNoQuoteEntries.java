package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class TotNoQuoteEntries extends IntField 
{ 
  public static final int FIELD = 304; 

  public TotNoQuoteEntries() 
  { 
    super(304);
  } 
  public TotNoQuoteEntries(int data) 
  { 
    super(304, data);
  } 
} 
