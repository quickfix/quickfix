package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ExerciseMethod extends CharField 
{ 
  public static final int FIELD = 747; 
public static final char AUTOMATIC = 'A'; 
public static final char MANUAL = 'M'; 

  public ExerciseMethod() 
  { 
    super(747);
  } 
  public ExerciseMethod(char data) 
  { 
    super(747, data);
  } 
} 
