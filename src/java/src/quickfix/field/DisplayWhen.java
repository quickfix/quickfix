package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class DisplayWhen extends CharField 
{ 
  public static final int FIELD = 1083; 
public static final char IMMEDIATE = '1'; 
public static final char EXHAUST = '2'; 

  public DisplayWhen() 
  { 
    super(1083);
  } 
  public DisplayWhen(char data) 
  { 
    super(1083, data);
  } 
} 
