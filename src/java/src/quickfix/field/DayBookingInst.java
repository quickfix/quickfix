package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class DayBookingInst extends CharField 
{ 
  public static final int FIELD = 589; 
public static final char CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR = '0'; 
public static final char SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING = '1'; 
public static final char ACCUMULATE = '2'; 

  public DayBookingInst() 
  { 
    super(589);
  } 
  public DayBookingInst(char data) 
  { 
    super(589, data);
  } 
} 
