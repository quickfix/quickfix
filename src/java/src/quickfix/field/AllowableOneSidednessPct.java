package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class AllowableOneSidednessPct extends DoubleField 
{ 
  public static final int FIELD = 765; 

  public AllowableOneSidednessPct() 
  { 
    super(765);
  } 
  public AllowableOneSidednessPct(double data) 
  { 
    super(765, data);
  } 
} 
