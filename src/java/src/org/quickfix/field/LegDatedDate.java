package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class LegDatedDate extends StringField 
{ 
  public static final int FIELD = 739; 
public static final char BOOK_ENTRY = '1'; 
public static final char BEARER = '2'; 

  public LegDatedDate() 
  { 
    super(739);
  } 
  public LegDatedDate(String data) 
  { 
    super(739, data);
  } 
} 
