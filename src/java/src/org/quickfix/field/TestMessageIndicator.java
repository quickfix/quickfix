package org.quickfix.field; 
import org.quickfix.BooleanField; 
import java.util.Date; 

public class TestMessageIndicator extends BooleanField 
{ 
  public static final int FIELD = 464; 
public static final boolean TRUE = true; 
public static final boolean FALSE = false; 

  public TestMessageIndicator() 
  { 
    super(464);
  } 
  public TestMessageIndicator(boolean data) 
  { 
    super(464, data);
  } 
} 
