package quickfix.field; 
import quickfix.DoubleField; 
import java.util.Date; 

public class MDEntrySize extends DoubleField 
{ 
  public static final int FIELD = 271; 

  public MDEntrySize() 
  { 
    super(271);
  } 
  public MDEntrySize(double data) 
  { 
    super(271, data);
  } 
} 
