package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class SideTrdSubTyp extends IntField 
{ 
  public static final int FIELD = 1008; 
public static final int CMTA = 0; 
public static final int INTERNAL_TRANSFER = 1; 
public static final int EXTERNAL_TRANSFER = 2; 
public static final int REJECT_FOR_SUBMITTING_TRADE = 3; 
public static final int ADVISORY_FOR_CONTRA_SIDE = 4; 
public static final int OFFSET_DUE_TO_AN_ALLOCATION = 5; 
public static final int ONSET_DUE_TO_AN_ALLOCATION = 6; 
public static final int DIFFERENTIAL_SPREAD = 7; 
public static final int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8; 
public static final int TRANSACTION_FROM_EXERCISE = 9; 
public static final int TRANSACTION_FROM_ASSIGNMENT = 10; 

  public SideTrdSubTyp() 
  { 
    super(1008);
  } 
  public SideTrdSubTyp(int data) 
  { 
    super(1008, data);
  } 
} 
