import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIX.4.3") )

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

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

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

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class ExecutionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("8") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoContraBrokers(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 375
			order[1] = 337
			order[2] = 437
			order[3] = 438
			order[4] = 655
			order[5] = 0
			fix.Group.__init__(self, 382, 375, order)

	class NoContAmts(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 519
			order[1] = 520
			order[2] = 521
			order[3] = 0
			fix.Group.__init__(self, 518, 519, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(44)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 610
			order[9] = 611
			order[10] = 248
			order[11] = 249
			order[12] = 250
			order[13] = 251
			order[14] = 252
			order[15] = 253
			order[16] = 257
			order[17] = 599
			order[18] = 596
			order[19] = 597
			order[20] = 598
			order[21] = 254
			order[22] = 612
			order[23] = 613
			order[24] = 614
			order[25] = 615
			order[26] = 616
			order[27] = 617
			order[28] = 618
			order[29] = 619
			order[30] = 620
			order[31] = 621
			order[32] = 622
			order[33] = 623
			order[34] = 624
			order[35] = 564
			order[36] = 565
			order[37] = 539
			order[38] = 654
			order[39] = 566
			order[40] = 587
			order[41] = 588
			order[42] = 637
			order[43] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

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
			order = fix.IntArray(34)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

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
			order = fix.IntArray(34)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

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

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 79
			order[1] = 467
			order[2] = 539
			order[3] = 80
			order[4] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class NewOrderList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("E") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(116)
			order[0] = 11
			order[1] = 526
			order[2] = 67
			order[3] = 583
			order[4] = 160
			order[5] = 453
			order[6] = 229
			order[7] = 1
			order[8] = 581
			order[9] = 589
			order[10] = 590
			order[11] = 591
			order[12] = 78
			order[13] = 63
			order[14] = 64
			order[15] = 544
			order[16] = 635
			order[17] = 21
			order[18] = 18
			order[19] = 110
			order[20] = 111
			order[21] = 100
			order[22] = 386
			order[23] = 81
			order[24] = 55
			order[25] = 65
			order[26] = 48
			order[27] = 22
			order[28] = 454
			order[29] = 460
			order[30] = 461
			order[31] = 167
			order[32] = 200
			order[33] = 541
			order[34] = 224
			order[35] = 225
			order[36] = 239
			order[37] = 226
			order[38] = 227
			order[39] = 228
			order[40] = 255
			order[41] = 543
			order[42] = 470
			order[43] = 471
			order[44] = 472
			order[45] = 240
			order[46] = 202
			order[47] = 206
			order[48] = 231
			order[49] = 223
			order[50] = 207
			order[51] = 106
			order[52] = 348
			order[53] = 349
			order[54] = 107
			order[55] = 350
			order[56] = 351
			order[57] = 140
			order[58] = 54
			order[59] = 401
			order[60] = 114
			order[61] = 60
			order[62] = 232
			order[63] = 465
			order[64] = 38
			order[65] = 152
			order[66] = 516
			order[67] = 468
			order[68] = 469
			order[69] = 40
			order[70] = 423
			order[71] = 44
			order[72] = 99
			order[73] = 218
			order[74] = 220
			order[75] = 221
			order[76] = 222
			order[77] = 235
			order[78] = 236
			order[79] = 15
			order[80] = 376
			order[81] = 377
			order[82] = 23
			order[83] = 117
			order[84] = 59
			order[85] = 168
			order[86] = 432
			order[87] = 126
			order[88] = 427
			order[89] = 12
			order[90] = 13
			order[91] = 479
			order[92] = 497
			order[93] = 528
			order[94] = 529
			order[95] = 582
			order[96] = 47
			order[97] = 121
			order[98] = 120
			order[99] = 58
			order[100] = 354
			order[101] = 355
			order[102] = 193
			order[103] = 192
			order[104] = 640
			order[105] = 77
			order[106] = 203
			order[107] = 210
			order[108] = 211
			order[109] = 388
			order[110] = 389
			order[111] = 494
			order[112] = 158
			order[113] = 159
			order[114] = 118
			order[115] = 0
			fix.Group.__init__(self, 73, 11, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 523
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 79
				order[1] = 467
				order[2] = 539
				order[3] = 80
				order[4] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 545
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

		class NoTradingSessions(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 386, 336, order)

class OrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("F") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class OrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("G") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 79
			order[1] = 467
			order[2] = 539
			order[3] = 80
			order[4] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class OrderStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("H") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class Allocation(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("J") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 526
			order[4] = 66
			order[5] = 0
			fix.Group.__init__(self, 73, 11, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 29
			order[5] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(25)
			order[0] = 79
			order[1] = 366
			order[2] = 80
			order[3] = 467
			order[4] = 81
			order[5] = 539
			order[6] = 208
			order[7] = 209
			order[8] = 161
			order[9] = 360
			order[10] = 361
			order[11] = 12
			order[12] = 13
			order[13] = 479
			order[14] = 497
			order[15] = 153
			order[16] = 154
			order[17] = 119
			order[18] = 120
			order[19] = 155
			order[20] = 156
			order[21] = 159
			order[22] = 160
			order[23] = 136
			order[24] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

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
			order = fix.IntArray(13)
			order[0] = 11
			order[1] = 526
			order[2] = 14
			order[3] = 39
			order[4] = 636
			order[5] = 151
			order[6] = 84
			order[7] = 6
			order[8] = 103
			order[9] = 58
			order[10] = 354
			order[11] = 355
			order[12] = 0
			fix.Group.__init__(self, 73, 11, order)

class AllocationAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("P") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

class DontKnowTrade(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Q") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class QuoteRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("R") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 140
			order[34] = 303
			order[35] = 537
			order[36] = 336
			order[37] = 625
			order[38] = 229
			order[39] = 232
			order[40] = 54
			order[41] = 465
			order[42] = 38
			order[43] = 152
			order[44] = 63
			order[45] = 64
			order[46] = 40
			order[47] = 193
			order[48] = 192
			order[49] = 126
			order[50] = 60
			order[51] = 15
			order[52] = 218
			order[53] = 220
			order[54] = 221
			order[55] = 222
			order[56] = 423
			order[57] = 44
			order[58] = 640
			order[59] = 235
			order[60] = 236
			order[61] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

class Quote(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("S") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class SettlementInstructions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("T") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

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
			order = fix.IntArray(34)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class MarketDataSnapshotFullRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("W") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(33)
			order[0] = 269
			order[1] = 270
			order[2] = 15
			order[3] = 271
			order[4] = 272
			order[5] = 273
			order[6] = 274
			order[7] = 275
			order[8] = 336
			order[9] = 625
			order[10] = 276
			order[11] = 277
			order[12] = 282
			order[13] = 283
			order[14] = 284
			order[15] = 286
			order[16] = 59
			order[17] = 432
			order[18] = 126
			order[19] = 110
			order[20] = 18
			order[21] = 287
			order[22] = 37
			order[23] = 299
			order[24] = 288
			order[25] = 289
			order[26] = 346
			order[27] = 290
			order[28] = 546
			order[29] = 58
			order[30] = 354
			order[31] = 355
			order[32] = 0
			fix.Group.__init__(self, 268, 269, order)

class MarketDataIncrementalRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("X") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(76)
			order[0] = 279
			order[1] = 285
			order[2] = 269
			order[3] = 278
			order[4] = 280
			order[5] = 55
			order[6] = 65
			order[7] = 48
			order[8] = 22
			order[9] = 454
			order[10] = 460
			order[11] = 461
			order[12] = 167
			order[13] = 200
			order[14] = 541
			order[15] = 224
			order[16] = 225
			order[17] = 239
			order[18] = 226
			order[19] = 227
			order[20] = 228
			order[21] = 255
			order[22] = 543
			order[23] = 470
			order[24] = 471
			order[25] = 472
			order[26] = 240
			order[27] = 202
			order[28] = 206
			order[29] = 231
			order[30] = 223
			order[31] = 207
			order[32] = 106
			order[33] = 348
			order[34] = 349
			order[35] = 107
			order[36] = 350
			order[37] = 351
			order[38] = 291
			order[39] = 292
			order[40] = 270
			order[41] = 15
			order[42] = 271
			order[43] = 272
			order[44] = 273
			order[45] = 274
			order[46] = 275
			order[47] = 336
			order[48] = 625
			order[49] = 276
			order[50] = 277
			order[51] = 282
			order[52] = 283
			order[53] = 284
			order[54] = 286
			order[55] = 59
			order[56] = 432
			order[57] = 126
			order[58] = 110
			order[59] = 18
			order[60] = 287
			order[61] = 37
			order[62] = 299
			order[63] = 288
			order[64] = 289
			order[65] = 346
			order[66] = 290
			order[67] = 546
			order[68] = 387
			order[69] = 449
			order[70] = 450
			order[71] = 451
			order[72] = 58
			order[73] = 354
			order[74] = 355
			order[75] = 0
			fix.Group.__init__(self, 268, 279, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

class MarketDataRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Y") )

class QuoteCancel(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Z") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoQuoteEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(34)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 0
			fix.Group.__init__(self, 295, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

class QuoteStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("a") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

class MassQuoteAcknowledgement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("b") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(38)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 457
			order[6] = 462
			order[7] = 463
			order[8] = 310
			order[9] = 313
			order[10] = 542
			order[11] = 315
			order[12] = 241
			order[13] = 242
			order[14] = 243
			order[15] = 244
			order[16] = 245
			order[17] = 246
			order[18] = 256
			order[19] = 595
			order[20] = 592
			order[21] = 593
			order[22] = 594
			order[23] = 247
			order[24] = 316
			order[25] = 317
			order[26] = 436
			order[27] = 435
			order[28] = 308
			order[29] = 306
			order[30] = 362
			order[31] = 363
			order[32] = 307
			order[33] = 364
			order[34] = 365
			order[35] = 304
			order[36] = 295
			order[37] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(59)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 454
				order[6] = 460
				order[7] = 461
				order[8] = 167
				order[9] = 200
				order[10] = 541
				order[11] = 224
				order[12] = 225
				order[13] = 239
				order[14] = 226
				order[15] = 227
				order[16] = 228
				order[17] = 255
				order[18] = 543
				order[19] = 470
				order[20] = 471
				order[21] = 472
				order[22] = 240
				order[23] = 202
				order[24] = 206
				order[25] = 231
				order[26] = 223
				order[27] = 207
				order[28] = 106
				order[29] = 348
				order[30] = 349
				order[31] = 107
				order[32] = 350
				order[33] = 351
				order[34] = 132
				order[35] = 133
				order[36] = 134
				order[37] = 135
				order[38] = 62
				order[39] = 188
				order[40] = 190
				order[41] = 189
				order[42] = 191
				order[43] = 631
				order[44] = 632
				order[45] = 633
				order[46] = 634
				order[47] = 60
				order[48] = 336
				order[49] = 625
				order[50] = 64
				order[51] = 40
				order[52] = 193
				order[53] = 192
				order[54] = 642
				order[55] = 643
				order[56] = 15
				order[57] = 368
				order[58] = 0
				fix.Group.__init__(self, 295, 299, order)

			class NoSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					fix.Group.__init__(self, 454, 455, order)

class SecurityDefinitionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("c") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(37)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 610
			order[9] = 611
			order[10] = 248
			order[11] = 249
			order[12] = 250
			order[13] = 251
			order[14] = 252
			order[15] = 253
			order[16] = 257
			order[17] = 599
			order[18] = 596
			order[19] = 597
			order[20] = 598
			order[21] = 254
			order[22] = 612
			order[23] = 613
			order[24] = 614
			order[25] = 615
			order[26] = 616
			order[27] = 617
			order[28] = 618
			order[29] = 619
			order[30] = 620
			order[31] = 621
			order[32] = 622
			order[33] = 623
			order[34] = 624
			order[35] = 556
			order[36] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class SecurityDefinition(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("d") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(37)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 610
			order[9] = 611
			order[10] = 248
			order[11] = 249
			order[12] = 250
			order[13] = 251
			order[14] = 252
			order[15] = 253
			order[16] = 257
			order[17] = 599
			order[18] = 596
			order[19] = 597
			order[20] = 598
			order[21] = 254
			order[22] = 612
			order[23] = 613
			order[24] = 614
			order[25] = 615
			order[26] = 616
			order[27] = 617
			order[28] = 618
			order[29] = 619
			order[30] = 620
			order[31] = 621
			order[32] = 622
			order[33] = 623
			order[34] = 624
			order[35] = 556
			order[36] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class SecurityStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("e") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class SecurityStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("f") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

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

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(39)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 457
			order[6] = 462
			order[7] = 463
			order[8] = 310
			order[9] = 313
			order[10] = 542
			order[11] = 315
			order[12] = 241
			order[13] = 242
			order[14] = 243
			order[15] = 244
			order[16] = 245
			order[17] = 246
			order[18] = 256
			order[19] = 595
			order[20] = 592
			order[21] = 593
			order[22] = 594
			order[23] = 247
			order[24] = 316
			order[25] = 317
			order[26] = 436
			order[27] = 435
			order[28] = 308
			order[29] = 306
			order[30] = 362
			order[31] = 363
			order[32] = 307
			order[33] = 364
			order[34] = 365
			order[35] = 367
			order[36] = 304
			order[37] = 295
			order[38] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(58)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 454
				order[6] = 460
				order[7] = 461
				order[8] = 167
				order[9] = 200
				order[10] = 541
				order[11] = 224
				order[12] = 225
				order[13] = 239
				order[14] = 226
				order[15] = 227
				order[16] = 228
				order[17] = 255
				order[18] = 543
				order[19] = 470
				order[20] = 471
				order[21] = 472
				order[22] = 240
				order[23] = 202
				order[24] = 206
				order[25] = 231
				order[26] = 223
				order[27] = 207
				order[28] = 106
				order[29] = 348
				order[30] = 349
				order[31] = 107
				order[32] = 350
				order[33] = 351
				order[34] = 132
				order[35] = 133
				order[36] = 134
				order[37] = 135
				order[38] = 62
				order[39] = 188
				order[40] = 190
				order[41] = 189
				order[42] = 191
				order[43] = 631
				order[44] = 632
				order[45] = 633
				order[46] = 634
				order[47] = 60
				order[48] = 336
				order[49] = 625
				order[50] = 64
				order[51] = 40
				order[52] = 193
				order[53] = 192
				order[54] = 642
				order[55] = 643
				order[56] = 15
				order[57] = 0
				fix.Group.__init__(self, 295, 299, order)

			class NoSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					fix.Group.__init__(self, 454, 455, order)

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
			order = fix.IntArray(9)
			order[0] = 66
			order[1] = 54
			order[2] = 336
			order[3] = 625
			order[4] = 430
			order[5] = 63
			order[6] = 64
			order[7] = 1
			order[8] = 0
			fix.Group.__init__(self, 420, 66, order)

class BidResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("l") )

	class NoBidComponents(fix.Group):
		def __init__(self):
			order = fix.IntArray(19)
			order[0] = 12
			order[1] = 13
			order[2] = 479
			order[3] = 497
			order[4] = 66
			order[5] = 421
			order[6] = 54
			order[7] = 44
			order[8] = 423
			order[9] = 406
			order[10] = 430
			order[11] = 63
			order[12] = 64
			order[13] = 336
			order[14] = 625
			order[15] = 58
			order[16] = 354
			order[17] = 355
			order[18] = 0
			fix.Group.__init__(self, 420, 12, order)

class ListStrikePrice(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("m") )

	class NoStrikes(fix.Group):
		def __init__(self):
			order = fix.IntArray(43)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 140
			order[34] = 11
			order[35] = 526
			order[36] = 54
			order[37] = 44
			order[38] = 15
			order[39] = 58
			order[40] = 354
			order[41] = 355
			order[42] = 0
			fix.Group.__init__(self, 428, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

class XMLnonFIX(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("n") )

class RegistrationInstructions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("o") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoRegistDtls(fix.Group):
		def __init__(self):
			order = fix.IntArray(9)
			order[0] = 509
			order[1] = 511
			order[2] = 474
			order[3] = 482
			order[4] = 539
			order[5] = 522
			order[6] = 486
			order[7] = 475
			order[8] = 0
			fix.Group.__init__(self, 473, 509, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

	class NoDistribInsts(fix.Group):
		def __init__(self):
			order = fix.IntArray(8)
			order[0] = 477
			order[1] = 512
			order[2] = 478
			order[3] = 498
			order[4] = 499
			order[5] = 500
			order[6] = 501
			order[7] = 0
			fix.Group.__init__(self, 510, 477, order)

class RegistrationInstructionsResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("p") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

class OrderMassCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("q") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

class OrderMassCancelReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("r") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 41
			order[1] = 535
			order[2] = 536
			order[3] = 0
			fix.Group.__init__(self, 534, 41, order)

class NewOrderCross(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("s") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(37)
			order[0] = 54
			order[1] = 11
			order[2] = 526
			order[3] = 583
			order[4] = 453
			order[5] = 229
			order[6] = 1
			order[7] = 581
			order[8] = 589
			order[9] = 590
			order[10] = 591
			order[11] = 78
			order[12] = 465
			order[13] = 38
			order[14] = 152
			order[15] = 516
			order[16] = 468
			order[17] = 469
			order[18] = 12
			order[19] = 13
			order[20] = 479
			order[21] = 497
			order[22] = 528
			order[23] = 529
			order[24] = 582
			order[25] = 121
			order[26] = 120
			order[27] = 58
			order[28] = 354
			order[29] = 355
			order[30] = 77
			order[31] = 203
			order[32] = 544
			order[33] = 635
			order[34] = 377
			order[35] = 659
			order[36] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 523
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 79
				order[1] = 467
				order[2] = 539
				order[3] = 80
				order[4] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 545
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class CrossOrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("u") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(18)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 586
			order[6] = 453
			order[7] = 229
			order[8] = 38
			order[9] = 152
			order[10] = 516
			order[11] = 468
			order[12] = 469
			order[13] = 376
			order[14] = 58
			order[15] = 354
			order[16] = 355
			order[17] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 523
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

class CrossOrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("t") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(39)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 586
			order[6] = 453
			order[7] = 229
			order[8] = 1
			order[9] = 581
			order[10] = 589
			order[11] = 590
			order[12] = 591
			order[13] = 78
			order[14] = 465
			order[15] = 38
			order[16] = 152
			order[17] = 516
			order[18] = 468
			order[19] = 469
			order[20] = 12
			order[21] = 13
			order[22] = 479
			order[23] = 497
			order[24] = 528
			order[25] = 529
			order[26] = 582
			order[27] = 121
			order[28] = 120
			order[29] = 58
			order[30] = 354
			order[31] = 355
			order[32] = 77
			order[33] = 203
			order[34] = 544
			order[35] = 635
			order[36] = 377
			order[37] = 659
			order[38] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 523
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 79
				order[1] = 467
				order[2] = 539
				order[3] = 80
				order[4] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 545
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class SecurityTypeRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("v") )

class SecurityTypes(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("w") )

	class NoSecurityTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 167
			order[1] = 460
			order[2] = 461
			order[3] = 0
			fix.Group.__init__(self, 558, 167, order)

class SecurityListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("x") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

class SecurityList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("y") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(43)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 15
			order[34] = 555
			order[35] = 561
			order[36] = 562
			order[37] = 336
			order[38] = 625
			order[39] = 58
			order[40] = 354
			order[41] = 355
			order[42] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(37)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 610
				order[9] = 611
				order[10] = 248
				order[11] = 249
				order[12] = 250
				order[13] = 251
				order[14] = 252
				order[15] = 253
				order[16] = 257
				order[17] = 599
				order[18] = 596
				order[19] = 597
				order[20] = 598
				order[21] = 254
				order[22] = 612
				order[23] = 613
				order[24] = 614
				order[25] = 615
				order[26] = 616
				order[27] = 617
				order[28] = 618
				order[29] = 619
				order[30] = 620
				order[31] = 621
				order[32] = 622
				order[33] = 623
				order[34] = 624
				order[35] = 556
				order[36] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

class DerivativeSecurityListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("z") )

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

class DerivativeSecurityList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AA") )

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(41)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 15
			order[34] = 555
			order[35] = 336
			order[36] = 625
			order[37] = 58
			order[38] = 354
			order[39] = 355
			order[40] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(37)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 610
				order[9] = 611
				order[10] = 248
				order[11] = 249
				order[12] = 250
				order[13] = 251
				order[14] = 252
				order[15] = 253
				order[16] = 257
				order[17] = 599
				order[18] = 596
				order[19] = 597
				order[20] = 598
				order[21] = 254
				order[22] = 612
				order[23] = 613
				order[24] = 614
				order[25] = 615
				order[26] = 616
				order[27] = 617
				order[28] = 618
				order[29] = 619
				order[30] = 620
				order[31] = 621
				order[32] = 622
				order[33] = 623
				order[34] = 624
				order[35] = 556
				order[36] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

class NewOrderMultileg(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AB") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 79
			order[1] = 467
			order[2] = 80
			order[3] = 0
			fix.Group.__init__(self, 78, 79, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 610
			order[9] = 611
			order[10] = 248
			order[11] = 249
			order[12] = 250
			order[13] = 251
			order[14] = 252
			order[15] = 253
			order[16] = 257
			order[17] = 599
			order[18] = 596
			order[19] = 597
			order[20] = 598
			order[21] = 254
			order[22] = 612
			order[23] = 613
			order[24] = 614
			order[25] = 615
			order[26] = 616
			order[27] = 617
			order[28] = 618
			order[29] = 619
			order[30] = 620
			order[31] = 621
			order[32] = 622
			order[33] = 623
			order[34] = 624
			order[35] = 564
			order[36] = 565
			order[37] = 539
			order[38] = 654
			order[39] = 566
			order[40] = 587
			order[41] = 588
			order[42] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

class MultilegOrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AC") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 79
			order[1] = 467
			order[2] = 80
			order[3] = 0
			fix.Group.__init__(self, 78, 79, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 610
			order[9] = 611
			order[10] = 248
			order[11] = 249
			order[12] = 250
			order[13] = 251
			order[14] = 252
			order[15] = 253
			order[16] = 257
			order[17] = 599
			order[18] = 596
			order[19] = 597
			order[20] = 598
			order[21] = 254
			order[22] = 612
			order[23] = 613
			order[24] = 614
			order[25] = 615
			order[26] = 616
			order[27] = 617
			order[28] = 618
			order[29] = 619
			order[30] = 620
			order[31] = 621
			order[32] = 622
			order[33] = 623
			order[34] = 624
			order[35] = 564
			order[36] = 565
			order[37] = 539
			order[38] = 654
			order[39] = 566
			order[40] = 587
			order[41] = 588
			order[42] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 545
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

class TradeCaptureReportRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AD") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoDates(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 75
			order[1] = 60
			order[2] = 0
			fix.Group.__init__(self, 580, 75, order)

class TradeCaptureReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AE") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(46)
			order[0] = 54
			order[1] = 37
			order[2] = 198
			order[3] = 11
			order[4] = 453
			order[5] = 1
			order[6] = 581
			order[7] = 81
			order[8] = 575
			order[9] = 576
			order[10] = 635
			order[11] = 578
			order[12] = 579
			order[13] = 15
			order[14] = 376
			order[15] = 377
			order[16] = 528
			order[17] = 529
			order[18] = 582
			order[19] = 483
			order[20] = 336
			order[21] = 625
			order[22] = 12
			order[23] = 13
			order[24] = 479
			order[25] = 497
			order[26] = 381
			order[27] = 157
			order[28] = 230
			order[29] = 158
			order[30] = 159
			order[31] = 238
			order[32] = 237
			order[33] = 118
			order[34] = 119
			order[35] = 120
			order[36] = 155
			order[37] = 156
			order[38] = 77
			order[39] = 58
			order[40] = 354
			order[41] = 355
			order[42] = 442
			order[43] = 518
			order[44] = 136
			order[45] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 523
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

		class NoClearingInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 577
				order[1] = 0
				fix.Group.__init__(self, 576, 577, order)

		class NoContAmts(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 519
				order[1] = 520
				order[2] = 521
				order[3] = 0
				fix.Group.__init__(self, 518, 519, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 0
				fix.Group.__init__(self, 136, 137, order)

class OrderMassStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AF") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

class QuoteRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AG") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 140
			order[34] = 303
			order[35] = 537
			order[36] = 336
			order[37] = 625
			order[38] = 229
			order[39] = 232
			order[40] = 54
			order[41] = 465
			order[42] = 38
			order[43] = 152
			order[44] = 63
			order[45] = 64
			order[46] = 40
			order[47] = 193
			order[48] = 192
			order[49] = 126
			order[50] = 60
			order[51] = 15
			order[52] = 218
			order[53] = 220
			order[54] = 221
			order[55] = 222
			order[56] = 423
			order[57] = 44
			order[58] = 640
			order[59] = 235
			order[60] = 236
			order[61] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

class RFQRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AH") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(39)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 200
			order[9] = 541
			order[10] = 224
			order[11] = 225
			order[12] = 239
			order[13] = 226
			order[14] = 227
			order[15] = 228
			order[16] = 255
			order[17] = 543
			order[18] = 470
			order[19] = 471
			order[20] = 472
			order[21] = 240
			order[22] = 202
			order[23] = 206
			order[24] = 231
			order[25] = 223
			order[26] = 207
			order[27] = 106
			order[28] = 348
			order[29] = 349
			order[30] = 107
			order[31] = 350
			order[32] = 351
			order[33] = 140
			order[34] = 303
			order[35] = 537
			order[36] = 336
			order[37] = 625
			order[38] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

class QuoteStatusReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AI") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 523
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)
