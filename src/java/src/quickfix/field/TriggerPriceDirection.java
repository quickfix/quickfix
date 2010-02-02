package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class TriggerPriceDirection extends CharField 
{ 
  public static final int FIELD = 1109; 
public static final char TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_UP_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'U'; 
public static final char TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_DOWN_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE = 'D'; 

  public TriggerPriceDirection() 
  { 
    super(1109);
  } 
  public TriggerPriceDirection(char data) 
  { 
    super(1109, data);
  } 
} 
