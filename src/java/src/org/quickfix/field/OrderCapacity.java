package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class OrderCapacity extends CharField 
{ 
  public static final int FIELD = 528; 
public static final char AGENCY = 'A'; 
public static final char PROPRIETARY = 'G'; 
public static final char INDIVIDUAL = 'I'; 
public static final char PRINCIPAL = 'P'; 
public static final char RISKLESS_PRINCIPAL = 'R'; 
public static final char AGENT_OTHER_MEMBER = 'W'; 

  public OrderCapacity() 
  { 
    super(528);
  } 
  public OrderCapacity(char data) 
  { 
    super(528, data);
  } 
} 
