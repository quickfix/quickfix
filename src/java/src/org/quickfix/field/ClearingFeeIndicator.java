package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class ClearingFeeIndicator extends StringField 
{ 
  public static final int FIELD = 635; 
public static final String CBOEMEMBER = "B"; 
public static final String NON_MEMBER_CUSTOMER = "C"; 
public static final String EQUITY_CLEARING_MEMBER = "E"; 
public static final String FULL_ASSOCIATE_MEMBER = "F"; 
public static final String _106H106J = "H"; 
public static final String GIMIDEMCOMMEMBERSHIP = "I"; 
public static final String LESSEE106F = "L"; 
public static final String ALL_OTHERS = "M"; 
public static final String FIRST_YEAR_DELEGATE = "1"; 
public static final String SECOND_YEAR_DELEGATE = "2"; 
public static final String THIRD_YEAR_DELEGATE = "3"; 
public static final String FOURTH_YEAR_DELEGATE = "4"; 
public static final String FIFTH_YEAR_DELEGATE = "5"; 
public static final String SIXTH_YEAR_DELEGATE = "9"; 

  public ClearingFeeIndicator() 
  { 
    super(635);
  } 
  public ClearingFeeIndicator(String data) 
  { 
    super(635, data);
  } 
} 
