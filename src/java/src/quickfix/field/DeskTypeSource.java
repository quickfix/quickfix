package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class DeskTypeSource extends IntField 
{ 
  public static final int FIELD = 1034; 
public static final int NASD_OATS = 1; 

  public DeskTypeSource() 
  { 
    super(1034);
  } 
  public DeskTypeSource(int data) 
  { 
    super(1034, data);
  } 
} 
