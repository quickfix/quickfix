package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class ParticipationRate extends DoubleField 
{ 
  public static final int FIELD = 849; 

  public ParticipationRate() 
  { 
    super(849);
  } 
  public ParticipationRate(double data) 
  { 
    super(849, data);
  } 
} 
