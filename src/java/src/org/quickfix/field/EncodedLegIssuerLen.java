package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class EncodedLegIssuerLen extends IntField 
{ 
  public static final int FIELD = 618; 

  public EncodedLegIssuerLen() 
  { 
    super(618);
  } 
  public EncodedLegIssuerLen(int data) 
  { 
    super(618, data);
  } 
} 
