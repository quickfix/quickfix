package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class AgreementDesc extends StringField 
{ 
  public static final int FIELD = 913; 

  public AgreementDesc() 
  { 
    super(913);
  } 
  public AgreementDesc(String data) 
  { 
    super(913, data);
  } 
} 
