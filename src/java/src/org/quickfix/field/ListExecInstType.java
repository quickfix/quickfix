package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class ListExecInstType extends CharField 
{ 
  public static final int FIELD = 433; 
public static final char IMMED = '1'; 
public static final char WAIT = '2'; 
public static final char EXCH_CIVSELL = '3'; 
public static final char EXCH_CIVBUY_TOP = '4'; 
public static final char EXCH_CIVBUY_WD = '5'; 

  public ListExecInstType() 
  { 
    super(433);
  } 
  public ListExecInstType(char data) 
  { 
    super(433, data);
  } 
} 
