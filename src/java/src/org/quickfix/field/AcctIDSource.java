package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AcctIDSource extends IntField 
{ 
  public static final int FIELD = 660; 
public static final int BIC = 1; 
public static final int SIDCODE = 2; 
public static final int TFMGSPTA = 3; 
public static final int OMGEOALERT_ID = 4; 
public static final int DTCCCODE = 5; 
public static final int OTHER = 99; 

  public AcctIDSource() 
  { 
    super(660);
  } 
  public AcctIDSource(int data) 
  { 
    super(660, data);
  } 
} 
