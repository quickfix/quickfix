package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class SettlInstTransType extends CharField 
{ 
  public static final int FIELD = 163; 
public static final char NEW = 'N'; 
public static final char CANCEL = 'C'; 
public static final char REPLACE = 'R'; 
public static final char RESTATE = 'T'; 

  public SettlInstTransType() 
  { 
    super(163);
  } 
  public SettlInstTransType(char data) 
  { 
    super(163, data);
  } 
} 
