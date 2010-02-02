package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class OrderCategory extends CharField 
{ 
  public static final int FIELD = 1115; 
public static final char ORDER = '1'; 
public static final char QUOTE = '2'; 
public static final char PRIVATELY_NEGOTIATED_TRADE = '3'; 
public static final char MULTILEG_ORDER = '4'; 
public static final char LINKED_ORDER = '5'; 
public static final char QUOTE_REQUEST = '6'; 
public static final char IMPLIED_ORDER = '7'; 
public static final char CROSS_ORDER = '8'; 

  public OrderCategory() 
  { 
    super(1115);
  } 
  public OrderCategory(char data) 
  { 
    super(1115, data);
  } 
} 
