require 'quickfix'
module Quickfix44Sp0
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIX.4.4") )
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

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 682
			order[43] = 683
			order[44] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end
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

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class ExecutionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("8") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoContraBrokers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 375
			order[1] = 337
			order[2] = 437
			order[3] = 438
			order[4] = 655
			order[5] = 0
			super(382, 375, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoContAmts < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 519
			order[1] = 520
			order[2] = 521
			order[3] = 0
			super(518, 519, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 683
			order[45] = 564
			order[46] = 565
			order[47] = 539
			order[48] = 654
			order[49] = 566
			order[50] = 587
			order[51] = 588
			order[52] = 637
			order[53] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
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
			order = Quickfix::IntArray.new(43)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLinesOfText < Quickfix::Group
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
			order = Quickfix::IntArray.new(43)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoLinesOfText < Quickfix::Group
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

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 539
			order[5] = 80
			order[6] = 0
			super(78, 79, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
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
			order = Quickfix::IntArray.new(147)
			order[0] = 11
			order[1] = 526
			order[2] = 67
			order[3] = 583
			order[4] = 160
			order[5] = 453
			order[6] = 229
			order[7] = 75
			order[8] = 1
			order[9] = 660
			order[10] = 581
			order[11] = 589
			order[12] = 590
			order[13] = 70
			order[14] = 591
			order[15] = 78
			order[16] = 63
			order[17] = 64
			order[18] = 544
			order[19] = 635
			order[20] = 21
			order[21] = 18
			order[22] = 110
			order[23] = 111
			order[24] = 100
			order[25] = 386
			order[26] = 81
			order[27] = 55
			order[28] = 65
			order[29] = 48
			order[30] = 22
			order[31] = 454
			order[32] = 460
			order[33] = 461
			order[34] = 167
			order[35] = 762
			order[36] = 200
			order[37] = 541
			order[38] = 224
			order[39] = 225
			order[40] = 239
			order[41] = 226
			order[42] = 227
			order[43] = 228
			order[44] = 255
			order[45] = 543
			order[46] = 470
			order[47] = 471
			order[48] = 472
			order[49] = 240
			order[50] = 202
			order[51] = 947
			order[52] = 206
			order[53] = 231
			order[54] = 223
			order[55] = 207
			order[56] = 106
			order[57] = 348
			order[58] = 349
			order[59] = 107
			order[60] = 350
			order[61] = 351
			order[62] = 691
			order[63] = 667
			order[64] = 875
			order[65] = 876
			order[66] = 864
			order[67] = 873
			order[68] = 874
			order[69] = 711
			order[70] = 140
			order[71] = 54
			order[72] = 401
			order[73] = 114
			order[74] = 60
			order[75] = 232
			order[76] = 854
			order[77] = 38
			order[78] = 152
			order[79] = 516
			order[80] = 468
			order[81] = 469
			order[82] = 40
			order[83] = 423
			order[84] = 44
			order[85] = 99
			order[86] = 218
			order[87] = 220
			order[88] = 221
			order[89] = 222
			order[90] = 662
			order[91] = 663
			order[92] = 699
			order[93] = 761
			order[94] = 235
			order[95] = 236
			order[96] = 701
			order[97] = 696
			order[98] = 697
			order[99] = 698
			order[100] = 15
			order[101] = 376
			order[102] = 377
			order[103] = 23
			order[104] = 117
			order[105] = 59
			order[106] = 168
			order[107] = 432
			order[108] = 126
			order[109] = 427
			order[110] = 12
			order[111] = 13
			order[112] = 479
			order[113] = 497
			order[114] = 528
			order[115] = 529
			order[116] = 582
			order[117] = 121
			order[118] = 120
			order[119] = 775
			order[120] = 58
			order[121] = 354
			order[122] = 355
			order[123] = 193
			order[124] = 192
			order[125] = 640
			order[126] = 77
			order[127] = 203
			order[128] = 210
			order[129] = 211
			order[130] = 835
			order[131] = 836
			order[132] = 837
			order[133] = 838
			order[134] = 840
			order[135] = 388
			order[136] = 389
			order[137] = 841
			order[138] = 842
			order[139] = 843
			order[140] = 844
			order[141] = 846
			order[142] = 847
			order[143] = 848
			order[144] = 849
			order[145] = 494
			order[146] = 0
			super(73, 11, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
			end
		end

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				super(78, 79, order)
			end

			class NoNestedPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					super(539, 524, order)
				end

				class NoNestedPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						super(804, 545, order)
					end
				end
			end
		end

		class NoTradingSessions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(386, 336, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end
	end
end

class OrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("F") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class OrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("G") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 539
			order[5] = 80
			order[6] = 0
			super(78, 79, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class OrderStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("H") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class AllocationInstruction < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("J") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(10)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 526
			order[4] = 66
			order[5] = 756
			order[6] = 38
			order[7] = 799
			order[8] = 800
			order[9] = 0
			super(73, 11, order)
		end

		class NoNested2PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				super(756, 757, order)
			end

			class NoNested2PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					super(806, 760, order)
				end
			end
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 0
			super(124, 32, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(37)
			order[0] = 79
			order[1] = 661
			order[2] = 573
			order[3] = 366
			order[4] = 80
			order[5] = 467
			order[6] = 81
			order[7] = 539
			order[8] = 208
			order[9] = 209
			order[10] = 161
			order[11] = 360
			order[12] = 361
			order[13] = 12
			order[14] = 13
			order[15] = 479
			order[16] = 497
			order[17] = 153
			order[18] = 154
			order[19] = 119
			order[20] = 737
			order[21] = 120
			order[22] = 736
			order[23] = 155
			order[24] = 156
			order[25] = 742
			order[26] = 741
			order[27] = 136
			order[28] = 576
			order[29] = 635
			order[30] = 780
			order[31] = 172
			order[32] = 169
			order[33] = 170
			order[34] = 171
			order[35] = 85
			order[36] = 0
			super(78, 79, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end

		class NoDlvyInst < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				super(85, 165, order)
			end

			class NoSettlPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					super(781, 782, order)
				end

				class NoSettlPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						super(801, 785, order)
					end
				end
			end
		end

		class NoMiscFees < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				super(136, 137, order)
			end
		end

		class NoClearingInstructions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 577
				order[1] = 0
				super(576, 577, order)
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
			order = Quickfix::IntArray.new(13)
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
			super(73, 11, order)
		end
	end
end

class AllocationInstructionAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("P") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 79
			order[1] = 661
			order[2] = 366
			order[3] = 467
			order[4] = 776
			order[5] = 161
			order[6] = 360
			order[7] = 361
			order[8] = 0
			super(78, 79, order)
		end
	end
end

class DontKnowTrade < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Q") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class QuoteRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("R") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(100)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 913
			order[43] = 914
			order[44] = 915
			order[45] = 918
			order[46] = 788
			order[47] = 916
			order[48] = 917
			order[49] = 919
			order[50] = 898
			order[51] = 711
			order[52] = 140
			order[53] = 303
			order[54] = 537
			order[55] = 336
			order[56] = 625
			order[57] = 229
			order[58] = 54
			order[59] = 854
			order[60] = 38
			order[61] = 152
			order[62] = 516
			order[63] = 468
			order[64] = 469
			order[65] = 63
			order[66] = 64
			order[67] = 193
			order[68] = 192
			order[69] = 15
			order[70] = 232
			order[71] = 1
			order[72] = 660
			order[73] = 581
			order[74] = 555
			order[75] = 735
			order[76] = 692
			order[77] = 40
			order[78] = 62
			order[79] = 126
			order[80] = 60
			order[81] = 218
			order[82] = 220
			order[83] = 221
			order[84] = 222
			order[85] = 662
			order[86] = 663
			order[87] = 699
			order[88] = 761
			order[89] = 423
			order[90] = 44
			order[91] = 640
			order[92] = 235
			order[93] = 236
			order[94] = 701
			order[95] = 696
			order[96] = 697
			order[97] = 698
			order[98] = 453
			order[99] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
			end
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(54)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 687
				order[43] = 690
				order[44] = 587
				order[45] = 588
				order[46] = 683
				order[47] = 539
				order[48] = 676
				order[49] = 677
				order[50] = 678
				order[51] = 679
				order[52] = 680
				order[53] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end

			class NoLegStipulations < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					super(683, 688, order)
				end
			end

			class NoNestedPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					super(539, 524, order)
				end

				class NoNestedPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						super(804, 545, order)
					end
				end
			end
		end

		class NoQuoteQualifiers < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 695
				order[1] = 0
				super(735, 695, order)
			end
		end
	end
end

class Quote < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("S") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoQuoteQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 695
			order[1] = 0
			super(735, 695, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 587
			order[45] = 588
			order[46] = 683
			order[47] = 539
			order[48] = 686
			order[49] = 681
			order[50] = 684
			order[51] = 676
			order[52] = 677
			order[53] = 678
			order[54] = 679
			order[55] = 680
			order[56] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end
end

class SettlementInstructions < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("T") )
	end

	class NoSettlInst < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(26)
			order[0] = 162
			order[1] = 163
			order[2] = 214
			order[3] = 453
			order[4] = 54
			order[5] = 460
			order[6] = 167
			order[7] = 461
			order[8] = 168
			order[9] = 126
			order[10] = 779
			order[11] = 172
			order[12] = 169
			order[13] = 170
			order[14] = 171
			order[15] = 85
			order[16] = 492
			order[17] = 476
			order[18] = 488
			order[19] = 489
			order[20] = 503
			order[21] = 490
			order[22] = 491
			order[23] = 504
			order[24] = 505
			order[25] = 0
			super(778, 162, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoDlvyInst < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				super(85, 165, order)
			end

			class NoSettlPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					super(781, 782, order)
				end

				class NoSettlPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						super(801, 785, order)
					end
				end
			end
		end
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
			order = Quickfix::IntArray.new(48)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 711
			order[43] = 555
			order[44] = 386
			order[45] = 815
			order[46] = 812
			order[47] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(43)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end
		end

		class NoTradingSessions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(386, 336, order)
			end
		end
	end
end

class MarketDataSnapshotFullRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("W") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(34)
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
			order[29] = 811
			order[30] = 58
			order[31] = 354
			order[32] = 355
			order[33] = 0
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
			order = Quickfix::IntArray.new(85)
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
			order[13] = 762
			order[14] = 200
			order[15] = 541
			order[16] = 224
			order[17] = 225
			order[18] = 239
			order[19] = 226
			order[20] = 227
			order[21] = 228
			order[22] = 255
			order[23] = 543
			order[24] = 470
			order[25] = 471
			order[26] = 472
			order[27] = 240
			order[28] = 202
			order[29] = 947
			order[30] = 206
			order[31] = 231
			order[32] = 223
			order[33] = 207
			order[34] = 106
			order[35] = 348
			order[36] = 349
			order[37] = 107
			order[38] = 350
			order[39] = 351
			order[40] = 691
			order[41] = 667
			order[42] = 875
			order[43] = 876
			order[44] = 864
			order[45] = 873
			order[46] = 874
			order[47] = 711
			order[48] = 555
			order[49] = 291
			order[50] = 292
			order[51] = 270
			order[52] = 15
			order[53] = 271
			order[54] = 272
			order[55] = 273
			order[56] = 274
			order[57] = 275
			order[58] = 336
			order[59] = 625
			order[60] = 276
			order[61] = 277
			order[62] = 282
			order[63] = 283
			order[64] = 284
			order[65] = 286
			order[66] = 59
			order[67] = 432
			order[68] = 126
			order[69] = 110
			order[70] = 18
			order[71] = 287
			order[72] = 37
			order[73] = 299
			order[74] = 288
			order[75] = 289
			order[76] = 346
			order[77] = 290
			order[78] = 546
			order[79] = 811
			order[80] = 451
			order[81] = 58
			order[82] = 354
			order[83] = 355
			order[84] = 0
			super(268, 279, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(43)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end
		end
	end
end

class MarketDataRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Y") )
	end

	class NoAltMDSource < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 817
			order[1] = 0
			super(816, 817, order)
		end
	end
end

class QuoteCancel < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Z") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoQuoteEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 913
			order[43] = 914
			order[44] = 915
			order[45] = 918
			order[46] = 788
			order[47] = 916
			order[48] = 917
			order[49] = 919
			order[50] = 898
			order[51] = 711
			order[52] = 555
			order[53] = 0
			super(295, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(43)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end
		end
	end
end

class QuoteStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("a") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class MassQuoteAcknowledgement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("b") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoQuoteSets < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(50)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 457
			order[6] = 462
			order[7] = 463
			order[8] = 310
			order[9] = 763
			order[10] = 313
			order[11] = 542
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
			order[25] = 941
			order[26] = 317
			order[27] = 436
			order[28] = 435
			order[29] = 308
			order[30] = 306
			order[31] = 362
			order[32] = 363
			order[33] = 307
			order[34] = 364
			order[35] = 365
			order[36] = 877
			order[37] = 878
			order[38] = 318
			order[39] = 879
			order[40] = 810
			order[41] = 882
			order[42] = 883
			order[43] = 884
			order[44] = 885
			order[45] = 886
			order[46] = 304
			order[47] = 893
			order[48] = 295
			order[49] = 0
			super(296, 302, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(69)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 454
				order[6] = 460
				order[7] = 461
				order[8] = 167
				order[9] = 762
				order[10] = 200
				order[11] = 541
				order[12] = 224
				order[13] = 225
				order[14] = 239
				order[15] = 226
				order[16] = 227
				order[17] = 228
				order[18] = 255
				order[19] = 543
				order[20] = 470
				order[21] = 471
				order[22] = 472
				order[23] = 240
				order[24] = 202
				order[25] = 947
				order[26] = 206
				order[27] = 231
				order[28] = 223
				order[29] = 207
				order[30] = 106
				order[31] = 348
				order[32] = 349
				order[33] = 107
				order[34] = 350
				order[35] = 351
				order[36] = 691
				order[37] = 667
				order[38] = 875
				order[39] = 876
				order[40] = 864
				order[41] = 873
				order[42] = 874
				order[43] = 555
				order[44] = 132
				order[45] = 133
				order[46] = 134
				order[47] = 135
				order[48] = 62
				order[49] = 188
				order[50] = 190
				order[51] = 189
				order[52] = 191
				order[53] = 631
				order[54] = 632
				order[55] = 633
				order[56] = 634
				order[57] = 60
				order[58] = 336
				order[59] = 625
				order[60] = 64
				order[61] = 40
				order[62] = 193
				order[63] = 192
				order[64] = 642
				order[65] = 643
				order[66] = 15
				order[67] = 368
				order[68] = 0
				super(295, 299, order)
			end

			class NoSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					super(454, 455, order)
				end
			end

			class NoEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 865
					order[1] = 866
					order[2] = 867
					order[3] = 868
					order[4] = 0
					super(864, 865, order)
				end
			end

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(43)
					order[0] = 600
					order[1] = 601
					order[2] = 602
					order[3] = 603
					order[4] = 604
					order[5] = 607
					order[6] = 608
					order[7] = 609
					order[8] = 764
					order[9] = 610
					order[10] = 611
					order[11] = 248
					order[12] = 249
					order[13] = 250
					order[14] = 251
					order[15] = 252
					order[16] = 253
					order[17] = 257
					order[18] = 599
					order[19] = 596
					order[20] = 597
					order[21] = 598
					order[22] = 254
					order[23] = 612
					order[24] = 942
					order[25] = 613
					order[26] = 614
					order[27] = 615
					order[28] = 616
					order[29] = 617
					order[30] = 618
					order[31] = 619
					order[32] = 620
					order[33] = 621
					order[34] = 622
					order[35] = 623
					order[36] = 624
					order[37] = 556
					order[38] = 740
					order[39] = 739
					order[40] = 955
					order[41] = 956
					order[42] = 0
					super(555, 600, order)
				end

				class NoLegSecurityAltID < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 605
						order[1] = 606
						order[2] = 0
						super(604, 605, order)
					end
				end
			end
		end
	end
end

class SecurityDefinitionRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("c") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class SecurityDefinition < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("d") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class SecurityStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("e") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class SecurityStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("f") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
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

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoQuoteSets < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(51)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 457
			order[6] = 462
			order[7] = 463
			order[8] = 310
			order[9] = 763
			order[10] = 313
			order[11] = 542
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
			order[25] = 941
			order[26] = 317
			order[27] = 436
			order[28] = 435
			order[29] = 308
			order[30] = 306
			order[31] = 362
			order[32] = 363
			order[33] = 307
			order[34] = 364
			order[35] = 365
			order[36] = 877
			order[37] = 878
			order[38] = 318
			order[39] = 879
			order[40] = 810
			order[41] = 882
			order[42] = 883
			order[43] = 884
			order[44] = 885
			order[45] = 886
			order[46] = 367
			order[47] = 304
			order[48] = 893
			order[49] = 295
			order[50] = 0
			super(296, 302, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(68)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 454
				order[6] = 460
				order[7] = 461
				order[8] = 167
				order[9] = 762
				order[10] = 200
				order[11] = 541
				order[12] = 224
				order[13] = 225
				order[14] = 239
				order[15] = 226
				order[16] = 227
				order[17] = 228
				order[18] = 255
				order[19] = 543
				order[20] = 470
				order[21] = 471
				order[22] = 472
				order[23] = 240
				order[24] = 202
				order[25] = 947
				order[26] = 206
				order[27] = 231
				order[28] = 223
				order[29] = 207
				order[30] = 106
				order[31] = 348
				order[32] = 349
				order[33] = 107
				order[34] = 350
				order[35] = 351
				order[36] = 691
				order[37] = 667
				order[38] = 875
				order[39] = 876
				order[40] = 864
				order[41] = 873
				order[42] = 874
				order[43] = 555
				order[44] = 132
				order[45] = 133
				order[46] = 134
				order[47] = 135
				order[48] = 62
				order[49] = 188
				order[50] = 190
				order[51] = 189
				order[52] = 191
				order[53] = 631
				order[54] = 632
				order[55] = 633
				order[56] = 634
				order[57] = 60
				order[58] = 336
				order[59] = 625
				order[60] = 64
				order[61] = 40
				order[62] = 193
				order[63] = 192
				order[64] = 642
				order[65] = 643
				order[66] = 15
				order[67] = 0
				super(295, 299, order)
			end

			class NoSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					super(454, 455, order)
				end
			end

			class NoEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 865
					order[1] = 866
					order[2] = 867
					order[3] = 868
					order[4] = 0
					super(864, 865, order)
				end
			end

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(43)
					order[0] = 600
					order[1] = 601
					order[2] = 602
					order[3] = 603
					order[4] = 604
					order[5] = 607
					order[6] = 608
					order[7] = 609
					order[8] = 764
					order[9] = 610
					order[10] = 611
					order[11] = 248
					order[12] = 249
					order[13] = 250
					order[14] = 251
					order[15] = 252
					order[16] = 253
					order[17] = 257
					order[18] = 599
					order[19] = 596
					order[20] = 597
					order[21] = 598
					order[22] = 254
					order[23] = 612
					order[24] = 942
					order[25] = 613
					order[26] = 614
					order[27] = 615
					order[28] = 616
					order[29] = 617
					order[30] = 618
					order[31] = 619
					order[32] = 620
					order[33] = 621
					order[34] = 622
					order[35] = 623
					order[36] = 624
					order[37] = 556
					order[38] = 740
					order[39] = 739
					order[40] = 955
					order[41] = 956
					order[42] = 0
					super(555, 600, order)
				end

				class NoLegSecurityAltID < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 605
						order[1] = 606
						order[2] = 0
						super(604, 605, order)
					end
				end
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
			order = Quickfix::IntArray.new(10)
			order[0] = 66
			order[1] = 54
			order[2] = 336
			order[3] = 625
			order[4] = 430
			order[5] = 63
			order[6] = 64
			order[7] = 1
			order[8] = 660
			order[9] = 0
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
			order = Quickfix::IntArray.new(19)
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
			order = Quickfix::IntArray.new(43)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 0
			super(428, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(55)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 140
			order[46] = 11
			order[47] = 526
			order[48] = 54
			order[49] = 44
			order[50] = 15
			order[51] = 58
			order[52] = 354
			order[53] = 355
			order[54] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class RegistrationInstructions < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("o") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoRegistDtls < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 509
			order[1] = 511
			order[2] = 474
			order[3] = 482
			order[4] = 539
			order[5] = 522
			order[6] = 486
			order[7] = 475
			order[8] = 0
			super(473, 509, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoDistribInsts < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 477
			order[1] = 512
			order[2] = 478
			order[3] = 498
			order[4] = 499
			order[5] = 500
			order[6] = 501
			order[7] = 502
			order[8] = 0
			super(510, 477, order)
		end
	end
end

class RegistrationInstructionsResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("p") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end
end

class OrderMassCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("q") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			super(457, 458, order)
		end
	end
end

class OrderMassCancelReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("r") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			super(457, 458, order)
		end
	end

	class NoAffectedOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 41
			order[1] = 535
			order[2] = 536
			order[3] = 0
			super(534, 41, order)
		end
	end
end

class NewOrderCross < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("s") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(41)
			order[0] = 54
			order[1] = 11
			order[2] = 526
			order[3] = 583
			order[4] = 453
			order[5] = 229
			order[6] = 75
			order[7] = 1
			order[8] = 660
			order[9] = 581
			order[10] = 589
			order[11] = 590
			order[12] = 591
			order[13] = 70
			order[14] = 78
			order[15] = 854
			order[16] = 38
			order[17] = 152
			order[18] = 516
			order[19] = 468
			order[20] = 469
			order[21] = 12
			order[22] = 13
			order[23] = 479
			order[24] = 497
			order[25] = 528
			order[26] = 529
			order[27] = 582
			order[28] = 121
			order[29] = 120
			order[30] = 775
			order[31] = 58
			order[32] = 354
			order[33] = 355
			order[34] = 77
			order[35] = 203
			order[36] = 544
			order[37] = 635
			order[38] = 377
			order[39] = 659
			order[40] = 0
			super(552, 54, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				super(78, 79, order)
			end

			class NoNestedPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					super(539, 524, order)
				end

				class NoNestedPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						super(804, 545, order)
					end
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end
end

class CrossOrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("t") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 586
			order[6] = 453
			order[7] = 229
			order[8] = 75
			order[9] = 1
			order[10] = 660
			order[11] = 581
			order[12] = 589
			order[13] = 590
			order[14] = 591
			order[15] = 70
			order[16] = 78
			order[17] = 854
			order[18] = 38
			order[19] = 152
			order[20] = 516
			order[21] = 468
			order[22] = 469
			order[23] = 12
			order[24] = 13
			order[25] = 479
			order[26] = 497
			order[27] = 528
			order[28] = 529
			order[29] = 582
			order[30] = 121
			order[31] = 120
			order[32] = 775
			order[33] = 58
			order[34] = 354
			order[35] = 355
			order[36] = 77
			order[37] = 203
			order[38] = 544
			order[39] = 635
			order[40] = 377
			order[41] = 659
			order[42] = 0
			super(552, 54, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				super(78, 79, order)
			end

			class NoNestedPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					super(539, 524, order)
				end

				class NoNestedPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						super(804, 545, order)
					end
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end
end

class CrossOrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("u") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(19)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 586
			order[6] = 453
			order[7] = 229
			order[8] = 75
			order[9] = 38
			order[10] = 152
			order[11] = 516
			order[12] = 468
			order[13] = 469
			order[14] = 376
			order[15] = 58
			order[16] = 354
			order[17] = 355
			order[18] = 0
			super(552, 54, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class SecurityTypeRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("v") )
	end
end

class SecurityTypes < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("w") )
	end

	class NoSecurityTypes < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 167
			order[1] = 762
			order[2] = 460
			order[3] = 461
			order[4] = 0
			super(558, 167, order)
		end
	end
end

class SecurityListRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("x") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class SecurityList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("y") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(81)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 668
			order[43] = 869
			order[44] = 870
			order[45] = 913
			order[46] = 914
			order[47] = 915
			order[48] = 918
			order[49] = 788
			order[50] = 916
			order[51] = 917
			order[52] = 919
			order[53] = 898
			order[54] = 711
			order[55] = 15
			order[56] = 232
			order[57] = 555
			order[58] = 218
			order[59] = 220
			order[60] = 221
			order[61] = 222
			order[62] = 662
			order[63] = 663
			order[64] = 699
			order[65] = 761
			order[66] = 235
			order[67] = 236
			order[68] = 701
			order[69] = 696
			order[70] = 697
			order[71] = 698
			order[72] = 561
			order[73] = 562
			order[74] = 336
			order[75] = 625
			order[76] = 827
			order[77] = 58
			order[78] = 354
			order[79] = 355
			order[80] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				super(870, 871, order)
			end
		end

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(51)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 690
				order[43] = 587
				order[44] = 683
				order[45] = 676
				order[46] = 677
				order[47] = 678
				order[48] = 679
				order[49] = 680
				order[50] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end

			class NoLegStipulations < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					super(683, 688, order)
				end
			end
		end
	end
end

class DerivativeSecurityListRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("z") )
	end

	class NoUnderlyingSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			super(457, 458, order)
		end
	end
end

class DerivativeSecurityList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AA") )
	end

	class NoUnderlyingSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			super(457, 458, order)
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 15
			order[43] = 827
			order[44] = 668
			order[45] = 869
			order[46] = 870
			order[47] = 555
			order[48] = 336
			order[49] = 625
			order[50] = 58
			order[51] = 354
			order[52] = 355
			order[53] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				super(870, 871, order)
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(43)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end
		end
	end
end

class NewOrderMultileg < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AB") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 948
			order[5] = 80
			order[6] = 0
			super(78, 79, order)
		end

		class NoNested3PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 949
				order[1] = 950
				order[2] = 951
				order[3] = 952
				order[4] = 0
				super(948, 949, order)
			end

			class NoNested3PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 953
					order[1] = 954
					order[2] = 0
					super(952, 953, order)
				end
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 683
			order[45] = 670
			order[46] = 564
			order[47] = 565
			order[48] = 539
			order[49] = 654
			order[50] = 566
			order[51] = 587
			order[52] = 588
			order[53] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 675
				order[6] = 0
				super(670, 671, order)
			end

			class NoNested2PartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					super(756, 757, order)
				end

				class NoNested2PartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						super(806, 760, order)
					end
				end
			end
		end
	end
end

class MultilegOrderCancelReplace < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AC") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 948
			order[5] = 80
			order[6] = 0
			super(78, 79, order)
		end

		class NoNested3PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 949
				order[1] = 950
				order[2] = 951
				order[3] = 952
				order[4] = 0
				super(948, 949, order)
			end

			class NoNested3PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 953
					order[1] = 954
					order[2] = 0
					super(952, 953, order)
				end
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 683
			order[45] = 670
			order[46] = 564
			order[47] = 565
			order[48] = 539
			order[49] = 654
			order[50] = 566
			order[51] = 587
			order[52] = 588
			order[53] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 675
				order[6] = 0
				super(670, 671, order)
			end

			class NoNested2PartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					super(756, 757, order)
				end

				class NoNested2PartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						super(806, 760, order)
					end
				end
			end
		end
	end
end

class TradeCaptureReportRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AD") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoDates < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 75
			order[1] = 60
			order[2] = 0
			super(580, 75, order)
		end
	end
end

class TradeCaptureReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AE") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 707
			order[1] = 708
			order[2] = 0
			super(753, 707, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 683
			order[45] = 564
			order[46] = 565
			order[47] = 539
			order[48] = 654
			order[49] = 566
			order[50] = 587
			order[51] = 588
			order[52] = 637
			order[53] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(66)
			order[0] = 54
			order[1] = 37
			order[2] = 198
			order[3] = 11
			order[4] = 526
			order[5] = 66
			order[6] = 453
			order[7] = 1
			order[8] = 660
			order[9] = 581
			order[10] = 81
			order[11] = 575
			order[12] = 576
			order[13] = 635
			order[14] = 578
			order[15] = 579
			order[16] = 821
			order[17] = 15
			order[18] = 376
			order[19] = 377
			order[20] = 528
			order[21] = 529
			order[22] = 582
			order[23] = 40
			order[24] = 18
			order[25] = 483
			order[26] = 336
			order[27] = 625
			order[28] = 943
			order[29] = 12
			order[30] = 13
			order[31] = 479
			order[32] = 497
			order[33] = 381
			order[34] = 157
			order[35] = 230
			order[36] = 158
			order[37] = 159
			order[38] = 738
			order[39] = 920
			order[40] = 921
			order[41] = 922
			order[42] = 238
			order[43] = 237
			order[44] = 118
			order[45] = 119
			order[46] = 120
			order[47] = 155
			order[48] = 156
			order[49] = 77
			order[50] = 58
			order[51] = 354
			order[52] = 355
			order[53] = 752
			order[54] = 518
			order[55] = 232
			order[56] = 136
			order[57] = 825
			order[58] = 826
			order[59] = 591
			order[60] = 70
			order[61] = 78
			order[62] = 797
			order[63] = 852
			order[64] = 853
			order[65] = 0
			super(552, 54, order)
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
			end
		end

		class NoClearingInstructions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 577
				order[1] = 0
				super(576, 577, order)
			end
		end

		class NoContAmts < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 519
				order[1] = 520
				order[2] = 521
				order[3] = 0
				super(518, 519, order)
			end
		end

		class NoMiscFees < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				super(136, 137, order)
			end
		end

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 756
				order[5] = 80
				order[6] = 0
				super(78, 79, order)
			end

			class NoNested2PartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					super(756, 757, order)
				end

				class NoNested2PartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						super(806, 760, order)
					end
				end
			end
		end
	end
end

class OrderMassStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AF") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyingSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			super(457, 458, order)
		end
	end
end

class QuoteRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AG") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(99)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 913
			order[43] = 914
			order[44] = 915
			order[45] = 918
			order[46] = 788
			order[47] = 916
			order[48] = 917
			order[49] = 919
			order[50] = 898
			order[51] = 711
			order[52] = 140
			order[53] = 303
			order[54] = 537
			order[55] = 336
			order[56] = 625
			order[57] = 229
			order[58] = 54
			order[59] = 854
			order[60] = 38
			order[61] = 152
			order[62] = 516
			order[63] = 468
			order[64] = 469
			order[65] = 63
			order[66] = 64
			order[67] = 193
			order[68] = 192
			order[69] = 15
			order[70] = 232
			order[71] = 1
			order[72] = 660
			order[73] = 581
			order[74] = 555
			order[75] = 735
			order[76] = 692
			order[77] = 40
			order[78] = 126
			order[79] = 60
			order[80] = 218
			order[81] = 220
			order[82] = 221
			order[83] = 222
			order[84] = 662
			order[85] = 663
			order[86] = 699
			order[87] = 761
			order[88] = 423
			order[89] = 44
			order[90] = 640
			order[91] = 235
			order[92] = 236
			order[93] = 701
			order[94] = 696
			order[95] = 697
			order[96] = 698
			order[97] = 453
			order[98] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
			end
		end

		class NoPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				super(453, 448, order)
			end

			class NoPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					super(802, 523, order)
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(54)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 687
				order[43] = 690
				order[44] = 587
				order[45] = 588
				order[46] = 683
				order[47] = 539
				order[48] = 676
				order[49] = 677
				order[50] = 678
				order[51] = 679
				order[52] = 680
				order[53] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end

			class NoLegStipulations < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					super(683, 688, order)
				end
			end

			class NoNestedPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					super(539, 524, order)
				end

				class NoNestedPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						super(804, 545, order)
					end
				end
			end
		end

		class NoQuoteQualifiers < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 695
				order[1] = 0
				super(735, 695, order)
			end
		end
	end
end

class RFQRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AH") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(50)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 454
			order[5] = 460
			order[6] = 461
			order[7] = 167
			order[8] = 762
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
			order[24] = 947
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
			order[35] = 691
			order[36] = 667
			order[37] = 875
			order[38] = 876
			order[39] = 864
			order[40] = 873
			order[41] = 874
			order[42] = 711
			order[43] = 555
			order[44] = 140
			order[45] = 303
			order[46] = 537
			order[47] = 336
			order[48] = 625
			order[49] = 0
			super(146, 55, order)
		end

		class NoSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				super(454, 455, order)
			end
		end

		class NoEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
				super(864, 865, order)
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(46)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 457
				order[5] = 462
				order[6] = 463
				order[7] = 310
				order[8] = 763
				order[9] = 313
				order[10] = 542
				order[11] = 241
				order[12] = 242
				order[13] = 243
				order[14] = 244
				order[15] = 245
				order[16] = 246
				order[17] = 256
				order[18] = 595
				order[19] = 592
				order[20] = 593
				order[21] = 594
				order[22] = 247
				order[23] = 316
				order[24] = 941
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
				order[35] = 877
				order[36] = 878
				order[37] = 318
				order[38] = 879
				order[39] = 810
				order[40] = 882
				order[41] = 883
				order[42] = 884
				order[43] = 885
				order[44] = 886
				order[45] = 0
				super(711, 311, order)
			end

			class NoUnderlyingSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					super(457, 458, order)
				end
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(43)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 604
				order[5] = 607
				order[6] = 608
				order[7] = 609
				order[8] = 764
				order[9] = 610
				order[10] = 611
				order[11] = 248
				order[12] = 249
				order[13] = 250
				order[14] = 251
				order[15] = 252
				order[16] = 253
				order[17] = 257
				order[18] = 599
				order[19] = 596
				order[20] = 597
				order[21] = 598
				order[22] = 254
				order[23] = 612
				order[24] = 942
				order[25] = 613
				order[26] = 614
				order[27] = 615
				order[28] = 616
				order[29] = 617
				order[30] = 618
				order[31] = 619
				order[32] = 620
				order[33] = 621
				order[34] = 622
				order[35] = 623
				order[36] = 624
				order[37] = 556
				order[38] = 740
				order[39] = 739
				order[40] = 955
				order[41] = 956
				order[42] = 0
				super(555, 600, order)
			end

			class NoLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					super(604, 605, order)
				end
			end
		end
	end
end

class QuoteStatusReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AI") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(49)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 587
			order[45] = 588
			order[46] = 683
			order[47] = 539
			order[48] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoQuoteQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 695
			order[1] = 0
			super(735, 695, order)
		end
	end
end

class QuoteResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AJ") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoQuoteQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 695
			order[1] = 0
			super(735, 695, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 587
			order[45] = 588
			order[46] = 683
			order[47] = 539
			order[48] = 686
			order[49] = 681
			order[50] = 684
			order[51] = 676
			order[52] = 677
			order[53] = 678
			order[54] = 679
			order[55] = 680
			order[56] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end
end

class Confirmation < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AK") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoDlvyInst < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			super(85, 165, order)
		end

		class NoSettlPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				super(781, 782, order)
			end

			class NoSettlPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					super(801, 785, order)
				end
			end
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(10)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 526
			order[4] = 66
			order[5] = 756
			order[6] = 38
			order[7] = 799
			order[8] = 800
			order[9] = 0
			super(73, 11, order)
		end

		class NoNested2PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				super(756, 757, order)
			end

			class NoNested2PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					super(806, 760, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoCapacities < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 528
			order[1] = 529
			order[2] = 863
			order[3] = 0
			super(862, 528, order)
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
		end
	end
end

class PositionMaintenanceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AL") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 0
			super(702, 703, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end
end

class PositionMaintenanceReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AM") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 0
			super(702, 703, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 707
			order[1] = 708
			order[2] = 0
			super(753, 707, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end
end

class RequestForPositions < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AN") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			super(386, 336, order)
		end
	end
end

class RequestForPositionsAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AO") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class PositionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AP") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 0
			super(702, 703, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 707
			order[1] = 708
			order[2] = 0
			super(753, 707, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(48)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 732
			order[46] = 733
			order[47] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class TradeCaptureReportRequestAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AQ") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end
end

class TradeCaptureReportAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AR") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 687
			order[43] = 690
			order[44] = 683
			order[45] = 564
			order[46] = 565
			order[47] = 539
			order[48] = 654
			order[49] = 566
			order[50] = 587
			order[51] = 588
			order[52] = 637
			order[53] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end

		class NoLegStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				super(683, 688, order)
			end
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 756
			order[5] = 80
			order[6] = 0
			super(78, 79, order)
		end

		class NoNested2PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				super(756, 757, order)
			end

			class NoNested2PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					super(806, 760, order)
				end
			end
		end
	end
end

class AllocationReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AS") )
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			super(870, 871, order)
		end
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(10)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 526
			order[4] = 66
			order[5] = 756
			order[6] = 38
			order[7] = 799
			order[8] = 800
			order[9] = 0
			super(73, 11, order)
		end

		class NoNested2PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				super(756, 757, order)
			end

			class NoNested2PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					super(806, 760, order)
				end
			end
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 0
			super(124, 32, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(37)
			order[0] = 79
			order[1] = 661
			order[2] = 573
			order[3] = 366
			order[4] = 80
			order[5] = 467
			order[6] = 81
			order[7] = 539
			order[8] = 208
			order[9] = 209
			order[10] = 161
			order[11] = 360
			order[12] = 361
			order[13] = 12
			order[14] = 13
			order[15] = 479
			order[16] = 497
			order[17] = 153
			order[18] = 154
			order[19] = 119
			order[20] = 737
			order[21] = 120
			order[22] = 736
			order[23] = 155
			order[24] = 156
			order[25] = 742
			order[26] = 741
			order[27] = 136
			order[28] = 576
			order[29] = 635
			order[30] = 780
			order[31] = 172
			order[32] = 169
			order[33] = 170
			order[34] = 171
			order[35] = 85
			order[36] = 0
			super(78, 79, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end

		class NoDlvyInst < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				super(85, 165, order)
			end

			class NoSettlPartyIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					super(781, 782, order)
				end

				class NoSettlPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						super(801, 785, order)
					end
				end
			end
		end

		class NoMiscFees < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				super(136, 137, order)
			end
		end

		class NoClearingInstructions < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 577
				order[1] = 0
				super(576, 577, order)
			end
		end
	end
end

class AllocationReportAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AT") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 79
			order[1] = 661
			order[2] = 366
			order[3] = 467
			order[4] = 776
			order[5] = 161
			order[6] = 360
			order[7] = 361
			order[8] = 0
			super(78, 79, order)
		end
	end
end

class ConfirmationAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AU") )
	end
end

class SettlementInstructionRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AV") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end
end

class AssignmentReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AW") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 0
			super(702, 703, order)
		end

		class NoNestedPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				super(539, 524, order)
			end

			class NoNestedPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					super(804, 545, order)
				end
			end
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 707
			order[1] = 708
			order[2] = 0
			super(753, 707, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class CollateralRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AX") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(47)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 944
			order[46] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
		end
	end
end

class CollateralAssignment < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AY") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoDlvyInst < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			super(85, 165, order)
		end

		class NoSettlPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				super(781, 782, order)
			end

			class NoSettlPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					super(801, 785, order)
				end
			end
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(47)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 944
			order[46] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
		end
	end
end

class CollateralResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AZ") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(47)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 944
			order[46] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
		end
	end
end

class CollateralReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BA") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoDlvyInst < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			super(85, 165, order)
		end

		class NoSettlPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				super(781, 782, order)
			end

			class NoSettlPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					super(801, 785, order)
				end
			end
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end

	class NoMiscFees < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			super(136, 137, order)
		end
	end
end

class CollateralInquiry < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BB") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 0
			super(768, 769, order)
		end
	end

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoDlvyInst < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			super(85, 165, order)
		end

		class NoSettlPartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				super(781, 782, order)
			end

			class NoSettlPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					super(801, 785, order)
				end
			end
		end
	end

	class NoCollInquiryQualifier < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 896
			order[1] = 0
			super(938, 896, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class NetworkCounterpartySystemStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BC") )
	end

	class NoCompIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 930
			order[1] = 931
			order[2] = 283
			order[3] = 284
			order[4] = 0
			super(936, 930, order)
		end
	end
end

class NetworkCounterpartySystemStatusResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BD") )
	end

	class NoCompIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 930
			order[1] = 931
			order[2] = 283
			order[3] = 284
			order[4] = 928
			order[5] = 929
			order[6] = 0
			super(936, 930, order)
		end
	end
end

class UserRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BE") )
	end
end

class UserResponse < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BF") )
	end
end

class CollateralInquiryAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BG") )
	end

	class NoPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			super(453, 448, order)
		end

		class NoPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				super(802, 523, order)
			end
		end
	end

	class NoSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			super(454, 455, order)
		end
	end

	class NoEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
			super(864, 865, order)
		end
	end

	class NoCollInquiryQualifier < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 896
			order[1] = 0
			super(938, 896, order)
		end
	end

	class NoExecs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 17
			order[1] = 0
			super(124, 17, order)
		end
	end

	class NoTrades < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			super(897, 571, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(43)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 604
			order[5] = 607
			order[6] = 608
			order[7] = 609
			order[8] = 764
			order[9] = 610
			order[10] = 611
			order[11] = 248
			order[12] = 249
			order[13] = 250
			order[14] = 251
			order[15] = 252
			order[16] = 253
			order[17] = 257
			order[18] = 599
			order[19] = 596
			order[20] = 597
			order[21] = 598
			order[22] = 254
			order[23] = 612
			order[24] = 942
			order[25] = 613
			order[26] = 614
			order[27] = 615
			order[28] = 616
			order[29] = 617
			order[30] = 618
			order[31] = 619
			order[32] = 620
			order[33] = 621
			order[34] = 622
			order[35] = 623
			order[36] = 624
			order[37] = 556
			order[38] = 740
			order[39] = 739
			order[40] = 955
			order[41] = 956
			order[42] = 0
			super(555, 600, order)
		end

		class NoLegSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				super(604, 605, order)
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(46)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 457
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 241
			order[12] = 242
			order[13] = 243
			order[14] = 244
			order[15] = 245
			order[16] = 246
			order[17] = 256
			order[18] = 595
			order[19] = 592
			order[20] = 593
			order[21] = 594
			order[22] = 247
			order[23] = 316
			order[24] = 941
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
			order[35] = 877
			order[36] = 878
			order[37] = 318
			order[38] = 879
			order[39] = 810
			order[40] = 882
			order[41] = 883
			order[42] = 884
			order[43] = 885
			order[44] = 886
			order[45] = 0
			super(711, 311, order)
		end

		class NoUnderlyingSecurityAltID < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				super(457, 458, order)
			end
		end
	end
end

class ConfirmationRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BH") )
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(10)
			order[0] = 11
			order[1] = 37
			order[2] = 198
			order[3] = 526
			order[4] = 66
			order[5] = 756
			order[6] = 38
			order[7] = 799
			order[8] = 800
			order[9] = 0
			super(73, 11, order)
		end

		class NoNested2PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				super(756, 757, order)
			end

			class NoNested2PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					super(806, 760, order)
				end
			end
		end
	end
end
end
