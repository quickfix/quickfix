package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedListExecInstLen extends IntField 
{ 
  public static final int FIELD = 352; 

  public EncodedListExecInstLen() 
  { 
    super(352);
  } 
  public EncodedListExecInstLen(int data) 
  { 
    super(352, data);
  } 
} 
