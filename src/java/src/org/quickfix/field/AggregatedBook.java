package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class AggregatedBook extends BooleanField 
{ 
  public static final int FIELD = 266; 
public static final boolean ONE_BOOK_ENTRY_PER_SIDE_PER_PRICE = true; 
public static final boolean MULTIPLE_ENTRIES_PER_SIDE_PER_PRICE_ALLOWED = false; 

  public AggregatedBook() 
  { 
    super(266);
  } 
  public AggregatedBook(boolean data) 
  { 
    super(266, data);
  } 
} 
