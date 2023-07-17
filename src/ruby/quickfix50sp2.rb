require 'quickfix'
module Quickfix50Sp2
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIXT.1.1") )
		getHeader().setField( Quickfix::ApplVerID.new("9") )
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(56)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 682
			order[54] = 683
			order[55] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
		end
	end

	class NoFills < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 1363
			order[1] = 1364
			order[2] = 1365
			order[3] = 1443
			order[4] = 1414
			order[5] = 0
			super(1362, 1363, order)
		end

		class NoNested4PartyIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1415
				order[1] = 1416
				order[2] = 1417
				order[3] = 1413
				order[4] = 0
				super(1414, 1415, order)
			end

			class NoNested4PartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1412
					order[1] = 1411
					order[2] = 0
					super(1413, 1412, order)
				end
			end
		end
	end

	class NoRateSources < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			super(1445, 1446, order)
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
			order = Quickfix::IntArray.new(76)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 685
			order[55] = 690
			order[56] = 683
			order[57] = 1366
			order[58] = 670
			order[59] = 564
			order[60] = 565
			order[61] = 948
			order[62] = 654
			order[63] = 587
			order[64] = 588
			order[65] = 637
			order[66] = 675
			order[67] = 1073
			order[68] = 1074
			order[69] = 1075
			order[70] = 1379
			order[71] = 1381
			order[72] = 1383
			order[73] = 1384
			order[74] = 1418
			order[75] = 0
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

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
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

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
		end
	end
end

class OrderCancelReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("9") )
	end
end

class News < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("B") )
	end

	class NoNewsRefIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1476
			order[1] = 1477
			order[2] = 0
			super(1475, 1476, order)
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(82)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order = Quickfix::IntArray.new(82)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
		end
	end
end

class NewOrderList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("E") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
		end
	end

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(222)
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
			order[23] = 1089
			order[24] = 1090
			order[25] = 1138
			order[26] = 1082
			order[27] = 1083
			order[28] = 1084
			order[29] = 1085
			order[30] = 1086
			order[31] = 1087
			order[32] = 1088
			order[33] = 111
			order[34] = 100
			order[35] = 1133
			order[36] = 386
			order[37] = 81
			order[38] = 55
			order[39] = 65
			order[40] = 48
			order[41] = 22
			order[42] = 460
			order[43] = 1227
			order[44] = 1151
			order[45] = 461
			order[46] = 167
			order[47] = 762
			order[48] = 200
			order[49] = 541
			order[50] = 1079
			order[51] = 966
			order[52] = 1049
			order[53] = 965
			order[54] = 224
			order[55] = 1449
			order[56] = 1450
			order[57] = 1451
			order[58] = 1452
			order[59] = 1457
			order[60] = 1458
			order[61] = 225
			order[62] = 239
			order[63] = 226
			order[64] = 227
			order[65] = 228
			order[66] = 255
			order[67] = 543
			order[68] = 470
			order[69] = 471
			order[70] = 472
			order[71] = 240
			order[72] = 202
			order[73] = 947
			order[74] = 967
			order[75] = 968
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 206
			order[81] = 231
			order[82] = 1435
			order[83] = 1439
			order[84] = 969
			order[85] = 1146
			order[86] = 996
			order[87] = 1147
			order[88] = 1191
			order[89] = 1192
			order[90] = 1193
			order[91] = 1194
			order[92] = 1482
			order[93] = 1195
			order[94] = 1196
			order[95] = 1197
			order[96] = 1198
			order[97] = 1199
			order[98] = 1200
			order[99] = 201
			order[100] = 1244
			order[101] = 1242
			order[102] = 997
			order[103] = 223
			order[104] = 207
			order[105] = 970
			order[106] = 971
			order[107] = 106
			order[108] = 348
			order[109] = 349
			order[110] = 107
			order[111] = 350
			order[112] = 351
			order[113] = 691
			order[114] = 667
			order[115] = 875
			order[116] = 876
			order[117] = 873
			order[118] = 874
			order[119] = 711
			order[120] = 140
			order[121] = 54
			order[122] = 401
			order[123] = 114
			order[124] = 60
			order[125] = 232
			order[126] = 854
			order[127] = 38
			order[128] = 152
			order[129] = 516
			order[130] = 468
			order[131] = 469
			order[132] = 40
			order[133] = 423
			order[134] = 44
			order[135] = 1092
			order[136] = 99
			order[137] = 1100
			order[138] = 1101
			order[139] = 1102
			order[140] = 1103
			order[141] = 1104
			order[142] = 1105
			order[143] = 1106
			order[144] = 1107
			order[145] = 1108
			order[146] = 1109
			order[147] = 1110
			order[148] = 1111
			order[149] = 1112
			order[150] = 1113
			order[151] = 1114
			order[152] = 218
			order[153] = 220
			order[154] = 221
			order[155] = 222
			order[156] = 662
			order[157] = 663
			order[158] = 699
			order[159] = 761
			order[160] = 235
			order[161] = 236
			order[162] = 701
			order[163] = 696
			order[164] = 697
			order[165] = 698
			order[166] = 15
			order[167] = 376
			order[168] = 377
			order[169] = 23
			order[170] = 117
			order[171] = 1080
			order[172] = 1081
			order[173] = 59
			order[174] = 168
			order[175] = 432
			order[176] = 126
			order[177] = 427
			order[178] = 12
			order[179] = 13
			order[180] = 479
			order[181] = 497
			order[182] = 528
			order[183] = 529
			order[184] = 1091
			order[185] = 582
			order[186] = 121
			order[187] = 120
			order[188] = 775
			order[189] = 58
			order[190] = 354
			order[191] = 355
			order[192] = 193
			order[193] = 192
			order[194] = 640
			order[195] = 77
			order[196] = 203
			order[197] = 210
			order[198] = 211
			order[199] = 1094
			order[200] = 835
			order[201] = 836
			order[202] = 837
			order[203] = 838
			order[204] = 840
			order[205] = 1096
			order[206] = 1097
			order[207] = 1098
			order[208] = 1099
			order[209] = 388
			order[210] = 389
			order[211] = 841
			order[212] = 842
			order[213] = 843
			order[214] = 844
			order[215] = 846
			order[216] = 847
			order[217] = 957
			order[218] = 848
			order[219] = 849
			order[220] = 494
			order[221] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
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

		class NoStrategyParameters < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 958
				order[1] = 959
				order[2] = 960
				order[3] = 0
				super(957, 958, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end
end

class AllocationInstruction < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("J") )
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
			order = Quickfix::IntArray.new(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			super(124, 32, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(41)
			order[0] = 79
			order[1] = 661
			order[2] = 573
			order[3] = 366
			order[4] = 80
			order[5] = 467
			order[6] = 81
			order[7] = 989
			order[8] = 1002
			order[9] = 993
			order[10] = 1047
			order[11] = 992
			order[12] = 539
			order[13] = 208
			order[14] = 209
			order[15] = 161
			order[16] = 360
			order[17] = 361
			order[18] = 12
			order[19] = 13
			order[20] = 479
			order[21] = 497
			order[22] = 153
			order[23] = 154
			order[24] = 119
			order[25] = 737
			order[26] = 120
			order[27] = 736
			order[28] = 155
			order[29] = 156
			order[30] = 742
			order[31] = 741
			order[32] = 136
			order[33] = 576
			order[34] = 635
			order[35] = 780
			order[36] = 172
			order[37] = 169
			order[38] = 170
			order[39] = 171
			order[40] = 0
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

	class NoRateSources < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			super(1445, 1446, order)
		end
	end
end

class ListCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("K") )
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
			order = Quickfix::IntArray.new(14)
			order[0] = 11
			order[1] = 37
			order[2] = 526
			order[3] = 14
			order[4] = 39
			order[5] = 636
			order[6] = 151
			order[7] = 84
			order[8] = 6
			order[9] = 103
			order[10] = 58
			order[11] = 354
			order[12] = 355
			order[13] = 0
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
			order = Quickfix::IntArray.new(15)
			order[0] = 79
			order[1] = 661
			order[2] = 366
			order[3] = 1047
			order[4] = 467
			order[5] = 776
			order[6] = 539
			order[7] = 161
			order[8] = 360
			order[9] = 361
			order[10] = 989
			order[11] = 993
			order[12] = 992
			order[13] = 80
			order[14] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end
end

class QuoteRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("R") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(142)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 913
			order[82] = 914
			order[83] = 915
			order[84] = 918
			order[85] = 788
			order[86] = 916
			order[87] = 917
			order[88] = 919
			order[89] = 898
			order[90] = 711
			order[91] = 140
			order[92] = 303
			order[93] = 537
			order[94] = 336
			order[95] = 625
			order[96] = 229
			order[97] = 54
			order[98] = 854
			order[99] = 38
			order[100] = 152
			order[101] = 516
			order[102] = 468
			order[103] = 469
			order[104] = 110
			order[105] = 63
			order[106] = 64
			order[107] = 193
			order[108] = 192
			order[109] = 15
			order[110] = 120
			order[111] = 1445
			order[112] = 232
			order[113] = 1
			order[114] = 660
			order[115] = 581
			order[116] = 555
			order[117] = 735
			order[118] = 692
			order[119] = 40
			order[120] = 62
			order[121] = 126
			order[122] = 60
			order[123] = 218
			order[124] = 220
			order[125] = 221
			order[126] = 222
			order[127] = 662
			order[128] = 663
			order[129] = 699
			order[130] = 761
			order[131] = 423
			order[132] = 44
			order[133] = 640
			order[134] = 235
			order[135] = 236
			order[136] = 701
			order[137] = 696
			order[138] = 697
			order[139] = 698
			order[140] = 453
			order[141] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
				end
			end
		end

		class NoRateSources < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				super(1445, 1446, order)
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

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(67)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
				order[53] = 687
				order[54] = 685
				order[55] = 690
				order[56] = 587
				order[57] = 588
				order[58] = 683
				order[59] = 539
				order[60] = 676
				order[61] = 677
				order[62] = 678
				order[63] = 679
				order[64] = 680
				order[65] = 654
				order[66] = 0
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
end

class Quote < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("S") )
	end

	class NoQuoteQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 695
			order[1] = 0
			super(735, 695, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoRateSources < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			super(1445, 1446, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(72)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 685
			order[55] = 690
			order[56] = 587
			order[57] = 588
			order[58] = 683
			order[59] = 539
			order[60] = 686
			order[61] = 681
			order[62] = 684
			order[63] = 676
			order[64] = 677
			order[65] = 678
			order[66] = 679
			order[67] = 680
			order[68] = 654
			order[69] = 1067
			order[70] = 1068
			order[71] = 0
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
			order[8] = 120
			order[9] = 168
			order[10] = 126
			order[11] = 779
			order[12] = 172
			order[13] = 169
			order[14] = 170
			order[15] = 171
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
			order = Quickfix::IntArray.new(90)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 711
			order[82] = 555
			order[83] = 15
			order[84] = 537
			order[85] = 63
			order[86] = 64
			order[87] = 271
			order[88] = 1500
			order[89] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
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
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(75)
			order[0] = 269
			order[1] = 278
			order[2] = 270
			order[3] = 423
			order[4] = 235
			order[5] = 236
			order[6] = 701
			order[7] = 696
			order[8] = 697
			order[9] = 698
			order[10] = 218
			order[11] = 220
			order[12] = 221
			order[13] = 222
			order[14] = 662
			order[15] = 663
			order[16] = 699
			order[17] = 761
			order[18] = 40
			order[19] = 15
			order[20] = 120
			order[21] = 1445
			order[22] = 271
			order[23] = 1177
			order[24] = 1093
			order[25] = 272
			order[26] = 273
			order[27] = 274
			order[28] = 275
			order[29] = 336
			order[30] = 625
			order[31] = 326
			order[32] = 327
			order[33] = 276
			order[34] = 277
			order[35] = 282
			order[36] = 283
			order[37] = 284
			order[38] = 286
			order[39] = 59
			order[40] = 432
			order[41] = 126
			order[42] = 110
			order[43] = 18
			order[44] = 287
			order[45] = 37
			order[46] = 198
			order[47] = 299
			order[48] = 288
			order[49] = 289
			order[50] = 346
			order[51] = 290
			order[52] = 546
			order[53] = 811
			order[54] = 828
			order[55] = 58
			order[56] = 354
			order[57] = 355
			order[58] = 1023
			order[59] = 528
			order[60] = 1024
			order[61] = 332
			order[62] = 333
			order[63] = 1025
			order[64] = 31
			order[65] = 1020
			order[66] = 63
			order[67] = 64
			order[68] = 1070
			order[69] = 83
			order[70] = 1048
			order[71] = 1026
			order[72] = 1027
			order[73] = 453
			order[74] = 0
			super(268, 269, order)
		end

		class NoRateSources < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				super(1445, 1446, order)
			end
		end

		class NoOfSecSizes < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				super(1177, 1178, order)
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

class MarketDataIncrementalRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("X") )
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(172)
			order[0] = 279
			order[1] = 285
			order[2] = 1173
			order[3] = 264
			order[4] = 269
			order[5] = 278
			order[6] = 280
			order[7] = 1500
			order[8] = 55
			order[9] = 65
			order[10] = 48
			order[11] = 22
			order[12] = 460
			order[13] = 1227
			order[14] = 1151
			order[15] = 461
			order[16] = 167
			order[17] = 762
			order[18] = 200
			order[19] = 541
			order[20] = 1079
			order[21] = 966
			order[22] = 1049
			order[23] = 965
			order[24] = 224
			order[25] = 1449
			order[26] = 1450
			order[27] = 1451
			order[28] = 1452
			order[29] = 1457
			order[30] = 1458
			order[31] = 225
			order[32] = 239
			order[33] = 226
			order[34] = 227
			order[35] = 228
			order[36] = 255
			order[37] = 543
			order[38] = 470
			order[39] = 471
			order[40] = 472
			order[41] = 240
			order[42] = 202
			order[43] = 947
			order[44] = 967
			order[45] = 968
			order[46] = 1478
			order[47] = 1479
			order[48] = 1480
			order[49] = 1481
			order[50] = 206
			order[51] = 231
			order[52] = 1435
			order[53] = 1439
			order[54] = 969
			order[55] = 1146
			order[56] = 996
			order[57] = 1147
			order[58] = 1191
			order[59] = 1192
			order[60] = 1193
			order[61] = 1194
			order[62] = 1482
			order[63] = 1195
			order[64] = 1196
			order[65] = 1197
			order[66] = 1198
			order[67] = 1199
			order[68] = 1200
			order[69] = 201
			order[70] = 1244
			order[71] = 1242
			order[72] = 997
			order[73] = 223
			order[74] = 207
			order[75] = 970
			order[76] = 971
			order[77] = 106
			order[78] = 348
			order[79] = 349
			order[80] = 107
			order[81] = 350
			order[82] = 351
			order[83] = 691
			order[84] = 667
			order[85] = 875
			order[86] = 876
			order[87] = 873
			order[88] = 874
			order[89] = 711
			order[90] = 555
			order[91] = 291
			order[92] = 292
			order[93] = 270
			order[94] = 423
			order[95] = 235
			order[96] = 236
			order[97] = 701
			order[98] = 696
			order[99] = 697
			order[100] = 698
			order[101] = 218
			order[102] = 220
			order[103] = 221
			order[104] = 222
			order[105] = 662
			order[106] = 663
			order[107] = 699
			order[108] = 761
			order[109] = 40
			order[110] = 15
			order[111] = 120
			order[112] = 1445
			order[113] = 271
			order[114] = 1177
			order[115] = 1093
			order[116] = 272
			order[117] = 273
			order[118] = 274
			order[119] = 275
			order[120] = 336
			order[121] = 625
			order[122] = 326
			order[123] = 327
			order[124] = 276
			order[125] = 277
			order[126] = 828
			order[127] = 574
			order[128] = 282
			order[129] = 283
			order[130] = 284
			order[131] = 286
			order[132] = 59
			order[133] = 432
			order[134] = 126
			order[135] = 110
			order[136] = 18
			order[137] = 287
			order[138] = 37
			order[139] = 198
			order[140] = 299
			order[141] = 1003
			order[142] = 288
			order[143] = 289
			order[144] = 346
			order[145] = 290
			order[146] = 546
			order[147] = 811
			order[148] = 451
			order[149] = 58
			order[150] = 354
			order[151] = 355
			order[152] = 1023
			order[153] = 528
			order[154] = 1024
			order[155] = 332
			order[156] = 333
			order[157] = 1025
			order[158] = 31
			order[159] = 1020
			order[160] = 63
			order[161] = 64
			order[162] = 483
			order[163] = 60
			order[164] = 1070
			order[165] = 83
			order[166] = 1048
			order[167] = 1026
			order[168] = 1027
			order[169] = 1175
			order[170] = 453
			order[171] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
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
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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
		end

		class NoRateSources < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				super(1445, 1446, order)
			end
		end

		class NoOfSecSizes < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				super(1177, 1178, order)
			end
		end

		class NoStatsIndicators < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 1176
				order[1] = 0
				super(1175, 1176, order)
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

class MarketDataRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("Y") )
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
		end
	end

	class NoQuoteEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(93)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 913
			order[82] = 914
			order[83] = 915
			order[84] = 918
			order[85] = 788
			order[86] = 916
			order[87] = 917
			order[88] = 919
			order[89] = 898
			order[90] = 711
			order[91] = 555
			order[92] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
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
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
		end
	end

	class NoQuoteSets < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(78)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 1213
			order[12] = 241
			order[13] = 1453
			order[14] = 1454
			order[15] = 1455
			order[16] = 1456
			order[17] = 1459
			order[18] = 1460
			order[19] = 242
			order[20] = 243
			order[21] = 244
			order[22] = 245
			order[23] = 246
			order[24] = 256
			order[25] = 595
			order[26] = 592
			order[27] = 593
			order[28] = 594
			order[29] = 247
			order[30] = 316
			order[31] = 941
			order[32] = 317
			order[33] = 436
			order[34] = 1437
			order[35] = 1441
			order[36] = 998
			order[37] = 1423
			order[38] = 1424
			order[39] = 1425
			order[40] = 1000
			order[41] = 1419
			order[42] = 435
			order[43] = 308
			order[44] = 306
			order[45] = 362
			order[46] = 363
			order[47] = 307
			order[48] = 364
			order[49] = 365
			order[50] = 877
			order[51] = 878
			order[52] = 972
			order[53] = 318
			order[54] = 879
			order[55] = 975
			order[56] = 973
			order[57] = 974
			order[58] = 810
			order[59] = 882
			order[60] = 883
			order[61] = 884
			order[62] = 885
			order[63] = 886
			order[64] = 1044
			order[65] = 1045
			order[66] = 1046
			order[67] = 1038
			order[68] = 1039
			order[69] = 315
			order[70] = 367
			order[71] = 304
			order[72] = 1168
			order[73] = 1169
			order[74] = 1170
			order[75] = 893
			order[76] = 295
			order[77] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(112)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 460
				order[6] = 1227
				order[7] = 1151
				order[8] = 461
				order[9] = 167
				order[10] = 762
				order[11] = 200
				order[12] = 541
				order[13] = 1079
				order[14] = 966
				order[15] = 1049
				order[16] = 965
				order[17] = 224
				order[18] = 1449
				order[19] = 1450
				order[20] = 1451
				order[21] = 1452
				order[22] = 1457
				order[23] = 1458
				order[24] = 225
				order[25] = 239
				order[26] = 226
				order[27] = 227
				order[28] = 228
				order[29] = 255
				order[30] = 543
				order[31] = 470
				order[32] = 471
				order[33] = 472
				order[34] = 240
				order[35] = 202
				order[36] = 947
				order[37] = 967
				order[38] = 968
				order[39] = 1478
				order[40] = 1479
				order[41] = 1480
				order[42] = 1481
				order[43] = 206
				order[44] = 231
				order[45] = 1435
				order[46] = 1439
				order[47] = 969
				order[48] = 1146
				order[49] = 996
				order[50] = 1147
				order[51] = 1191
				order[52] = 1192
				order[53] = 1193
				order[54] = 1194
				order[55] = 1482
				order[56] = 1195
				order[57] = 1196
				order[58] = 1197
				order[59] = 1198
				order[60] = 1199
				order[61] = 1200
				order[62] = 201
				order[63] = 1244
				order[64] = 1242
				order[65] = 997
				order[66] = 223
				order[67] = 207
				order[68] = 970
				order[69] = 971
				order[70] = 106
				order[71] = 348
				order[72] = 349
				order[73] = 107
				order[74] = 350
				order[75] = 351
				order[76] = 691
				order[77] = 667
				order[78] = 875
				order[79] = 876
				order[80] = 873
				order[81] = 874
				order[82] = 555
				order[83] = 132
				order[84] = 133
				order[85] = 134
				order[86] = 135
				order[87] = 62
				order[88] = 188
				order[89] = 190
				order[90] = 189
				order[91] = 191
				order[92] = 631
				order[93] = 632
				order[94] = 633
				order[95] = 634
				order[96] = 60
				order[97] = 336
				order[98] = 625
				order[99] = 64
				order[100] = 40
				order[101] = 193
				order[102] = 192
				order[103] = 642
				order[104] = 643
				order[105] = 15
				order[106] = 775
				order[107] = 528
				order[108] = 529
				order[109] = 1167
				order[110] = 368
				order[111] = 0
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
					order = Quickfix::IntArray.new(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					super(864, 865, order)
				end
			end

			class NoInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					super(1018, 1019, order)
				end

				class NoInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						super(1052, 1053, order)
					end
				end
			end

			class NoComplexEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(9)
					order[0] = 1484
					order[1] = 1485
					order[2] = 1486
					order[3] = 1487
					order[4] = 1488
					order[5] = 1489
					order[6] = 1490
					order[7] = 1491
					order[8] = 0
					super(1483, 1484, order)
				end

				class NoComplexEventDates < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(4)
						order[0] = 1492
						order[1] = 1493
						order[2] = 1494
						order[3] = 0
						super(1491, 1492, order)
					end

					class NoComplexEventTimes < Quickfix::Group
						def initialize
							order = Quickfix::IntArray.new(3)
							order[0] = 1495
							order[1] = 1496
							order[2] = 0
							super(1494, 1495, order)
						end
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
					order[4] = 607
					order[5] = 608
					order[6] = 609
					order[7] = 764
					order[8] = 610
					order[9] = 611
					order[10] = 1212
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
					order[27] = 1436
					order[28] = 1440
					order[29] = 999
					order[30] = 1224
					order[31] = 1421
					order[32] = 1422
					order[33] = 1001
					order[34] = 1420
					order[35] = 615
					order[36] = 616
					order[37] = 617
					order[38] = 618
					order[39] = 619
					order[40] = 620
					order[41] = 621
					order[42] = 622
					order[43] = 623
					order[44] = 624
					order[45] = 556
					order[46] = 740
					order[47] = 739
					order[48] = 955
					order[49] = 956
					order[50] = 1358
					order[51] = 1017
					order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
		end

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
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
			order = Quickfix::IntArray.new(75)
			order[0] = 302
			order[1] = 311
			order[2] = 312
			order[3] = 309
			order[4] = 305
			order[5] = 462
			order[6] = 463
			order[7] = 310
			order[8] = 763
			order[9] = 313
			order[10] = 542
			order[11] = 1213
			order[12] = 241
			order[13] = 1453
			order[14] = 1454
			order[15] = 1455
			order[16] = 1456
			order[17] = 1459
			order[18] = 1460
			order[19] = 242
			order[20] = 243
			order[21] = 244
			order[22] = 245
			order[23] = 246
			order[24] = 256
			order[25] = 595
			order[26] = 592
			order[27] = 593
			order[28] = 594
			order[29] = 247
			order[30] = 316
			order[31] = 941
			order[32] = 317
			order[33] = 436
			order[34] = 1437
			order[35] = 1441
			order[36] = 998
			order[37] = 1423
			order[38] = 1424
			order[39] = 1425
			order[40] = 1000
			order[41] = 1419
			order[42] = 435
			order[43] = 308
			order[44] = 306
			order[45] = 362
			order[46] = 363
			order[47] = 307
			order[48] = 364
			order[49] = 365
			order[50] = 877
			order[51] = 878
			order[52] = 972
			order[53] = 318
			order[54] = 879
			order[55] = 975
			order[56] = 973
			order[57] = 974
			order[58] = 810
			order[59] = 882
			order[60] = 883
			order[61] = 884
			order[62] = 885
			order[63] = 886
			order[64] = 1044
			order[65] = 1045
			order[66] = 1046
			order[67] = 1038
			order[68] = 1039
			order[69] = 315
			order[70] = 367
			order[71] = 304
			order[72] = 893
			order[73] = 295
			order[74] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(110)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
				order[5] = 460
				order[6] = 1227
				order[7] = 1151
				order[8] = 461
				order[9] = 167
				order[10] = 762
				order[11] = 200
				order[12] = 541
				order[13] = 1079
				order[14] = 966
				order[15] = 1049
				order[16] = 965
				order[17] = 224
				order[18] = 1449
				order[19] = 1450
				order[20] = 1451
				order[21] = 1452
				order[22] = 1457
				order[23] = 1458
				order[24] = 225
				order[25] = 239
				order[26] = 226
				order[27] = 227
				order[28] = 228
				order[29] = 255
				order[30] = 543
				order[31] = 470
				order[32] = 471
				order[33] = 472
				order[34] = 240
				order[35] = 202
				order[36] = 947
				order[37] = 967
				order[38] = 968
				order[39] = 1478
				order[40] = 1479
				order[41] = 1480
				order[42] = 1481
				order[43] = 206
				order[44] = 231
				order[45] = 1435
				order[46] = 1439
				order[47] = 969
				order[48] = 1146
				order[49] = 996
				order[50] = 1147
				order[51] = 1191
				order[52] = 1192
				order[53] = 1193
				order[54] = 1194
				order[55] = 1482
				order[56] = 1195
				order[57] = 1196
				order[58] = 1197
				order[59] = 1198
				order[60] = 1199
				order[61] = 1200
				order[62] = 201
				order[63] = 1244
				order[64] = 1242
				order[65] = 997
				order[66] = 223
				order[67] = 207
				order[68] = 970
				order[69] = 971
				order[70] = 106
				order[71] = 348
				order[72] = 349
				order[73] = 107
				order[74] = 350
				order[75] = 351
				order[76] = 691
				order[77] = 667
				order[78] = 875
				order[79] = 876
				order[80] = 873
				order[81] = 874
				order[82] = 555
				order[83] = 132
				order[84] = 133
				order[85] = 134
				order[86] = 135
				order[87] = 62
				order[88] = 188
				order[89] = 190
				order[90] = 189
				order[91] = 191
				order[92] = 631
				order[93] = 632
				order[94] = 633
				order[95] = 634
				order[96] = 60
				order[97] = 336
				order[98] = 625
				order[99] = 64
				order[100] = 40
				order[101] = 193
				order[102] = 192
				order[103] = 642
				order[104] = 643
				order[105] = 15
				order[106] = 775
				order[107] = 528
				order[108] = 529
				order[109] = 0
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
					order = Quickfix::IntArray.new(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					super(864, 865, order)
				end
			end

			class NoInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					super(1018, 1019, order)
				end

				class NoInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						super(1052, 1053, order)
					end
				end
			end

			class NoComplexEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(9)
					order[0] = 1484
					order[1] = 1485
					order[2] = 1486
					order[3] = 1487
					order[4] = 1488
					order[5] = 1489
					order[6] = 1490
					order[7] = 1491
					order[8] = 0
					super(1483, 1484, order)
				end

				class NoComplexEventDates < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(4)
						order[0] = 1492
						order[1] = 1493
						order[2] = 1494
						order[3] = 0
						super(1491, 1492, order)
					end

					class NoComplexEventTimes < Quickfix::Group
						def initialize
							order = Quickfix::IntArray.new(3)
							order[0] = 1495
							order[1] = 1496
							order[2] = 0
							super(1494, 1495, order)
						end
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
					order[4] = 607
					order[5] = 608
					order[6] = 609
					order[7] = 764
					order[8] = 610
					order[9] = 611
					order[10] = 1212
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
					order[27] = 1436
					order[28] = 1440
					order[29] = 999
					order[30] = 1224
					order[31] = 1421
					order[32] = 1422
					order[33] = 1001
					order[34] = 1420
					order[35] = 615
					order[36] = 616
					order[37] = 617
					order[38] = 618
					order[39] = 619
					order[40] = 620
					order[41] = 621
					order[42] = 622
					order[43] = 623
					order[44] = 624
					order[45] = 556
					order[46] = 740
					order[47] = 739
					order[48] = 955
					order[49] = 956
					order[50] = 1358
					order[51] = 1017
					order[52] = 566
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
			order = Quickfix::IntArray.new(92)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 711
			order[82] = 140
			order[83] = 11
			order[84] = 526
			order[85] = 54
			order[86] = 44
			order[87] = 15
			order[88] = 58
			order[89] = 354
			order[90] = 355
			order[91] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
				end
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end
end

class OrderMassCancelReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("r") )
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

	class NoNotAffectedOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			super(1370, 1372, order)
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end
end

class NewOrderCross < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("s") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(44)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 453
			order[6] = 229
			order[7] = 75
			order[8] = 1
			order[9] = 660
			order[10] = 581
			order[11] = 589
			order[12] = 590
			order[13] = 591
			order[14] = 70
			order[15] = 78
			order[16] = 854
			order[17] = 38
			order[18] = 152
			order[19] = 516
			order[20] = 468
			order[21] = 469
			order[22] = 12
			order[23] = 13
			order[24] = 479
			order[25] = 497
			order[26] = 528
			order[27] = 529
			order[28] = 1091
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
			order[42] = 962
			order[43] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
		end
	end
end

class CrossOrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("t") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(44)
			order[0] = 54
			order[1] = 41
			order[2] = 11
			order[3] = 526
			order[4] = 583
			order[5] = 453
			order[6] = 229
			order[7] = 75
			order[8] = 1
			order[9] = 660
			order[10] = 581
			order[11] = 589
			order[12] = 590
			order[13] = 591
			order[14] = 70
			order[15] = 78
			order[16] = 854
			order[17] = 38
			order[18] = 152
			order[19] = 516
			order[20] = 468
			order[21] = 469
			order[22] = 12
			order[23] = 13
			order[24] = 479
			order[25] = 497
			order[26] = 528
			order[27] = 529
			order[28] = 1091
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
			order[42] = 962
			order[43] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
		end
	end

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
		end
	end
end

class CrossOrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("u") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 167
			order[1] = 762
			order[2] = 460
			order[3] = 461
			order[4] = 60
			order[5] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end
end

class SecurityList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("y") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(116)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 668
			order[82] = 869
			order[83] = 913
			order[84] = 914
			order[85] = 915
			order[86] = 918
			order[87] = 788
			order[88] = 916
			order[89] = 917
			order[90] = 919
			order[91] = 898
			order[92] = 1201
			order[93] = 711
			order[94] = 15
			order[95] = 232
			order[96] = 555
			order[97] = 218
			order[98] = 220
			order[99] = 221
			order[100] = 222
			order[101] = 662
			order[102] = 663
			order[103] = 699
			order[104] = 761
			order[105] = 235
			order[106] = 236
			order[107] = 701
			order[108] = 696
			order[109] = 697
			order[110] = 698
			order[111] = 1504
			order[112] = 58
			order[113] = 354
			order[114] = 355
			order[115] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
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

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
				order[53] = 690
				order[54] = 587
				order[55] = 683
				order[56] = 676
				order[57] = 677
				order[58] = 678
				order[59] = 679
				order[60] = 680
				order[61] = 0
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end

	class NoDerivativeSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			super(1218, 1219, order)
		end
	end

	class NoDerivativeEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			super(1286, 1287, order)
		end
	end

	class NoDerivativeInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			super(1292, 1293, order)
		end

		class NoDerivativeInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				super(1296, 1297, order)
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end

	class NoDerivativeSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			super(1218, 1219, order)
		end
	end

	class NoDerivativeEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			super(1286, 1287, order)
		end
	end

	class NoDerivativeInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			super(1292, 1293, order)
		end

		class NoDerivativeInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				super(1296, 1297, order)
			end
		end
	end

	class NoDerivativeInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1313
			order[1] = 1314
			order[2] = 0
			super(1311, 1313, order)
		end
	end

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
		end

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
			end
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(95)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 1305
			order[82] = 1221
			order[83] = 1230
			order[84] = 1240
			order[85] = 15
			order[86] = 292
			order[87] = 668
			order[88] = 869
			order[89] = 555
			order[90] = 1504
			order[91] = 58
			order[92] = 354
			order[93] = 355
			order[94] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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
				order = Quickfix::IntArray.new(54)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(71)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 1366
			order[57] = 670
			order[58] = 564
			order[59] = 565
			order[60] = 539
			order[61] = 654
			order[62] = 587
			order[63] = 588
			order[64] = 675
			order[65] = 685
			order[66] = 1379
			order[67] = 1381
			order[68] = 1383
			order[69] = 1384
			order[70] = 0
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

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
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

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(71)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 1366
			order[57] = 670
			order[58] = 564
			order[59] = 565
			order[60] = 539
			order[61] = 654
			order[62] = 587
			order[63] = 588
			order[64] = 675
			order[65] = 685
			order[66] = 1379
			order[67] = 1381
			order[68] = 1383
			order[69] = 1384
			order[70] = 0
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

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
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

	class NoStrategyParameters < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			super(957, 958, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoDates < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 75
			order[1] = 779
			order[2] = 60
			order[3] = 0
			super(580, 75, order)
		end
	end
end

class TradeCaptureReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AE") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(76)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 690
			order[55] = 990
			order[56] = 1152
			order[57] = 683
			order[58] = 564
			order[59] = 565
			order[60] = 539
			order[61] = 654
			order[62] = 587
			order[63] = 588
			order[64] = 637
			order[65] = 675
			order[66] = 1073
			order[67] = 1074
			order[68] = 1075
			order[69] = 1379
			order[70] = 1381
			order[71] = 1383
			order[72] = 1384
			order[73] = 1418
			order[74] = 1342
			order[75] = 0
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

		class NoOfLegUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(16)
				order[0] = 1330
				order[1] = 1331
				order[2] = 1332
				order[3] = 1333
				order[4] = 1344
				order[5] = 1337
				order[6] = 1338
				order[7] = 1339
				order[8] = 1345
				order[9] = 1405
				order[10] = 1340
				order[11] = 1391
				order[12] = 1343
				order[13] = 1341
				order[14] = 1392
				order[15] = 0
				super(1342, 1330, order)
			end

			class NoUnderlyingLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1335
					order[1] = 1336
					order[2] = 0
					super(1334, 1335, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(92)
			order[0] = 54
			order[1] = 1427
			order[2] = 1428
			order[3] = 1429
			order[4] = 1009
			order[5] = 1005
			order[6] = 1006
			order[7] = 1007
			order[8] = 83
			order[9] = 1008
			order[10] = 430
			order[11] = 1154
			order[12] = 1155
			order[13] = 453
			order[14] = 1
			order[15] = 660
			order[16] = 581
			order[17] = 81
			order[18] = 575
			order[19] = 576
			order[20] = 578
			order[21] = 579
			order[22] = 376
			order[23] = 377
			order[24] = 582
			order[25] = 336
			order[26] = 625
			order[27] = 943
			order[28] = 12
			order[29] = 13
			order[30] = 479
			order[31] = 497
			order[32] = 157
			order[33] = 230
			order[34] = 158
			order[35] = 159
			order[36] = 738
			order[37] = 920
			order[38] = 921
			order[39] = 922
			order[40] = 238
			order[41] = 237
			order[42] = 118
			order[43] = 119
			order[44] = 155
			order[45] = 156
			order[46] = 77
			order[47] = 58
			order[48] = 354
			order[49] = 355
			order[50] = 752
			order[51] = 518
			order[52] = 232
			order[53] = 136
			order[54] = 825
			order[55] = 826
			order[56] = 591
			order[57] = 70
			order[58] = 78
			order[59] = 1016
			order[60] = 1158
			order[61] = 1072
			order[62] = 1057
			order[63] = 1139
			order[64] = 1115
			order[65] = 1444
			order[66] = 37
			order[67] = 198
			order[68] = 11
			order[69] = 526
			order[70] = 66
			order[71] = 1080
			order[72] = 1081
			order[73] = 1431
			order[74] = 40
			order[75] = 44
			order[76] = 99
			order[77] = 18
			order[78] = 39
			order[79] = 151
			order[80] = 14
			order[81] = 59
			order[82] = 126
			order[83] = 528
			order[84] = 529
			order[85] = 775
			order[86] = 1432
			order[87] = 821
			order[88] = 1093
			order[89] = 483
			order[90] = 586
			order[91] = 0
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

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
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
				order = Quickfix::IntArray.new(11)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 756
				order[5] = 80
				order[6] = 993
				order[7] = 1002
				order[8] = 989
				order[9] = 1136
				order[10] = 0
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

		class NoSideTrdRegTS < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1012
				order[1] = 1013
				order[2] = 1014
				order[3] = 0
				super(1016, 1012, order)
			end
		end

		class NoSettlDetails < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				super(1158, 1164, order)
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

	class NoTrdRepIndicators < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1388
			order[1] = 1389
			order[2] = 0
			super(1387, 1388, order)
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end
end

class QuoteRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AG") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
			end
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(138)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 913
			order[82] = 914
			order[83] = 915
			order[84] = 918
			order[85] = 788
			order[86] = 916
			order[87] = 917
			order[88] = 919
			order[89] = 898
			order[90] = 711
			order[91] = 140
			order[92] = 303
			order[93] = 537
			order[94] = 336
			order[95] = 625
			order[96] = 229
			order[97] = 54
			order[98] = 854
			order[99] = 38
			order[100] = 152
			order[101] = 516
			order[102] = 468
			order[103] = 469
			order[104] = 63
			order[105] = 64
			order[106] = 193
			order[107] = 192
			order[108] = 15
			order[109] = 232
			order[110] = 1
			order[111] = 660
			order[112] = 581
			order[113] = 555
			order[114] = 735
			order[115] = 692
			order[116] = 40
			order[117] = 126
			order[118] = 60
			order[119] = 218
			order[120] = 220
			order[121] = 221
			order[122] = 222
			order[123] = 662
			order[124] = 663
			order[125] = 699
			order[126] = 761
			order[127] = 423
			order[128] = 44
			order[129] = 640
			order[130] = 235
			order[131] = 236
			order[132] = 701
			order[133] = 696
			order[134] = 697
			order[135] = 698
			order[136] = 453
			order[137] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
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

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(67)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
				order[53] = 687
				order[54] = 685
				order[55] = 690
				order[56] = 587
				order[57] = 588
				order[58] = 683
				order[59] = 539
				order[60] = 676
				order[61] = 677
				order[62] = 678
				order[63] = 679
				order[64] = 680
				order[65] = 654
				order[66] = 0
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
end

class RFQRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AH") )
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(89)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 711
			order[82] = 555
			order[83] = 140
			order[84] = 303
			order[85] = 537
			order[86] = 336
			order[87] = 625
			order[88] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
					end
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
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(61)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 685
			order[55] = 690
			order[56] = 587
			order[57] = 588
			order[58] = 683
			order[59] = 539
			order[60] = 0
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

	class NoQuoteQualifiers < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 695
			order[1] = 0
			super(735, 695, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(72)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 685
			order[55] = 690
			order[56] = 587
			order[57] = 588
			order[58] = 683
			order[59] = 539
			order[60] = 686
			order[61] = 681
			order[62] = 684
			order[63] = 676
			order[64] = 677
			order[65] = 678
			order[66] = 679
			order[67] = 680
			order[68] = 654
			order[69] = 1067
			order[70] = 1068
			order[71] = 0
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

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
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
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
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
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(74)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 732
			order[70] = 733
			order[71] = 1037
			order[72] = 984
			order[73] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end

		class NoUnderlyingAmounts < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 985
				order[1] = 986
				order[2] = 987
				order[3] = 988
				order[4] = 0
				super(984, 985, order)
			end
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
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
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end
end

class TradeCaptureReportAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AR") )
	end

	class NoRootPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			super(1116, 1117, order)
		end

		class NoRootPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				super(1120, 1121, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRepIndicators < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1388
			order[1] = 1389
			order[2] = 0
			super(1387, 1388, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(76)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
			order[53] = 687
			order[54] = 690
			order[55] = 990
			order[56] = 1152
			order[57] = 683
			order[58] = 564
			order[59] = 565
			order[60] = 539
			order[61] = 654
			order[62] = 587
			order[63] = 588
			order[64] = 637
			order[65] = 675
			order[66] = 1073
			order[67] = 1074
			order[68] = 1075
			order[69] = 1379
			order[70] = 1381
			order[71] = 1383
			order[72] = 1384
			order[73] = 1418
			order[74] = 1342
			order[75] = 0
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

		class NoOfLegUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(16)
				order[0] = 1330
				order[1] = 1331
				order[2] = 1332
				order[3] = 1333
				order[4] = 1344
				order[5] = 1337
				order[6] = 1338
				order[7] = 1339
				order[8] = 1345
				order[9] = 1405
				order[10] = 1340
				order[11] = 1391
				order[12] = 1343
				order[13] = 1341
				order[14] = 1392
				order[15] = 0
				super(1342, 1330, order)
			end

			class NoUnderlyingLegSecurityAltID < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1335
					order[1] = 1336
					order[2] = 0
					super(1334, 1335, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
		end
	end

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
		end
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(87)
			order[0] = 54
			order[1] = 1427
			order[2] = 1428
			order[3] = 1429
			order[4] = 453
			order[5] = 1
			order[6] = 660
			order[7] = 581
			order[8] = 81
			order[9] = 575
			order[10] = 576
			order[11] = 578
			order[12] = 579
			order[13] = 376
			order[14] = 377
			order[15] = 582
			order[16] = 336
			order[17] = 625
			order[18] = 943
			order[19] = 430
			order[20] = 1154
			order[21] = 1155
			order[22] = 12
			order[23] = 13
			order[24] = 479
			order[25] = 497
			order[26] = 157
			order[27] = 230
			order[28] = 158
			order[29] = 159
			order[30] = 738
			order[31] = 920
			order[32] = 921
			order[33] = 922
			order[34] = 238
			order[35] = 237
			order[36] = 118
			order[37] = 119
			order[38] = 155
			order[39] = 156
			order[40] = 77
			order[41] = 752
			order[42] = 518
			order[43] = 232
			order[44] = 136
			order[45] = 825
			order[46] = 1158
			order[47] = 826
			order[48] = 591
			order[49] = 70
			order[50] = 78
			order[51] = 1072
			order[52] = 1057
			order[53] = 1009
			order[54] = 1005
			order[55] = 1006
			order[56] = 1007
			order[57] = 83
			order[58] = 1008
			order[59] = 1115
			order[60] = 37
			order[61] = 198
			order[62] = 11
			order[63] = 526
			order[64] = 66
			order[65] = 1080
			order[66] = 1081
			order[67] = 1431
			order[68] = 40
			order[69] = 44
			order[70] = 99
			order[71] = 18
			order[72] = 39
			order[73] = 151
			order[74] = 14
			order[75] = 59
			order[76] = 126
			order[77] = 528
			order[78] = 529
			order[79] = 775
			order[80] = 1432
			order[81] = 821
			order[82] = 1093
			order[83] = 483
			order[84] = 586
			order[85] = 1016
			order[86] = 0
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

		class NoStipulations < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				super(232, 233, order)
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

		class NoSettlDetails < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				super(1158, 1164, order)
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

		class NoAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(11)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 756
				order[5] = 80
				order[6] = 993
				order[7] = 1002
				order[8] = 989
				order[9] = 1136
				order[10] = 0
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

		class NoSideTrdRegTS < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1012
				order[1] = 1013
				order[2] = 1014
				order[3] = 0
				super(1016, 1012, order)
			end
		end
	end
end

class AllocationReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AS") )
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
			order = Quickfix::IntArray.new(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			super(124, 32, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(41)
			order[0] = 79
			order[1] = 661
			order[2] = 573
			order[3] = 366
			order[4] = 80
			order[5] = 467
			order[6] = 81
			order[7] = 989
			order[8] = 1002
			order[9] = 993
			order[10] = 1047
			order[11] = 992
			order[12] = 539
			order[13] = 208
			order[14] = 209
			order[15] = 161
			order[16] = 360
			order[17] = 361
			order[18] = 12
			order[19] = 13
			order[20] = 479
			order[21] = 497
			order[22] = 153
			order[23] = 154
			order[24] = 119
			order[25] = 737
			order[26] = 120
			order[27] = 736
			order[28] = 155
			order[29] = 156
			order[30] = 742
			order[31] = 741
			order[32] = 136
			order[33] = 576
			order[34] = 635
			order[35] = 780
			order[36] = 172
			order[37] = 169
			order[38] = 170
			order[39] = 171
			order[40] = 0
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

	class NoRateSources < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			super(1445, 1446, order)
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
			order = Quickfix::IntArray.new(15)
			order[0] = 79
			order[1] = 661
			order[2] = 366
			order[3] = 1047
			order[4] = 467
			order[5] = 776
			order[6] = 539
			order[7] = 161
			order[8] = 360
			order[9] = 361
			order[10] = 989
			order[11] = 993
			order[12] = 992
			order[13] = 80
			order[14] = 0
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
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
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(71)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 944
			order[70] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
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

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(71)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 944
			order[70] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(71)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 944
			order[70] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
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

	class NoStipulations < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			super(232, 233, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			super(768, 769, order)
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
end

class CollateralInquiry < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BB") )
	end

	class NoCollInquiryQualifier < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 896
			order[1] = 0
			super(938, 896, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end

	class NoTrdRegTimestamps < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
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

	class NoCollInquiryQualifier < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 896
			order[1] = 0
			super(938, 896, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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

class ContraryIntentionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BO") )
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

	class NoExpiration < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 982
			order[1] = 983
			order[2] = 0
			super(981, 982, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
			end
		end
	end
end

class SecurityDefinitionUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BP") )
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(54)
			order[0] = 600
			order[1] = 601
			order[2] = 602
			order[3] = 603
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
		end

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
			end
		end
	end
end

class SecurityListUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BK") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(117)
			order[0] = 1324
			order[1] = 55
			order[2] = 65
			order[3] = 48
			order[4] = 22
			order[5] = 460
			order[6] = 1227
			order[7] = 1151
			order[8] = 461
			order[9] = 167
			order[10] = 762
			order[11] = 200
			order[12] = 541
			order[13] = 1079
			order[14] = 966
			order[15] = 1049
			order[16] = 965
			order[17] = 224
			order[18] = 1449
			order[19] = 1450
			order[20] = 1451
			order[21] = 1452
			order[22] = 1457
			order[23] = 1458
			order[24] = 225
			order[25] = 239
			order[26] = 226
			order[27] = 227
			order[28] = 228
			order[29] = 255
			order[30] = 543
			order[31] = 470
			order[32] = 471
			order[33] = 472
			order[34] = 240
			order[35] = 202
			order[36] = 947
			order[37] = 967
			order[38] = 968
			order[39] = 1478
			order[40] = 1479
			order[41] = 1480
			order[42] = 1481
			order[43] = 206
			order[44] = 231
			order[45] = 1435
			order[46] = 1439
			order[47] = 969
			order[48] = 1146
			order[49] = 996
			order[50] = 1147
			order[51] = 1191
			order[52] = 1192
			order[53] = 1193
			order[54] = 1194
			order[55] = 1482
			order[56] = 1195
			order[57] = 1196
			order[58] = 1197
			order[59] = 1198
			order[60] = 1199
			order[61] = 1200
			order[62] = 201
			order[63] = 1244
			order[64] = 1242
			order[65] = 997
			order[66] = 223
			order[67] = 207
			order[68] = 970
			order[69] = 971
			order[70] = 106
			order[71] = 348
			order[72] = 349
			order[73] = 107
			order[74] = 350
			order[75] = 351
			order[76] = 691
			order[77] = 667
			order[78] = 875
			order[79] = 876
			order[80] = 873
			order[81] = 874
			order[82] = 668
			order[83] = 869
			order[84] = 913
			order[85] = 914
			order[86] = 915
			order[87] = 918
			order[88] = 788
			order[89] = 916
			order[90] = 917
			order[91] = 919
			order[92] = 898
			order[93] = 1201
			order[94] = 711
			order[95] = 15
			order[96] = 232
			order[97] = 555
			order[98] = 218
			order[99] = 220
			order[100] = 221
			order[101] = 222
			order[102] = 662
			order[103] = 663
			order[104] = 699
			order[105] = 761
			order[106] = 235
			order[107] = 236
			order[108] = 701
			order[109] = 696
			order[110] = 697
			order[111] = 698
			order[112] = 1504
			order[113] = 58
			order[114] = 354
			order[115] = 355
			order[116] = 0
			super(146, 1324, order)
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
			end
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(70)
				order[0] = 311
				order[1] = 312
				order[2] = 309
				order[3] = 305
				order[4] = 462
				order[5] = 463
				order[6] = 310
				order[7] = 763
				order[8] = 313
				order[9] = 542
				order[10] = 1213
				order[11] = 241
				order[12] = 1453
				order[13] = 1454
				order[14] = 1455
				order[15] = 1456
				order[16] = 1459
				order[17] = 1460
				order[18] = 242
				order[19] = 243
				order[20] = 244
				order[21] = 245
				order[22] = 246
				order[23] = 256
				order[24] = 595
				order[25] = 592
				order[26] = 593
				order[27] = 594
				order[28] = 247
				order[29] = 316
				order[30] = 941
				order[31] = 317
				order[32] = 436
				order[33] = 1437
				order[34] = 1441
				order[35] = 998
				order[36] = 1423
				order[37] = 1424
				order[38] = 1425
				order[39] = 1000
				order[40] = 1419
				order[41] = 435
				order[42] = 308
				order[43] = 306
				order[44] = 362
				order[45] = 363
				order[46] = 307
				order[47] = 364
				order[48] = 365
				order[49] = 877
				order[50] = 878
				order[51] = 972
				order[52] = 318
				order[53] = 879
				order[54] = 975
				order[55] = 973
				order[56] = 974
				order[57] = 810
				order[58] = 882
				order[59] = 883
				order[60] = 884
				order[61] = 885
				order[62] = 886
				order[63] = 1044
				order[64] = 1045
				order[65] = 1046
				order[66] = 1038
				order[67] = 1039
				order[68] = 315
				order[69] = 0
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

			class NoUnderlyingStips < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					super(887, 888, order)
				end
			end

			class NoUndlyInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					super(1058, 1059, order)
				end

				class NoUndlyInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						super(1062, 1063, order)
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

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
				order[53] = 690
				order[54] = 587
				order[55] = 683
				order[56] = 676
				order[57] = 677
				order[58] = 678
				order[59] = 679
				order[60] = 680
				order[61] = 0
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

class AdjustedPositionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BL") )
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

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(82)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 1227
			order[6] = 1151
			order[7] = 461
			order[8] = 167
			order[9] = 762
			order[10] = 200
			order[11] = 541
			order[12] = 1079
			order[13] = 966
			order[14] = 1049
			order[15] = 965
			order[16] = 224
			order[17] = 1449
			order[18] = 1450
			order[19] = 1451
			order[20] = 1452
			order[21] = 1457
			order[22] = 1458
			order[23] = 225
			order[24] = 239
			order[25] = 226
			order[26] = 227
			order[27] = 228
			order[28] = 255
			order[29] = 543
			order[30] = 470
			order[31] = 471
			order[32] = 472
			order[33] = 240
			order[34] = 202
			order[35] = 947
			order[36] = 967
			order[37] = 968
			order[38] = 1478
			order[39] = 1479
			order[40] = 1480
			order[41] = 1481
			order[42] = 206
			order[43] = 231
			order[44] = 1435
			order[45] = 1439
			order[46] = 969
			order[47] = 1146
			order[48] = 996
			order[49] = 1147
			order[50] = 1191
			order[51] = 1192
			order[52] = 1193
			order[53] = 1194
			order[54] = 1482
			order[55] = 1195
			order[56] = 1196
			order[57] = 1197
			order[58] = 1198
			order[59] = 1199
			order[60] = 1200
			order[61] = 201
			order[62] = 1244
			order[63] = 1242
			order[64] = 997
			order[65] = 223
			order[66] = 207
			order[67] = 970
			order[68] = 971
			order[69] = 106
			order[70] = 348
			order[71] = 349
			order[72] = 107
			order[73] = 350
			order[74] = 351
			order[75] = 691
			order[76] = 667
			order[77] = 875
			order[78] = 876
			order[79] = 873
			order[80] = 874
			order[81] = 0
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
			end
		end
	end
end

class AllocationInstructionAlert < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BM") )
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
			order = Quickfix::IntArray.new(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			super(124, 32, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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

	class NoPosAmt < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			super(753, 707, order)
		end
	end

	class NoAllocs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(41)
			order[0] = 79
			order[1] = 661
			order[2] = 573
			order[3] = 366
			order[4] = 80
			order[5] = 467
			order[6] = 81
			order[7] = 989
			order[8] = 1002
			order[9] = 993
			order[10] = 1047
			order[11] = 992
			order[12] = 539
			order[13] = 208
			order[14] = 209
			order[15] = 161
			order[16] = 360
			order[17] = 361
			order[18] = 12
			order[19] = 13
			order[20] = 479
			order[21] = 497
			order[22] = 153
			order[23] = 154
			order[24] = 119
			order[25] = 737
			order[26] = 120
			order[27] = 736
			order[28] = 155
			order[29] = 156
			order[30] = 742
			order[31] = 741
			order[32] = 136
			order[33] = 576
			order[34] = 635
			order[35] = 780
			order[36] = 172
			order[37] = 169
			order[38] = 170
			order[39] = 171
			order[40] = 0
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

class ExecutionAcknowledgement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BN") )
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
			order[0] = 311
			order[1] = 312
			order[2] = 309
			order[3] = 305
			order[4] = 462
			order[5] = 463
			order[6] = 310
			order[7] = 763
			order[8] = 313
			order[9] = 542
			order[10] = 1213
			order[11] = 241
			order[12] = 1453
			order[13] = 1454
			order[14] = 1455
			order[15] = 1456
			order[16] = 1459
			order[17] = 1460
			order[18] = 242
			order[19] = 243
			order[20] = 244
			order[21] = 245
			order[22] = 246
			order[23] = 256
			order[24] = 595
			order[25] = 592
			order[26] = 593
			order[27] = 594
			order[28] = 247
			order[29] = 316
			order[30] = 941
			order[31] = 317
			order[32] = 436
			order[33] = 1437
			order[34] = 1441
			order[35] = 998
			order[36] = 1423
			order[37] = 1424
			order[38] = 1425
			order[39] = 1000
			order[40] = 1419
			order[41] = 435
			order[42] = 308
			order[43] = 306
			order[44] = 362
			order[45] = 363
			order[46] = 307
			order[47] = 364
			order[48] = 365
			order[49] = 877
			order[50] = 878
			order[51] = 972
			order[52] = 318
			order[53] = 879
			order[54] = 975
			order[55] = 973
			order[56] = 974
			order[57] = 810
			order[58] = 882
			order[59] = 883
			order[60] = 884
			order[61] = 885
			order[62] = 886
			order[63] = 1044
			order[64] = 1045
			order[65] = 1046
			order[66] = 1038
			order[67] = 1039
			order[68] = 315
			order[69] = 0
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

		class NoUnderlyingStips < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				super(887, 888, order)
			end
		end

		class NoUndlyInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				super(1058, 1059, order)
			end

			class NoUndlyInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					super(1062, 1063, order)
				end
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
			order[4] = 607
			order[5] = 608
			order[6] = 609
			order[7] = 764
			order[8] = 610
			order[9] = 611
			order[10] = 1212
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
			order[27] = 1436
			order[28] = 1440
			order[29] = 999
			order[30] = 1224
			order[31] = 1421
			order[32] = 1422
			order[33] = 1001
			order[34] = 1420
			order[35] = 615
			order[36] = 616
			order[37] = 617
			order[38] = 618
			order[39] = 619
			order[40] = 620
			order[41] = 621
			order[42] = 622
			order[43] = 623
			order[44] = 624
			order[45] = 556
			order[46] = 740
			order[47] = 739
			order[48] = 955
			order[49] = 956
			order[50] = 1358
			order[51] = 1017
			order[52] = 566
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
	end
end

class TradingSessionList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BJ") )
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(23)
			order[0] = 336
			order[1] = 625
			order[2] = 1327
			order[3] = 207
			order[4] = 1301
			order[5] = 1300
			order[6] = 1326
			order[7] = 338
			order[8] = 339
			order[9] = 325
			order[10] = 340
			order[11] = 567
			order[12] = 341
			order[13] = 342
			order[14] = 343
			order[15] = 344
			order[16] = 345
			order[17] = 387
			order[18] = 60
			order[19] = 58
			order[20] = 354
			order[21] = 355
			order[22] = 0
			super(386, 336, order)
		end

		class NoOrdTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 40
				order[1] = 0
				super(1237, 40, order)
			end
		end

		class NoTimeInForceRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 59
				order[1] = 0
				super(1239, 59, order)
			end
		end

		class NoExecInstRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 1308
				order[1] = 0
				super(1232, 1308, order)
			end
		end

		class NoMatchRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1142
				order[1] = 574
				order[2] = 0
				super(1235, 1142, order)
			end
		end

		class NoMDFeedTypes < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1022
				order[1] = 264
				order[2] = 1021
				order[3] = 0
				super(1141, 1022, order)
			end
		end
	end
end

class TradingSessionListRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BI") )
	end
end

class SettlementObligationReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BQ") )
	end

	class NoSettlOblig < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(97)
			order[0] = 430
			order[1] = 1161
			order[2] = 1162
			order[3] = 1163
			order[4] = 1157
			order[5] = 119
			order[6] = 15
			order[7] = 120
			order[8] = 155
			order[9] = 64
			order[10] = 55
			order[11] = 65
			order[12] = 48
			order[13] = 22
			order[14] = 460
			order[15] = 1227
			order[16] = 1151
			order[17] = 461
			order[18] = 167
			order[19] = 762
			order[20] = 200
			order[21] = 541
			order[22] = 1079
			order[23] = 966
			order[24] = 1049
			order[25] = 965
			order[26] = 224
			order[27] = 1449
			order[28] = 1450
			order[29] = 1451
			order[30] = 1452
			order[31] = 1457
			order[32] = 1458
			order[33] = 225
			order[34] = 239
			order[35] = 226
			order[36] = 227
			order[37] = 228
			order[38] = 255
			order[39] = 543
			order[40] = 470
			order[41] = 471
			order[42] = 472
			order[43] = 240
			order[44] = 202
			order[45] = 947
			order[46] = 967
			order[47] = 968
			order[48] = 1478
			order[49] = 1479
			order[50] = 1480
			order[51] = 1481
			order[52] = 206
			order[53] = 231
			order[54] = 1435
			order[55] = 1439
			order[56] = 969
			order[57] = 1146
			order[58] = 996
			order[59] = 1147
			order[60] = 1191
			order[61] = 1192
			order[62] = 1193
			order[63] = 1194
			order[64] = 1482
			order[65] = 1195
			order[66] = 1196
			order[67] = 1197
			order[68] = 1198
			order[69] = 1199
			order[70] = 1200
			order[71] = 201
			order[72] = 1244
			order[73] = 1242
			order[74] = 997
			order[75] = 223
			order[76] = 207
			order[77] = 970
			order[78] = 971
			order[79] = 106
			order[80] = 348
			order[81] = 349
			order[82] = 107
			order[83] = 350
			order[84] = 351
			order[85] = 691
			order[86] = 667
			order[87] = 875
			order[88] = 876
			order[89] = 873
			order[90] = 874
			order[91] = 453
			order[92] = 168
			order[93] = 126
			order[94] = 779
			order[95] = 1158
			order[96] = 0
			super(1165, 430, order)
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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

		class NoSettlDetails < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				super(1158, 1164, order)
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

class DerivativeSecurityListUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BR") )
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end

	class NoDerivativeSecurityAltID < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			super(1218, 1219, order)
		end
	end

	class NoDerivativeEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			super(1286, 1287, order)
		end
	end

	class NoDerivativeInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			super(1292, 1293, order)
		end

		class NoDerivativeInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				super(1296, 1297, order)
			end
		end
	end

	class NoDerivativeInstrAttrib < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1313
			order[1] = 1314
			order[2] = 0
			super(1311, 1313, order)
		end
	end

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
		end

		class NoTickRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				super(1205, 1206, order)
			end
		end

		class NoLotTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				super(1234, 1093, order)
			end
		end

		class NoTradingSessionRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				super(1309, 336, order)
			end

			class NoOrdTypeRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 40
					order[1] = 0
					super(1237, 40, order)
				end
			end

			class NoTimeInForceRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 59
					order[1] = 0
					super(1239, 59, order)
				end
			end

			class NoExecInstRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(2)
					order[0] = 1308
					order[1] = 0
					super(1232, 1308, order)
				end
			end

			class NoMatchRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					super(1235, 1142, order)
				end
			end

			class NoMDFeedTypes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					super(1141, 1022, order)
				end
			end
		end

		class NoNestedInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				super(1312, 1210, order)
			end
		end

		class NoStrikeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				super(1201, 1223, order)
			end

			class NoMaturityRules < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					super(1236, 1222, order)
				end
			end
		end
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(96)
			order[0] = 1324
			order[1] = 292
			order[2] = 55
			order[3] = 65
			order[4] = 48
			order[5] = 22
			order[6] = 460
			order[7] = 1227
			order[8] = 1151
			order[9] = 461
			order[10] = 167
			order[11] = 762
			order[12] = 200
			order[13] = 541
			order[14] = 1079
			order[15] = 966
			order[16] = 1049
			order[17] = 965
			order[18] = 224
			order[19] = 1449
			order[20] = 1450
			order[21] = 1451
			order[22] = 1452
			order[23] = 1457
			order[24] = 1458
			order[25] = 225
			order[26] = 239
			order[27] = 226
			order[28] = 227
			order[29] = 228
			order[30] = 255
			order[31] = 543
			order[32] = 470
			order[33] = 471
			order[34] = 472
			order[35] = 240
			order[36] = 202
			order[37] = 947
			order[38] = 967
			order[39] = 968
			order[40] = 1478
			order[41] = 1479
			order[42] = 1480
			order[43] = 1481
			order[44] = 206
			order[45] = 231
			order[46] = 1435
			order[47] = 1439
			order[48] = 969
			order[49] = 1146
			order[50] = 996
			order[51] = 1147
			order[52] = 1191
			order[53] = 1192
			order[54] = 1193
			order[55] = 1194
			order[56] = 1482
			order[57] = 1195
			order[58] = 1196
			order[59] = 1197
			order[60] = 1198
			order[61] = 1199
			order[62] = 1200
			order[63] = 201
			order[64] = 1244
			order[65] = 1242
			order[66] = 997
			order[67] = 223
			order[68] = 207
			order[69] = 970
			order[70] = 971
			order[71] = 106
			order[72] = 348
			order[73] = 349
			order[74] = 107
			order[75] = 350
			order[76] = 351
			order[77] = 691
			order[78] = 667
			order[79] = 875
			order[80] = 876
			order[81] = 873
			order[82] = 874
			order[83] = 668
			order[84] = 869
			order[85] = 1305
			order[86] = 1221
			order[87] = 1230
			order[88] = 1240
			order[89] = 15
			order[90] = 555
			order[91] = 1504
			order[92] = 58
			order[93] = 354
			order[94] = 355
			order[95] = 0
			super(146, 1324, order)
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
				order = Quickfix::IntArray.new(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				super(864, 865, order)
			end
		end

		class NoInstrumentParties < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				super(1018, 1019, order)
			end

			class NoInstrumentPartySubIDs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					super(1052, 1053, order)
				end
			end
		end

		class NoComplexEvents < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(9)
				order[0] = 1484
				order[1] = 1485
				order[2] = 1486
				order[3] = 1487
				order[4] = 1488
				order[5] = 1489
				order[6] = 1490
				order[7] = 1491
				order[8] = 0
				super(1483, 1484, order)
			end

			class NoComplexEventDates < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(4)
					order[0] = 1492
					order[1] = 1493
					order[2] = 1494
					order[3] = 0
					super(1491, 1492, order)
				end

				class NoComplexEventTimes < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1495
						order[1] = 1496
						order[2] = 0
						super(1494, 1495, order)
					end
				end
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
				order = Quickfix::IntArray.new(54)
				order[0] = 600
				order[1] = 601
				order[2] = 602
				order[3] = 603
				order[4] = 607
				order[5] = 608
				order[6] = 609
				order[7] = 764
				order[8] = 610
				order[9] = 611
				order[10] = 1212
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
				order[27] = 1436
				order[28] = 1440
				order[29] = 999
				order[30] = 1224
				order[31] = 1421
				order[32] = 1422
				order[33] = 1001
				order[34] = 1420
				order[35] = 615
				order[36] = 616
				order[37] = 617
				order[38] = 618
				order[39] = 619
				order[40] = 620
				order[41] = 621
				order[42] = 622
				order[43] = 623
				order[44] = 624
				order[45] = 556
				order[46] = 740
				order[47] = 739
				order[48] = 955
				order[49] = 956
				order[50] = 1358
				order[51] = 1017
				order[52] = 566
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
		end
	end
end

class TradingSessionListUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BS") )
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(23)
			order[0] = 336
			order[1] = 625
			order[2] = 1327
			order[3] = 207
			order[4] = 1301
			order[5] = 1300
			order[6] = 1326
			order[7] = 338
			order[8] = 339
			order[9] = 325
			order[10] = 340
			order[11] = 567
			order[12] = 341
			order[13] = 342
			order[14] = 343
			order[15] = 344
			order[16] = 345
			order[17] = 387
			order[18] = 60
			order[19] = 58
			order[20] = 354
			order[21] = 355
			order[22] = 0
			super(386, 336, order)
		end

		class NoOrdTypeRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 40
				order[1] = 0
				super(1237, 40, order)
			end
		end

		class NoTimeInForceRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 59
				order[1] = 0
				super(1239, 59, order)
			end
		end

		class NoExecInstRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(2)
				order[0] = 1308
				order[1] = 0
				super(1232, 1308, order)
			end
		end

		class NoMatchRules < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1142
				order[1] = 574
				order[2] = 0
				super(1235, 1142, order)
			end
		end

		class NoMDFeedTypes < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1022
				order[1] = 264
				order[2] = 1021
				order[3] = 0
				super(1141, 1022, order)
			end
		end
	end
end

class MarketDefinitionRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BT") )
	end
end

class MarketDefinition < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BU") )
	end

	class NoTickRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1206
			order[1] = 1207
			order[2] = 1208
			order[3] = 1209
			order[4] = 0
			super(1205, 1206, order)
		end
	end

	class NoLotTypeRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1093
			order[1] = 1231
			order[2] = 0
			super(1234, 1093, order)
		end
	end

	class NoOrdTypeRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 40
			order[1] = 0
			super(1237, 40, order)
		end
	end

	class NoTimeInForceRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 59
			order[1] = 0
			super(1239, 59, order)
		end
	end

	class NoExecInstRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 1308
			order[1] = 0
			super(1232, 1308, order)
		end
	end
end

class MarketDefinitionUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BV") )
	end

	class NoTickRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1206
			order[1] = 1207
			order[2] = 1208
			order[3] = 1209
			order[4] = 0
			super(1205, 1206, order)
		end
	end

	class NoLotTypeRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1093
			order[1] = 1231
			order[2] = 0
			super(1234, 1093, order)
		end
	end

	class NoOrdTypeRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 40
			order[1] = 0
			super(1237, 40, order)
		end
	end

	class NoTimeInForceRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 59
			order[1] = 0
			super(1239, 59, order)
		end
	end

	class NoExecInstRules < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 1308
			order[1] = 0
			super(1232, 1308, order)
		end
	end
end

class UserNotification < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CB") )
	end

	class NoUsernames < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 553
			order[1] = 0
			super(809, 553, order)
		end
	end
end

class OrderMassActionReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BZ") )
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

	class NoNotAffectedOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			super(1370, 1372, order)
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end
end

class OrderMassActionRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CA") )
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

	class NoTargetPartyIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			super(1461, 1462, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			super(864, 865, order)
		end
	end

	class NoInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			super(1018, 1019, order)
		end

		class NoInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				super(1052, 1053, order)
			end
		end
	end

	class NoComplexEvents < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(9)
			order[0] = 1484
			order[1] = 1485
			order[2] = 1486
			order[3] = 1487
			order[4] = 1488
			order[5] = 1489
			order[6] = 1490
			order[7] = 1491
			order[8] = 0
			super(1483, 1484, order)
		end

		class NoComplexEventDates < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(4)
				order[0] = 1492
				order[1] = 1493
				order[2] = 1494
				order[3] = 0
				super(1491, 1492, order)
			end

			class NoComplexEventTimes < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(3)
					order[0] = 1495
					order[1] = 1496
					order[2] = 0
					super(1494, 1495, order)
				end
			end
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

	class NoUnderlyingStips < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			super(887, 888, order)
		end
	end

	class NoUndlyInstrumentParties < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			super(1058, 1059, order)
		end

		class NoUndlyInstrumentPartySubIDs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				super(1062, 1063, order)
			end
		end
	end
end

class ApplicationMessageRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BW") )
	end

	class NoApplIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(6)
			order[0] = 1355
			order[1] = 1433
			order[2] = 1182
			order[3] = 1183
			order[4] = 539
			order[5] = 0
			super(1351, 1355, order)
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

class ApplicationMessageRequestAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BX") )
	end

	class NoApplIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(8)
			order[0] = 1355
			order[1] = 1433
			order[2] = 1182
			order[3] = 1183
			order[4] = 1357
			order[5] = 1354
			order[6] = 539
			order[7] = 0
			super(1351, 1355, order)
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

class ApplicationMessageReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BY") )
	end

	class NoApplIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1355
			order[1] = 1399
			order[2] = 1357
			order[3] = 0
			super(1351, 1355, order)
		end
	end
end

class StreamAssignmentRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CC") )
	end

	class NoAsgnReqs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 453
			order[1] = 146
			order[2] = 0
			super(1499, 453, order)
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

		class NoRelatedSym < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(85)
				order[0] = 55
				order[1] = 65
				order[2] = 48
				order[3] = 22
				order[4] = 460
				order[5] = 1227
				order[6] = 1151
				order[7] = 461
				order[8] = 167
				order[9] = 762
				order[10] = 200
				order[11] = 541
				order[12] = 1079
				order[13] = 966
				order[14] = 1049
				order[15] = 965
				order[16] = 224
				order[17] = 1449
				order[18] = 1450
				order[19] = 1451
				order[20] = 1452
				order[21] = 1457
				order[22] = 1458
				order[23] = 225
				order[24] = 239
				order[25] = 226
				order[26] = 227
				order[27] = 228
				order[28] = 255
				order[29] = 543
				order[30] = 470
				order[31] = 471
				order[32] = 472
				order[33] = 240
				order[34] = 202
				order[35] = 947
				order[36] = 967
				order[37] = 968
				order[38] = 1478
				order[39] = 1479
				order[40] = 1480
				order[41] = 1481
				order[42] = 206
				order[43] = 231
				order[44] = 1435
				order[45] = 1439
				order[46] = 969
				order[47] = 1146
				order[48] = 996
				order[49] = 1147
				order[50] = 1191
				order[51] = 1192
				order[52] = 1193
				order[53] = 1194
				order[54] = 1482
				order[55] = 1195
				order[56] = 1196
				order[57] = 1197
				order[58] = 1198
				order[59] = 1199
				order[60] = 1200
				order[61] = 201
				order[62] = 1244
				order[63] = 1242
				order[64] = 997
				order[65] = 223
				order[66] = 207
				order[67] = 970
				order[68] = 971
				order[69] = 106
				order[70] = 348
				order[71] = 349
				order[72] = 107
				order[73] = 350
				order[74] = 351
				order[75] = 691
				order[76] = 667
				order[77] = 875
				order[78] = 876
				order[79] = 873
				order[80] = 874
				order[81] = 63
				order[82] = 271
				order[83] = 1500
				order[84] = 0
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
					order = Quickfix::IntArray.new(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					super(864, 865, order)
				end
			end

			class NoInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					super(1018, 1019, order)
				end

				class NoInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						super(1052, 1053, order)
					end
				end
			end

			class NoComplexEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(9)
					order[0] = 1484
					order[1] = 1485
					order[2] = 1486
					order[3] = 1487
					order[4] = 1488
					order[5] = 1489
					order[6] = 1490
					order[7] = 1491
					order[8] = 0
					super(1483, 1484, order)
				end

				class NoComplexEventDates < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(4)
						order[0] = 1492
						order[1] = 1493
						order[2] = 1494
						order[3] = 0
						super(1491, 1492, order)
					end

					class NoComplexEventTimes < Quickfix::Group
						def initialize
							order = Quickfix::IntArray.new(3)
							order[0] = 1495
							order[1] = 1496
							order[2] = 0
							super(1494, 1495, order)
						end
					end
				end
			end
		end
	end
end

class StreamAssignmentReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CD") )
	end

	class NoAsgnReqs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 453
			order[1] = 146
			order[2] = 0
			super(1499, 453, order)
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

		class NoRelatedSym < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(89)
				order[0] = 55
				order[1] = 65
				order[2] = 48
				order[3] = 22
				order[4] = 460
				order[5] = 1227
				order[6] = 1151
				order[7] = 461
				order[8] = 167
				order[9] = 762
				order[10] = 200
				order[11] = 541
				order[12] = 1079
				order[13] = 966
				order[14] = 1049
				order[15] = 965
				order[16] = 224
				order[17] = 1449
				order[18] = 1450
				order[19] = 1451
				order[20] = 1452
				order[21] = 1457
				order[22] = 1458
				order[23] = 225
				order[24] = 239
				order[25] = 226
				order[26] = 227
				order[27] = 228
				order[28] = 255
				order[29] = 543
				order[30] = 470
				order[31] = 471
				order[32] = 472
				order[33] = 240
				order[34] = 202
				order[35] = 947
				order[36] = 967
				order[37] = 968
				order[38] = 1478
				order[39] = 1479
				order[40] = 1480
				order[41] = 1481
				order[42] = 206
				order[43] = 231
				order[44] = 1435
				order[45] = 1439
				order[46] = 969
				order[47] = 1146
				order[48] = 996
				order[49] = 1147
				order[50] = 1191
				order[51] = 1192
				order[52] = 1193
				order[53] = 1194
				order[54] = 1482
				order[55] = 1195
				order[56] = 1196
				order[57] = 1197
				order[58] = 1198
				order[59] = 1199
				order[60] = 1200
				order[61] = 201
				order[62] = 1244
				order[63] = 1242
				order[64] = 997
				order[65] = 223
				order[66] = 207
				order[67] = 970
				order[68] = 971
				order[69] = 106
				order[70] = 348
				order[71] = 349
				order[72] = 107
				order[73] = 350
				order[74] = 351
				order[75] = 691
				order[76] = 667
				order[77] = 875
				order[78] = 876
				order[79] = 873
				order[80] = 874
				order[81] = 63
				order[82] = 1617
				order[83] = 1500
				order[84] = 1502
				order[85] = 58
				order[86] = 354
				order[87] = 355
				order[88] = 0
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
					order = Quickfix::IntArray.new(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					super(864, 865, order)
				end
			end

			class NoInstrumentParties < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					super(1018, 1019, order)
				end

				class NoInstrumentPartySubIDs < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						super(1052, 1053, order)
					end
				end
			end

			class NoComplexEvents < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(9)
					order[0] = 1484
					order[1] = 1485
					order[2] = 1486
					order[3] = 1487
					order[4] = 1488
					order[5] = 1489
					order[6] = 1490
					order[7] = 1491
					order[8] = 0
					super(1483, 1484, order)
				end

				class NoComplexEventDates < Quickfix::Group
					def initialize
						order = Quickfix::IntArray.new(4)
						order[0] = 1492
						order[1] = 1493
						order[2] = 1494
						order[3] = 0
						super(1491, 1492, order)
					end

					class NoComplexEventTimes < Quickfix::Group
						def initialize
							order = Quickfix::IntArray.new(3)
							order[0] = 1495
							order[1] = 1496
							order[2] = 0
							super(1494, 1495, order)
						end
					end
				end
			end
		end
	end
end

class StreamAssignmentReportACK < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CE") )
	end
end
end
