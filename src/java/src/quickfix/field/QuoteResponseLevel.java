package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteResponseLevel extends IntField 
{ 
  public static final int FIELD = 301; 
public static final int NO_ACKNOWLEDGEMENT = 0; 
public static final int ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES = 1; 
public static final int ACKNOWLEDGE_EACH_QUOTE_MESSAGES = 2; 

  public QuoteResponseLevel() 
  { 
    super(301);
  } 
  public QuoteResponseLevel(int data) 
  { 
    super(301, data);
  } 
} 
