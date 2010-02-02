package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class OrigTradeHandlingInstr extends CharField 
{ 
  public static final int FIELD = 1124; 

  public OrigTradeHandlingInstr() 
  { 
    super(1124);
  } 
  public OrigTradeHandlingInstr(char data) 
  { 
    super(1124, data);
  } 
} 
