package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CxlRejResponseTo extends CharField 
{ 
  public static final int FIELD = 434; 
public static final char ORD_CXL_REQ = '1'; 
public static final char ORD_CXL_REP_REQ = '2'; 

  public CxlRejResponseTo() 
  { 
    super(434);
  } 
  public CxlRejResponseTo(char data) 
  { 
    super(434, data);
  } 
} 
