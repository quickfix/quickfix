package quickfix.field; 
import quickfix.CharField; 
import java.util.Date; 

public class InstrmtAssignmentMethod extends CharField 
{ 
  public static final int FIELD = 1049; 

  public InstrmtAssignmentMethod() 
  { 
    super(1049);
  } 
  public InstrmtAssignmentMethod(char data) 
  { 
    super(1049, data);
  } 
} 
