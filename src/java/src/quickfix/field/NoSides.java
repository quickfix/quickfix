package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class NoSides extends IntField 
{ 
  public static final int FIELD = 552; 
public static final char ONE_SIDE = '1'; 
public static final char BOTH_SIDES = '2'; 

  public NoSides() 
  { 
    super(552);
  } 
  public NoSides(int data) 
  { 
    super(552, data);
  } 
} 
