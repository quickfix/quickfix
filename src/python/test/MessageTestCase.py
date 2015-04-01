import unittest

import quickfix as fix
import quickfix42 as fix42


class MessageTestCase(unittest.TestCase):

    def setUp(self):
        self.object = fix.Message()

    def test_isAdmin(self):
        self.assertEqual(self.object.isAdmin(), 0)
        self.object.getHeader().setField(fix.MsgType("A"))
        self.assertTrue(self.object.isAdmin())
        self.object.getHeader().setField(fix.MsgType("D"))
        self.assertEqual(self.object.isAdmin(), 0)

    def test_isApp(self):
        self.assertEqual(self.object.isApp(), 0)
        self.object.getHeader().setField(fix.MsgType("A"))
        self.assertEqual(self.object.isApp(), 0)
        self.object.getHeader().setField(fix.MsgType("D"))
        self.assertTrue(self.object.isApp())

    def test_isEmpty(self):
        message = fix.Message()
        self.assertTrue(message.isEmpty())
        message.getHeader().setField(fix.BeginString("FIX.4.2"))
        self.assertEqual(message.isEmpty(), 0)
        message.clear()
        self.assertTrue(message.isEmpty())
        message.setField(fix.Symbol("MSFT"))
        self.assertEqual(message.isEmpty(), 0)
        message.clear()
        self.assertTrue(message.isEmpty())
        message.getTrailer().setField(fix.CheckSum(10))
        self.assertEqual(message.isEmpty(), 0)
        message.clear()
        self.assertTrue(message.isEmpty())

    def test_setString(self):
        strGood = (
            "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\00110=218\001"
        )
        strNull = (
            "8=FIX.4.2\0019=46\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\000\00110=219\001"
        )
        strTrailingCharacter = (
            "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\00110=218\001 "
        )
        strNoChk = (
            "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\001"
        )
        strBadChk = (
            "8=FIX.4.2\0019=45\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\00110=000\001"
        )
        strBad = (
            "8=FIX.4.2\0019=45\00135=0\00134=3\00149garbled=TW\00152=20000426-"
            "12:05:06\00156=ISLD\00110=000\001"
        )
        strBadHeaderOrder = (
            "8=FIX.4.2\00135=0\0019=45\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\00110=218\001"
        )
        strBodyFields = (
            "8=FIX.4.2\0019=60\00135=D\00111=ORDERID\00121=3\00140=2\00154=1"
            "\00155=MSFT\00160=19000101-00:00:00\00110=226\001"
        )
        strNoLengthAndChk = (
            "8=FIX.4.2\00135=0\00134=3\00149=TW\00152=20000426-12:05:06"
            "\00156=ISLD\001"
        )
        strJunk = "paste your FIX message here, then hit ENTER"
        strEmpty = ""

        self.object.setString(strGood)
        self.object.setString(strNull)
        self.object.setString(strNoLengthAndChk, False)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strTrailingCharacter)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strNoChk)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strBadChk)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strBad)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strBadHeaderOrder)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strNoLengthAndChk)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strJunk)

        self.assertRaises(fix.InvalidMessage, self.object.setString, strEmpty)

        dataDictionary = fix.DataDictionary()
        dataDictionary.addHeaderField(11, False)
        dataDictionary.addTrailerField(60, False)

        clOrdID = fix.ClOrdID()
        transactTime = fix.TransactTime()
        symbol = fix.Symbol()

        self.object.setString(strBodyFields, True, dataDictionary)

        self.assertTrue(self.object.getHeader().isSetField(clOrdID))
        self.assertTrue(self.object.getTrailer().isSetField(transactTime))
        self.assertTrue(self.object.isSetField(symbol))

    def test_setStringWithGroup(self):
        dataDictionary = fix.DataDictionary("spec/FIX43.xml")
        str = (
            "8=FIX.4.3\0019=199\00135=E\00134=126\00149=BUYSIDE\00150=00303"
            "\00152=20040916-16:19:18.328\00156=SELLSIDE\00166=1095350459"
            "\00168=2\00173=2\00111=1095350459\00167=1\0011=00303\00155="
            "fred\00154=1\00140=1\00159=3\00111=1095350460\00167=2\0011="
            "00303\00155=fred\00154=1\00140=1\00159=3\001394=3\00110=138\001"
        )

        self.object.setString(str, True, dataDictionary)
        self.assertEqual(str, self.object.toString())

    def test_setStringWithHeaderGroup(self):
        dataDictionary = fix.DataDictionary("spec/FIX43.xml")
        str = (
            "8=FIX.4.3\0019=152\00135=A\00134=125\00149=BUYSIDE\001"
            "52=20040916-16:19:18.328\00156=SELLSIDE\001627=2\001628=HOP1"
            "\001629=20040916-16:19:18.328\001630=ID1\001628=HOP2\001"
            "629=20040916-16:19:18.328\001630=ID2\00110=079\001"
        )

        self.object.setString(str, True, dataDictionary)
        self.assertEqual(str, self.object.toString())

    def test_outOfOrder(self):
        str = (
            "54=1\00120=0\00131=109.03125\00160=00000000-00:00:00\0018=FIX.4.2"
            "\0016=109.03125\0011=acct1\001151=0\001150=2\00117=2\00139=2\001"
            "38=3000\00149=MEK\00115=USD\00137=1\00148=123ABC789\00114=3000\001"
            "35=8\00156=KEM\00134=2\00155=ABCD\00111=ID1\00122=1\001"
        )
        expected = (
            "8=FIX.4.2\0019=171\00135=8\00134=2\00149=MEK\00156=KEM\0011=acct1"
            "\0016=109.03125\00111=ID1\00114=3000\00115=USD\00117=2\00120=0"
            "\00122=1\00131=109.03125\00137=1\00138=3000\00139=2\00148="
            "123ABC789\00154=1\00155=ABCD\00160=00000000-00:00:00\001150=2"
            "\001151=0\00110=225\001"
        )

        self.object.setString(str, False)
        self.assertEqual(expected, self.object.toString())

    def test_reverseRoute(self):
        header = fix.Header()
        beginString = fix.BeginString("FIX.4.2")
        senderCompID = fix.SenderCompID("SenderCompID")
        targetCompID = fix.TargetCompID("TargetCompID")
        onBehalfOfCompID = fix.OnBehalfOfCompID("OnBehalfOfCompID")
        onBehalfOfSubID = fix.OnBehalfOfSubID("OnBehalfOfSubID")
        onBehalfOfLocationID = fix.OnBehalfOfLocationID("OnBehalfOfLocationID")
        deliverToCompID = fix.DeliverToCompID("DeliverToCompID")
        deliverToSubID = fix.DeliverToSubID("DeliverToSubID")
        deliverToLocationID = fix.DeliverToLocationID("DeliverToLocationID")

        reversedMessage = fix.Message()
        reversedHeader = reversedMessage.getHeader()

        header.setField(beginString)
        header.setField(senderCompID)
        header.setField(targetCompID)
        header.setField(onBehalfOfCompID)
        header.setField(onBehalfOfSubID)
        header.setField(onBehalfOfLocationID)
        header.setField(deliverToCompID)
        header.setField(deliverToSubID)
        header.setField(deliverToLocationID)

        reversedMessage.reverseRoute(header)
        self.assertEqual(
            reversedHeader.getField(beginString).getString(), "FIX.4.2")
        self.assertEqual(
            reversedHeader.getField(senderCompID).getString(), "TargetCompID")
        self.assertEqual(
            reversedHeader.getField(targetCompID).getString(), "SenderCompID")
        self.assertEqual(
            reversedHeader.getField(onBehalfOfCompID).getString(), "DeliverToCompID")
        self.assertEqual(
            reversedHeader.getField(onBehalfOfSubID).getString(), "DeliverToSubID")
        self.assertEqual(reversedHeader.getField(
            onBehalfOfLocationID).getString(), "DeliverToLocationID")
        self.assertEqual(
            reversedHeader.getField(deliverToCompID).getString(), "OnBehalfOfCompID")
        self.assertEqual(
            reversedHeader.getField(deliverToSubID).getString(), "OnBehalfOfSubID")
        self.assertEqual(reversedHeader.getField(
            deliverToLocationID).getString(), "OnBehalfOfLocationID")

        header.setField(fix.BeginString("FIX.4.0"))
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(onBehalfOfLocationID), 0)
        self.assertEqual(reversedHeader.isSetField(deliverToLocationID), 0)

        header.setField(beginString)
        reversedMessage.reverseRoute(header)

        header.removeField(fix.OnBehalfOfCompID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(deliverToCompID), 0)
        header.removeField(fix.DeliverToCompID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(onBehalfOfCompID), 0)
        header.removeField(fix.OnBehalfOfSubID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(deliverToSubID), 0)
        header.removeField(fix.DeliverToSubID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(onBehalfOfSubID), 0)
        header.removeField(fix.OnBehalfOfLocationID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(deliverToLocationID), 0)
        header.removeField(fix.DeliverToLocationID().getTag())
        reversedMessage.reverseRoute(header)
        self.assertEqual(reversedHeader.isSetField(onBehalfOfLocationID), 0)

    def test_replaceGroup(self):
        self.object.setField(fix.ListID("1"))
        self.object.setField(fix.BidType(0))
        self.object.setField(fix.TotNoOrders(3))

        group = fix42.NewOrderList.NoOrders()
        group.setField(fix.ClOrdID("A"))
        group.setField(fix.ListSeqNo(1))
        group.setField(fix.Symbol("DELL"))
        group.setField(fix.Side('1'))
        self.object.addGroup(group)

        group.setField(fix.ClOrdID("B"))
        group.setField(fix.ListSeqNo(2))
        group.setField(fix.Symbol("LNUX"))
        group.setField(fix.Side('2'))
        self.object.addGroup(group)

        group.setField(fix.ClOrdID("C"))
        group.setField(fix.ListSeqNo(3))
        group.setField(fix.Symbol("RHAT"))
        group.setField(fix.Side('3'))
        self.object.addGroup(group)

        group.setField(fix.ClOrdID("D"))
        group.setField(fix.ListSeqNo(4))
        group.setField(fix.Symbol("AAPL"))
        group.setField(fix.Side('4'))
        self.object.replaceGroup(2, group)

        noOrders = fix.NoOrders()

        self.assertTrue(self.object.hasGroup(1, group))
        self.assertTrue(self.object.hasGroup(2, group))
        self.assertTrue(self.object.hasGroup(3, group))
        self.assertEqual(3, self.object.groupCount(fix.NoOrders().getTag()))
        self.object.getField(noOrders)
        self.assertEqual(3, noOrders.getValue())

        clOrdID = fix.ClOrdID()
        self.object.getGroup(1, group)
        self.assertEqual("A", group.getField(clOrdID).getString())
        self.object.getGroup(2, group)
        self.assertEqual("D", group.getField(clOrdID).getString())
        self.object.getGroup(3, group)
        self.assertEqual("C", group.getField(clOrdID).getString())

if __name__ == '__main__':
    unittest.main(verbosity=2)
