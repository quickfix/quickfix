package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class ExDestinationIDSource extends CharField 
{ 
  public static final int FIELD = 1133; 
public static final char BIC = 'B'; 
public static final char GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER = 'C'; 
public static final char PROPRIETARY = 'D'; 
public static final char ISO_COUNTRY_CODE = 'E'; 
public static final char MIC = 'G'; 

  public ExDestinationIDSource() 
  { 
    super(1133);
  } 
  public ExDestinationIDSource(char data) 
  { 
    super(1133, data);
  } 
} 
