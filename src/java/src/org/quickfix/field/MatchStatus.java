package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MatchStatus extends CharField 
{ 
public static final char COMPARED = '0'; 
public static final char UNCOMPARED = '1'; 
public static final char ADVISORY_OR_ALERT = '2'; 

  public MatchStatus() 
  { 
    super(573);
  } 
  public MatchStatus(char data) 
  { 
    super(573, data);
  } 
} 
