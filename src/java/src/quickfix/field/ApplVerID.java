package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ApplVerID extends StringField 
{ 
  public static final int FIELD = 1128; 
public static final String FIX27 = "0"; 
public static final String FIX30 = "1"; 
public static final String FIX40 = "2"; 
public static final String FIX41 = "3"; 
public static final String FIX42 = "4"; 
public static final String FIX43 = "5"; 
public static final String FIX44 = "6"; 
public static final String FIX50 = "7"; 

  public ApplVerID() 
  { 
    super(1128);
  } 
  public ApplVerID(String data) 
  { 
    super(1128, data);
  } 
} 
