package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class MDEntryDate extends StringField 
{ 
  public static final int FIELD = 272; 

  public MDEntryDate() 
  { 
    super(272);
  } 
  public MDEntryDate(String data) 
  { 
    super(272, data);
  } 
} 
