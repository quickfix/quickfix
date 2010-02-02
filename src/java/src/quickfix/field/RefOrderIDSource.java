package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class RefOrderIDSource extends CharField 
{ 
  public static final int FIELD = 1081; 
public static final char SECONDARYORDEID = '0'; 
public static final char ORDEID = '1'; 
public static final char MENTRYID = '2'; 
public static final char QUOTENTRYID = '3'; 

  public RefOrderIDSource() 
  { 
    super(1081);
  } 
  public RefOrderIDSource(char data) 
  { 
    super(1081, data);
  } 
} 
