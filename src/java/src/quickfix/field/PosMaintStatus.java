package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PosMaintStatus extends IntField 
{ 
  public static final int FIELD = 722; 
public static final int ACCEPTED = 0; 
public static final int ACCEPTED_WITH_WARNINGS = 1; 
public static final int REJECTED = 2; 
public static final int COMPLETED = 3; 
public static final int COMPLETED_WITH_WARNINGS = 4; 

  public PosMaintStatus() 
  { 
    super(722);
  } 
  public PosMaintStatus(int data) 
  { 
    super(722, data);
  } 
} 
