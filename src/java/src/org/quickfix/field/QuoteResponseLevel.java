package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteResponseLevel extends IntField 
{ 
  public static final int FIELD = 301; 
public static final int NO_ACK = 0; 
public static final int ACK_NEG = 1; 
public static final int ACK_EACH = 2; 

  public QuoteResponseLevel() 
  { 
    super(301);
  } 
  public QuoteResponseLevel(int data) 
  { 
    super(301, data);
  } 
} 
