package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class DiscretionInst extends CharField 
{ 
  public static final int FIELD = 388; 
public static final char REL_DISP_PX = '0'; 
public static final char REL_MKT_PX = '1'; 
public static final char REL_PRIM_PX = '2'; 
public static final char REL_LOC_PRIM_PX = '3'; 
public static final char REL_MID_PX = '4'; 
public static final char REL_LST_PX = '5'; 
public static final char REL_VWAP = '6'; 

  public DiscretionInst() 
  { 
    super(388);
  } 
  public DiscretionInst(char data) 
  { 
    super(388, data);
  } 
} 
