Imports QuickFix

Public Class Application
    Inherits QuickFix.MessageCracker
    Implements QuickFix.Application

    Public Sub onCreate(ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.onCreate
    End Sub

    Public Sub onLogon(ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.onLogon
    End Sub

    Public Sub onLogout(ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.onLogout
    End Sub

    Public Sub toAdmin(ByVal message As QuickFix.Message, ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.toAdmin
    End Sub

    Public Sub toApp(ByVal message As QuickFix.Message, ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.toApp
    End Sub

    Public Sub fromAdmin(ByVal message As QuickFix.Message, ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.fromAdmin
    End Sub

    Public Sub fromApp(ByVal message As QuickFix.Message, ByVal sessionID As QuickFix.SessionID) Implements QuickFix.Application.fromApp
        crack(message, sessionID)
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix40.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix40.ExecutionReport( _
            genOrderID(), _
            genExecID(), _
            New ExecTransType(ExecTransType.[NEW]), _
            New OrdStatus(OrdStatus.FILLED), _
            symbol, _
            side, _
            orderQty, _
            New LastShares(orderQty.getValue()), _
            New LastPx(price.getValue()), _
            New CumQty(orderQty.getValue()), _
            New AvgPx(price.getValue()))

        order.set(clOrdID)

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix41.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix41.ExecutionReport( _
            genOrderID(), _
            genExecID(), _
            New ExecTransType(ExecTransType.[NEW]), _
            New ExecType(ExecType.FILL), _
            New OrdStatus(OrdStatus.FILLED), _
            symbol, side, orderQty, _
            New LastShares(orderQty.getValue()), _
            New LastPx(price.getValue()), _
            New LeavesQty(0), _
            New CumQty(orderQty.getValue()), _
            New AvgPx(price.getValue()))

        order.set(clOrdID)

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix42.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix42.ExecutionReport( _
            genOrderID(), _
            genExecID(), _
            New ExecTransType(ExecTransType.[NEW]), _
            New ExecType(ExecType.FILL), _
            New OrdStatus(OrdStatus.FILLED), _
            symbol, _
            side, _
            New LeavesQty(0), _
            New CumQty(orderQty.getValue()), _
            New AvgPx(price.getValue()))

        executionReport.set(clOrdID)
        executionReport.set(orderQty)
        executionReport.set(New LastShares(orderQty.getValue()))
        executionReport.set(New LastPx(price.getValue()))

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix43.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix43.ExecutionReport( _
            genOrderID(), _
            genExecID(), _
            New ExecType(ExecType.FILL), _
            New OrdStatus(OrdStatus.FILLED), _
            side, _
            New LeavesQty(0), _
            New CumQty(orderQty.getValue()), _
            New AvgPx(price.getValue()))

        executionReport.set(clOrdID)
        executionReport.set(orderQty)
        executionReport.set(New LastQty(orderQty.getValue()))
        executionReport.set(New LastPx(price.getValue()))

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix44.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix44.ExecutionReport(genOrderID(), genExecID(), New ExecType(ExecType.FILL), New OrdStatus(OrdStatus.FILLED), side, New LeavesQty(0), New CumQty(orderQty.getValue()), New AvgPx(price.getValue()))
        executionReport.set(clOrdID)
        executionReport.set(orderQty)
        executionReport.set(New LastQty(orderQty.getValue()))
        executionReport.set(New LastPx(price.getValue()))

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Public Overloads Overrides Sub onMessage(ByVal order As QuickFix50.NewOrderSingle, ByVal sessionID As QuickFix.SessionID)
        Dim symbol As New Symbol
        Dim side As New Side
        Dim ordType As New OrdType
        Dim orderQty As New OrderQty
        Dim price As New Price
        Dim clOrdID As New ClOrdID

        order.get(ordType)

        If ((ordType.getValue() <> ordType.LIMIT)) Then
            Throw New IncorrectTagValue(ordType.getField())
        End If

        order.get(symbol)
        order.get(side)
        order.get(orderQty)
        order.get(price)
        order.get(clOrdID)

        Dim executionReport As New QuickFix50.ExecutionReport(genOrderID(), genExecID(), New ExecType(ExecType.FILL), New OrdStatus(OrdStatus.FILLED), side, New LeavesQty(0), New CumQty(orderQty.getValue()))
        executionReport.set(clOrdID)
        executionReport.set(orderQty)
        executionReport.set(New LastQty(orderQty.getValue()))
        executionReport.set(New LastPx(price.getValue()))
        executionReport.set(New AvgPx(price.getValue()))

        Try
            Session.sendToTarget(executionReport, sessionID)
        Catch e As SessionNotFound
        End Try
    End Sub

    Private Function genOrderID() As OrderID
        m_orderID += 1
        genOrderID = New OrderID(m_orderID)
    End Function

    Private Function genExecID() As ExecID
        m_execID += 1
        genExecID = New ExecID(m_execID)
    End Function

    Private m_orderID As Int32
    Private m_execID As Int32
End Class
