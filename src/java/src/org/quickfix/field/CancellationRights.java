package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CancellationRights extends CharField 
{ 
  public static final int FIELD = 480; 
public static final char NO_EXECUTION_ONLY = 'N'; 
public static final char NO_WAIVER_AGREEMENT = 'M'; 
public static final char NO_INSTITUTIONAL = 'O'; 

  public CancellationRights() 
  { 
    super(480);
  } 
  public CancellationRights(char data) 
  { 
    super(480, data);
  } 
} 
