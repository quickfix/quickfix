package org.quickfix.field; 
import org.quickfix.CharField; 
import java.util.Date; 

public class BookingUnit extends CharField 
{ 
  public static final int FIELD = 590; 

  public BookingUnit() 
  { 
    super(590);
  } 
  public BookingUnit(char data) 
  { 
    super(590, data);
  } 
} 
