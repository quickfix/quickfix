package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class BidRequestTransType extends CharField 
{ 
  public static final int FIELD = 374; 
public static final char NEW = 'N'; 
public static final char CANCEL = 'C'; 

  public BidRequestTransType() 
  { 
    super(374);
  } 
  public BidRequestTransType(char data) 
  { 
    super(374, data);
  } 
} 
