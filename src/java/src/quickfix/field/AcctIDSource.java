package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class AcctIDSource extends IntField 
{ 
  public static final int FIELD = 660; 
public static final int BIC = 1; 
public static final int SID_CODE = 2; 
public static final int TFM = 3; 
public static final int OMGEO = 4; 
public static final int DTCC_CODE = 5; 

  public AcctIDSource() 
  { 
    super(660);
  } 
  public AcctIDSource(int data) 
  { 
    super(660, data);
  } 
} 
