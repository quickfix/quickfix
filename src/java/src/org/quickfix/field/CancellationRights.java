package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CancellationRights extends CharField 
{ 
  public static final int FIELD = 480; 
public static final char YES = 'Y'; 
public static final char NO_EXEC_O0NLY = 'N'; 
public static final char NO_WAIVER = 'M'; 
public static final char NO_INSTIT = 'O'; 

  public CancellationRights() 
  { 
    super(480);
  } 
  public CancellationRights(char data) 
  { 
    super(480, data);
  } 
} 
