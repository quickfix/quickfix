package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MsgDirection extends CharField 
{ 
  public static final int FIELD = 385; 

  public MsgDirection() 
  { 
    super(385);
  } 
  public MsgDirection(char data) 
  { 
    super(385, data);
  } 
} 
