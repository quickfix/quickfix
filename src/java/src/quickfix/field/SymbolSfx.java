package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class SymbolSfx extends StringField 
{ 
  public static final int FIELD = 65; 
public static final String WHEN_ISSUED = "WI"; 
public static final String A_EUCP_WITH_LUMP_SUM_INTEREST = "CD"; 

  public SymbolSfx() 
  { 
    super(65);
  } 
  public SymbolSfx(String data) 
  { 
    super(65, data);
  } 
} 
