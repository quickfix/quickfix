package quickfix.test;

import quickfix.Application;
import quickfix.SessionID;
import quickfix.Message;
import org.apache.log4j.Category;

public class ApplicationImpl implements Application {
    private static Category category = Category.getInstance
        (ApplicationImpl.class.getName());
    private boolean loggedOn = false;
    private boolean created = false;
    private boolean stopRunning = false;
    private Message message = null;

    public void onCreate(SessionID sessionId) {
        created = true;
    }

    public void onLogon(SessionID sessionId) {
        loggedOn = true;
    }

    public void onLogout(SessionID sessionId) {
        loggedOn = false;
    }

    public void toAdmin(Message message, SessionID sessionId) {
    }

    public void toApp(Message message, SessionID sessionId) {
    }

    public void fromAdmin(Message message, SessionID sessionId) {
    }

    public void fromApp(Message message, SessionID sessionId) {
        this.message = message;
    }

    public void run() {
        while(true) {
            try {
                if(stopRunning) return;
                Thread.sleep(1000);
            }
            catch(Exception e) {
            }
        }
    }

    public void stop() { stopRunning = true; }

    public boolean isLoggedOn() {
        return loggedOn;
    }

    public boolean isCreated() {
        return created;
    }

    public Message getMessage() {
        try {
            for(int i = 0; i < 50; ++i) {
                if(message != null) {
                    return message;
                }
            Thread.sleep(100);
            }
        } catch(Exception e) {
        }

        return message;
    }
}
