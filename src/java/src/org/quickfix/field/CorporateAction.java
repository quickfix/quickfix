package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CorporateAction extends StringField 
{ 
  public static final int FIELD = 292; 
public static final char EX_DIVIDEND = 'A'; 
public static final char EX_DIST = 'B'; 
public static final char EX_RIGHTS = 'C'; 
public static final char NEW = 'D'; 
public static final char EX_INTEREST = 'E'; 

  public CorporateAction() 
  { 
    super(292);
  } 
  public CorporateAction(String data) 
  { 
    super(292, data);
  } 
} 
