package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class CorporateAction extends CharField 
{ 
public static final char EXDIVIDEND = 'A'; 
public static final char EXDISTRIBUTION = 'B'; 
public static final char EXRIGHTS = 'C'; 
public static final char NEW = 'D'; 
public static final char EXINTEREST = 'E'; 

  public CorporateAction() 
  { 
    super(292);
  } 
  public CorporateAction(char data) 
  { 
    super(292, data);
  } 
} 
