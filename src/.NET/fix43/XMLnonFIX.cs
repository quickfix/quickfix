namespace QuickFix43
{

  public class XMLnonFIX : Message
  {
    public XMLnonFIX() : base(MsgType()) {}
    static QuickFix.MsgType MsgType() { return new QuickFix.MsgType("n"); }

  };

}

