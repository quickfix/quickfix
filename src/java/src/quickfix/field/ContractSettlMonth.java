package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class ContractSettlMonth extends StringField 
{ 
  public static final int FIELD = 667; 

  public ContractSettlMonth() 
  { 
    super(667);
  } 
  public ContractSettlMonth(String data) 
  { 
    super(667, data);
  } 
} 
