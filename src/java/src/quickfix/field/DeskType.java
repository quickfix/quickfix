package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class DeskType extends StringField 
{ 
  public static final int FIELD = 1033; 
public static final String AGENCY = "A"; 
public static final String ARBITRAGE = "AR"; 
public static final String DERIVATIVES = "D"; 
public static final String INTERNATIONAL = "IN"; 
public static final String INSTITUTIONAL = "IS"; 
public static final String OTHER = "O"; 
public static final String PREFERRED_TRADING = "PF"; 
public static final String PROPRIETARY = "PR"; 
public static final String PROGRAM_TRADING = "PT"; 
public static final String SALES = "S"; 
public static final String TRADING = "T"; 

  public DeskType() 
  { 
    super(1033);
  } 
  public DeskType(String data) 
  { 
    super(1033, data);
  } 
} 
