package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class CPProgram extends IntField 
{ 
  public static final int FIELD = 875; 
public static final int _3A3 = 1; 
public static final int _42 = 2; 
public static final int OTHER = 99; 

  public CPProgram() 
  { 
    super(875);
  } 
  public CPProgram(int data) 
  { 
    super(875, data);
  } 
} 
