package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class MatchStatus extends CharField 
{ 
  public static final int FIELD = 573; 
public static final char COMP_MAT_AFF = '0'; 
public static final char UNCOMP_UNMAT_UNAFF = '1'; 
public static final char ADV_ALERT = '2'; 

  public MatchStatus() 
  { 
    super(573);
  } 
  public MatchStatus(char data) 
  { 
    super(573, data);
  } 
} 
