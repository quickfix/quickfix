package quickfix.fix50;
import quickfix.FieldNotFound;
import quickfix.Group;
import quickfix.field.*;

public class Message extends quickfix.Message {
  public Message() {
    super();
    header = new Header( this );
    trailer = new Trailer( this );
    getHeader().setField(new BeginString("FIX.5.0"));
  }
  public class Header extends quickfix.Message.Header {
    public Header( Message message ) {
      super( message );
    }
  }

}
