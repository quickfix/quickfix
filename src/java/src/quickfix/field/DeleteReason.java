package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class DeleteReason extends CharField 
{ 
  public static final int FIELD = 285; 
public static final char CANCELATION_TRADE_BUST = '0'; 
public static final char ERROR = '1'; 

  public DeleteReason() 
  { 
    super(285);
  } 
  public DeleteReason(char data) 
  { 
    super(285, data);
  } 
} 
