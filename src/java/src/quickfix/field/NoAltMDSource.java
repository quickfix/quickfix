package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoAltMDSource extends IntField 
{ 
  public static final int FIELD = 816; 

  public NoAltMDSource() 
  { 
    super(816);
  } 
  public NoAltMDSource(int data) 
  { 
    super(816, data);
  } 
} 
