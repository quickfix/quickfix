package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class QuoteRequestType extends IntField 
{ 
  public static final int FIELD = 303; 
public static final int MAN = 1; 
public static final int AUTO = 2; 

  public QuoteRequestType() 
  { 
    super(303);
  } 
  public QuoteRequestType(int data) 
  { 
    super(303, data);
  } 
} 
