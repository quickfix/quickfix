require 'quickfix'
module Quickfix50
class Message < Quickfix::Message
	def initialize
		super
		getHeader().setField( Quickfix::BeginString.new("FIXT.1.1") )
		getHeader().setField( Quickfix::ApplVerID.new("7") )
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(47)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 682
			order[45] = 683
			order[46] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 685
			order[46] = 690
			order[47] = 683
			order[48] = 564
			order[49] = 565
			order[50] = 539
			order[51] = 654
			order[52] = 566
			order[53] = 587
			order[54] = 588
			order[55] = 637
			order[56] = 675
			order[57] = 1073
			order[58] = 1074
			order[59] = 1075
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
			order = Quickfix::IntArray.new(53)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 0
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
	end

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(53)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 0
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(193)
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
			order[43] = 461
			order[44] = 167
			order[45] = 762
			order[46] = 200
			order[47] = 541
			order[48] = 1079
			order[49] = 201
			order[50] = 966
			order[51] = 1049
			order[52] = 965
			order[53] = 224
			order[54] = 225
			order[55] = 239
			order[56] = 226
			order[57] = 227
			order[58] = 228
			order[59] = 255
			order[60] = 543
			order[61] = 470
			order[62] = 471
			order[63] = 472
			order[64] = 240
			order[65] = 202
			order[66] = 947
			order[67] = 967
			order[68] = 968
			order[69] = 206
			order[70] = 231
			order[71] = 969
			order[72] = 996
			order[73] = 997
			order[74] = 223
			order[75] = 207
			order[76] = 970
			order[77] = 971
			order[78] = 106
			order[79] = 348
			order[80] = 349
			order[81] = 107
			order[82] = 350
			order[83] = 351
			order[84] = 691
			order[85] = 667
			order[86] = 875
			order[87] = 876
			order[88] = 873
			order[89] = 874
			order[90] = 711
			order[91] = 140
			order[92] = 54
			order[93] = 401
			order[94] = 114
			order[95] = 60
			order[96] = 232
			order[97] = 854
			order[98] = 38
			order[99] = 152
			order[100] = 516
			order[101] = 468
			order[102] = 469
			order[103] = 40
			order[104] = 423
			order[105] = 44
			order[106] = 1092
			order[107] = 99
			order[108] = 1100
			order[109] = 1101
			order[110] = 1102
			order[111] = 1103
			order[112] = 1104
			order[113] = 1105
			order[114] = 1106
			order[115] = 1107
			order[116] = 1108
			order[117] = 1109
			order[118] = 1110
			order[119] = 1111
			order[120] = 1112
			order[121] = 1113
			order[122] = 1114
			order[123] = 218
			order[124] = 220
			order[125] = 221
			order[126] = 222
			order[127] = 662
			order[128] = 663
			order[129] = 699
			order[130] = 761
			order[131] = 235
			order[132] = 236
			order[133] = 701
			order[134] = 696
			order[135] = 697
			order[136] = 698
			order[137] = 15
			order[138] = 376
			order[139] = 377
			order[140] = 23
			order[141] = 117
			order[142] = 1080
			order[143] = 1081
			order[144] = 59
			order[145] = 168
			order[146] = 432
			order[147] = 126
			order[148] = 427
			order[149] = 12
			order[150] = 13
			order[151] = 479
			order[152] = 497
			order[153] = 528
			order[154] = 529
			order[155] = 1091
			order[156] = 582
			order[157] = 121
			order[158] = 120
			order[159] = 775
			order[160] = 58
			order[161] = 354
			order[162] = 355
			order[163] = 193
			order[164] = 192
			order[165] = 640
			order[166] = 77
			order[167] = 203
			order[168] = 210
			order[169] = 211
			order[170] = 1094
			order[171] = 835
			order[172] = 836
			order[173] = 837
			order[174] = 838
			order[175] = 840
			order[176] = 1096
			order[177] = 1097
			order[178] = 1098
			order[179] = 1099
			order[180] = 388
			order[181] = 389
			order[182] = 841
			order[183] = 842
			order[184] = 843
			order[185] = 844
			order[186] = 846
			order[187] = 847
			order[188] = 957
			order[189] = 848
			order[190] = 849
			order[191] = 494
			order[192] = 0
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
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end
end

class QuoteRequest < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("R") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(110)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 913
			order[53] = 914
			order[54] = 915
			order[55] = 918
			order[56] = 788
			order[57] = 916
			order[58] = 917
			order[59] = 919
			order[60] = 898
			order[61] = 711
			order[62] = 140
			order[63] = 303
			order[64] = 537
			order[65] = 336
			order[66] = 625
			order[67] = 229
			order[68] = 54
			order[69] = 854
			order[70] = 38
			order[71] = 152
			order[72] = 516
			order[73] = 468
			order[74] = 469
			order[75] = 63
			order[76] = 64
			order[77] = 193
			order[78] = 192
			order[79] = 15
			order[80] = 232
			order[81] = 1
			order[82] = 660
			order[83] = 581
			order[84] = 555
			order[85] = 735
			order[86] = 692
			order[87] = 40
			order[88] = 62
			order[89] = 126
			order[90] = 60
			order[91] = 218
			order[92] = 220
			order[93] = 221
			order[94] = 222
			order[95] = 662
			order[96] = 663
			order[97] = 699
			order[98] = 761
			order[99] = 423
			order[100] = 44
			order[101] = 640
			order[102] = 235
			order[103] = 236
			order[104] = 701
			order[105] = 696
			order[106] = 697
			order[107] = 698
			order[108] = 453
			order[109] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
				order[44] = 566
				order[45] = 687
				order[46] = 685
				order[47] = 690
				order[48] = 587
				order[49] = 588
				order[50] = 683
				order[51] = 539
				order[52] = 676
				order[53] = 677
				order[54] = 678
				order[55] = 679
				order[56] = 680
				order[57] = 654
				order[58] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(63)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 685
			order[46] = 690
			order[47] = 587
			order[48] = 588
			order[49] = 683
			order[50] = 539
			order[51] = 686
			order[52] = 681
			order[53] = 684
			order[54] = 676
			order[55] = 677
			order[56] = 678
			order[57] = 679
			order[58] = 680
			order[59] = 654
			order[60] = 1067
			order[61] = 1068
			order[62] = 0
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
			order = Quickfix::IntArray.new(60)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 711
			order[53] = 555
			order[54] = 15
			order[55] = 537
			order[56] = 63
			order[57] = 64
			order[58] = 271
			order[59] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order = Quickfix::IntArray.new(45)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoMDEntries < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(51)
			order[0] = 269
			order[1] = 278
			order[2] = 270
			order[3] = 40
			order[4] = 15
			order[5] = 271
			order[6] = 272
			order[7] = 273
			order[8] = 274
			order[9] = 275
			order[10] = 336
			order[11] = 625
			order[12] = 276
			order[13] = 277
			order[14] = 282
			order[15] = 283
			order[16] = 284
			order[17] = 286
			order[18] = 59
			order[19] = 432
			order[20] = 126
			order[21] = 110
			order[22] = 18
			order[23] = 287
			order[24] = 37
			order[25] = 198
			order[26] = 299
			order[27] = 288
			order[28] = 289
			order[29] = 346
			order[30] = 290
			order[31] = 546
			order[32] = 811
			order[33] = 58
			order[34] = 354
			order[35] = 355
			order[36] = 1023
			order[37] = 528
			order[38] = 1024
			order[39] = 332
			order[40] = 333
			order[41] = 1020
			order[42] = 63
			order[43] = 64
			order[44] = 1070
			order[45] = 83
			order[46] = 1048
			order[47] = 1026
			order[48] = 1027
			order[49] = 453
			order[50] = 0
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
			order = Quickfix::IntArray.new(111)
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
			order[15] = 1079
			order[16] = 201
			order[17] = 966
			order[18] = 1049
			order[19] = 965
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
			order[34] = 967
			order[35] = 968
			order[36] = 206
			order[37] = 231
			order[38] = 969
			order[39] = 996
			order[40] = 997
			order[41] = 223
			order[42] = 207
			order[43] = 970
			order[44] = 971
			order[45] = 106
			order[46] = 348
			order[47] = 349
			order[48] = 107
			order[49] = 350
			order[50] = 351
			order[51] = 691
			order[52] = 667
			order[53] = 875
			order[54] = 876
			order[55] = 873
			order[56] = 874
			order[57] = 711
			order[58] = 555
			order[59] = 291
			order[60] = 292
			order[61] = 270
			order[62] = 40
			order[63] = 15
			order[64] = 271
			order[65] = 272
			order[66] = 273
			order[67] = 274
			order[68] = 275
			order[69] = 336
			order[70] = 625
			order[71] = 276
			order[72] = 277
			order[73] = 282
			order[74] = 283
			order[75] = 284
			order[76] = 286
			order[77] = 59
			order[78] = 432
			order[79] = 126
			order[80] = 110
			order[81] = 18
			order[82] = 287
			order[83] = 37
			order[84] = 198
			order[85] = 299
			order[86] = 288
			order[87] = 289
			order[88] = 346
			order[89] = 290
			order[90] = 546
			order[91] = 811
			order[92] = 451
			order[93] = 58
			order[94] = 354
			order[95] = 355
			order[96] = 1023
			order[97] = 528
			order[98] = 1024
			order[99] = 332
			order[100] = 333
			order[101] = 1020
			order[102] = 63
			order[103] = 64
			order[104] = 1070
			order[105] = 83
			order[106] = 1048
			order[107] = 1026
			order[108] = 1027
			order[109] = 453
			order[110] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order = Quickfix::IntArray.new(45)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
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
			order = Quickfix::IntArray.new(64)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 913
			order[53] = 914
			order[54] = 915
			order[55] = 918
			order[56] = 788
			order[57] = 916
			order[58] = 917
			order[59] = 919
			order[60] = 898
			order[61] = 711
			order[62] = 555
			order[63] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order = Quickfix::IntArray.new(45)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(61)
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
			order[25] = 941
			order[26] = 317
			order[27] = 436
			order[28] = 998
			order[29] = 1000
			order[30] = 435
			order[31] = 308
			order[32] = 306
			order[33] = 362
			order[34] = 363
			order[35] = 307
			order[36] = 364
			order[37] = 365
			order[38] = 877
			order[39] = 878
			order[40] = 972
			order[41] = 318
			order[42] = 879
			order[43] = 975
			order[44] = 973
			order[45] = 974
			order[46] = 810
			order[47] = 882
			order[48] = 883
			order[49] = 884
			order[50] = 885
			order[51] = 886
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1038
			order[56] = 1039
			order[57] = 304
			order[58] = 893
			order[59] = 295
			order[60] = 0
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
				order = Quickfix::IntArray.new(79)
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
				order[11] = 1079
				order[12] = 201
				order[13] = 966
				order[14] = 1049
				order[15] = 965
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
				order[30] = 967
				order[31] = 968
				order[32] = 206
				order[33] = 231
				order[34] = 969
				order[35] = 996
				order[36] = 997
				order[37] = 223
				order[38] = 207
				order[39] = 970
				order[40] = 971
				order[41] = 106
				order[42] = 348
				order[43] = 349
				order[44] = 107
				order[45] = 350
				order[46] = 351
				order[47] = 691
				order[48] = 667
				order[49] = 875
				order[50] = 876
				order[51] = 873
				order[52] = 874
				order[53] = 555
				order[54] = 132
				order[55] = 133
				order[56] = 134
				order[57] = 135
				order[58] = 62
				order[59] = 188
				order[60] = 190
				order[61] = 189
				order[62] = 191
				order[63] = 631
				order[64] = 632
				order[65] = 633
				order[66] = 634
				order[67] = 60
				order[68] = 336
				order[69] = 625
				order[70] = 64
				order[71] = 40
				order[72] = 193
				order[73] = 192
				order[74] = 642
				order[75] = 643
				order[76] = 15
				order[77] = 368
				order[78] = 0
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

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(45)
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
					order[26] = 999
					order[27] = 1001
					order[28] = 615
					order[29] = 616
					order[30] = 617
					order[31] = 618
					order[32] = 619
					order[33] = 620
					order[34] = 621
					order[35] = 622
					order[36] = 623
					order[37] = 624
					order[38] = 556
					order[39] = 740
					order[40] = 739
					order[41] = 955
					order[42] = 956
					order[43] = 1017
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(62)
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
			order[25] = 941
			order[26] = 317
			order[27] = 436
			order[28] = 998
			order[29] = 1000
			order[30] = 435
			order[31] = 308
			order[32] = 306
			order[33] = 362
			order[34] = 363
			order[35] = 307
			order[36] = 364
			order[37] = 365
			order[38] = 877
			order[39] = 878
			order[40] = 972
			order[41] = 318
			order[42] = 879
			order[43] = 975
			order[44] = 973
			order[45] = 974
			order[46] = 810
			order[47] = 882
			order[48] = 883
			order[49] = 884
			order[50] = 885
			order[51] = 886
			order[52] = 1044
			order[53] = 1045
			order[54] = 1046
			order[55] = 1038
			order[56] = 1039
			order[57] = 367
			order[58] = 304
			order[59] = 893
			order[60] = 295
			order[61] = 0
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
				order = Quickfix::IntArray.new(78)
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
				order[11] = 1079
				order[12] = 201
				order[13] = 966
				order[14] = 1049
				order[15] = 965
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
				order[30] = 967
				order[31] = 968
				order[32] = 206
				order[33] = 231
				order[34] = 969
				order[35] = 996
				order[36] = 997
				order[37] = 223
				order[38] = 207
				order[39] = 970
				order[40] = 971
				order[41] = 106
				order[42] = 348
				order[43] = 349
				order[44] = 107
				order[45] = 350
				order[46] = 351
				order[47] = 691
				order[48] = 667
				order[49] = 875
				order[50] = 876
				order[51] = 873
				order[52] = 874
				order[53] = 555
				order[54] = 132
				order[55] = 133
				order[56] = 134
				order[57] = 135
				order[58] = 62
				order[59] = 188
				order[60] = 190
				order[61] = 189
				order[62] = 191
				order[63] = 631
				order[64] = 632
				order[65] = 633
				order[66] = 634
				order[67] = 60
				order[68] = 336
				order[69] = 625
				order[70] = 64
				order[71] = 40
				order[72] = 193
				order[73] = 192
				order[74] = 642
				order[75] = 643
				order[76] = 15
				order[77] = 0
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

			class NoLegs < Quickfix::Group
				def initialize
					order = Quickfix::IntArray.new(45)
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
					order[26] = 999
					order[27] = 1001
					order[28] = 615
					order[29] = 616
					order[30] = 617
					order[31] = 618
					order[32] = 619
					order[33] = 620
					order[34] = 621
					order[35] = 622
					order[36] = 623
					order[37] = 624
					order[38] = 556
					order[39] = 740
					order[40] = 739
					order[41] = 955
					order[42] = 956
					order[43] = 1017
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
			order = Quickfix::IntArray.new(53)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 0
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 140
			order[57] = 11
			order[58] = 526
			order[59] = 54
			order[60] = 44
			order[61] = 15
			order[62] = 58
			order[63] = 354
			order[64] = 355
			order[65] = 0
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
			order = Quickfix::IntArray.new(43)
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
			order[27] = 1091
			order[28] = 582
			order[29] = 121
			order[30] = 120
			order[31] = 775
			order[32] = 58
			order[33] = 354
			order[34] = 355
			order[35] = 77
			order[36] = 203
			order[37] = 544
			order[38] = 635
			order[39] = 377
			order[40] = 659
			order[41] = 962
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(43)
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
			order[27] = 1091
			order[28] = 582
			order[29] = 121
			order[30] = 120
			order[31] = 775
			order[32] = 58
			order[33] = 354
			order[34] = 355
			order[35] = 77
			order[36] = 203
			order[37] = 544
			order[38] = 635
			order[39] = 377
			order[40] = 659
			order[41] = 962
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end
end

class SecurityList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("y") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(90)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 668
			order[53] = 869
			order[54] = 913
			order[55] = 914
			order[56] = 915
			order[57] = 918
			order[58] = 788
			order[59] = 916
			order[60] = 917
			order[61] = 919
			order[62] = 898
			order[63] = 711
			order[64] = 15
			order[65] = 232
			order[66] = 555
			order[67] = 218
			order[68] = 220
			order[69] = 221
			order[70] = 222
			order[71] = 662
			order[72] = 663
			order[73] = 699
			order[74] = 761
			order[75] = 235
			order[76] = 236
			order[77] = 701
			order[78] = 696
			order[79] = 697
			order[80] = 698
			order[81] = 561
			order[82] = 562
			order[83] = 336
			order[84] = 625
			order[85] = 827
			order[86] = 58
			order[87] = 354
			order[88] = 355
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
				order = Quickfix::IntArray.new(5)
				order[0] = 865
				order[1] = 866
				order[2] = 867
				order[3] = 868
				order[4] = 0
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
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order = Quickfix::IntArray.new(53)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
				order[44] = 690
				order[45] = 587
				order[46] = 683
				order[47] = 676
				order[48] = 677
				order[49] = 678
				order[50] = 679
				order[51] = 680
				order[52] = 0
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(63)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 15
			order[53] = 827
			order[54] = 668
			order[55] = 869
			order[56] = 555
			order[57] = 336
			order[58] = 625
			order[59] = 58
			order[60] = 354
			order[61] = 355
			order[62] = 0
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
				order = Quickfix::IntArray.new(45)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 690
			order[46] = 683
			order[47] = 670
			order[48] = 564
			order[49] = 565
			order[50] = 539
			order[51] = 654
			order[52] = 566
			order[53] = 587
			order[54] = 588
			order[55] = 685
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 690
			order[46] = 683
			order[47] = 670
			order[48] = 564
			order[49] = 565
			order[50] = 539
			order[51] = 654
			order[52] = 566
			order[53] = 587
			order[54] = 588
			order[55] = 685
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 690
			order[46] = 990
			order[47] = 683
			order[48] = 564
			order[49] = 565
			order[50] = 539
			order[51] = 654
			order[52] = 566
			order[53] = 587
			order[54] = 588
			order[55] = 637
			order[56] = 675
			order[57] = 1073
			order[58] = 1074
			order[59] = 1075
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
			order = Quickfix::IntArray.new(73)
			order[0] = 54
			order[1] = 37
			order[2] = 198
			order[3] = 11
			order[4] = 19
			order[5] = 526
			order[6] = 66
			order[7] = 1009
			order[8] = 1005
			order[9] = 1006
			order[10] = 1007
			order[11] = 83
			order[12] = 1008
			order[13] = 453
			order[14] = 1
			order[15] = 660
			order[16] = 581
			order[17] = 81
			order[18] = 1093
			order[19] = 575
			order[20] = 576
			order[21] = 578
			order[22] = 579
			order[23] = 821
			order[24] = 15
			order[25] = 376
			order[26] = 377
			order[27] = 528
			order[28] = 529
			order[29] = 582
			order[30] = 40
			order[31] = 18
			order[32] = 483
			order[33] = 336
			order[34] = 625
			order[35] = 943
			order[36] = 12
			order[37] = 13
			order[38] = 479
			order[39] = 497
			order[40] = 157
			order[41] = 230
			order[42] = 158
			order[43] = 159
			order[44] = 738
			order[45] = 920
			order[46] = 921
			order[47] = 922
			order[48] = 238
			order[49] = 237
			order[50] = 118
			order[51] = 119
			order[52] = 120
			order[53] = 155
			order[54] = 156
			order[55] = 77
			order[56] = 58
			order[57] = 354
			order[58] = 355
			order[59] = 752
			order[60] = 518
			order[61] = 232
			order[62] = 136
			order[63] = 825
			order[64] = 826
			order[65] = 591
			order[66] = 70
			order[67] = 78
			order[68] = 1016
			order[69] = 1072
			order[70] = 1057
			order[71] = 1139
			order[72] = 0
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(109)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 913
			order[53] = 914
			order[54] = 915
			order[55] = 918
			order[56] = 788
			order[57] = 916
			order[58] = 917
			order[59] = 919
			order[60] = 898
			order[61] = 711
			order[62] = 140
			order[63] = 303
			order[64] = 537
			order[65] = 336
			order[66] = 625
			order[67] = 229
			order[68] = 54
			order[69] = 854
			order[70] = 38
			order[71] = 152
			order[72] = 516
			order[73] = 468
			order[74] = 469
			order[75] = 63
			order[76] = 64
			order[77] = 193
			order[78] = 192
			order[79] = 15
			order[80] = 232
			order[81] = 1
			order[82] = 660
			order[83] = 581
			order[84] = 555
			order[85] = 735
			order[86] = 692
			order[87] = 40
			order[88] = 126
			order[89] = 60
			order[90] = 218
			order[91] = 220
			order[92] = 221
			order[93] = 222
			order[94] = 662
			order[95] = 663
			order[96] = 699
			order[97] = 761
			order[98] = 423
			order[99] = 44
			order[100] = 640
			order[101] = 235
			order[102] = 236
			order[103] = 701
			order[104] = 696
			order[105] = 697
			order[106] = 698
			order[107] = 453
			order[108] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
				order[44] = 566
				order[45] = 687
				order[46] = 685
				order[47] = 690
				order[48] = 587
				order[49] = 588
				order[50] = 683
				order[51] = 539
				order[52] = 676
				order[53] = 677
				order[54] = 678
				order[55] = 679
				order[56] = 680
				order[57] = 654
				order[58] = 0
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

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(60)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 711
			order[53] = 555
			order[54] = 140
			order[55] = 303
			order[56] = 537
			order[57] = 336
			order[58] = 625
			order[59] = 0
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

		class NoUnderlyings < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(57)
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
				order[10] = 315
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
				order[27] = 998
				order[28] = 1000
				order[29] = 435
				order[30] = 308
				order[31] = 306
				order[32] = 362
				order[33] = 363
				order[34] = 307
				order[35] = 364
				order[36] = 365
				order[37] = 877
				order[38] = 878
				order[39] = 972
				order[40] = 318
				order[41] = 879
				order[42] = 975
				order[43] = 973
				order[44] = 974
				order[45] = 810
				order[46] = 882
				order[47] = 883
				order[48] = 884
				order[49] = 885
				order[50] = 886
				order[51] = 1044
				order[52] = 1045
				order[53] = 1046
				order[54] = 1038
				order[55] = 1039
				order[56] = 0
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
				order = Quickfix::IntArray.new(45)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 685
			order[46] = 690
			order[47] = 587
			order[48] = 588
			order[49] = 683
			order[50] = 539
			order[51] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(63)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 685
			order[46] = 690
			order[47] = 587
			order[48] = 588
			order[49] = 683
			order[50] = 539
			order[51] = 686
			order[52] = 681
			order[53] = 684
			order[54] = 676
			order[55] = 677
			order[56] = 678
			order[57] = 679
			order[58] = 680
			order[59] = 654
			order[60] = 1067
			order[61] = 1068
			order[62] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(61)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 732
			order[57] = 733
			order[58] = 1037
			order[59] = 984
			order[60] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
			order[44] = 687
			order[45] = 690
			order[46] = 990
			order[47] = 683
			order[48] = 564
			order[49] = 565
			order[50] = 539
			order[51] = 654
			order[52] = 566
			order[53] = 587
			order[54] = 588
			order[55] = 637
			order[56] = 675
			order[57] = 1073
			order[58] = 1074
			order[59] = 1075
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
			order = Quickfix::IntArray.new(68)
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
			order[12] = 1093
			order[13] = 576
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
			order[33] = 157
			order[34] = 230
			order[35] = 158
			order[36] = 159
			order[37] = 738
			order[38] = 920
			order[39] = 921
			order[40] = 922
			order[41] = 238
			order[42] = 237
			order[43] = 118
			order[44] = 119
			order[45] = 120
			order[46] = 155
			order[47] = 156
			order[48] = 77
			order[49] = 752
			order[50] = 518
			order[51] = 232
			order[52] = 136
			order[53] = 825
			order[54] = 826
			order[55] = 591
			order[56] = 70
			order[57] = 78
			order[58] = 1072
			order[59] = 1057
			order[60] = 1009
			order[61] = 1005
			order[62] = 1006
			order[63] = 1007
			order[64] = 83
			order[65] = 1008
			order[66] = 1016
			order[67] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(58)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 944
			order[57] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(58)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 944
			order[57] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(58)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 944
			order[57] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoLegs < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end
end

class SecurityListUpdateReport < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BK") )
	end

	class NoRelatedSym < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(145)
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
			order[10] = 1079
			order[11] = 201
			order[12] = 966
			order[13] = 1049
			order[14] = 965
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
			order[29] = 967
			order[30] = 968
			order[31] = 206
			order[32] = 231
			order[33] = 969
			order[34] = 996
			order[35] = 997
			order[36] = 223
			order[37] = 207
			order[38] = 970
			order[39] = 971
			order[40] = 106
			order[41] = 348
			order[42] = 349
			order[43] = 107
			order[44] = 350
			order[45] = 351
			order[46] = 691
			order[47] = 667
			order[48] = 875
			order[49] = 876
			order[50] = 873
			order[51] = 874
			order[52] = 668
			order[53] = 869
			order[54] = 913
			order[55] = 914
			order[56] = 915
			order[57] = 918
			order[58] = 788
			order[59] = 916
			order[60] = 917
			order[61] = 919
			order[62] = 898
			order[63] = 311
			order[64] = 312
			order[65] = 309
			order[66] = 305
			order[67] = 462
			order[68] = 463
			order[69] = 310
			order[70] = 763
			order[71] = 313
			order[72] = 542
			order[73] = 315
			order[74] = 241
			order[75] = 242
			order[76] = 243
			order[77] = 244
			order[78] = 245
			order[79] = 246
			order[80] = 256
			order[81] = 595
			order[82] = 592
			order[83] = 593
			order[84] = 594
			order[85] = 247
			order[86] = 316
			order[87] = 941
			order[88] = 317
			order[89] = 436
			order[90] = 998
			order[91] = 1000
			order[92] = 435
			order[93] = 308
			order[94] = 306
			order[95] = 362
			order[96] = 363
			order[97] = 307
			order[98] = 364
			order[99] = 365
			order[100] = 877
			order[101] = 878
			order[102] = 972
			order[103] = 318
			order[104] = 879
			order[105] = 975
			order[106] = 973
			order[107] = 974
			order[108] = 810
			order[109] = 882
			order[110] = 883
			order[111] = 884
			order[112] = 885
			order[113] = 886
			order[114] = 1044
			order[115] = 1045
			order[116] = 1046
			order[117] = 1038
			order[118] = 1039
			order[119] = 15
			order[120] = 232
			order[121] = 555
			order[122] = 218
			order[123] = 220
			order[124] = 221
			order[125] = 222
			order[126] = 662
			order[127] = 663
			order[128] = 699
			order[129] = 761
			order[130] = 235
			order[131] = 236
			order[132] = 701
			order[133] = 696
			order[134] = 697
			order[135] = 698
			order[136] = 561
			order[137] = 562
			order[138] = 336
			order[139] = 625
			order[140] = 827
			order[141] = 58
			order[142] = 354
			order[143] = 355
			order[144] = 0
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

		class NoInstrAttrib < Quickfix::Group
			def initialize
				order = Quickfix::IntArray.new(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				super(870, 871, order)
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
				order = Quickfix::IntArray.new(53)
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
				order[26] = 999
				order[27] = 1001
				order[28] = 615
				order[29] = 616
				order[30] = 617
				order[31] = 618
				order[32] = 619
				order[33] = 620
				order[34] = 621
				order[35] = 622
				order[36] = 623
				order[37] = 624
				order[38] = 556
				order[39] = 740
				order[40] = 739
				order[41] = 955
				order[42] = 956
				order[43] = 1017
				order[44] = 690
				order[45] = 587
				order[46] = 683
				order[47] = 676
				order[48] = 677
				order[49] = 678
				order[50] = 679
				order[51] = 680
				order[52] = 0
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
			order = Quickfix::IntArray.new(5)
			order[0] = 865
			order[1] = 866
			order[2] = 867
			order[3] = 868
			order[4] = 0
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

	class NoUnderlyings < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(57)
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
			order[10] = 315
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
			order[27] = 998
			order[28] = 1000
			order[29] = 435
			order[30] = 308
			order[31] = 306
			order[32] = 362
			order[33] = 363
			order[34] = 307
			order[35] = 364
			order[36] = 365
			order[37] = 877
			order[38] = 878
			order[39] = 972
			order[40] = 318
			order[41] = 879
			order[42] = 975
			order[43] = 973
			order[44] = 974
			order[45] = 810
			order[46] = 882
			order[47] = 883
			order[48] = 884
			order[49] = 885
			order[50] = 886
			order[51] = 1044
			order[52] = 1045
			order[53] = 1046
			order[54] = 1038
			order[55] = 1039
			order[56] = 0
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
			order = Quickfix::IntArray.new(45)
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
			order[26] = 999
			order[27] = 1001
			order[28] = 615
			order[29] = 616
			order[30] = 617
			order[31] = 618
			order[32] = 619
			order[33] = 620
			order[34] = 621
			order[35] = 622
			order[36] = 623
			order[37] = 624
			order[38] = 556
			order[39] = 740
			order[40] = 739
			order[41] = 955
			order[42] = 956
			order[43] = 1017
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
	end
end

class TradingSessionList < Message
	def initialize
		super
		getHeader().setField( Quickfix::MsgType.new("BJ") )
	end

	class NoTradingSessions < Quickfix::Group
		def initialize
			order = Quickfix::IntArray.new(18)
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
			order[17] = 0
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
end
