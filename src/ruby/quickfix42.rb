require 'quickfix'
module Quickfix42
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIX.4.2") )
	end
end

class Heartbeat < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("0") )
	end
end

class TestRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("1") )
	end
end

class ResendRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("2") )
	end
end

class Reject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("3") )
	end
end

class SequenceReset < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("4") )
	end
end

class Logout < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("5") )
	end
end

class IOI < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("6") )
	end

	class NoIOIQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 104
			order[1] = 0
			super(199, 104, order)
		end
	end

	class NoRoutingIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			super(215, 216, order)
		end
	end
end

class Advertisement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("7") )
	end
end

class ExecutionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("8") )
	end

	class NoContraBrokers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 375
			order[1] = 337
			order[2] = 437
			order[3] = 438
			order[4] = 0
			super(382, 375, order)
		end
	end
end

class OrderCancelReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("9") )
	end
end

class Logon < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("A") )
	end

	class NoMsgTypes < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 372
			order[1] = 385
			order[2] = 0
			super(384, 372, order)
		end
	end
end

class News < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("B") )
	end

	class NoRoutingIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			super(215, 216, order)
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(20)
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
			super(146, 46, order)
		end
	end

	class LinesOfText < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 58
			order[1] = 354
			order[2] = 355
			order[3] = 0
			super(33, 58, order)
		end
	end
end

class Email < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("C") )
	end

	class NoRoutingIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			super(215, 216, order)
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(20)
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
			super(146, 46, order)
		end
	end

	class LinesOfText < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 58
			order[1] = 354
			order[2] = 355
			order[3] = 0
			super(33, 58, order)
		end
	end
end

class NewOrderSingle < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("D") )
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 79
			order[1] = 80
			order[2] = 0
			super(78, 79, order)
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 336
			order[1] = 0
			super(386, 336, order)
		end
	end
end

class NewOrderList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("E") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(75)
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
			super(73, 11, order)
		end

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 79
				order[1] = 80
				order[2] = 0
				super(78, 79, order)
			end
		end

		class NoTradingSessions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 336
				order[1] = 0
				super(386, 336, order)
			end
		end
	end
end

class OrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("F") )
	end
end

class OrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("G") )
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 79
			order[1] = 80
			order[2] = 0
			super(78, 79, order)
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 336
			order[1] = 0
			super(386, 336, order)
		end
	end
end

class OrderStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("H") )
	end
end

class Allocation < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("J") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 66
			order[4] = 105
			order[5] = 0
			super(73, 11, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 32
			order[1] = 17
			order[2] = 31
			order[3] = 29
			order[4] = 0
			super(124, 32, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(24)
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
			super(78, 79, order)
		end

		class NoMiscFees < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 0
				super(136, 137, order)
			end
		end
	end
end

class ListCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("K") )
	end
end

class ListExecute < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("L") )
	end
end

class ListStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("M") )
	end
end

class ListStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("N") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(11)
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
			super(73, 11, order)
		end
	end
end

class AllocationInstructionAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("P") )
	end
end

class DontKnowTrade < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Q") )
	end
end

class QuoteRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("R") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(32)
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
			super(146, 55, order)
		end
	end
end

class Quote < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("S") )
	end
end

class SettlementInstructions < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("T") )
	end
end

class MarketDataRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("V") )
	end

	class NoMDEntryTypes < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 269
			order[1] = 0
			super(267, 269, order)
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(21)
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
			super(146, 55, order)
		end
	end
end

class MarketDataSnapshotFullRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("W") )
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(31)
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
			super(268, 269, order)
		end
	end
end

class MarketDataIncrementalRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("X") )
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			super(268, 279, order)
		end
	end
end

class MarketDataRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Y") )
	end
end

class QuoteCancel < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Z") )
	end

	class NoQuoteEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(21)
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
			super(295, 55, order)
		end
	end
end

class QuoteStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("a") )
	end
end

class QuoteAcknowledgement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("b") )
	end

	class NoQuoteSets < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(23)
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
			super(296, 302, order)
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(22)
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
				super(295, 299, order)
			end
		end
	end
end

class SecurityDefinitionRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("c") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(23)
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
			super(146, 311, order)
		end
	end
end

class SecurityDefinition < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("d") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(23)
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
			super(146, 311, order)
		end
	end
end

class SecurityStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("e") )
	end
end

class SecurityStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("f") )
	end
end

class TradingSessionStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("g") )
	end
end

class TradingSessionStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("h") )
	end
end

class MassQuote < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("i") )
	end

	class NoQuoteSets < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(24)
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
			super(296, 302, order)
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(37)
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
				super(295, 299, order)
			end
		end
	end
end

class BusinessMessageReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("j") )
	end
end

class BidRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("k") )
	end

	class NoBidDescriptors < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(12)
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
			super(398, 399, order)
		end
	end

	class NoBidComponents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(8)
			order[0] = 66
			order[1] = 54
			order[2] = 336
			order[3] = 430
			order[4] = 63
			order[5] = 64
			order[6] = 1
			order[7] = 0
			super(420, 66, order)
		end
	end
end

class BidResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("l") )
	end

	class NoBidComponents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(16)
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
			super(420, 12, order)
		end
	end
end

class ListStrikePrice < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("m") )
	end

	class NoStrikes < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(28)
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
			super(428, 55, order)
		end
	end
end
end
