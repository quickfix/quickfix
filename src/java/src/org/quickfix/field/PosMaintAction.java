package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PosMaintAction extends IntField 
{ 
  public static final int FIELD = 712; 
public static final int NEW = 1; 
public static final int REPLACE = 2; 
public static final int CANCEL = 3; 

  public PosMaintAction() 
  { 
    super(712);
  } 
  public PosMaintAction(int data) 
  { 
    super(712, data);
  } 
} 
