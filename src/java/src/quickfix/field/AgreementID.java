package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AgreementID extends StringField 
{ 
  public static final int FIELD = 914; 

  public AgreementID() 
  { 
    super(914);
  } 
  public AgreementID(String data) 
  { 
    super(914, data);
  } 
} 
