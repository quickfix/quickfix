package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class TransferReason extends StringField 
{ 
  public static final int FIELD = 830; 

  public TransferReason() 
  { 
    super(830);
  } 
  public TransferReason(String data) 
  { 
    super(830, data);
  } 
} 
