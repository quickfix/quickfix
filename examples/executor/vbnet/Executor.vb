Imports System
Imports QuickFix

Module Executor

    Sub Main(ByVal CmdArgs() As String)
        If (CmdArgs.Length() <> 1) Then
            Console.WriteLine("usage: executor_vbnet FILE.")
            Return
        End If

        Try
            Dim sessionSettings As New SessionSettings(CmdArgs(1))
            Dim application As New Application()
            Dim factory As New FileStoreFactory(sessionSettings)
            Dim logFactory As New ScreenLogFactory(True, True, True)
            Dim messageFactory As New DefaultMessageFactory()
            Dim acceptor As New SocketAcceptor _
                (application, factory, sessionSettings, logFactory, messageFactory)

            acceptor.start()
            Console.WriteLine("press <enter> to quit")
            Console.Read()
            acceptor.stop()
        Catch e As Exception
            Console.WriteLine(e)
        End Try
    End Sub

End Module
