package org.quickfix.field; 
import org.quickfix.IntField; 
import java.util.Date; 

public class Product extends IntField 
{ 
  public static final int FIELD = 460; 
public static final int AGENCY = 1; 
public static final int COMMODITY = 2; 
public static final int CORPORATE = 3; 
public static final int CURRENCY = 4; 
public static final int EQUITY = 5; 
public static final int GOVERNMENT = 6; 
public static final int INDEX = 7; 
public static final int LOAN = 8; 
public static final int MONEYMARKET = 9; 
public static final int MORTGAGE = 10; 
public static final int MUNICIPAL = 11; 
public static final int OTHER = 12; 

  public Product() 
  { 
    super(460);
  } 
  public Product(int data) 
  { 
    super(460, data);
  } 
} 
