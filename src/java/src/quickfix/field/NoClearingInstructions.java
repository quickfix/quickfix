package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoClearingInstructions extends IntField 
{ 
  public static final int FIELD = 576; 

  public NoClearingInstructions() 
  { 
    super(576);
  } 
  public NoClearingInstructions(int data) 
  { 
    super(576, data);
  } 
} 
