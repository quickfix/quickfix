package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class MatchType extends StringField 
{ 
public static final String EXACT_MATCH_PLUS_FOUR_BADGES_AND_EXECUTION_TIME = "A1"; 
public static final String EXACT_MATCH_PLUS_FOUR_BADGES = "A2"; 
public static final String EXACT_MATCH_PLUS_TWO_BADGES_AND_EXECUTION_TIME = "A3"; 
public static final String EXACT_MATCH_PLUS_TWO_BADGES = "A4"; 
public static final String EXACT_MATCH_PLUS_EXECUTION_TIME = "A5"; 
public static final String COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST_ACCEPTS = "AQ"; 
public static final String SUMMARIZED_MATCH_USING_A1_TO_A5 = "S5"; 
public static final String EXACT_MATCH_MINUS_BADGES_AND_EXECUTION_TIME = "M1"; 
public static final String SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES = "M2"; 
public static final String OCS_LOCKED_IN = "MT"; 
public static final String ACT_M1_MATCH = "M1"; 
public static final String ACT_M2_MATCH = "M2"; 
public static final String ACT_ACCEPTED_TRADE = "M3"; 
public static final String ACT_DEFAULT_TRADE = "M4"; 
public static final String ACT_DEFAULT_AFTER_M2 = "M5"; 
public static final String ACT_M6_MATCH = "M6"; 
public static final String NON_ACT = "MT"; 

  public MatchType() 
  { 
    super(574);
  } 
  public MatchType(String data) 
  { 
    super(574, data);
  } 
} 
