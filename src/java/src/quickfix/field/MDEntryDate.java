package quickfix.field; 
import quickfix.UtcDateOnlyField; 
import java.util.Date; 

public class MDEntryDate extends UtcDateOnlyField 
{ 
  public static final int FIELD = 272; 

  public MDEntryDate() 
  { 
    super(272);
  } 
  public MDEntryDate(Date data) 
  { 
    super(272, data);
  } 
} 
