package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class EncodedLegIssuer extends StringField 
{ 
  public static final int FIELD = 619; 

  public EncodedLegIssuer() 
  { 
    super(619);
  } 
  public EncodedLegIssuer(String data) 
  { 
    super(619, data);
  } 
} 
