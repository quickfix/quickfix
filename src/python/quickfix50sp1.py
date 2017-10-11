import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIXT.1.1") )
		self.getHeader().setField( fix.ApplVerID("8") )

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(53)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 682
			order[51] = 683
			order[52] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

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

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 539
			order[5] = 80
			order[6] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

	class NoFills(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1363
			order[1] = 1364
			order[2] = 1365
			order[3] = 1414
			order[4] = 0
			fix.Group.__init__(self, 1362, 1363, order)

		class NoNested4PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1415
				order[1] = 1416
				order[2] = 1417
				order[3] = 1413
				order[4] = 0
				fix.Group.__init__(self, 1414, 1415, order)

			class NoNested4PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1412
					order[1] = 1411
					order[2] = 0
					fix.Group.__init__(self, 1413, 1412, order)

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
			order = fix.IntArray(73)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 685
			order[52] = 690
			order[53] = 683
			order[54] = 1366
			order[55] = 670
			order[56] = 564
			order[57] = 565
			order[58] = 948
			order[59] = 654
			order[60] = 587
			order[61] = 588
			order[62] = 637
			order[63] = 675
			order[64] = 1073
			order[65] = 1074
			order[66] = 1075
			order[67] = 1379
			order[68] = 1381
			order[69] = 1383
			order[70] = 1384
			order[71] = 1418
			order[72] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoLegAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
				order[6] = 0
				fix.Group.__init__(self, 670, 671, order)

			class NoNested2PartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					fix.Group.__init__(self, 756, 757, order)

				class NoNested2PartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						fix.Group.__init__(self, 806, 760, order)

		class NoNested3PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 949
				order[1] = 950
				order[2] = 951
				order[3] = 952
				order[4] = 0
				fix.Group.__init__(self, 948, 949, order)

			class NoNested3PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 953
					order[1] = 954
					order[2] = 0
					fix.Group.__init__(self, 952, 953, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

class OrderCancelReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("9") )

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
			order = fix.IntArray(69)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLinesOfText(fix.Group):
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
			order = fix.IntArray(69)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoLinesOfText(fix.Group):
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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 539
			order[5] = 80
			order[6] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

class NewOrderList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("E") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(209)
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
			order[55] = 225
			order[56] = 239
			order[57] = 226
			order[58] = 227
			order[59] = 228
			order[60] = 255
			order[61] = 543
			order[62] = 470
			order[63] = 471
			order[64] = 472
			order[65] = 240
			order[66] = 202
			order[67] = 947
			order[68] = 967
			order[69] = 968
			order[70] = 206
			order[71] = 231
			order[72] = 969
			order[73] = 1146
			order[74] = 996
			order[75] = 1147
			order[76] = 1191
			order[77] = 1192
			order[78] = 1193
			order[79] = 1194
			order[80] = 1195
			order[81] = 1196
			order[82] = 1197
			order[83] = 1198
			order[84] = 1199
			order[85] = 1200
			order[86] = 201
			order[87] = 1244
			order[88] = 1242
			order[89] = 997
			order[90] = 223
			order[91] = 207
			order[92] = 970
			order[93] = 971
			order[94] = 106
			order[95] = 348
			order[96] = 349
			order[97] = 107
			order[98] = 350
			order[99] = 351
			order[100] = 691
			order[101] = 667
			order[102] = 875
			order[103] = 876
			order[104] = 873
			order[105] = 874
			order[106] = 711
			order[107] = 140
			order[108] = 54
			order[109] = 401
			order[110] = 114
			order[111] = 60
			order[112] = 232
			order[113] = 854
			order[114] = 38
			order[115] = 152
			order[116] = 516
			order[117] = 468
			order[118] = 469
			order[119] = 40
			order[120] = 423
			order[121] = 44
			order[122] = 1092
			order[123] = 99
			order[124] = 1100
			order[125] = 1101
			order[126] = 1102
			order[127] = 1103
			order[128] = 1104
			order[129] = 1105
			order[130] = 1106
			order[131] = 1107
			order[132] = 1108
			order[133] = 1109
			order[134] = 1110
			order[135] = 1111
			order[136] = 1112
			order[137] = 1113
			order[138] = 1114
			order[139] = 218
			order[140] = 220
			order[141] = 221
			order[142] = 222
			order[143] = 662
			order[144] = 663
			order[145] = 699
			order[146] = 761
			order[147] = 235
			order[148] = 236
			order[149] = 701
			order[150] = 696
			order[151] = 697
			order[152] = 698
			order[153] = 15
			order[154] = 376
			order[155] = 377
			order[156] = 23
			order[157] = 117
			order[158] = 1080
			order[159] = 1081
			order[160] = 59
			order[161] = 168
			order[162] = 432
			order[163] = 126
			order[164] = 427
			order[165] = 12
			order[166] = 13
			order[167] = 479
			order[168] = 497
			order[169] = 528
			order[170] = 529
			order[171] = 1091
			order[172] = 582
			order[173] = 121
			order[174] = 120
			order[175] = 775
			order[176] = 58
			order[177] = 354
			order[178] = 355
			order[179] = 193
			order[180] = 192
			order[181] = 640
			order[182] = 77
			order[183] = 203
			order[184] = 210
			order[185] = 211
			order[186] = 1094
			order[187] = 835
			order[188] = 836
			order[189] = 837
			order[190] = 838
			order[191] = 840
			order[192] = 1096
			order[193] = 1097
			order[194] = 1098
			order[195] = 1099
			order[196] = 388
			order[197] = 389
			order[198] = 841
			order[199] = 842
			order[200] = 843
			order[201] = 844
			order[202] = 846
			order[203] = 847
			order[204] = 957
			order[205] = 848
			order[206] = 849
			order[207] = 494
			order[208] = 0
			fix.Group.__init__(self, 73, 11, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

				class NoNestedPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						fix.Group.__init__(self, 804, 545, order)

		class NoTradingSessions(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 386, 336, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoStrategyParameters(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 958
				order[1] = 959
				order[2] = 960
				order[3] = 0
				fix.Group.__init__(self, 957, 958, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 539
			order[5] = 80
			order[6] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

class AllocationInstruction(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("J") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
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
			fix.Group.__init__(self, 73, 11, order)

		class NoNested2PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				fix.Group.__init__(self, 756, 757, order)

			class NoNested2PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					fix.Group.__init__(self, 806, 760, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(41)
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
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				fix.Group.__init__(self, 136, 137, order)

		class NoClearingInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 577
				order[1] = 0
				fix.Group.__init__(self, 576, 577, order)

		class NoDlvyInst(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				fix.Group.__init__(self, 85, 165, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

class ListCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("K") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

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
			order = fix.IntArray(14)
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
			fix.Group.__init__(self, 73, 11, order)

class AllocationInstructionAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("P") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(15)
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
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class QuoteRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("R") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(127)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
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
			order[91] = 110
			order[92] = 63
			order[93] = 64
			order[94] = 193
			order[95] = 192
			order[96] = 15
			order[97] = 232
			order[98] = 1
			order[99] = 660
			order[100] = 581
			order[101] = 555
			order[102] = 735
			order[103] = 692
			order[104] = 40
			order[105] = 62
			order[106] = 126
			order[107] = 60
			order[108] = 218
			order[109] = 220
			order[110] = 221
			order[111] = 222
			order[112] = 662
			order[113] = 663
			order[114] = 699
			order[115] = 761
			order[116] = 423
			order[117] = 44
			order[118] = 640
			order[119] = 235
			order[120] = 236
			order[121] = 701
			order[122] = 696
			order[123] = 697
			order[124] = 698
			order[125] = 453
			order[126] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(64)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 687
				order[51] = 685
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
				order[62] = 654
				order[63] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

				class NoNestedPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						fix.Group.__init__(self, 804, 545, order)

		class NoQuoteQualifiers(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 695
				order[1] = 0
				fix.Group.__init__(self, 735, 695, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

class Quote(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("S") )

	class NoQuoteQualifiers(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 695
			order[1] = 0
			fix.Group.__init__(self, 735, 695, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(69)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 685
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
			order[65] = 654
			order[66] = 1067
			order[67] = 1068
			order[68] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

class SettlementInstructions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("T") )

	class NoSettlInst(fix.Group):
		def __init__(self):
			order = fix.IntArray(26)
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
			fix.Group.__init__(self, 778, 162, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

		class NoDlvyInst(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				fix.Group.__init__(self, 85, 165, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

class MarketDataRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("V") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoMDEntryTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 269
			order[1] = 0
			fix.Group.__init__(self, 267, 269, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(76)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 711
			order[69] = 555
			order[70] = 15
			order[71] = 537
			order[72] = 63
			order[73] = 64
			order[74] = 271
			order[75] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[20] = 271
			order[21] = 1177
			order[22] = 1093
			order[23] = 272
			order[24] = 273
			order[25] = 274
			order[26] = 275
			order[27] = 336
			order[28] = 625
			order[29] = 326
			order[30] = 327
			order[31] = 276
			order[32] = 277
			order[33] = 282
			order[34] = 283
			order[35] = 284
			order[36] = 286
			order[37] = 59
			order[38] = 432
			order[39] = 126
			order[40] = 110
			order[41] = 18
			order[42] = 287
			order[43] = 37
			order[44] = 198
			order[45] = 299
			order[46] = 288
			order[47] = 289
			order[48] = 346
			order[49] = 290
			order[50] = 546
			order[51] = 811
			order[52] = 58
			order[53] = 354
			order[54] = 355
			order[55] = 1023
			order[56] = 528
			order[57] = 1024
			order[58] = 332
			order[59] = 333
			order[60] = 1020
			order[61] = 63
			order[62] = 64
			order[63] = 1070
			order[64] = 83
			order[65] = 1048
			order[66] = 1026
			order[67] = 1027
			order[68] = 453
			order[69] = 0
			fix.Group.__init__(self, 268, 269, order)

		class NoOfSecSizes(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				fix.Group.__init__(self, 1177, 1178, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

	class NoRoutingIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			fix.Group.__init__(self, 215, 216, order)

class MarketDataIncrementalRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("X") )

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(154)
			order[0] = 279
			order[1] = 285
			order[2] = 1173
			order[3] = 264
			order[4] = 269
			order[5] = 278
			order[6] = 280
			order[7] = 55
			order[8] = 65
			order[9] = 48
			order[10] = 22
			order[11] = 460
			order[12] = 1227
			order[13] = 1151
			order[14] = 461
			order[15] = 167
			order[16] = 762
			order[17] = 200
			order[18] = 541
			order[19] = 1079
			order[20] = 966
			order[21] = 1049
			order[22] = 965
			order[23] = 224
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
			order[39] = 206
			order[40] = 231
			order[41] = 969
			order[42] = 1146
			order[43] = 996
			order[44] = 1147
			order[45] = 1191
			order[46] = 1192
			order[47] = 1193
			order[48] = 1194
			order[49] = 1195
			order[50] = 1196
			order[51] = 1197
			order[52] = 1198
			order[53] = 1199
			order[54] = 1200
			order[55] = 201
			order[56] = 1244
			order[57] = 1242
			order[58] = 997
			order[59] = 223
			order[60] = 207
			order[61] = 970
			order[62] = 971
			order[63] = 106
			order[64] = 348
			order[65] = 349
			order[66] = 107
			order[67] = 350
			order[68] = 351
			order[69] = 691
			order[70] = 667
			order[71] = 875
			order[72] = 876
			order[73] = 873
			order[74] = 874
			order[75] = 711
			order[76] = 555
			order[77] = 291
			order[78] = 292
			order[79] = 270
			order[80] = 423
			order[81] = 235
			order[82] = 236
			order[83] = 701
			order[84] = 696
			order[85] = 697
			order[86] = 698
			order[87] = 218
			order[88] = 220
			order[89] = 221
			order[90] = 222
			order[91] = 662
			order[92] = 663
			order[93] = 699
			order[94] = 761
			order[95] = 40
			order[96] = 15
			order[97] = 271
			order[98] = 1177
			order[99] = 1093
			order[100] = 272
			order[101] = 273
			order[102] = 274
			order[103] = 275
			order[104] = 336
			order[105] = 625
			order[106] = 326
			order[107] = 327
			order[108] = 276
			order[109] = 277
			order[110] = 828
			order[111] = 574
			order[112] = 282
			order[113] = 283
			order[114] = 284
			order[115] = 286
			order[116] = 59
			order[117] = 432
			order[118] = 126
			order[119] = 110
			order[120] = 18
			order[121] = 287
			order[122] = 37
			order[123] = 198
			order[124] = 299
			order[125] = 1003
			order[126] = 288
			order[127] = 289
			order[128] = 346
			order[129] = 290
			order[130] = 546
			order[131] = 811
			order[132] = 451
			order[133] = 58
			order[134] = 354
			order[135] = 355
			order[136] = 1023
			order[137] = 528
			order[138] = 1024
			order[139] = 332
			order[140] = 333
			order[141] = 1020
			order[142] = 63
			order[143] = 64
			order[144] = 483
			order[145] = 60
			order[146] = 1070
			order[147] = 83
			order[148] = 1048
			order[149] = 1026
			order[150] = 1027
			order[151] = 1175
			order[152] = 453
			order[153] = 0
			fix.Group.__init__(self, 268, 279, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

		class NoOfSecSizes(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				fix.Group.__init__(self, 1177, 1178, order)

		class NoStatsIndicators(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 1176
				order[1] = 0
				fix.Group.__init__(self, 1175, 1176, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

	class NoRoutingIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 216
			order[1] = 217
			order[2] = 0
			fix.Group.__init__(self, 215, 216, order)

class MarketDataRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("Y") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAltMDSource(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 817
			order[1] = 0
			fix.Group.__init__(self, 816, 817, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoQuoteEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(80)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
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
			fix.Group.__init__(self, 295, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(69)
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
			order[29] = 1423
			order[30] = 1424
			order[31] = 1425
			order[32] = 1000
			order[33] = 1419
			order[34] = 435
			order[35] = 308
			order[36] = 306
			order[37] = 362
			order[38] = 363
			order[39] = 307
			order[40] = 364
			order[41] = 365
			order[42] = 877
			order[43] = 878
			order[44] = 972
			order[45] = 318
			order[46] = 879
			order[47] = 975
			order[48] = 973
			order[49] = 974
			order[50] = 810
			order[51] = 882
			order[52] = 883
			order[53] = 884
			order[54] = 885
			order[55] = 886
			order[56] = 1044
			order[57] = 1045
			order[58] = 1046
			order[59] = 1038
			order[60] = 1039
			order[61] = 315
			order[62] = 304
			order[63] = 1168
			order[64] = 1169
			order[65] = 1170
			order[66] = 893
			order[67] = 295
			order[68] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(96)
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
				order[18] = 225
				order[19] = 239
				order[20] = 226
				order[21] = 227
				order[22] = 228
				order[23] = 255
				order[24] = 543
				order[25] = 470
				order[26] = 471
				order[27] = 472
				order[28] = 240
				order[29] = 202
				order[30] = 947
				order[31] = 967
				order[32] = 968
				order[33] = 206
				order[34] = 231
				order[35] = 969
				order[36] = 1146
				order[37] = 996
				order[38] = 1147
				order[39] = 1191
				order[40] = 1192
				order[41] = 1193
				order[42] = 1194
				order[43] = 1195
				order[44] = 1196
				order[45] = 1197
				order[46] = 1198
				order[47] = 1199
				order[48] = 1200
				order[49] = 201
				order[50] = 1244
				order[51] = 1242
				order[52] = 997
				order[53] = 223
				order[54] = 207
				order[55] = 970
				order[56] = 971
				order[57] = 106
				order[58] = 348
				order[59] = 349
				order[60] = 107
				order[61] = 350
				order[62] = 351
				order[63] = 691
				order[64] = 667
				order[65] = 875
				order[66] = 876
				order[67] = 873
				order[68] = 874
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
				order[93] = 1167
				order[94] = 368
				order[95] = 0
				fix.Group.__init__(self, 295, 299, order)

			class NoSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					fix.Group.__init__(self, 454, 455, order)

			class NoEvents(fix.Group):
				def __init__(self):
					order = fix.IntArray(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					fix.Group.__init__(self, 864, 865, order)

			class NoInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					fix.Group.__init__(self, 1018, 1019, order)

				class NoInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						fix.Group.__init__(self, 1052, 1053, order)

			class NoLegs(fix.Group):
				def __init__(self):
					order = fix.IntArray(51)
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
					order[27] = 999
					order[28] = 1224
					order[29] = 1421
					order[30] = 1422
					order[31] = 1001
					order[32] = 1420
					order[33] = 615
					order[34] = 616
					order[35] = 617
					order[36] = 618
					order[37] = 619
					order[38] = 620
					order[39] = 621
					order[40] = 622
					order[41] = 623
					order[42] = 624
					order[43] = 556
					order[44] = 740
					order[45] = 739
					order[46] = 955
					order[47] = 956
					order[48] = 1358
					order[49] = 1017
					order[50] = 0
					fix.Group.__init__(self, 555, 600, order)

				class NoLegSecurityAltID(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 605
						order[1] = 606
						order[2] = 0
						fix.Group.__init__(self, 604, 605, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class TradingSessionStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("g") )

class TradingSessionStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("h") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoQuoteSets(fix.Group):
		def __init__(self):
			order = fix.IntArray(67)
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
			order[29] = 1423
			order[30] = 1424
			order[31] = 1425
			order[32] = 1000
			order[33] = 1419
			order[34] = 435
			order[35] = 308
			order[36] = 306
			order[37] = 362
			order[38] = 363
			order[39] = 307
			order[40] = 364
			order[41] = 365
			order[42] = 877
			order[43] = 878
			order[44] = 972
			order[45] = 318
			order[46] = 879
			order[47] = 975
			order[48] = 973
			order[49] = 974
			order[50] = 810
			order[51] = 882
			order[52] = 883
			order[53] = 884
			order[54] = 885
			order[55] = 886
			order[56] = 1044
			order[57] = 1045
			order[58] = 1046
			order[59] = 1038
			order[60] = 1039
			order[61] = 315
			order[62] = 367
			order[63] = 304
			order[64] = 893
			order[65] = 295
			order[66] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(94)
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
				order[18] = 225
				order[19] = 239
				order[20] = 226
				order[21] = 227
				order[22] = 228
				order[23] = 255
				order[24] = 543
				order[25] = 470
				order[26] = 471
				order[27] = 472
				order[28] = 240
				order[29] = 202
				order[30] = 947
				order[31] = 967
				order[32] = 968
				order[33] = 206
				order[34] = 231
				order[35] = 969
				order[36] = 1146
				order[37] = 996
				order[38] = 1147
				order[39] = 1191
				order[40] = 1192
				order[41] = 1193
				order[42] = 1194
				order[43] = 1195
				order[44] = 1196
				order[45] = 1197
				order[46] = 1198
				order[47] = 1199
				order[48] = 1200
				order[49] = 201
				order[50] = 1244
				order[51] = 1242
				order[52] = 997
				order[53] = 223
				order[54] = 207
				order[55] = 970
				order[56] = 971
				order[57] = 106
				order[58] = 348
				order[59] = 349
				order[60] = 107
				order[61] = 350
				order[62] = 351
				order[63] = 691
				order[64] = 667
				order[65] = 875
				order[66] = 876
				order[67] = 873
				order[68] = 874
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
				fix.Group.__init__(self, 295, 299, order)

			class NoSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 455
					order[1] = 456
					order[2] = 0
					fix.Group.__init__(self, 454, 455, order)

			class NoEvents(fix.Group):
				def __init__(self):
					order = fix.IntArray(6)
					order[0] = 865
					order[1] = 866
					order[2] = 1145
					order[3] = 867
					order[4] = 868
					order[5] = 0
					fix.Group.__init__(self, 864, 865, order)

			class NoInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1019
					order[1] = 1050
					order[2] = 1051
					order[3] = 1052
					order[4] = 0
					fix.Group.__init__(self, 1018, 1019, order)

				class NoInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1053
						order[1] = 1054
						order[2] = 0
						fix.Group.__init__(self, 1052, 1053, order)

			class NoLegs(fix.Group):
				def __init__(self):
					order = fix.IntArray(51)
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
					order[27] = 999
					order[28] = 1224
					order[29] = 1421
					order[30] = 1422
					order[31] = 1001
					order[32] = 1420
					order[33] = 615
					order[34] = 616
					order[35] = 617
					order[36] = 618
					order[37] = 619
					order[38] = 620
					order[39] = 621
					order[40] = 622
					order[41] = 623
					order[42] = 624
					order[43] = 556
					order[44] = 740
					order[45] = 739
					order[46] = 955
					order[47] = 956
					order[48] = 1358
					order[49] = 1017
					order[50] = 0
					fix.Group.__init__(self, 555, 600, order)

				class NoLegSecurityAltID(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 605
						order[1] = 606
						order[2] = 0
						fix.Group.__init__(self, 604, 605, order)

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
			order = fix.IntArray(10)
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
			order = fix.IntArray(79)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
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
			fix.Group.__init__(self, 428, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

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
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoDistribInsts(fix.Group):
		def __init__(self):
			order = fix.IntArray(9)
			order[0] = 477
			order[1] = 512
			order[2] = 478
			order[3] = 498
			order[4] = 499
			order[5] = 500
			order[6] = 501
			order[7] = 502
			order[8] = 0
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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

class OrderMassCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("q") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

class OrderMassCancelReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("r") )

	class NoAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 41
			order[1] = 535
			order[2] = 536
			order[3] = 0
			fix.Group.__init__(self, 534, 41, order)

	class NoNotAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			fix.Group.__init__(self, 1370, 1372, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

class NewOrderCross(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("s") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(44)
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
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

				class NoNestedPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						fix.Group.__init__(self, 804, 545, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

class CrossOrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("t") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(44)
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
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 79
				order[1] = 661
				order[2] = 736
				order[3] = 467
				order[4] = 539
				order[5] = 80
				order[6] = 0
				fix.Group.__init__(self, 78, 79, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

				class NoNestedPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						fix.Group.__init__(self, 804, 545, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

class CrossOrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("u") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(19)
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
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

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
			order = fix.IntArray(5)
			order[0] = 167
			order[1] = 762
			order[2] = 460
			order[3] = 461
			order[4] = 0
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

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class SecurityList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("y") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(102)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
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
			order[79] = 1201
			order[80] = 711
			order[81] = 15
			order[82] = 232
			order[83] = 555
			order[84] = 218
			order[85] = 220
			order[86] = 221
			order[87] = 222
			order[88] = 662
			order[89] = 663
			order[90] = 699
			order[91] = 761
			order[92] = 235
			order[93] = 236
			order[94] = 701
			order[95] = 696
			order[96] = 697
			order[97] = 698
			order[98] = 58
			order[99] = 354
			order[100] = 355
			order[101] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				fix.Group.__init__(self, 870, 871, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(59)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 690
				order[51] = 587
				order[52] = 683
				order[53] = 676
				order[54] = 677
				order[55] = 678
				order[56] = 679
				order[57] = 680
				order[58] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

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

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

	class NoDerivativeSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			fix.Group.__init__(self, 1218, 1219, order)

	class NoDerivativeEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			fix.Group.__init__(self, 1286, 1287, order)

	class NoDerivativeInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			fix.Group.__init__(self, 1292, 1293, order)

		class NoDerivativeInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				fix.Group.__init__(self, 1296, 1297, order)

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

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

	class NoDerivativeSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			fix.Group.__init__(self, 1218, 1219, order)

	class NoDerivativeEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			fix.Group.__init__(self, 1286, 1287, order)

	class NoDerivativeInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			fix.Group.__init__(self, 1292, 1293, order)

		class NoDerivativeInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				fix.Group.__init__(self, 1296, 1297, order)

	class NoDerivativeInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1313
			order[1] = 1314
			order[2] = 0
			fix.Group.__init__(self, 1311, 1313, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(81)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 1305
			order[69] = 1221
			order[70] = 1230
			order[71] = 1240
			order[72] = 15
			order[73] = 292
			order[74] = 668
			order[75] = 869
			order[76] = 555
			order[77] = 58
			order[78] = 354
			order[79] = 355
			order[80] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				fix.Group.__init__(self, 870, 871, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 948
			order[5] = 80
			order[6] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNested3PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 949
				order[1] = 950
				order[2] = 951
				order[3] = 952
				order[4] = 0
				fix.Group.__init__(self, 948, 949, order)

			class NoNested3PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 953
					order[1] = 954
					order[2] = 0
					fix.Group.__init__(self, 952, 953, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(68)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 690
			order[52] = 683
			order[53] = 1366
			order[54] = 670
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 675
			order[62] = 685
			order[63] = 1379
			order[64] = 1381
			order[65] = 1383
			order[66] = 1384
			order[67] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoLegAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
				order[6] = 0
				fix.Group.__init__(self, 670, 671, order)

			class NoNested2PartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					fix.Group.__init__(self, 756, 757, order)

				class NoNested2PartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						fix.Group.__init__(self, 806, 760, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

class MultilegOrderCancelReplace(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AC") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 79
			order[1] = 661
			order[2] = 736
			order[3] = 467
			order[4] = 948
			order[5] = 80
			order[6] = 0
			fix.Group.__init__(self, 78, 79, order)

		class NoNested3PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 949
				order[1] = 950
				order[2] = 951
				order[3] = 952
				order[4] = 0
				fix.Group.__init__(self, 948, 949, order)

			class NoNested3PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 953
					order[1] = 954
					order[2] = 0
					fix.Group.__init__(self, 952, 953, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(68)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 690
			order[52] = 683
			order[53] = 1366
			order[54] = 670
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 675
			order[62] = 685
			order[63] = 1379
			order[64] = 1381
			order[65] = 1383
			order[66] = 1384
			order[67] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoLegAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 671
				order[1] = 672
				order[2] = 756
				order[3] = 673
				order[4] = 674
				order[5] = 1367
				order[6] = 0
				fix.Group.__init__(self, 670, 671, order)

			class NoNested2PartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					fix.Group.__init__(self, 756, 757, order)

				class NoNested2PartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						fix.Group.__init__(self, 806, 760, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoStrategyParameters(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 958
			order[1] = 959
			order[2] = 960
			order[3] = 0
			fix.Group.__init__(self, 957, 958, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoDates(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 75
			order[1] = 779
			order[2] = 60
			order[3] = 0
			fix.Group.__init__(self, 580, 75, order)

class TradeCaptureReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AE") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(73)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 690
			order[52] = 990
			order[53] = 1152
			order[54] = 683
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 637
			order[62] = 675
			order[63] = 1073
			order[64] = 1074
			order[65] = 1075
			order[66] = 1379
			order[67] = 1381
			order[68] = 1383
			order[69] = 1384
			order[70] = 1418
			order[71] = 1342
			order[72] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

		class NoOfLegUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(16)
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
				fix.Group.__init__(self, 1342, 1330, order)

			class NoUnderlyingLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1335
					order[1] = 1336
					order[2] = 0
					fix.Group.__init__(self, 1334, 1335, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(75)
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
			order[13] = 430
			order[14] = 1154
			order[15] = 1155
			order[16] = 453
			order[17] = 1
			order[18] = 660
			order[19] = 581
			order[20] = 81
			order[21] = 1093
			order[22] = 575
			order[23] = 576
			order[24] = 578
			order[25] = 579
			order[26] = 821
			order[27] = 376
			order[28] = 377
			order[29] = 528
			order[30] = 529
			order[31] = 582
			order[32] = 40
			order[33] = 18
			order[34] = 483
			order[35] = 336
			order[36] = 625
			order[37] = 943
			order[38] = 12
			order[39] = 13
			order[40] = 479
			order[41] = 497
			order[42] = 157
			order[43] = 230
			order[44] = 158
			order[45] = 159
			order[46] = 738
			order[47] = 920
			order[48] = 921
			order[49] = 922
			order[50] = 238
			order[51] = 237
			order[52] = 118
			order[53] = 119
			order[54] = 155
			order[55] = 156
			order[56] = 77
			order[57] = 58
			order[58] = 354
			order[59] = 355
			order[60] = 752
			order[61] = 518
			order[62] = 232
			order[63] = 136
			order[64] = 825
			order[65] = 826
			order[66] = 591
			order[67] = 70
			order[68] = 78
			order[69] = 1016
			order[70] = 1158
			order[71] = 1072
			order[72] = 1057
			order[73] = 1139
			order[74] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

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

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				fix.Group.__init__(self, 136, 137, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(11)
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
				fix.Group.__init__(self, 78, 79, order)

			class NoNested2PartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					fix.Group.__init__(self, 756, 757, order)

				class NoNested2PartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						fix.Group.__init__(self, 806, 760, order)

		class NoSideTrdRegTS(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1012
				order[1] = 1013
				order[2] = 1014
				order[3] = 0
				fix.Group.__init__(self, 1016, 1012, order)

		class NoSettlDetails(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				fix.Group.__init__(self, 1158, 1164, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

	class NoTrdRepIndicators(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1388
			order[1] = 1389
			order[2] = 0
			fix.Group.__init__(self, 1387, 1388, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

class QuoteRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AG") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(125)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
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
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(64)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 687
				order[51] = 685
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
				order[62] = 654
				order[63] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

			class NoNestedPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 524
					order[1] = 525
					order[2] = 538
					order[3] = 804
					order[4] = 0
					fix.Group.__init__(self, 539, 524, order)

				class NoNestedPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 545
						order[1] = 805
						order[2] = 0
						fix.Group.__init__(self, 804, 545, order)

		class NoQuoteQualifiers(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 695
				order[1] = 0
				fix.Group.__init__(self, 735, 695, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

class RFQRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AH") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(76)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 711
			order[69] = 555
			order[70] = 140
			order[71] = 303
			order[72] = 537
			order[73] = 336
			order[74] = 625
			order[75] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

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
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(58)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 685
			order[52] = 690
			order[53] = 587
			order[54] = 588
			order[55] = 683
			order[56] = 539
			order[57] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoQuoteQualifiers(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 695
			order[1] = 0
			fix.Group.__init__(self, 735, 695, order)

class QuoteResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AJ") )

	class NoQuoteQualifiers(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 695
			order[1] = 0
			fix.Group.__init__(self, 735, 695, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(69)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 685
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
			order[65] = 654
			order[66] = 1067
			order[67] = 1068
			order[68] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

class Confirmation(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AK") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
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
			fix.Group.__init__(self, 73, 11, order)

		class NoNested2PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				fix.Group.__init__(self, 756, 757, order)

			class NoNested2PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					fix.Group.__init__(self, 806, 760, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoCapacities(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 528
			order[1] = 529
			order[2] = 863
			order[3] = 0
			fix.Group.__init__(self, 862, 528, order)

	class NoDlvyInst(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			fix.Group.__init__(self, 85, 165, order)

		class NoSettlPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				fix.Group.__init__(self, 781, 782, order)

			class NoSettlPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					fix.Group.__init__(self, 801, 785, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

class PositionMaintenanceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AL") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
			fix.Group.__init__(self, 702, 703, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

class PositionMaintenanceReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AM") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
			fix.Group.__init__(self, 702, 703, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

class RequestForPositions(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AN") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

class RequestForPositionsAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AO") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

class PositionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AP") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(66)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 732
			order[62] = 733
			order[63] = 1037
			order[64] = 984
			order[65] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

		class NoUnderlyingAmounts(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 985
				order[1] = 986
				order[2] = 987
				order[3] = 988
				order[4] = 0
				fix.Group.__init__(self, 984, 985, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
			fix.Group.__init__(self, 702, 703, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

class TradeCaptureReportRequestAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AQ") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class TradeCaptureReportAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AR") )

	class NoRootPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1117
			order[1] = 1118
			order[2] = 1119
			order[3] = 1120
			order[4] = 0
			fix.Group.__init__(self, 1116, 1117, order)

		class NoRootPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1121
				order[1] = 1122
				order[2] = 0
				fix.Group.__init__(self, 1120, 1121, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRepIndicators(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1388
			order[1] = 1389
			order[2] = 0
			fix.Group.__init__(self, 1387, 1388, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(73)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 687
			order[51] = 690
			order[52] = 990
			order[53] = 1152
			order[54] = 683
			order[55] = 564
			order[56] = 565
			order[57] = 539
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 637
			order[62] = 675
			order[63] = 1073
			order[64] = 1074
			order[65] = 1075
			order[66] = 1379
			order[67] = 1381
			order[68] = 1383
			order[69] = 1384
			order[70] = 1418
			order[71] = 1342
			order[72] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

		class NoOfLegUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(16)
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
				fix.Group.__init__(self, 1342, 1330, order)

			class NoUnderlyingLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1335
					order[1] = 1336
					order[2] = 0
					fix.Group.__init__(self, 1334, 1335, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[17] = 376
			order[18] = 377
			order[19] = 528
			order[20] = 529
			order[21] = 582
			order[22] = 40
			order[23] = 18
			order[24] = 483
			order[25] = 336
			order[26] = 625
			order[27] = 943
			order[28] = 430
			order[29] = 1154
			order[30] = 1155
			order[31] = 12
			order[32] = 13
			order[33] = 479
			order[34] = 497
			order[35] = 157
			order[36] = 230
			order[37] = 158
			order[38] = 159
			order[39] = 738
			order[40] = 920
			order[41] = 921
			order[42] = 922
			order[43] = 238
			order[44] = 237
			order[45] = 118
			order[46] = 119
			order[47] = 155
			order[48] = 156
			order[49] = 77
			order[50] = 752
			order[51] = 518
			order[52] = 232
			order[53] = 136
			order[54] = 825
			order[55] = 1158
			order[56] = 826
			order[57] = 591
			order[58] = 70
			order[59] = 78
			order[60] = 1072
			order[61] = 1057
			order[62] = 1009
			order[63] = 1005
			order[64] = 1006
			order[65] = 1007
			order[66] = 83
			order[67] = 1008
			order[68] = 1016
			order[69] = 0
			fix.Group.__init__(self, 552, 54, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

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

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				fix.Group.__init__(self, 136, 137, order)

		class NoSettlDetails(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				fix.Group.__init__(self, 1158, 1164, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

		class NoAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(11)
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
				fix.Group.__init__(self, 78, 79, order)

			class NoNested2PartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 757
					order[1] = 758
					order[2] = 759
					order[3] = 806
					order[4] = 0
					fix.Group.__init__(self, 756, 757, order)

				class NoNested2PartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 760
						order[1] = 807
						order[2] = 0
						fix.Group.__init__(self, 806, 760, order)

		class NoSideTrdRegTS(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1012
				order[1] = 1013
				order[2] = 1014
				order[3] = 0
				fix.Group.__init__(self, 1016, 1012, order)

class AllocationReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AS") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
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
			fix.Group.__init__(self, 73, 11, order)

		class NoNested2PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				fix.Group.__init__(self, 756, 757, order)

			class NoNested2PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					fix.Group.__init__(self, 806, 760, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(41)
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
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				fix.Group.__init__(self, 136, 137, order)

		class NoClearingInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 577
				order[1] = 0
				fix.Group.__init__(self, 576, 577, order)

		class NoDlvyInst(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				fix.Group.__init__(self, 85, 165, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

class AllocationReportAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AT") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(15)
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
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

class ConfirmationAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AU") )

class SettlementInstructionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AV") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

class AssignmentReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AW") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
			fix.Group.__init__(self, 702, 703, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

class CollateralRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AX") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(63)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 944
			order[62] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

class CollateralAssignment(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AY") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(63)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 944
			order[62] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoDlvyInst(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			fix.Group.__init__(self, 85, 165, order)

		class NoSettlPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				fix.Group.__init__(self, 781, 782, order)

			class NoSettlPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					fix.Group.__init__(self, 801, 785, order)

class CollateralResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AZ") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(63)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 944
			order[62] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

class CollateralReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BA") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoDlvyInst(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			fix.Group.__init__(self, 85, 165, order)

		class NoSettlPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				fix.Group.__init__(self, 781, 782, order)

			class NoSettlPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					fix.Group.__init__(self, 801, 785, order)

class CollateralInquiry(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BB") )

	class NoCollInquiryQualifier(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 896
			order[1] = 0
			fix.Group.__init__(self, 938, 896, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoTrdRegTimestamps(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 769
			order[1] = 770
			order[2] = 771
			order[3] = 1033
			order[4] = 1034
			order[5] = 1035
			order[6] = 0
			fix.Group.__init__(self, 768, 769, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoDlvyInst(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 165
			order[1] = 787
			order[2] = 781
			order[3] = 0
			fix.Group.__init__(self, 85, 165, order)

		class NoSettlPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 782
				order[1] = 783
				order[2] = 784
				order[3] = 801
				order[4] = 0
				fix.Group.__init__(self, 781, 782, order)

			class NoSettlPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 785
					order[1] = 786
					order[2] = 0
					fix.Group.__init__(self, 801, 785, order)

class NetworkCounterpartySystemStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BC") )

	class NoCompIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 930
			order[1] = 931
			order[2] = 283
			order[3] = 284
			order[4] = 0
			fix.Group.__init__(self, 936, 930, order)

class NetworkCounterpartySystemStatusResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BD") )

	class NoCompIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 930
			order[1] = 931
			order[2] = 283
			order[3] = 284
			order[4] = 928
			order[5] = 929
			order[6] = 0
			fix.Group.__init__(self, 936, 930, order)

class UserRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BE") )

class UserResponse(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BF") )

class CollateralInquiryAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BG") )

	class NoCollInquiryQualifier(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 896
			order[1] = 0
			fix.Group.__init__(self, 938, 896, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 17
			order[1] = 0
			fix.Group.__init__(self, 124, 17, order)

	class NoTrades(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 571
			order[1] = 818
			order[2] = 0
			fix.Group.__init__(self, 897, 571, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

class ConfirmationRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BH") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
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
			fix.Group.__init__(self, 73, 11, order)

		class NoNested2PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				fix.Group.__init__(self, 756, 757, order)

			class NoNested2PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					fix.Group.__init__(self, 806, 760, order)

class ContraryIntentionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BO") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoExpiration(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 982
			order[1] = 983
			order[2] = 0
			fix.Group.__init__(self, 981, 982, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

class SecurityDefinitionUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BP") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

class SecurityListUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BK") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(103)
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
			order[18] = 225
			order[19] = 239
			order[20] = 226
			order[21] = 227
			order[22] = 228
			order[23] = 255
			order[24] = 543
			order[25] = 470
			order[26] = 471
			order[27] = 472
			order[28] = 240
			order[29] = 202
			order[30] = 947
			order[31] = 967
			order[32] = 968
			order[33] = 206
			order[34] = 231
			order[35] = 969
			order[36] = 1146
			order[37] = 996
			order[38] = 1147
			order[39] = 1191
			order[40] = 1192
			order[41] = 1193
			order[42] = 1194
			order[43] = 1195
			order[44] = 1196
			order[45] = 1197
			order[46] = 1198
			order[47] = 1199
			order[48] = 1200
			order[49] = 201
			order[50] = 1244
			order[51] = 1242
			order[52] = 997
			order[53] = 223
			order[54] = 207
			order[55] = 970
			order[56] = 971
			order[57] = 106
			order[58] = 348
			order[59] = 349
			order[60] = 107
			order[61] = 350
			order[62] = 351
			order[63] = 691
			order[64] = 667
			order[65] = 875
			order[66] = 876
			order[67] = 873
			order[68] = 874
			order[69] = 668
			order[70] = 869
			order[71] = 913
			order[72] = 914
			order[73] = 915
			order[74] = 918
			order[75] = 788
			order[76] = 916
			order[77] = 917
			order[78] = 919
			order[79] = 898
			order[80] = 1201
			order[81] = 711
			order[82] = 15
			order[83] = 232
			order[84] = 555
			order[85] = 218
			order[86] = 220
			order[87] = 221
			order[88] = 222
			order[89] = 662
			order[90] = 663
			order[91] = 699
			order[92] = 761
			order[93] = 235
			order[94] = 236
			order[95] = 701
			order[96] = 696
			order[97] = 697
			order[98] = 698
			order[99] = 58
			order[100] = 354
			order[101] = 355
			order[102] = 0
			fix.Group.__init__(self, 146, 1324, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				fix.Group.__init__(self, 870, 871, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[28] = 1423
				order[29] = 1424
				order[30] = 1425
				order[31] = 1000
				order[32] = 1419
				order[33] = 435
				order[34] = 308
				order[35] = 306
				order[36] = 362
				order[37] = 363
				order[38] = 307
				order[39] = 364
				order[40] = 365
				order[41] = 877
				order[42] = 878
				order[43] = 972
				order[44] = 318
				order[45] = 879
				order[46] = 975
				order[47] = 973
				order[48] = 974
				order[49] = 810
				order[50] = 882
				order[51] = 883
				order[52] = 884
				order[53] = 885
				order[54] = 886
				order[55] = 1044
				order[56] = 1045
				order[57] = 1046
				order[58] = 1038
				order[59] = 1039
				order[60] = 315
				order[61] = 0
				fix.Group.__init__(self, 711, 311, order)

			class NoUnderlyingSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 458
					order[1] = 459
					order[2] = 0
					fix.Group.__init__(self, 457, 458, order)

			class NoUnderlyingStips(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 888
					order[1] = 889
					order[2] = 0
					fix.Group.__init__(self, 887, 888, order)

			class NoUndlyInstrumentParties(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 1059
					order[1] = 1060
					order[2] = 1061
					order[3] = 1062
					order[4] = 0
					fix.Group.__init__(self, 1058, 1059, order)

				class NoUndlyInstrumentPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 1063
						order[1] = 1064
						order[2] = 0
						fix.Group.__init__(self, 1062, 1063, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(59)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 690
				order[51] = 587
				order[52] = 683
				order[53] = 676
				order[54] = 677
				order[55] = 678
				order[56] = 679
				order[57] = 680
				order[58] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

class AdjustedPositionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BL") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 976
			order[5] = 539
			order[6] = 0
			fix.Group.__init__(self, 702, 703, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(69)
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
			order[35] = 1146
			order[36] = 996
			order[37] = 1147
			order[38] = 1191
			order[39] = 1192
			order[40] = 1193
			order[41] = 1194
			order[42] = 1195
			order[43] = 1196
			order[44] = 1197
			order[45] = 1198
			order[46] = 1199
			order[47] = 1200
			order[48] = 201
			order[49] = 1244
			order[50] = 1242
			order[51] = 997
			order[52] = 223
			order[53] = 207
			order[54] = 970
			order[55] = 971
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
			order[66] = 873
			order[67] = 874
			order[68] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

class AllocationInstructionAlert(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BM") )

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(10)
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
			fix.Group.__init__(self, 73, 11, order)

		class NoNested2PartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 757
				order[1] = 758
				order[2] = 759
				order[3] = 806
				order[4] = 0
				fix.Group.__init__(self, 756, 757, order)

			class NoNested2PartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 760
					order[1] = 807
					order[2] = 0
					fix.Group.__init__(self, 806, 760, order)

	class NoExecs(fix.Group):
		def __init__(self):
			order = fix.IntArray(9)
			order[0] = 32
			order[1] = 17
			order[2] = 527
			order[3] = 31
			order[4] = 669
			order[5] = 29
			order[6] = 1003
			order[7] = 1041
			order[8] = 0
			fix.Group.__init__(self, 124, 32, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 871
			order[1] = 872
			order[2] = 0
			fix.Group.__init__(self, 870, 871, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoAllocs(fix.Group):
		def __init__(self):
			order = fix.IntArray(41)
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
			fix.Group.__init__(self, 78, 79, order)

		class NoNestedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 524
				order[1] = 525
				order[2] = 538
				order[3] = 804
				order[4] = 0
				fix.Group.__init__(self, 539, 524, order)

			class NoNestedPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 545
					order[1] = 805
					order[2] = 0
					fix.Group.__init__(self, 804, 545, order)

		class NoMiscFees(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 137
				order[1] = 138
				order[2] = 139
				order[3] = 891
				order[4] = 0
				fix.Group.__init__(self, 136, 137, order)

		class NoClearingInstructions(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 577
				order[1] = 0
				fix.Group.__init__(self, 576, 577, order)

		class NoDlvyInst(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 165
				order[1] = 787
				order[2] = 781
				order[3] = 0
				fix.Group.__init__(self, 85, 165, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

class ExecutionAcknowledgement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BN") )

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(62)
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
			order[28] = 1423
			order[29] = 1424
			order[30] = 1425
			order[31] = 1000
			order[32] = 1419
			order[33] = 435
			order[34] = 308
			order[35] = 306
			order[36] = 362
			order[37] = 363
			order[38] = 307
			order[39] = 364
			order[40] = 365
			order[41] = 877
			order[42] = 878
			order[43] = 972
			order[44] = 318
			order[45] = 879
			order[46] = 975
			order[47] = 973
			order[48] = 974
			order[49] = 810
			order[50] = 882
			order[51] = 883
			order[52] = 884
			order[53] = 885
			order[54] = 886
			order[55] = 1044
			order[56] = 1045
			order[57] = 1046
			order[58] = 1038
			order[59] = 1039
			order[60] = 315
			order[61] = 0
			fix.Group.__init__(self, 711, 311, order)

		class NoUnderlyingSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 458
				order[1] = 459
				order[2] = 0
				fix.Group.__init__(self, 457, 458, order)

		class NoUnderlyingStips(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 888
				order[1] = 889
				order[2] = 0
				fix.Group.__init__(self, 887, 888, order)

		class NoUndlyInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1059
				order[1] = 1060
				order[2] = 1061
				order[3] = 1062
				order[4] = 0
				fix.Group.__init__(self, 1058, 1059, order)

			class NoUndlyInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1063
					order[1] = 1064
					order[2] = 0
					fix.Group.__init__(self, 1062, 1063, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(51)
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
			order[27] = 999
			order[28] = 1224
			order[29] = 1421
			order[30] = 1422
			order[31] = 1001
			order[32] = 1420
			order[33] = 615
			order[34] = 616
			order[35] = 617
			order[36] = 618
			order[37] = 619
			order[38] = 620
			order[39] = 621
			order[40] = 622
			order[41] = 623
			order[42] = 624
			order[43] = 556
			order[44] = 740
			order[45] = 739
			order[46] = 955
			order[47] = 956
			order[48] = 1358
			order[49] = 1017
			order[50] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 605
				order[1] = 606
				order[2] = 0
				fix.Group.__init__(self, 604, 605, order)

class TradingSessionList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BJ") )

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(21)
			order[0] = 336
			order[1] = 625
			order[2] = 207
			order[3] = 1301
			order[4] = 1300
			order[5] = 1326
			order[6] = 338
			order[7] = 339
			order[8] = 325
			order[9] = 340
			order[10] = 567
			order[11] = 341
			order[12] = 342
			order[13] = 343
			order[14] = 344
			order[15] = 345
			order[16] = 387
			order[17] = 58
			order[18] = 354
			order[19] = 355
			order[20] = 0
			fix.Group.__init__(self, 386, 336, order)

		class NoOrdTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 40
				order[1] = 0
				fix.Group.__init__(self, 1237, 40, order)

		class NoTimeInForceRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 59
				order[1] = 0
				fix.Group.__init__(self, 1239, 59, order)

		class NoExecInstRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 1308
				order[1] = 0
				fix.Group.__init__(self, 1232, 1308, order)

		class NoMatchRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1142
				order[1] = 574
				order[2] = 0
				fix.Group.__init__(self, 1235, 1142, order)

		class NoMDFeedTypes(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1022
				order[1] = 264
				order[2] = 1021
				order[3] = 0
				fix.Group.__init__(self, 1141, 1022, order)

class TradingSessionListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BI") )

class SettlementObligationReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BQ") )

	class NoSettlOblig(fix.Group):
		def __init__(self):
			order = fix.IntArray(84)
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
			order[27] = 225
			order[28] = 239
			order[29] = 226
			order[30] = 227
			order[31] = 228
			order[32] = 255
			order[33] = 543
			order[34] = 470
			order[35] = 471
			order[36] = 472
			order[37] = 240
			order[38] = 202
			order[39] = 947
			order[40] = 967
			order[41] = 968
			order[42] = 206
			order[43] = 231
			order[44] = 969
			order[45] = 1146
			order[46] = 996
			order[47] = 1147
			order[48] = 1191
			order[49] = 1192
			order[50] = 1193
			order[51] = 1194
			order[52] = 1195
			order[53] = 1196
			order[54] = 1197
			order[55] = 1198
			order[56] = 1199
			order[57] = 1200
			order[58] = 201
			order[59] = 1244
			order[60] = 1242
			order[61] = 997
			order[62] = 223
			order[63] = 207
			order[64] = 970
			order[65] = 971
			order[66] = 106
			order[67] = 348
			order[68] = 349
			order[69] = 107
			order[70] = 350
			order[71] = 351
			order[72] = 691
			order[73] = 667
			order[74] = 875
			order[75] = 876
			order[76] = 873
			order[77] = 874
			order[78] = 453
			order[79] = 168
			order[80] = 126
			order[81] = 779
			order[82] = 1158
			order[83] = 0
			fix.Group.__init__(self, 1165, 430, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 448
				order[1] = 447
				order[2] = 452
				order[3] = 802
				order[4] = 0
				fix.Group.__init__(self, 453, 448, order)

			class NoPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 523
					order[1] = 803
					order[2] = 0
					fix.Group.__init__(self, 802, 523, order)

		class NoSettlDetails(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1164
				order[1] = 781
				order[2] = 0
				fix.Group.__init__(self, 1158, 1164, order)

			class NoSettlPartyIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(5)
					order[0] = 782
					order[1] = 783
					order[2] = 784
					order[3] = 801
					order[4] = 0
					fix.Group.__init__(self, 781, 782, order)

				class NoSettlPartySubIDs(fix.Group):
					def __init__(self):
						order = fix.IntArray(3)
						order[0] = 785
						order[1] = 786
						order[2] = 0
						fix.Group.__init__(self, 801, 785, order)

class DerivativeSecurityListUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BR") )

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

	class NoDerivativeSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1219
			order[1] = 1220
			order[2] = 0
			fix.Group.__init__(self, 1218, 1219, order)

	class NoDerivativeEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 1287
			order[1] = 1288
			order[2] = 1289
			order[3] = 1290
			order[4] = 1291
			order[5] = 0
			fix.Group.__init__(self, 1286, 1287, order)

	class NoDerivativeInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1293
			order[1] = 1294
			order[2] = 1295
			order[3] = 1296
			order[4] = 0
			fix.Group.__init__(self, 1292, 1293, order)

		class NoDerivativeInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1297
				order[1] = 1298
				order[2] = 0
				fix.Group.__init__(self, 1296, 1297, order)

	class NoDerivativeInstrAttrib(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1313
			order[1] = 1314
			order[2] = 0
			fix.Group.__init__(self, 1311, 1313, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

		class NoTickRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1206
				order[1] = 1207
				order[2] = 1208
				order[3] = 1209
				order[4] = 0
				fix.Group.__init__(self, 1205, 1206, order)

		class NoLotTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1093
				order[1] = 1231
				order[2] = 0
				fix.Group.__init__(self, 1234, 1093, order)

		class NoTradingSessionRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 336
				order[1] = 625
				order[2] = 0
				fix.Group.__init__(self, 1309, 336, order)

			class NoOrdTypeRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 40
					order[1] = 0
					fix.Group.__init__(self, 1237, 40, order)

			class NoTimeInForceRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 59
					order[1] = 0
					fix.Group.__init__(self, 1239, 59, order)

			class NoExecInstRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1308
					order[1] = 0
					fix.Group.__init__(self, 1232, 1308, order)

			class NoMatchRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1142
					order[1] = 574
					order[2] = 0
					fix.Group.__init__(self, 1235, 1142, order)

			class NoMDFeedTypes(fix.Group):
				def __init__(self):
					order = fix.IntArray(4)
					order[0] = 1022
					order[1] = 264
					order[2] = 1021
					order[3] = 0
					fix.Group.__init__(self, 1141, 1022, order)

		class NoNestedInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1210
				order[1] = 1211
				order[2] = 0
				fix.Group.__init__(self, 1312, 1210, order)

		class NoStrikeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 1223
				order[1] = 1202
				order[2] = 1203
				order[3] = 1204
				order[4] = 1304
				order[5] = 1236
				order[6] = 0
				fix.Group.__init__(self, 1201, 1223, order)

			class NoMaturityRules(fix.Group):
				def __init__(self):
					order = fix.IntArray(7)
					order[0] = 1222
					order[1] = 1303
					order[2] = 1302
					order[3] = 1241
					order[4] = 1226
					order[5] = 1229
					order[6] = 0
					fix.Group.__init__(self, 1236, 1222, order)

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(82)
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
			order[19] = 225
			order[20] = 239
			order[21] = 226
			order[22] = 227
			order[23] = 228
			order[24] = 255
			order[25] = 543
			order[26] = 470
			order[27] = 471
			order[28] = 472
			order[29] = 240
			order[30] = 202
			order[31] = 947
			order[32] = 967
			order[33] = 968
			order[34] = 206
			order[35] = 231
			order[36] = 969
			order[37] = 1146
			order[38] = 996
			order[39] = 1147
			order[40] = 1191
			order[41] = 1192
			order[42] = 1193
			order[43] = 1194
			order[44] = 1195
			order[45] = 1196
			order[46] = 1197
			order[47] = 1198
			order[48] = 1199
			order[49] = 1200
			order[50] = 201
			order[51] = 1244
			order[52] = 1242
			order[53] = 997
			order[54] = 223
			order[55] = 207
			order[56] = 970
			order[57] = 971
			order[58] = 106
			order[59] = 348
			order[60] = 349
			order[61] = 107
			order[62] = 350
			order[63] = 351
			order[64] = 691
			order[65] = 667
			order[66] = 875
			order[67] = 876
			order[68] = 873
			order[69] = 874
			order[70] = 668
			order[71] = 869
			order[72] = 1305
			order[73] = 1221
			order[74] = 1230
			order[75] = 1240
			order[76] = 15
			order[77] = 555
			order[78] = 58
			order[79] = 354
			order[80] = 355
			order[81] = 0
			fix.Group.__init__(self, 146, 1324, order)

		class NoSecurityAltID(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 455
				order[1] = 456
				order[2] = 0
				fix.Group.__init__(self, 454, 455, order)

		class NoEvents(fix.Group):
			def __init__(self):
				order = fix.IntArray(6)
				order[0] = 865
				order[1] = 866
				order[2] = 1145
				order[3] = 867
				order[4] = 868
				order[5] = 0
				fix.Group.__init__(self, 864, 865, order)

		class NoInstrumentParties(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1019
				order[1] = 1050
				order[2] = 1051
				order[3] = 1052
				order[4] = 0
				fix.Group.__init__(self, 1018, 1019, order)

			class NoInstrumentPartySubIDs(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 1053
					order[1] = 1054
					order[2] = 0
					fix.Group.__init__(self, 1052, 1053, order)

		class NoInstrAttrib(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 871
				order[1] = 872
				order[2] = 0
				fix.Group.__init__(self, 870, 871, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(51)
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
				order[27] = 999
				order[28] = 1224
				order[29] = 1421
				order[30] = 1422
				order[31] = 1001
				order[32] = 1420
				order[33] = 615
				order[34] = 616
				order[35] = 617
				order[36] = 618
				order[37] = 619
				order[38] = 620
				order[39] = 621
				order[40] = 622
				order[41] = 623
				order[42] = 624
				order[43] = 556
				order[44] = 740
				order[45] = 739
				order[46] = 955
				order[47] = 956
				order[48] = 1358
				order[49] = 1017
				order[50] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegSecurityAltID(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 605
					order[1] = 606
					order[2] = 0
					fix.Group.__init__(self, 604, 605, order)

class TradingSessionListUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BS") )

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(21)
			order[0] = 336
			order[1] = 625
			order[2] = 207
			order[3] = 1301
			order[4] = 1300
			order[5] = 1326
			order[6] = 338
			order[7] = 339
			order[8] = 325
			order[9] = 340
			order[10] = 567
			order[11] = 341
			order[12] = 342
			order[13] = 343
			order[14] = 344
			order[15] = 345
			order[16] = 387
			order[17] = 58
			order[18] = 354
			order[19] = 355
			order[20] = 0
			fix.Group.__init__(self, 386, 336, order)

		class NoOrdTypeRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 40
				order[1] = 0
				fix.Group.__init__(self, 1237, 40, order)

		class NoTimeInForceRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 59
				order[1] = 0
				fix.Group.__init__(self, 1239, 59, order)

		class NoExecInstRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(2)
				order[0] = 1308
				order[1] = 0
				fix.Group.__init__(self, 1232, 1308, order)

		class NoMatchRules(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1142
				order[1] = 574
				order[2] = 0
				fix.Group.__init__(self, 1235, 1142, order)

		class NoMDFeedTypes(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1022
				order[1] = 264
				order[2] = 1021
				order[3] = 0
				fix.Group.__init__(self, 1141, 1022, order)

class MarketDefinitionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BT") )

class MarketDefinition(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BU") )

	class NoTickRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1206
			order[1] = 1207
			order[2] = 1208
			order[3] = 1209
			order[4] = 0
			fix.Group.__init__(self, 1205, 1206, order)

	class NoLotTypeRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1093
			order[1] = 1231
			order[2] = 0
			fix.Group.__init__(self, 1234, 1093, order)

	class NoOrdTypeRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 40
			order[1] = 0
			fix.Group.__init__(self, 1237, 40, order)

	class NoTimeInForceRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 59
			order[1] = 0
			fix.Group.__init__(self, 1239, 59, order)

	class NoExecInstRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 1308
			order[1] = 0
			fix.Group.__init__(self, 1232, 1308, order)

class MarketDefinitionUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BV") )

	class NoTickRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1206
			order[1] = 1207
			order[2] = 1208
			order[3] = 1209
			order[4] = 0
			fix.Group.__init__(self, 1205, 1206, order)

	class NoLotTypeRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1093
			order[1] = 1231
			order[2] = 0
			fix.Group.__init__(self, 1234, 1093, order)

	class NoOrdTypeRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 40
			order[1] = 0
			fix.Group.__init__(self, 1237, 40, order)

	class NoTimeInForceRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 59
			order[1] = 0
			fix.Group.__init__(self, 1239, 59, order)

	class NoExecInstRules(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 1308
			order[1] = 0
			fix.Group.__init__(self, 1232, 1308, order)

class ApplicationMessageRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BW") )

	class NoApplIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 0
			fix.Group.__init__(self, 1351, 1355, order)

class ApplicationMessageRequestAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BX") )

	class NoApplIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 1357
			order[4] = 1354
			order[5] = 0
			fix.Group.__init__(self, 1351, 1355, order)

class ApplicationMessageReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BY") )

	class NoApplIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1355
			order[1] = 1399
			order[2] = 1357
			order[3] = 0
			fix.Group.__init__(self, 1351, 1355, order)

class OrderMassActionReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BZ") )

	class NoAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 41
			order[1] = 535
			order[2] = 536
			order[3] = 0
			fix.Group.__init__(self, 534, 41, order)

	class NoNotAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			fix.Group.__init__(self, 1370, 1372, order)

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

class OrderMassActionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CA") )

	class NoPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 802
			order[4] = 0
			fix.Group.__init__(self, 453, 448, order)

		class NoPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 523
				order[1] = 803
				order[2] = 0
				fix.Group.__init__(self, 802, 523, order)

	class NoSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 455
			order[1] = 456
			order[2] = 0
			fix.Group.__init__(self, 454, 455, order)

	class NoEvents(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 865
			order[1] = 866
			order[2] = 1145
			order[3] = 867
			order[4] = 868
			order[5] = 0
			fix.Group.__init__(self, 864, 865, order)

	class NoInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1019
			order[1] = 1050
			order[2] = 1051
			order[3] = 1052
			order[4] = 0
			fix.Group.__init__(self, 1018, 1019, order)

		class NoInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1053
				order[1] = 1054
				order[2] = 0
				fix.Group.__init__(self, 1052, 1053, order)

	class NoUnderlyingSecurityAltID(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 458
			order[1] = 459
			order[2] = 0
			fix.Group.__init__(self, 457, 458, order)

	class NoUnderlyingStips(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 888
			order[1] = 889
			order[2] = 0
			fix.Group.__init__(self, 887, 888, order)

	class NoUndlyInstrumentParties(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 1059
			order[1] = 1060
			order[2] = 1061
			order[3] = 1062
			order[4] = 0
			fix.Group.__init__(self, 1058, 1059, order)

		class NoUndlyInstrumentPartySubIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1063
				order[1] = 1064
				order[2] = 0
				fix.Group.__init__(self, 1062, 1063, order)

class UserNotification(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CB") )

	class NoUsernames(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 553
			order[1] = 0
			fix.Group.__init__(self, 809, 553, order)
