package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class BenchmarkCurveName extends StringField 
{ 
  public static final int FIELD = 221; 
public static final String MUNIAAA = "MuniAAA"; 
public static final String FUTURESWAP = "FutureSWAP"; 
public static final String LIBID = "LIBID"; 
public static final String LIBOR = "LIBOR"; 
public static final String OTHER = "OTHER"; 
public static final String SWAP = "SWAP"; 
public static final String TREASURY = "Treasury"; 
public static final String EURIBOR = "Euribor"; 
public static final String PFANDBRIEFE = "Pfandbriefe"; 
public static final String EONIA = "EONIA"; 
public static final String SONIA = "SONIA"; 
public static final String EUREPO = "EUREPO"; 

  public BenchmarkCurveName() 
  { 
    super(221);
  } 
  public BenchmarkCurveName(String data) 
  { 
    super(221, data);
  } 
} 
