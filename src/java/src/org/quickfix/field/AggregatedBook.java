package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class AggregatedBook extends BooleanField 
{ 
  public static final int FIELD = 266; 
public static final boolean ONE_PER = true; 
public static final boolean MULTIPLE = false; 

  public AggregatedBook() 
  { 
    super(266);
  } 
  public AggregatedBook(boolean data) 
  { 
    super(266, data);
  } 
} 
