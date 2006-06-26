package quickfix.test;

import junit.framework.TestCase;
import org.apache.log4j.Category;
import quickfix.SessionID;
import quickfix.Message;
import quickfix.fix42.Heartbeat;
import quickfix.fix42.NewOrderSingle;
import quickfix.fix42.QuoteRequest;
import quickfix.field.*;
import java.util.ArrayList;
import java.util.Iterator;

public class PerformanceTest extends TestCase {

    public class TestApplication implements quickfix.Application {

        private int m_count;

        public int getCount() { return m_count; }

        public void onCreate(SessionID sessionId) {}
        public void onLogon(SessionID sessionId) {}
        public void onLogout(SessionID sessionId) {}
        public void toAdmin(Message message, SessionID sessionId) {}
        public void toApp(Message message, SessionID sessionId)
        throws quickfix.DoNotSend {}
        public void fromAdmin(Message message, SessionID sessionId)
        throws quickfix.FieldNotFound, quickfix.IncorrectDataFormat, quickfix.IncorrectTagValue, quickfix.RejectLogon {}
        public void fromApp(Message message, SessionID sessionId)
        throws quickfix.FieldNotFound, quickfix.IncorrectDataFormat, quickfix.IncorrectTagValue, quickfix.UnsupportedMessageType {
            m_count++;
        }
    }

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
        for(int i = 1; i < 50000; ++i)
            heartbeat = new Heartbeat();
        long end = System.currentTimeMillis();

        report(end - begin, 50000);
    }

    public void testSerializeToStringHeartbeat() {
        System.out.println("Serializing Heartbeat messages to strings: ");

        Heartbeat heartbeat = new Heartbeat();

        long begin = System.currentTimeMillis();
        for(int i = 1; i < 50000; ++i)
          heartbeat.toString();
        long end = System.currentTimeMillis();

        report(end- begin, 50000);
    }

    public void testSerializeFromStringHeartbeat() {
        System.out.println("Serializing Heartbeat messages from strings: ");

        Heartbeat message = new Heartbeat();
        String s = message.toString();

        long begin = System.currentTimeMillis();
        for( int i = 1; i <= 50000; i++ )
        {
            try { Message heartbeat = new Message(s); }
            catch( quickfix.InvalidMessage e ) {}
        }

        long end = System.currentTimeMillis();
        report(end- begin, 50000);
    }

    public void testCreateNewOrderSingle() {
        System.out.println("Creating NewOrderSingle messages: ");
 
        NewOrderSingle newOrderSingle = null;

        long begin = System.currentTimeMillis();
        for(int i = 1; i < 50000; ++i) {
            newOrderSingle = new NewOrderSingle(
              new ClOrdID( "ORDERID" ),
              new HandlInst( '1' ),
              new Symbol( "LINUX" ),
              new Side( Side.BUY ),
              new TransactTime(),
              new OrdType( OrdType.MARKET ) );
        }
        long end = System.currentTimeMillis();

        report(end - begin, 50000);
    }

    public void testSerializeToStringNewOrderSingle() {
        System.out.println("Serializing NewOrderSingle messages to strings: ");

        NewOrderSingle newOrderSingle = new NewOrderSingle(
              new ClOrdID( "ORDERID" ),
              new HandlInst( '1' ),
              new Symbol( "LINUX" ),
              new Side( Side.BUY ),
              new TransactTime(),
              new OrdType( OrdType.MARKET ) );


        long begin = System.currentTimeMillis();
        for(int i = 1; i < 50000; ++i)
          newOrderSingle.toString();
        long end = System.currentTimeMillis();

        report(end- begin, 50000);
    }

    public void testSerializeFromStringNewOrderSingle() {
        System.out.println("Serializing NewOrderSingle messages from strings: ");

        NewOrderSingle message = new NewOrderSingle(
              new ClOrdID( "ORDERID" ),
              new HandlInst( '1' ),
              new Symbol( "LINUX" ),
              new Side( Side.BUY ),
              new TransactTime(),
              new OrdType( OrdType.MARKET ) );
        String s = message.toString();

        long begin = System.currentTimeMillis();
        for( int i = 1; i <= 50000; i++ )
        {
            try { Message newOrderSingle = new Message( s, true ); }
            catch( quickfix.InvalidMessage e ) {}
        }

        long end = System.currentTimeMillis();
        report(end- begin, 50000);
    }

    public void testCreateQuoteRequest() {
        System.out.println("Creating QuoteRequest messages: ");

        QuoteRequest quoteRequest = null;

        long begin = System.currentTimeMillis();

        Symbol symbol = new Symbol();
        MaturityMonthYear maturityMonthYear = new MaturityMonthYear();
        PutOrCall putOrCall = new PutOrCall();
        StrikePrice strikePrice = new StrikePrice();
        Side side = new Side();
        OrderQty orderQty = new OrderQty();
        Currency currency = new Currency();
        OrdType ordType = new OrdType();

        for(int i = 1; i < 50000; ++i) {
            QuoteRequest massQuote = new QuoteRequest( new QuoteReqID("1") );
            QuoteRequest.NoRelatedSym noRelatedSym = new QuoteRequest.NoRelatedSym();

            for( int j = 1; j < 10; ++j )
            {
                symbol.setValue( "IBM" );
                maturityMonthYear.setValue( "022003" );
                putOrCall.setValue( PutOrCall.PUT );
                strikePrice.setValue( 120 );
                side.setValue( Side.BUY );
                orderQty.setValue( 100 );
                currency.setValue( "USD" );
                ordType.setValue( OrdType.MARKET );
                noRelatedSym.set( symbol );
                noRelatedSym.set( maturityMonthYear );
                noRelatedSym.set( putOrCall );
                noRelatedSym.set( strikePrice );
                noRelatedSym.set( side );
                noRelatedSym.set( orderQty );
                noRelatedSym.set( currency );
                noRelatedSym.set( ordType );
                massQuote.addGroup( noRelatedSym );
                noRelatedSym.clear();
            }
        }

        long end = System.currentTimeMillis();
        report(end- begin, 50000);
    }

    public void testSerializeToStringQuoteRequest()
    {
        System.out.println("Serializing QuoteRequest messages to strings: ");

        QuoteRequest message = new QuoteRequest( new QuoteReqID("1") );
        QuoteRequest.NoRelatedSym noRelatedSym = new QuoteRequest.NoRelatedSym();

        for( int i = 1; i <= 10; ++i )
        {
            noRelatedSym.set( new Symbol("IBM") );
            noRelatedSym.set( new MaturityMonthYear() );
            noRelatedSym.set( new PutOrCall(PutOrCall.PUT) );
            noRelatedSym.set( new StrikePrice(120) );
            noRelatedSym.set( new Side(Side.BUY) );
            noRelatedSym.set( new OrderQty(100) );
            noRelatedSym.set( new Currency("USD") );
            noRelatedSym.set( new OrdType(OrdType.MARKET) );
            message.addGroup( noRelatedSym );
        }

        long begin = System.currentTimeMillis();
        for ( int j = 0; j <= 50000; ++j )
        {
            message.toString();
        }
        long end = System.currentTimeMillis();
        report(end- begin, 50000);
    }

    public void testSerializeFromStringQuoteRequest()
    {
        System.out.println("Serializing QuoteRequest messages from strings: ");

        QuoteRequest message = new QuoteRequest( new QuoteReqID("1") );
        QuoteRequest.NoRelatedSym noRelatedSym = new QuoteRequest.NoRelatedSym();

        for( int i = 1; i <= 10; ++i )
        {
            noRelatedSym.set( new Symbol("IBM") );
            noRelatedSym.set( new MaturityMonthYear() );
            noRelatedSym.set( new PutOrCall(PutOrCall.PUT) );
            noRelatedSym.set( new StrikePrice(120) );
            noRelatedSym.set( new Side(Side.BUY) );
            noRelatedSym.set( new OrderQty(100) );
            noRelatedSym.set( new Currency("USD") );
            noRelatedSym.set( new OrdType(OrdType.MARKET) );
            message.addGroup( noRelatedSym );
        }
        String s = message.toString();

        long begin = System.currentTimeMillis();
        for( int i = 1; i <= 50000; i++ )
        {
            try { Message quoteRequest = new Message( s, true ); }
            catch( quickfix.InvalidMessage e ) {}
        }

        long end = System.currentTimeMillis();
        report(end- begin, 50000);
    }

    public void testReadFromQuoteRequest() {
        System.out.println("Reading fields from QuoteRequest message: ");

        QuoteRequest message = new QuoteRequest( new QuoteReqID("1") );
        QuoteRequest.NoRelatedSym group = new QuoteRequest.NoRelatedSym();

        for( int i = 1; i <= 10; ++i ) {
            group.set( new Symbol("IBM") );
            group.set( new MaturityMonthYear() );
            group.set( new PutOrCall(PutOrCall.PUT) );
            group.set( new StrikePrice(120) );
            group.set( new Side(Side.BUY) );
            group.set( new OrderQty(100) );
            group.set( new Currency("USD") );
            group.set( new OrdType(OrdType.MARKET) );
            message.addGroup( group );
        }
        group.clear();

        long begin = System.currentTimeMillis();
        for ( int j = 0; j <= 50000; ++j ) {
            QuoteReqID quoteReqID = new QuoteReqID();
            Symbol symbol = new Symbol();
            MaturityMonthYear maturityMonthYear = new MaturityMonthYear();
            PutOrCall putOrCall = new PutOrCall();
            StrikePrice strikePrice = new StrikePrice();
            Side side = new Side();
            OrderQty orderQty = new OrderQty();
            Currency currency = new Currency();
            OrdType ordType = new OrdType();

            NoRelatedSym noRelatedSym = new NoRelatedSym();
            try {
                message.get( noRelatedSym );
            } catch( quickfix.FieldNotFound fnf ) {}
            int end = noRelatedSym.getValue();
            for( int k = 1; k <= end; ++k ) {
                try {
                    message.getGroup( k, group );
                    group.get( symbol );
                    group.get( maturityMonthYear );
                    group.get( putOrCall);
                    group.get( strikePrice );
                    group.get( side );
                    group.get( orderQty );
                    group.get( currency );
                    group.get( ordType );
                    maturityMonthYear.getValue();
                    putOrCall.getValue();
                    strikePrice.getValue();
                    side.getValue();
                    orderQty.getValue();
                    currency.getValue();
                    ordType.getValue();
                }
                catch( quickfix.FieldNotFound fnf ) {
                }
            }
        }

        report(System.currentTimeMillis()- begin, 50000);
    }

/*    public void testFileStoreNewOrderSingle()
    {
        System.out.println( "Storing NewOrderSingle messages: " );

        BeginString beginString = new BeginString( "FIX.4.2" );
        SenderCompID senderCompID = new SenderCompID( "SENDER" );
        TargetCompID targetCompID = new TargetCompID( "TARGET" );
        SessionID id = new SessionID( beginString.getValue(), senderCompID.getValue(), targetCompID.getValue() );

        ClOrdID clOrdID = new ClOrdID( "ORDERID" );
        HandlInst handlInst = new HandlInst( '1' );
        Symbol symbol = new Symbol( "LNUX" );
        Side side = new Side( Side.BUY );
        TransactTime transactTime = new TransactTime();
        OrdType ordType = new OrdType( OrdType.MARKET );
        NewOrderSingle message = new NewOrderSingle
        ( clOrdID, handlInst, symbol, side, transactTime, ordType );
        message.getHeader().setField( new MsgSeqNum( 1 ) );
        String messageString = message.toString();

        quickfix.Dictionary dictionary = new quickfix.Dictionary();
        dictionary.setString( "FileStorePath", "store" );
        quickfix.SessionSettings settings = new quickfix.SessionSettings();
        try {
            settings.set( id, dictionary );
        } catch( quickfix.ConfigError ce ) {}
        quickfix.FileStoreFactory factory = new quickfix.FileStoreFactory( settings );
        quickfix.FileStore store = (quickfix.FileStore)factory.create( id );

        try {
            store.reset(); 
            long begin = System.currentTimeMillis();
            for ( int i = 1; i <= 50000; ++i ) {
                store.set( ++i, messageString );
            }
            long end = System.currentTimeMillis();
            store.reset();
            report(end- begin, 50000);
        } catch( java.io.IOException ioe ) {}
    }
*/

    public void testSendOnSocket() throws Exception
    {
        ClOrdID clOrdID = new ClOrdID( "ORDERID" );
        HandlInst handlInst = new HandlInst( '1' );
        Symbol symbol = new Symbol( "LNUX" );
        Side side = new Side( Side.BUY );
        TransactTime transactTime = new TransactTime();
        OrdType ordType = new OrdType( OrdType.MARKET );
        NewOrderSingle message = new NewOrderSingle( clOrdID, handlInst, symbol, side, transactTime, ordType );

        SessionID sessionID = new SessionID( "FIX.4.2", "CLIENT", "SERVER" );

        TestApplication application = new TestApplication();
        quickfix.MemoryStoreFactory factory = new quickfix.MemoryStoreFactory();
        quickfix.SessionSettings settings = new quickfix.SessionSettings( "pt.cfg" );
        quickfix.LogFactory logFactory = new quickfix.ScreenLogFactory( settings );
        quickfix.MessageFactory messageFactory = new quickfix.DefaultMessageFactory();

        quickfix.Acceptor acceptor = new quickfix.SocketAcceptor( application, factory, settings, logFactory, messageFactory );
        acceptor.start();

        quickfix.Initiator initiator = new quickfix.SocketInitiator( application, factory, settings, logFactory, messageFactory );
        initiator.start();

        java.lang.Thread.sleep( 1000 );

        long begin = System.currentTimeMillis();

        for ( int i = 0; i <= 50000; ++i )
          quickfix.Session.sendToTarget( message, sessionID );

        while( application.getCount() < 50000 )
          java.lang.Thread.sleep( 1000 );

        long end = System.currentTimeMillis();

        initiator.stop();
        acceptor.stop();

        report(end- begin, 50000);
    }
}

