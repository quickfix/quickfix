package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class RepoCollateralSecurityType extends IntField 
{ 
  public static final int FIELD = 239; 

  public RepoCollateralSecurityType() 
  { 
    super(239);
  } 
  public RepoCollateralSecurityType(int data) 
  { 
    super(239, data);
  } 
} 
