package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class Nested3PartyIDSource extends CharField 
{ 
  public static final int FIELD = 950; 

  public Nested3PartyIDSource() 
  { 
    super(950);
  } 
  public Nested3PartyIDSource(char data) 
  { 
    super(950, data);
  } 
} 
