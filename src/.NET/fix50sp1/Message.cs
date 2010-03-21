namespace QuickFix50Sp1
{
  public class Header : QuickFix.Message.Header
  {
    Header(QuickFix.Message message) : base(message) {}

  };

  public class Trailer : QuickFix.Message.Trailer
  {
    Trailer(QuickFix.Message message) : base(message) {}

  };

  public class Message : QuickFix.Message
  {
    public Message() : base(new QuickFix.BeginString("FIXT.1.1"))
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    public Message( QuickFix.MsgType msgType ) : base(new QuickFix.BeginString("FIXT.1.1"), msgType)
    {
      m_header = new Header(this);
      m_trailer = new Trailer(this);
    }

    public new Header getHeader() { return (Header)(base.getHeader()); }
    public new Trailer getTrailer() { return (Trailer)(base.getTrailer()); }
  };

}

