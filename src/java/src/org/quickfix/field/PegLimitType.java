package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class PegLimitType extends IntField 
{ 
  public static final int FIELD = 837; 
public static final int OR_BETTER = 0; 
public static final int STRICT = 1; 
public static final int OR_WORSE = 2; 

  public PegLimitType() 
  { 
    super(837);
  } 
  public PegLimitType(int data) 
  { 
    super(837, data);
  } 
} 
