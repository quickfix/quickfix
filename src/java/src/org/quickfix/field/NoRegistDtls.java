package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoRegistDtls extends IntField 
{ 
  public static final int FIELD = 473; 

  public NoRegistDtls() 
  { 
    super(473);
  } 
  public NoRegistDtls(int data) 
  { 
    super(473, data);
  } 
} 
