package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoCompIDs extends IntField 
{ 
  public static final int FIELD = 936; 

  public NoCompIDs() 
  { 
    super(936);
  } 
  public NoCompIDs(int data) 
  { 
    super(936, data);
  } 
} 
