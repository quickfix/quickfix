package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class LegSettlmntTyp extends CharField 
{ 
  public static final int FIELD = 587; 

  public LegSettlmntTyp() 
  { 
    super(587);
  } 
  public LegSettlmntTyp(char data) 
  { 
    super(587, data);
  } 
} 
