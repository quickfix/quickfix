package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class AssignmentMethod extends CharField 
{ 
  public static final int FIELD = 744; 
public static final char RANDOM = 'R'; 
public static final char PRORATA = 'P'; 

  public AssignmentMethod() 
  { 
    super(744);
  } 
  public AssignmentMethod(char data) 
  { 
    super(744, data);
  } 
} 
