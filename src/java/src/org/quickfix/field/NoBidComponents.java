package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class NoBidComponents extends IntField 
{ 
  public static final int FIELD = 420; 

  public NoBidComponents() 
  { 
    super(420);
  } 
  public NoBidComponents(int data) 
  { 
    super(420, data);
  } 
} 
