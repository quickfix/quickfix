package quickfix.test;

import junit.framework.TestCase;
import org.apache.log4j.Category;
import quickfix.fix42.Heartbeat;

public class PerformanceTest extends TestCase {

    public PerformanceTest(String name) {
        super(name);
    }

    static {
        try {
            System.loadLibrary("quickfix_jni");
        }
        catch(UnsatisfiedLinkError e) { System.out.println("Exception"); }
    }

    public void setUp() throws Exception {
    }

    public void tearDown() throws Exception {
    }

    public void report(long time, long count) {
        double seconds = (double)time / 1000;
        double num_per_second = count / seconds;

        System.out.println("     num: " + count
                           + ", seconds: " + seconds
                           + ", num_per_second: " + num_per_second);
    }

    public void testCreateHeartbeat() {
        System.out.println("Creating Heartbeat messages: ");
        Heartbeat heartbeat = null;

        long begin = System.currentTimeMillis();
        for(int i = 1; i < 5000; ++i)
            heartbeat = new Heartbeat();
        long end = System.currentTimeMillis();

        report(end - begin, 5000);
    }

    public void testSerializeToStringHeartbeat() {
        System.out.println("Serializing Heartbeat messages to strings: ");
        Heartbeat heartbeat = new Heartbeat();

        long begin = System.currentTimeMillis();
        for(int i = 1; i < 5000; ++i)
          heartbeat.toString();
        long end = System.currentTimeMillis();

        report(end- begin, 5000);
    }
}

