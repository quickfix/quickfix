package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class NetMoney extends DoubleField 
{ 

  public NetMoney() 
  { 
    super(118);
  } 
  public NetMoney(double data) 
  { 
    super(118, data);
  } 
} 
