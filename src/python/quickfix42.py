import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIX.4.2") )

class Heartbeat(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("0") )

class TestRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("1") )

class ResendRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("2") )

class Reject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("3") )

class SequenceReset(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("4") )

class Logout(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("5") )

class IOI(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("6") )

	class NoIOIQualifiers(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 104
			order[1] = 0
			fix.Group.__init__(self, 199, 104, order)

	class NoRoutingIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			fix.Group.__init__(self, 215, 216, order)

class Advertisement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("7") )

class ExecutionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("8") )

	class NoContraBrokers(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 375
			order[1] = 337
			order[2] = 437
			order[3] = 438
			order[4] = 0
			fix.Group.__init__(self, 382, 375, order)

class OrderCancelReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("9") )

class Logon(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("A") )

	class NoMsgTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 372
			order[1] = 385
			order[2] = 0
			fix.Group.__init__(self, 384, 372, order)

class News(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("B") )

	class NoRoutingIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			fix.Group.__init__(self, 215, 216, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(20)
			order[0] = 46
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 0
			fix.Group.__init__(self, 146, 46, order)

	class LinesOfText(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 58
			order[1] = 354
			order[2] = 355
			order[3] = 0
			fix.Group.__init__(self, 33, 58, order)

class Email(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("C") )

	class NoRoutingIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			fix.Group.__init__(self, 215, 216, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(20)
			order[0] = 46
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 0
			fix.Group.__init__(self, 146, 46, order)

	class LinesOfText(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 58
			order[1] = 354
			order[2] = 355
			order[3] = 0
			fix.Group.__init__(self, 33, 58, order)

class NewOrderSingle(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("D") )

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 79
			order[1] = 80
			order[2] = 0
			fix.Group.__init__(self, 78, 79, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 336
			order[1] = 0
			fix.Group.__init__(self, 386, 336, order)

class NewOrderList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("E") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(75)
			order[0] = 11
			order[1] = 67
			order[2] = 160
			order[3] = 109
			order[4] = 76
			order[5] = 1
			order[6] = 78
			order[7] = 63
			order[8] = 64
			order[9] = 21
			order[10] = 18
			order[11] = 110
			order[12] = 111
			order[13] = 100
			order[14] = 386
			order[15] = 81
			order[16] = 55
			order[17] = 65
			order[18] = 48
			order[19] = 22
			order[20] = 167
			order[21] = 200
			order[22] = 205
			order[23] = 201
			order[24] = 202
			order[25] = 206
			order[26] = 231
			order[27] = 223
			order[28] = 207
			order[29] = 106
			order[30] = 348
			order[31] = 349
			order[32] = 107
			order[33] = 350
			order[34] = 351
			order[35] = 140
			order[36] = 54
			order[37] = 401
			order[38] = 114
			order[39] = 60
			order[40] = 38
			order[41] = 152
			order[42] = 40
			order[43] = 44
			order[44] = 99
			order[45] = 15
			order[46] = 376
			order[47] = 377
			order[48] = 23
			order[49] = 117
			order[50] = 59
			order[51] = 168
			order[52] = 432
			order[53] = 126
			order[54] = 427
			order[55] = 12
			order[56] = 13
			order[57] = 47
			order[58] = 121
			order[59] = 120
			order[60] = 58
			order[61] = 354
			order[62] = 355
			order[63] = 193
			order[64] = 192
			order[65] = 77
			order[66] = 203
			order[67] = 204
			order[68] = 210
			order[69] = 211
			order[70] = 388
			order[71] = 389
			order[72] = 439
			order[73] = 440
			order[74] = 0
			fix.Group.__init__(self, 73, 11, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 79
				order[1] = 80
				order[2] = 0
				fix.Group.__init__(self, 78, 79, order)

		class NoTradingSessions(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 336
				order[1] = 0
				fix.Group.__init__(self, 386, 336, order)

class OrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("F") )

class OrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("G") )

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 79
			order[1] = 80
			order[2] = 0
			fix.Group.__init__(self, 78, 79, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 336
			order[1] = 0
			fix.Group.__init__(self, 386, 336, order)

class OrderStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("H") )

class Allocation(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("J") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 66
			order[4] = 105
			order[5] = 0
			fix.Group.__init__(self, 73, 11, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 32
			order[1] = 17
			order[2] = 31
			order[3] = 29
			order[4] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(24)
			order[0] = 79
			order[1] = 366
			order[2] = 80
			order[3] = 81
			order[4] = 92
			order[5] = 208
			order[6] = 209
			order[7] = 161
			order[8] = 360
			order[9] = 361
			order[10] = 76
			order[11] = 109
			order[12] = 12
			order[13] = 13
			order[14] = 153
			order[15] = 154
			order[16] = 119
			order[17] = 120
			order[18] = 155
			order[19] = 156
			order[20] = 159
			order[21] = 160
			order[22] = 136
			order[23] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 0
				fix.Group.__init__(self, 136, 137, order)

class ListCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("K") )

class ListExecute(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("L") )

class ListStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("M") )

class ListStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("N") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(11)
			order[0] = 11
			order[1] = 14
			order[2] = 39
			order[3] = 151
			order[4] = 84
			order[5] = 6
			order[6] = 103
			order[7] = 58
			order[8] = 354
			order[9] = 355
			order[10] = 0
			fix.Group.__init__(self, 73, 11, order)

class AllocationInstructionAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("P") )

class DontKnowTrade(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Q") )

class QuoteRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("R") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(32)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 140
			order[20] = 303
			order[21] = 336
			order[22] = 54
			order[23] = 38
			order[24] = 64
			order[25] = 40
			order[26] = 193
			order[27] = 192
			order[28] = 126
			order[29] = 60
			order[30] = 15
			order[31] = 0
			fix.Group.__init__(self, 146, 55, order)

class Quote(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("S") )

class SettlementInstructions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("T") )

class MarketDataRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("V") )

	class NoMDEntryTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 269
			order[1] = 0
			fix.Group.__init__(self, 267, 269, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(21)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 336
			order[20] = 0
			fix.Group.__init__(self, 146, 55, order)

class MarketDataSnapshotFullRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("W") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(31)
			order[0] = 269
			order[1] = 270
			order[2] = 15
			order[3] = 271
			order[4] = 272
			order[5] = 273
			order[6] = 274
			order[7] = 275
			order[8] = 336
			order[9] = 276
			order[10] = 277
			order[11] = 282
			order[12] = 283
			order[13] = 284
			order[14] = 286
			order[15] = 59
			order[16] = 432
			order[17] = 126
			order[18] = 110
			order[19] = 18
			order[20] = 287
			order[21] = 37
			order[22] = 299
			order[23] = 288
			order[24] = 289
			order[25] = 346
			order[26] = 290
			order[27] = 58
			order[28] = 354
			order[29] = 355
			order[30] = 0
			fix.Group.__init__(self, 268, 269, order)

class MarketDataIncrementalRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("X") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(57)
			order[0] = 279
			order[1] = 285
			order[2] = 269
			order[3] = 278
			order[4] = 280
			order[5] = 55
			order[6] = 65
			order[7] = 48
			order[8] = 22
			order[9] = 167
			order[10] = 200
			order[11] = 205
			order[12] = 201
			order[13] = 202
			order[14] = 206
			order[15] = 231
			order[16] = 223
			order[17] = 207
			order[18] = 106
			order[19] = 348
			order[20] = 349
			order[21] = 107
			order[22] = 350
			order[23] = 351
			order[24] = 291
			order[25] = 292
			order[26] = 270
			order[27] = 15
			order[28] = 271
			order[29] = 272
			order[30] = 273
			order[31] = 274
			order[32] = 275
			order[33] = 336
			order[34] = 276
			order[35] = 277
			order[36] = 282
			order[37] = 283
			order[38] = 284
			order[39] = 286
			order[40] = 59
			order[41] = 432
			order[42] = 126
			order[43] = 110
			order[44] = 18
			order[45] = 287
			order[46] = 37
			order[47] = 299
			order[48] = 288
			order[49] = 289
			order[50] = 346
			order[51] = 290
			order[52] = 387
			order[53] = 58
			order[54] = 354
			order[55] = 355
			order[56] = 0
			fix.Group.__init__(self, 268, 279, order)

class MarketDataRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Y") )

class QuoteCancel(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Z") )

	class NoQuoteEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(21)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 311
			order[20] = 0
			fix.Group.__init__(self, 295, 55, order)

class QuoteStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("a") )

class QuoteAcknowledgement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("b") )

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(23)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 310
			order[6] = 313
			order[7] = 314
			order[8] = 315
			order[9] = 316
			order[10] = 317
			order[11] = 436
			order[12] = 435
			order[13] = 308
			order[14] = 306
			order[15] = 362
			order[16] = 363
			order[17] = 307
			order[18] = 364
			order[19] = 365
			order[20] = 304
			order[21] = 295
			order[22] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(22)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 167
				order[6] = 200
				order[7] = 205
				order[8] = 201
				order[9] = 202
				order[10] = 206
				order[11] = 231
				order[12] = 223
				order[13] = 207
				order[14] = 106
				order[15] = 348
				order[16] = 349
				order[17] = 107
				order[18] = 350
				order[19] = 351
				order[20] = 368
				order[21] = 0
				fix.Group.__init__(self, 295, 299, order)

class SecurityDefinitionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("c") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(23)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 310
			order[5] = 313
			order[6] = 314
			order[7] = 315
			order[8] = 316
			order[9] = 317
			order[10] = 436
			order[11] = 435
			order[12] = 308
			order[13] = 306
			order[14] = 362
			order[15] = 363
			order[16] = 307
			order[17] = 364
			order[18] = 365
			order[19] = 319
			order[20] = 54
			order[21] = 318
			order[22] = 0
			fix.Group.__init__(self, 146, 311, order)

class SecurityDefinition(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("d") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(23)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 310
			order[5] = 313
			order[6] = 314
			order[7] = 315
			order[8] = 316
			order[9] = 317
			order[10] = 436
			order[11] = 435
			order[12] = 308
			order[13] = 306
			order[14] = 362
			order[15] = 363
			order[16] = 307
			order[17] = 364
			order[18] = 365
			order[19] = 319
			order[20] = 54
			order[21] = 318
			order[22] = 0
			fix.Group.__init__(self, 146, 311, order)

class SecurityStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("e") )

class SecurityStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("f") )

class TradingSessionStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("g") )

class TradingSessionStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("h") )

class MassQuote(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("i") )

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(24)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 310
			order[6] = 313
			order[7] = 314
			order[8] = 315
			order[9] = 316
			order[10] = 317
			order[11] = 436
			order[12] = 435
			order[13] = 308
			order[14] = 306
			order[15] = 362
			order[16] = 363
			order[17] = 307
			order[18] = 364
			order[19] = 365
			order[20] = 367
			order[21] = 304
			order[22] = 295
			order[23] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(37)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 167
				order[6] = 200
				order[7] = 205
				order[8] = 201
				order[9] = 202
				order[10] = 206
				order[11] = 231
				order[12] = 223
				order[13] = 207
				order[14] = 106
				order[15] = 348
				order[16] = 349
				order[17] = 107
				order[18] = 350
				order[19] = 351
				order[20] = 132
				order[21] = 133
				order[22] = 134
				order[23] = 135
				order[24] = 62
				order[25] = 188
				order[26] = 190
				order[27] = 189
				order[28] = 191
				order[29] = 60
				order[30] = 336
				order[31] = 64
				order[32] = 40
				order[33] = 193
				order[34] = 192
				order[35] = 15
				order[36] = 0
				fix.Group.__init__(self, 295, 299, order)

class BusinessMessageReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("j") )

class BidRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("k") )

	class NoBidDescriptors(fix.Group):
		def __init__(self):
			order = fix.IntArray(12)
			order[0] = 399
			order[1] = 400
			order[2] = 401
			order[3] = 404
			order[4] = 441
			order[5] = 402
			order[6] = 403
			order[7] = 405
			order[8] = 406
			order[9] = 407
			order[10] = 408
			order[11] = 0
			fix.Group.__init__(self, 398, 399, order)

	class NoBidComponents(fix.Group):
		def __init__(self):
			order = fix.IntArray(8)
			order[0] = 66
			order[1] = 54
			order[2] = 336
			order[3] = 430
			order[4] = 63
			order[5] = 64
			order[6] = 1
			order[7] = 0
			fix.Group.__init__(self, 420, 66, order)

class BidResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("l") )

	class NoBidComponents(fix.Group):
		def __init__(self):
			order = fix.IntArray(16)
			order[0] = 12
			order[1] = 13
			order[2] = 66
			order[3] = 421
			order[4] = 54
			order[5] = 44
			order[6] = 423
			order[7] = 406
			order[8] = 430
			order[9] = 63
			order[10] = 64
			order[11] = 336
			order[12] = 58
			order[13] = 354
			order[14] = 355
			order[15] = 0
			fix.Group.__init__(self, 420, 12, order)

class ListStrikePrice(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("m") )

	class NoStrikes(fix.Group):
		def __init__(self):
			order = fix.IntArray(28)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 167
			order[5] = 200
			order[6] = 205
			order[7] = 201
			order[8] = 202
			order[9] = 206
			order[10] = 231
			order[11] = 223
			order[12] = 207
			order[13] = 106
			order[14] = 348
			order[15] = 349
			order[16] = 107
			order[17] = 350
			order[18] = 351
			order[19] = 140
			order[20] = 11
			order[21] = 54
			order[22] = 44
			order[23] = 15
			order[24] = 58
			order[25] = 354
			order[26] = 355
			order[27] = 0
			fix.Group.__init__(self, 428, 55, order)
