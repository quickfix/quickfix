package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncryptMethod extends IntField 
{ 
  public static final int FIELD = 98; 

  public EncryptMethod() 
  { 
    super(98);
  } 
  public EncryptMethod(int data) 
  { 
    super(98, data);
  } 
} 
