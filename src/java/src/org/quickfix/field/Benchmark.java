package org.quickfix.field;
import org.quickfix.CharField;
import java.util.Date;

public class Benchmark extends CharField {
    public static final char CURVE = '1';
    public static final char FIVEYR = '2';
    public static final char OLD5 = '3';
    public static final char TENYR = '4';
    public static final char OLD10 = '5';
    public static final char THIRTYYR = '6';
    public static final char OLD30 = '7';
    public static final char THREEMOLIBOR = '8';
    public static final char SIXMOLIBOR = '9';

    public Benchmark() {
        super(219);
    }
    public Benchmark(char data) {
        super(219, data);
    }
}
