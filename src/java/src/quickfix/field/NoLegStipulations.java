package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoLegStipulations extends IntField 
{ 
  public static final int FIELD = 683; 

  public NoLegStipulations() 
  { 
    super(683);
  } 
  public NoLegStipulations(int data) 
  { 
    super(683, data);
  } 
} 
