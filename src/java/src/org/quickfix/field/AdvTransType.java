package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class AdvTransType extends StringField 
{ 
  public static final int FIELD = 5; 
public static final String ADV_NEW = "N"; 
public static final String ADV_CANCEL = "C"; 
public static final String ADV_REPLACE = "R"; 

  public AdvTransType() 
  { 
    super(5);
  } 
  public AdvTransType(String data) 
  { 
    super(5, data);
  } 
} 
