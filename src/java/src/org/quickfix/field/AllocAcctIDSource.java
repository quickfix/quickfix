package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AllocAcctIDSource extends IntField 
{ 
  public static final int FIELD = 661; 
public static final int BIC = 1; 
public static final int SIDCODE = 2; 
public static final int TFMGSPTA = 3; 
public static final int OMGEOALERT_ID = 4; 
public static final int DTCCCODE = 5; 
public static final int OTHER = 99; 

  public AllocAcctIDSource() 
  { 
    super(661);
  } 
  public AllocAcctIDSource(int data) 
  { 
    super(661, data);
  } 
} 
