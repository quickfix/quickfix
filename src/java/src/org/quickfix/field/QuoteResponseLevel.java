package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteResponseLevel extends IntField 
{ 
  public static final int FIELD = 301; 

  public QuoteResponseLevel() 
  { 
    super(301);
  } 
  public QuoteResponseLevel(int data) 
  { 
    super(301, data);
  } 
} 
