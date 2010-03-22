require 'quickfix'
module Quickfix50
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIXT.1.1") )
	end
end

class IOI < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("6") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 682
			order[52] = 683
			order[53] = 0
			super(555, 600, order)
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

class Advertisement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("7") )
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(74)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 683
			order[54] = 564
			order[55] = 565
			order[56] = 654
			order[57] = 587
			order[58] = 588
			order[59] = 637
			order[60] = 685
			order[61] = 675
			order[62] = 1073
			order[63] = 1074
			order[64] = 1075
			order[65] = 948
			order[66] = 1366
			order[67] = 670
			order[68] = 1379
			order[69] = 1381
			order[70] = 1383
			order[71] = 1384
			order[72] = 1418
			order[73] = 0
			super(555, 600, order)
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

		class NoLegAllocs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(7)
				order[0] = 671
				order[1] = 672
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoFills < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(5)
			order[0] = 1363
			order[1] = 1364
			order[2] = 1365
			order[3] = 1414
			order[4] = 0
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
			order = Quickfix::IntArray.new(69)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 0
			super(146, 55, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(69)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 0
			super(146, 55, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(209)
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
			order[31] = 460
			order[32] = 461
			order[33] = 167
			order[34] = 762
			order[35] = 200
			order[36] = 541
			order[37] = 224
			order[38] = 225
			order[39] = 239
			order[40] = 226
			order[41] = 227
			order[42] = 228
			order[43] = 255
			order[44] = 543
			order[45] = 470
			order[46] = 471
			order[47] = 472
			order[48] = 240
			order[49] = 202
			order[50] = 947
			order[51] = 206
			order[52] = 231
			order[53] = 223
			order[54] = 207
			order[55] = 106
			order[56] = 348
			order[57] = 349
			order[58] = 107
			order[59] = 350
			order[60] = 351
			order[61] = 691
			order[62] = 667
			order[63] = 875
			order[64] = 876
			order[65] = 873
			order[66] = 874
			order[67] = 965
			order[68] = 966
			order[69] = 1049
			order[70] = 967
			order[71] = 968
			order[72] = 969
			order[73] = 970
			order[74] = 971
			order[75] = 996
			order[76] = 997
			order[77] = 1079
			order[78] = 1151
			order[79] = 1146
			order[80] = 1147
			order[81] = 1227
			order[82] = 1191
			order[83] = 1192
			order[84] = 1193
			order[85] = 1194
			order[86] = 1195
			order[87] = 1196
			order[88] = 1198
			order[89] = 1199
			order[90] = 1200
			order[91] = 201
			order[92] = 1244
			order[93] = 1242
			order[94] = 1197
			order[95] = 711
			order[96] = 140
			order[97] = 54
			order[98] = 401
			order[99] = 114
			order[100] = 60
			order[101] = 232
			order[102] = 854
			order[103] = 38
			order[104] = 152
			order[105] = 516
			order[106] = 468
			order[107] = 469
			order[108] = 40
			order[109] = 423
			order[110] = 44
			order[111] = 99
			order[112] = 218
			order[113] = 220
			order[114] = 221
			order[115] = 222
			order[116] = 662
			order[117] = 663
			order[118] = 699
			order[119] = 761
			order[120] = 235
			order[121] = 236
			order[122] = 701
			order[123] = 696
			order[124] = 697
			order[125] = 698
			order[126] = 15
			order[127] = 376
			order[128] = 377
			order[129] = 23
			order[130] = 117
			order[131] = 59
			order[132] = 168
			order[133] = 432
			order[134] = 126
			order[135] = 427
			order[136] = 12
			order[137] = 13
			order[138] = 479
			order[139] = 497
			order[140] = 528
			order[141] = 529
			order[142] = 582
			order[143] = 121
			order[144] = 120
			order[145] = 775
			order[146] = 58
			order[147] = 354
			order[148] = 355
			order[149] = 193
			order[150] = 192
			order[151] = 640
			order[152] = 77
			order[153] = 203
			order[154] = 210
			order[155] = 211
			order[156] = 835
			order[157] = 836
			order[158] = 837
			order[159] = 838
			order[160] = 840
			order[161] = 1094
			order[162] = 1096
			order[163] = 1097
			order[164] = 1098
			order[165] = 1099
			order[166] = 388
			order[167] = 389
			order[168] = 841
			order[169] = 842
			order[170] = 843
			order[171] = 844
			order[172] = 846
			order[173] = 847
			order[174] = 848
			order[175] = 849
			order[176] = 494
			order[177] = 957
			order[178] = 1089
			order[179] = 1090
			order[180] = 1082
			order[181] = 1083
			order[182] = 1084
			order[183] = 1085
			order[184] = 1086
			order[185] = 1087
			order[186] = 1088
			order[187] = 1138
			order[188] = 1092
			order[189] = 1100
			order[190] = 1101
			order[191] = 1102
			order[192] = 1103
			order[193] = 1104
			order[194] = 1105
			order[195] = 1106
			order[196] = 1107
			order[197] = 1108
			order[198] = 1109
			order[199] = 1110
			order[200] = 1111
			order[201] = 1112
			order[202] = 1113
			order[203] = 1114
			order[204] = 1080
			order[205] = 1081
			order[206] = 1091
			order[207] = 1133
			order[208] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order[29] = 780
			order[30] = 172
			order[31] = 169
			order[32] = 170
			order[33] = 171
			order[34] = 989
			order[35] = 1002
			order[36] = 993
			order[37] = 992
			order[38] = 1047
			order[39] = 635
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
			order[12] = 37
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
			order[3] = 467
			order[4] = 776
			order[5] = 161
			order[6] = 360
			order[7] = 361
			order[8] = 989
			order[9] = 993
			order[10] = 992
			order[11] = 80
			order[12] = 539
			order[13] = 1047
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(127)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 913
			order[69] = 914
			order[70] = 915
			order[71] = 918
			order[72] = 788
			order[73] = 916
			order[74] = 917
			order[75] = 919
			order[76] = 898
			order[77] = 711
			order[78] = 140
			order[79] = 303
			order[80] = 537
			order[81] = 336
			order[82] = 625
			order[83] = 229
			order[84] = 54
			order[85] = 854
			order[86] = 38
			order[87] = 152
			order[88] = 516
			order[89] = 468
			order[90] = 469
			order[91] = 63
			order[92] = 64
			order[93] = 193
			order[94] = 192
			order[95] = 15
			order[96] = 232
			order[97] = 1
			order[98] = 660
			order[99] = 581
			order[100] = 555
			order[101] = 735
			order[102] = 692
			order[103] = 40
			order[104] = 62
			order[105] = 126
			order[106] = 60
			order[107] = 218
			order[108] = 220
			order[109] = 221
			order[110] = 222
			order[111] = 662
			order[112] = 663
			order[113] = 699
			order[114] = 761
			order[115] = 423
			order[116] = 44
			order[117] = 640
			order[118] = 235
			order[119] = 236
			order[120] = 701
			order[121] = 696
			order[122] = 697
			order[123] = 698
			order[124] = 453
			order[125] = 110
			order[126] = 0
			super(146, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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
				order = Quickfix::IntArray.new(65)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 687
				order[52] = 690
				order[53] = 587
				order[54] = 588
				order[55] = 683
				order[56] = 539
				order[57] = 676
				order[58] = 677
				order[59] = 678
				order[60] = 679
				order[61] = 680
				order[62] = 685
				order[63] = 654
				order[64] = 0
				super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(70)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 587
			order[54] = 588
			order[55] = 683
			order[56] = 539
			order[57] = 686
			order[58] = 681
			order[59] = 684
			order[60] = 676
			order[61] = 677
			order[62] = 678
			order[63] = 679
			order[64] = 680
			order[65] = 685
			order[66] = 654
			order[67] = 1067
			order[68] = 1068
			order[69] = 0
			super(555, 600, order)
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
			order[15] = 492
			order[16] = 476
			order[17] = 488
			order[18] = 489
			order[19] = 503
			order[20] = 490
			order[21] = 491
			order[22] = 504
			order[23] = 505
			order[24] = 120
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
			order = Quickfix::IntArray.new(76)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 711
			order[69] = 555
			order[70] = 15
			order[71] = 537
			order[72] = 63
			order[73] = 64
			order[74] = 271
			order[75] = 0
			super(146, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
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

class MarketDataSnapshotFullRefresh < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("W") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(70)
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
			order[33] = 1023
			order[34] = 528
			order[35] = 1024
			order[36] = 332
			order[37] = 333
			order[38] = 1020
			order[39] = 63
			order[40] = 64
			order[41] = 1070
			order[42] = 83
			order[43] = 1048
			order[44] = 1026
			order[45] = 1027
			order[46] = 278
			order[47] = 453
			order[48] = 198
			order[49] = 40
			order[50] = 423
			order[51] = 235
			order[52] = 236
			order[53] = 701
			order[54] = 696
			order[55] = 697
			order[56] = 698
			order[57] = 218
			order[58] = 220
			order[59] = 221
			order[60] = 222
			order[61] = 662
			order[62] = 663
			order[63] = 699
			order[64] = 761
			order[65] = 1177
			order[66] = 1093
			order[67] = 326
			order[68] = 327
			order[69] = 0
			super(268, 269, order)
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

		class NoOfSecSizes < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				super(1177, 1178, order)
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
			order = Quickfix::IntArray.new(154)
			order[0] = 279
			order[1] = 285
			order[2] = 269
			order[3] = 278
			order[4] = 280
			order[5] = 55
			order[6] = 65
			order[7] = 48
			order[8] = 22
			order[9] = 460
			order[10] = 461
			order[11] = 167
			order[12] = 762
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
			order[28] = 947
			order[29] = 206
			order[30] = 231
			order[31] = 223
			order[32] = 207
			order[33] = 106
			order[34] = 348
			order[35] = 349
			order[36] = 107
			order[37] = 350
			order[38] = 351
			order[39] = 691
			order[40] = 667
			order[41] = 875
			order[42] = 876
			order[43] = 873
			order[44] = 874
			order[45] = 965
			order[46] = 966
			order[47] = 1049
			order[48] = 967
			order[49] = 968
			order[50] = 969
			order[51] = 970
			order[52] = 971
			order[53] = 996
			order[54] = 997
			order[55] = 1079
			order[56] = 1151
			order[57] = 1146
			order[58] = 1147
			order[59] = 1227
			order[60] = 1191
			order[61] = 1192
			order[62] = 1193
			order[63] = 1194
			order[64] = 1195
			order[65] = 1196
			order[66] = 1198
			order[67] = 1199
			order[68] = 1200
			order[69] = 201
			order[70] = 1244
			order[71] = 1242
			order[72] = 1197
			order[73] = 711
			order[74] = 555
			order[75] = 291
			order[76] = 292
			order[77] = 270
			order[78] = 15
			order[79] = 271
			order[80] = 272
			order[81] = 273
			order[82] = 274
			order[83] = 275
			order[84] = 336
			order[85] = 625
			order[86] = 276
			order[87] = 277
			order[88] = 282
			order[89] = 283
			order[90] = 284
			order[91] = 286
			order[92] = 59
			order[93] = 432
			order[94] = 126
			order[95] = 110
			order[96] = 18
			order[97] = 287
			order[98] = 37
			order[99] = 299
			order[100] = 288
			order[101] = 289
			order[102] = 346
			order[103] = 290
			order[104] = 546
			order[105] = 811
			order[106] = 451
			order[107] = 58
			order[108] = 354
			order[109] = 355
			order[110] = 528
			order[111] = 1024
			order[112] = 332
			order[113] = 333
			order[114] = 1020
			order[115] = 63
			order[116] = 64
			order[117] = 1070
			order[118] = 83
			order[119] = 1048
			order[120] = 1026
			order[121] = 1027
			order[122] = 1023
			order[123] = 453
			order[124] = 198
			order[125] = 40
			order[126] = 1173
			order[127] = 264
			order[128] = 423
			order[129] = 235
			order[130] = 236
			order[131] = 701
			order[132] = 696
			order[133] = 697
			order[134] = 698
			order[135] = 218
			order[136] = 220
			order[137] = 221
			order[138] = 222
			order[139] = 662
			order[140] = 663
			order[141] = 699
			order[142] = 761
			order[143] = 1177
			order[144] = 1093
			order[145] = 326
			order[146] = 327
			order[147] = 828
			order[148] = 574
			order[149] = 1003
			order[150] = 483
			order[151] = 60
			order[152] = 1175
			order[153] = 0
			super(268, 279, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
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

	class NoAltMDSource < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(2)
			order[0] = 817
			order[1] = 0
			super(816, 817, order)
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
			order = Quickfix::IntArray.new(80)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 913
			order[69] = 914
			order[70] = 915
			order[71] = 918
			order[72] = 788
			order[73] = 916
			order[74] = 917
			order[75] = 919
			order[76] = 898
			order[77] = 711
			order[78] = 555
			order[79] = 0
			super(295, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
			end
		end
	end
end

class QuoteStatusRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("a") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(69)
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
			order[45] = 972
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 998
			order[50] = 1000
			order[51] = 1038
			order[52] = 1039
			order[53] = 1044
			order[54] = 1045
			order[55] = 1046
			order[56] = 1213
			order[57] = 315
			order[58] = 1419
			order[59] = 1423
			order[60] = 1424
			order[61] = 1425
			order[62] = 304
			order[63] = 893
			order[64] = 295
			order[65] = 1168
			order[66] = 1169
			order[67] = 1170
			order[68] = 0
			super(296, 302, order)
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(96)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
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
				order[39] = 873
				order[40] = 874
				order[41] = 965
				order[42] = 966
				order[43] = 1049
				order[44] = 967
				order[45] = 968
				order[46] = 969
				order[47] = 970
				order[48] = 971
				order[49] = 996
				order[50] = 997
				order[51] = 1079
				order[52] = 1151
				order[53] = 1146
				order[54] = 1147
				order[55] = 1227
				order[56] = 1191
				order[57] = 1192
				order[58] = 1193
				order[59] = 1194
				order[60] = 1195
				order[61] = 1196
				order[62] = 1198
				order[63] = 1199
				order[64] = 1200
				order[65] = 201
				order[66] = 1244
				order[67] = 1242
				order[68] = 1197
				order[69] = 555
				order[70] = 132
				order[71] = 133
				order[72] = 134
				order[73] = 135
				order[74] = 62
				order[75] = 188
				order[76] = 190
				order[77] = 189
				order[78] = 191
				order[79] = 631
				order[80] = 632
				order[81] = 633
				order[82] = 634
				order[83] = 60
				order[84] = 336
				order[85] = 625
				order[86] = 64
				order[87] = 40
				order[88] = 193
				order[89] = 192
				order[90] = 642
				order[91] = 643
				order[92] = 15
				order[93] = 368
				order[94] = 1167
				order[95] = 0
				super(295, 299, order)
			end

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(52)
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
					order[23] = 942
					order[24] = 613
					order[25] = 614
					order[26] = 615
					order[27] = 616
					order[28] = 617
					order[29] = 618
					order[30] = 619
					order[31] = 620
					order[32] = 621
					order[33] = 622
					order[34] = 623
					order[35] = 624
					order[36] = 556
					order[37] = 740
					order[38] = 739
					order[39] = 955
					order[40] = 956
					order[41] = 999
					order[42] = 1001
					order[43] = 1017
					order[44] = 566
					order[45] = 1212
					order[46] = 1358
					order[47] = 1420
					order[48] = 1224
					order[49] = 1421
					order[50] = 1422
					order[51] = 0
					super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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

class SecurityDefinition < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("d") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end
end

class SecurityStatus < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("f") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(67)
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
			order[45] = 972
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 998
			order[50] = 1000
			order[51] = 1038
			order[52] = 1039
			order[53] = 1044
			order[54] = 1045
			order[55] = 1046
			order[56] = 1213
			order[57] = 315
			order[58] = 1419
			order[59] = 1423
			order[60] = 1424
			order[61] = 1425
			order[62] = 367
			order[63] = 304
			order[64] = 893
			order[65] = 295
			order[66] = 0
			super(296, 302, order)
		end

		class NoQuoteEntries < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(94)
				order[0] = 299
				order[1] = 55
				order[2] = 65
				order[3] = 48
				order[4] = 22
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
				order[39] = 873
				order[40] = 874
				order[41] = 965
				order[42] = 966
				order[43] = 1049
				order[44] = 967
				order[45] = 968
				order[46] = 969
				order[47] = 970
				order[48] = 971
				order[49] = 996
				order[50] = 997
				order[51] = 1079
				order[52] = 1151
				order[53] = 1146
				order[54] = 1147
				order[55] = 1227
				order[56] = 1191
				order[57] = 1192
				order[58] = 1193
				order[59] = 1194
				order[60] = 1195
				order[61] = 1196
				order[62] = 1198
				order[63] = 1199
				order[64] = 1200
				order[65] = 201
				order[66] = 1244
				order[67] = 1242
				order[68] = 1197
				order[69] = 555
				order[70] = 132
				order[71] = 133
				order[72] = 134
				order[73] = 135
				order[74] = 62
				order[75] = 188
				order[76] = 190
				order[77] = 189
				order[78] = 191
				order[79] = 631
				order[80] = 632
				order[81] = 633
				order[82] = 634
				order[83] = 60
				order[84] = 336
				order[85] = 625
				order[86] = 64
				order[87] = 40
				order[88] = 193
				order[89] = 192
				order[90] = 642
				order[91] = 643
				order[92] = 15
				order[93] = 0
				super(295, 299, order)
			end

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(52)
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
					order[23] = 942
					order[24] = 613
					order[25] = 614
					order[26] = 615
					order[27] = 616
					order[28] = 617
					order[29] = 618
					order[30] = 619
					order[31] = 620
					order[32] = 621
					order[33] = 622
					order[34] = 623
					order[35] = 624
					order[36] = 556
					order[37] = 740
					order[38] = 739
					order[39] = 955
					order[40] = 956
					order[41] = 999
					order[42] = 1001
					order[43] = 1017
					order[44] = 566
					order[45] = 1212
					order[46] = 1358
					order[47] = 1420
					order[48] = 1224
					order[49] = 1421
					order[50] = 1422
					order[51] = 0
					super(555, 600, order)
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
			order = Quickfix::IntArray.new(79)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 711
			order[69] = 140
			order[70] = 11
			order[71] = 526
			order[72] = 54
			order[73] = 44
			order[74] = 15
			order[75] = 58
			order[76] = 354
			order[77] = 355
			order[78] = 0
			super(428, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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

	class NoNotAffectedOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			super(1370, 1372, order)
		end
	end
end

class NewOrderCross < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("s") )
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(44)
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
			order[40] = 962
			order[41] = 1091
			order[42] = 41
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
end

class CrossOrderCancelReplaceRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("t") )
	end

	class NoSides < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(44)
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
			order[40] = 962
			order[41] = 1091
			order[42] = 41
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
end

class CrossOrderCancelRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("u") )
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
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(102)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 668
			order[69] = 869
			order[70] = 913
			order[71] = 914
			order[72] = 915
			order[73] = 918
			order[74] = 788
			order[75] = 916
			order[76] = 917
			order[77] = 919
			order[78] = 898
			order[79] = 711
			order[80] = 15
			order[81] = 232
			order[82] = 555
			order[83] = 218
			order[84] = 220
			order[85] = 221
			order[86] = 222
			order[87] = 662
			order[88] = 663
			order[89] = 699
			order[90] = 761
			order[91] = 235
			order[92] = 236
			order[93] = 701
			order[94] = 696
			order[95] = 697
			order[96] = 698
			order[97] = 58
			order[98] = 354
			order[99] = 355
			order[100] = 1201
			order[101] = 0
			super(146, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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
				order = Quickfix::IntArray.new(60)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 690
				order[52] = 587
				order[53] = 683
				order[54] = 676
				order[55] = 677
				order[56] = 678
				order[57] = 679
				order[58] = 680
				order[59] = 0
				super(555, 600, order)
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

class DerivativeSecurityListRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("z") )
	end
end

class DerivativeSecurityList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AA") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(81)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 15
			order[69] = 668
			order[70] = 869
			order[71] = 555
			order[72] = 58
			order[73] = 354
			order[74] = 355
			order[75] = 1305
			order[76] = 1221
			order[77] = 1230
			order[78] = 1240
			order[79] = 292
			order[80] = 0
			super(146, 55, order)
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(69)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 683
			order[54] = 670
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 685
			order[62] = 1366
			order[63] = 1379
			order[64] = 1381
			order[65] = 1383
			order[66] = 1384
			order[67] = 675
			order[68] = 0
			super(555, 600, order)
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
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(69)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 683
			order[54] = 670
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 685
			order[62] = 1366
			order[63] = 1379
			order[64] = 1381
			order[65] = 1383
			order[66] = 1384
			order[67] = 675
			order[68] = 0
			super(555, 600, order)
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
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoDates < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 75
			order[1] = 60
			order[2] = 779
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(74)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 683
			order[54] = 564
			order[55] = 565
			order[56] = 539
			order[57] = 654
			order[58] = 587
			order[59] = 588
			order[60] = 637
			order[61] = 990
			order[62] = 675
			order[63] = 1073
			order[64] = 1074
			order[65] = 1075
			order[66] = 1152
			order[67] = 1342
			order[68] = 1379
			order[69] = 1381
			order[70] = 1383
			order[71] = 1384
			order[72] = 1418
			order[73] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(75)
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
			order[13] = 578
			order[14] = 579
			order[15] = 821
			order[16] = 376
			order[17] = 377
			order[18] = 528
			order[19] = 529
			order[20] = 582
			order[21] = 40
			order[22] = 18
			order[23] = 483
			order[24] = 336
			order[25] = 625
			order[26] = 943
			order[27] = 12
			order[28] = 13
			order[29] = 479
			order[30] = 497
			order[31] = 157
			order[32] = 230
			order[33] = 158
			order[34] = 159
			order[35] = 738
			order[36] = 920
			order[37] = 921
			order[38] = 922
			order[39] = 238
			order[40] = 237
			order[41] = 118
			order[42] = 119
			order[43] = 155
			order[44] = 156
			order[45] = 77
			order[46] = 58
			order[47] = 354
			order[48] = 355
			order[49] = 752
			order[50] = 518
			order[51] = 232
			order[52] = 136
			order[53] = 825
			order[54] = 826
			order[55] = 591
			order[56] = 70
			order[57] = 78
			order[58] = 1009
			order[59] = 1005
			order[60] = 1006
			order[61] = 1007
			order[62] = 83
			order[63] = 1008
			order[64] = 1016
			order[65] = 19
			order[66] = 1093
			order[67] = 1072
			order[68] = 1057
			order[69] = 1139
			order[70] = 430
			order[71] = 1154
			order[72] = 1155
			order[73] = 1158
			order[74] = 0
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
end

class QuoteRequestReject < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AG") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(125)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 913
			order[69] = 914
			order[70] = 915
			order[71] = 918
			order[72] = 788
			order[73] = 916
			order[74] = 917
			order[75] = 919
			order[76] = 898
			order[77] = 711
			order[78] = 140
			order[79] = 303
			order[80] = 537
			order[81] = 336
			order[82] = 625
			order[83] = 229
			order[84] = 54
			order[85] = 854
			order[86] = 38
			order[87] = 152
			order[88] = 516
			order[89] = 468
			order[90] = 469
			order[91] = 63
			order[92] = 64
			order[93] = 193
			order[94] = 192
			order[95] = 15
			order[96] = 232
			order[97] = 1
			order[98] = 660
			order[99] = 581
			order[100] = 555
			order[101] = 735
			order[102] = 692
			order[103] = 40
			order[104] = 126
			order[105] = 60
			order[106] = 218
			order[107] = 220
			order[108] = 221
			order[109] = 222
			order[110] = 662
			order[111] = 663
			order[112] = 699
			order[113] = 761
			order[114] = 423
			order[115] = 44
			order[116] = 640
			order[117] = 235
			order[118] = 236
			order[119] = 701
			order[120] = 696
			order[121] = 697
			order[122] = 698
			order[123] = 453
			order[124] = 0
			super(146, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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
				order = Quickfix::IntArray.new(65)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 687
				order[52] = 690
				order[53] = 587
				order[54] = 588
				order[55] = 683
				order[56] = 539
				order[57] = 676
				order[58] = 677
				order[59] = 678
				order[60] = 679
				order[61] = 680
				order[62] = 685
				order[63] = 654
				order[64] = 0
				super(555, 600, order)
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
end

class RFQRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AH") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(76)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 711
			order[69] = 555
			order[70] = 140
			order[71] = 303
			order[72] = 537
			order[73] = 336
			order[74] = 625
			order[75] = 0
			super(146, 55, order)
		end

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
			end
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(59)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 587
			order[54] = 588
			order[55] = 683
			order[56] = 539
			order[57] = 685
			order[58] = 0
			super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order = Quickfix::IntArray.new(70)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 587
			order[54] = 588
			order[55] = 683
			order[56] = 539
			order[57] = 686
			order[58] = 681
			order[59] = 684
			order[60] = 676
			order[61] = 677
			order[62] = 678
			order[63] = 679
			order[64] = 680
			order[65] = 685
			order[66] = 654
			order[67] = 1067
			order[68] = 1068
			order[69] = 0
			super(555, 600, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order[4] = 539
			order[5] = 976
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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
			order[4] = 539
			order[5] = 976
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(66)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 732
			order[62] = 733
			order[63] = 984
			order[64] = 1037
			order[65] = 0
			super(711, 311, order)
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
			order[4] = 539
			order[5] = 976
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end
end

class TradeCaptureReportAck < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("AR") )
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(74)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 687
			order[52] = 690
			order[53] = 683
			order[54] = 564
			order[55] = 565
			order[56] = 539
			order[57] = 654
			order[58] = 587
			order[59] = 588
			order[60] = 637
			order[61] = 990
			order[62] = 675
			order[63] = 1073
			order[64] = 1074
			order[65] = 1075
			order[66] = 1152
			order[67] = 1342
			order[68] = 1379
			order[69] = 1381
			order[70] = 1383
			order[71] = 1384
			order[72] = 1418
			order[73] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(70)
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
			order[13] = 578
			order[14] = 579
			order[15] = 821
			order[16] = 376
			order[17] = 377
			order[18] = 528
			order[19] = 529
			order[20] = 582
			order[21] = 40
			order[22] = 18
			order[23] = 483
			order[24] = 336
			order[25] = 625
			order[26] = 943
			order[27] = 12
			order[28] = 13
			order[29] = 479
			order[30] = 497
			order[31] = 157
			order[32] = 230
			order[33] = 158
			order[34] = 159
			order[35] = 738
			order[36] = 920
			order[37] = 921
			order[38] = 922
			order[39] = 238
			order[40] = 237
			order[41] = 118
			order[42] = 119
			order[43] = 155
			order[44] = 156
			order[45] = 77
			order[46] = 752
			order[47] = 518
			order[48] = 232
			order[49] = 136
			order[50] = 825
			order[51] = 826
			order[52] = 591
			order[53] = 70
			order[54] = 78
			order[55] = 1093
			order[56] = 1072
			order[57] = 1057
			order[58] = 1009
			order[59] = 1005
			order[60] = 1006
			order[61] = 1007
			order[62] = 83
			order[63] = 1008
			order[64] = 1016
			order[65] = 430
			order[66] = 1154
			order[67] = 1155
			order[68] = 1158
			order[69] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order[29] = 780
			order[30] = 172
			order[31] = 169
			order[32] = 170
			order[33] = 171
			order[34] = 989
			order[35] = 1002
			order[36] = 993
			order[37] = 992
			order[38] = 1047
			order[39] = 635
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
			order[3] = 467
			order[4] = 776
			order[5] = 161
			order[6] = 360
			order[7] = 361
			order[8] = 989
			order[9] = 993
			order[10] = 992
			order[11] = 80
			order[12] = 539
			order[13] = 1047
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoPositions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 976
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(63)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 944
			order[62] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(63)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 944
			order[62] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(63)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 944
			order[62] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
		end
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end
end

class SecurityDefinitionUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BP") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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

	class NoMarketSegments < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			super(1310, 1301, order)
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
			order = Quickfix::IntArray.new(103)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 668
			order[69] = 869
			order[70] = 913
			order[71] = 914
			order[72] = 915
			order[73] = 918
			order[74] = 788
			order[75] = 916
			order[76] = 917
			order[77] = 919
			order[78] = 898
			order[79] = 555
			order[80] = 218
			order[81] = 220
			order[82] = 221
			order[83] = 222
			order[84] = 662
			order[85] = 663
			order[86] = 699
			order[87] = 761
			order[88] = 235
			order[89] = 236
			order[90] = 701
			order[91] = 696
			order[92] = 697
			order[93] = 698
			order[94] = 58
			order[95] = 354
			order[96] = 355
			order[97] = 711
			order[98] = 15
			order[99] = 232
			order[100] = 1324
			order[101] = 1201
			order[102] = 0
			super(146, 55, order)
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(60)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 690
				order[52] = 587
				order[53] = 683
				order[54] = 676
				order[55] = 677
				order[56] = 678
				order[57] = 679
				order[58] = 680
				order[59] = 0
				super(555, 600, order)
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(62)
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
				order[10] = 241
				order[11] = 242
				order[12] = 243
				order[13] = 244
				order[14] = 245
				order[15] = 246
				order[16] = 256
				order[17] = 595
				order[18] = 592
				order[19] = 593
				order[20] = 594
				order[21] = 247
				order[22] = 316
				order[23] = 941
				order[24] = 317
				order[25] = 436
				order[26] = 435
				order[27] = 308
				order[28] = 306
				order[29] = 362
				order[30] = 363
				order[31] = 307
				order[32] = 364
				order[33] = 365
				order[34] = 877
				order[35] = 878
				order[36] = 318
				order[37] = 879
				order[38] = 810
				order[39] = 882
				order[40] = 883
				order[41] = 884
				order[42] = 885
				order[43] = 886
				order[44] = 972
				order[45] = 975
				order[46] = 973
				order[47] = 974
				order[48] = 998
				order[49] = 1000
				order[50] = 1038
				order[51] = 1039
				order[52] = 1044
				order[53] = 1045
				order[54] = 1046
				order[55] = 1213
				order[56] = 315
				order[57] = 1419
				order[58] = 1423
				order[59] = 1424
				order[60] = 1425
				order[61] = 0
				super(711, 311, order)
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
			order[4] = 539
			order[5] = 976
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
			order = Quickfix::IntArray.new(69)
			order[0] = 55
			order[1] = 65
			order[2] = 48
			order[3] = 22
			order[4] = 460
			order[5] = 461
			order[6] = 167
			order[7] = 762
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
			order[23] = 947
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
			order[34] = 691
			order[35] = 667
			order[36] = 875
			order[37] = 876
			order[38] = 873
			order[39] = 874
			order[40] = 965
			order[41] = 966
			order[42] = 1049
			order[43] = 967
			order[44] = 968
			order[45] = 969
			order[46] = 970
			order[47] = 971
			order[48] = 996
			order[49] = 997
			order[50] = 1079
			order[51] = 1151
			order[52] = 1146
			order[53] = 1147
			order[54] = 1227
			order[55] = 1191
			order[56] = 1192
			order[57] = 1193
			order[58] = 1194
			order[59] = 1195
			order[60] = 1196
			order[61] = 1198
			order[62] = 1199
			order[63] = 1200
			order[64] = 201
			order[65] = 1244
			order[66] = 1242
			order[67] = 1197
			order[68] = 0
			super(146, 55, order)
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order[29] = 780
			order[30] = 172
			order[31] = 169
			order[32] = 170
			order[33] = 171
			order[34] = 989
			order[35] = 1002
			order[36] = 993
			order[37] = 992
			order[38] = 1047
			order[39] = 635
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
	end
end

class ExecutionAcknowledgement < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BN") )
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(62)
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
			order[10] = 241
			order[11] = 242
			order[12] = 243
			order[13] = 244
			order[14] = 245
			order[15] = 246
			order[16] = 256
			order[17] = 595
			order[18] = 592
			order[19] = 593
			order[20] = 594
			order[21] = 247
			order[22] = 316
			order[23] = 941
			order[24] = 317
			order[25] = 436
			order[26] = 435
			order[27] = 308
			order[28] = 306
			order[29] = 362
			order[30] = 363
			order[31] = 307
			order[32] = 364
			order[33] = 365
			order[34] = 877
			order[35] = 878
			order[36] = 318
			order[37] = 879
			order[38] = 810
			order[39] = 882
			order[40] = 883
			order[41] = 884
			order[42] = 885
			order[43] = 886
			order[44] = 972
			order[45] = 975
			order[46] = 973
			order[47] = 974
			order[48] = 998
			order[49] = 1000
			order[50] = 1038
			order[51] = 1039
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1213
			order[56] = 315
			order[57] = 1419
			order[58] = 1423
			order[59] = 1424
			order[60] = 1425
			order[61] = 0
			super(711, 311, order)
		end
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(52)
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
			order[23] = 942
			order[24] = 613
			order[25] = 614
			order[26] = 615
			order[27] = 616
			order[28] = 617
			order[29] = 618
			order[30] = 619
			order[31] = 620
			order[32] = 621
			order[33] = 622
			order[34] = 623
			order[35] = 624
			order[36] = 556
			order[37] = 740
			order[38] = 739
			order[39] = 955
			order[40] = 956
			order[41] = 999
			order[42] = 1001
			order[43] = 1017
			order[44] = 566
			order[45] = 1212
			order[46] = 1358
			order[47] = 1420
			order[48] = 1224
			order[49] = 1421
			order[50] = 1422
			order[51] = 0
			super(555, 600, order)
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
			order = Quickfix::IntArray.new(21)
			order[0] = 336
			order[1] = 625
			order[2] = 207
			order[3] = 338
			order[4] = 339
			order[5] = 325
			order[6] = 340
			order[7] = 567
			order[8] = 341
			order[9] = 342
			order[10] = 343
			order[11] = 344
			order[12] = 345
			order[13] = 387
			order[14] = 58
			order[15] = 354
			order[16] = 355
			order[17] = 1301
			order[18] = 1300
			order[19] = 1326
			order[20] = 0
			super(386, 336, order)
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
			order = Quickfix::IntArray.new(84)
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
			order[15] = 461
			order[16] = 167
			order[17] = 762
			order[18] = 200
			order[19] = 541
			order[20] = 224
			order[21] = 225
			order[22] = 239
			order[23] = 226
			order[24] = 227
			order[25] = 228
			order[26] = 255
			order[27] = 543
			order[28] = 470
			order[29] = 471
			order[30] = 472
			order[31] = 240
			order[32] = 202
			order[33] = 947
			order[34] = 206
			order[35] = 231
			order[36] = 223
			order[37] = 207
			order[38] = 106
			order[39] = 348
			order[40] = 349
			order[41] = 107
			order[42] = 350
			order[43] = 351
			order[44] = 691
			order[45] = 667
			order[46] = 875
			order[47] = 876
			order[48] = 873
			order[49] = 874
			order[50] = 965
			order[51] = 966
			order[52] = 1049
			order[53] = 967
			order[54] = 968
			order[55] = 969
			order[56] = 970
			order[57] = 971
			order[58] = 996
			order[59] = 997
			order[60] = 1079
			order[61] = 1151
			order[62] = 1146
			order[63] = 1147
			order[64] = 1227
			order[65] = 1191
			order[66] = 1192
			order[67] = 1193
			order[68] = 1194
			order[69] = 1195
			order[70] = 1196
			order[71] = 1198
			order[72] = 1199
			order[73] = 1200
			order[74] = 201
			order[75] = 1244
			order[76] = 1242
			order[77] = 1197
			order[78] = 453
			order[79] = 168
			order[80] = 126
			order[81] = 779
			order[82] = 1158
			order[83] = 0
			super(1165, 430, order)
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(82)
			order[0] = 1324
			order[1] = 55
			order[2] = 65
			order[3] = 48
			order[4] = 22
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
			order[39] = 873
			order[40] = 874
			order[41] = 965
			order[42] = 966
			order[43] = 1049
			order[44] = 967
			order[45] = 968
			order[46] = 969
			order[47] = 970
			order[48] = 971
			order[49] = 996
			order[50] = 997
			order[51] = 1079
			order[52] = 1151
			order[53] = 1146
			order[54] = 1147
			order[55] = 1227
			order[56] = 1191
			order[57] = 1192
			order[58] = 1193
			order[59] = 1194
			order[60] = 1195
			order[61] = 1196
			order[62] = 1198
			order[63] = 1199
			order[64] = 1200
			order[65] = 201
			order[66] = 1244
			order[67] = 1242
			order[68] = 1197
			order[69] = 668
			order[70] = 869
			order[71] = 1305
			order[72] = 1221
			order[73] = 1230
			order[74] = 1240
			order[75] = 15
			order[76] = 555
			order[77] = 58
			order[78] = 354
			order[79] = 355
			order[80] = 292
			order[81] = 0
			super(146, 1324, order)
		end

		class NoLegs < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(52)
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
				order[23] = 942
				order[24] = 613
				order[25] = 614
				order[26] = 615
				order[27] = 616
				order[28] = 617
				order[29] = 618
				order[30] = 619
				order[31] = 620
				order[32] = 621
				order[33] = 622
				order[34] = 623
				order[35] = 624
				order[36] = 556
				order[37] = 740
				order[38] = 739
				order[39] = 955
				order[40] = 956
				order[41] = 999
				order[42] = 1001
				order[43] = 1017
				order[44] = 566
				order[45] = 1212
				order[46] = 1358
				order[47] = 1420
				order[48] = 1224
				order[49] = 1421
				order[50] = 1422
				order[51] = 0
				super(555, 600, order)
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
			order = Quickfix::IntArray.new(21)
			order[0] = 336
			order[1] = 625
			order[2] = 207
			order[3] = 338
			order[4] = 339
			order[5] = 325
			order[6] = 340
			order[7] = 567
			order[8] = 341
			order[9] = 342
			order[10] = 343
			order[11] = 344
			order[12] = 345
			order[13] = 387
			order[14] = 58
			order[15] = 354
			order[16] = 355
			order[17] = 1301
			order[18] = 1300
			order[19] = 1326
			order[20] = 0
			super(386, 336, order)
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

class ApplicationMessageRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BW") )
	end

	class NoApplIDs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(4)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 0
			super(1351, 1355, order)
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
			order = Quickfix::IntArray.new(6)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 1357
			order[4] = 1354
			order[5] = 0
			super(1351, 1355, order)
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

	class NoNotAffectedOrders < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			super(1370, 1372, order)
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
end

class UserNotification < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("CB") )
	end
end
end
