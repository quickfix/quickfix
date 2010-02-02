package quickfix.field; 
import quickfix.IntField; 
import java.util.Date; 

public class TrdSubType extends IntField 
{ 
  public static final int FIELD = 829; 
public static final int CMTA = 0; 
public static final int INTERNAL_TRANSFER_OR_ADJUSTMENT = 1; 
public static final int EXTERNAL_TRANSFER_OR_TRANSFER_OF_ACCOUNT = 2; 
public static final int REJECT_FOR_SUBMITTING_SIDE = 3; 
public static final int ADVISORY_FOR_CONTRA_SIDE = 4; 
public static final int OFFSET_DUE_TO_AN_ALLOCATION = 5; 
public static final int ONSET_DUT_TO_AN_ALLOCATION = 6; 
public static final int DIFFERENTIAL_SPREAD = 7; 
public static final int IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT = 8; 
public static final int TRANSACTION_FROM_EXERCISE = 9; 
public static final int TRANSACTION_FROM_ASSIGNMENT = 10; 
public static final int ACATS = 11; 
public static final int AI = 14; 
public static final int B = 15; 
public static final int K = 16; 
public static final int LC = 17; 
public static final int M = 18; 
public static final int N = 19; 
public static final int NM = 20; 
public static final int NR = 21; 
public static final int P = 22; 
public static final int PA = 23; 
public static final int PC = 24; 
public static final int PN = 25; 
public static final int R = 26; 
public static final int RO = 27; 
public static final int RT = 28; 
public static final int SW = 29; 
public static final int T = 30; 
public static final int WN = 31; 
public static final int WT = 32; 

  public TrdSubType() 
  { 
    super(829);
  } 
  public TrdSubType(int data) 
  { 
    super(829, data);
  } 
} 
