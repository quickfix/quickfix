package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class BookingType extends IntField 
{ 
  public static final int FIELD = 775; 
public static final int REGULAR_BOOKING = 0; 
public static final int CFDCONTRACT_FOR_DIFFERENCE = 1; 
public static final int TOTAL_RETURN_SWAP = 2; 

  public BookingType() 
  { 
    super(775);
  } 
  public BookingType(int data) 
  { 
    super(775, data);
  } 
} 
