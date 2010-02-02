package quickfix.field; 
import quickfix.StringField; 
import java.util.Date; 

public class UnitofMeasure extends StringField 
{ 
  public static final int FIELD = 996; 
public static final String MEGAWATT_HOURS = "MWh"; 
public static final String ONE_MILLION_BTU = "MMBtu"; 
public static final String BARRELS = "Bbl"; 
public static final String GALLONS = "Gal"; 
public static final String METRIC_TONS = "t"; 
public static final String TONS = "tn"; 
public static final String MILLION_BARRELS = "MMbbl"; 
public static final String POUNDS = "lbs"; 
public static final String TROY_OUNCES = "oz_tr"; 
public static final String US_DOLLARS = "USD"; 
public static final String BILLION_CUBIC_FEET = "Bcf"; 
public static final String BUSHELS = "Bu"; 

  public UnitofMeasure() 
  { 
    super(996);
  } 
  public UnitofMeasure(String data) 
  { 
    super(996, data);
  } 
} 
