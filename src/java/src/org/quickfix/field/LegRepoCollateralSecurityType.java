package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class LegRepoCollateralSecurityType extends IntField 
{ 

  public LegRepoCollateralSecurityType() 
  { 
    super(250);
  } 
  public LegRepoCollateralSecurityType(int data) 
  { 
    super(250, data);
  } 
} 
