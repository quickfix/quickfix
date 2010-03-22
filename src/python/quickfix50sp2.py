import quickfix as fix

class Message(fix.Message):
	def __init__(self):
		fix.Message.__init__(self)
		self.getHeader().setField( fix.BeginString("FIXT.1.1") )

class IOI(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("6") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(56)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 682
			order[54] = 683
			order[55] = 0
			fix.Group.__init__(self, 555, 600, order)

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

class Advertisement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("7") )

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

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
			order = fix.IntArray(76)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 564
			order[57] = 565
			order[58] = 654
			order[59] = 587
			order[60] = 588
			order[61] = 637
			order[62] = 685
			order[63] = 675
			order[64] = 1073
			order[65] = 1074
			order[66] = 1075
			order[67] = 948
			order[68] = 1366
			order[69] = 670
			order[70] = 1379
			order[71] = 1381
			order[72] = 1383
			order[73] = 1384
			order[74] = 1418
			order[75] = 0
			fix.Group.__init__(self, 555, 600, order)

		class NoLegStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 688
				order[1] = 689
				order[2] = 0
				fix.Group.__init__(self, 683, 688, order)

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

		class NoLegAllocs(fix.Group):
			def __init__(self):
				order = fix.IntArray(7)
				order[0] = 671
				order[1] = 672
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoMiscFees(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 137
			order[1] = 138
			order[2] = 139
			order[3] = 891
			order[4] = 0
			fix.Group.__init__(self, 136, 137, order)

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

	class NoFills(fix.Group):
		def __init__(self):
			order = fix.IntArray(6)
			order[0] = 1363
			order[1] = 1364
			order[2] = 1365
			order[3] = 1414
			order[4] = 1443
			order[5] = 0
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

	class NoRateSources(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			fix.Group.__init__(self, 1445, 1446, order)

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
			order = fix.IntArray(82)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 0
			fix.Group.__init__(self, 146, 55, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLinesOfText(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 58
			order[1] = 354
			order[2] = 355
			order[3] = 0
			fix.Group.__init__(self, 33, 58, order)

	class NoNewsRefIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1476
			order[1] = 1477
			order[2] = 0
			fix.Group.__init__(self, 1475, 1476, order)

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
			order = fix.IntArray(82)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 0
			fix.Group.__init__(self, 146, 55, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(222)
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
			order[95] = 1435
			order[96] = 1439
			order[97] = 1449
			order[98] = 1450
			order[99] = 1451
			order[100] = 1452
			order[101] = 1457
			order[102] = 1458
			order[103] = 1478
			order[104] = 1479
			order[105] = 1480
			order[106] = 1481
			order[107] = 1482
			order[108] = 711
			order[109] = 140
			order[110] = 54
			order[111] = 401
			order[112] = 114
			order[113] = 60
			order[114] = 232
			order[115] = 854
			order[116] = 38
			order[117] = 152
			order[118] = 516
			order[119] = 468
			order[120] = 469
			order[121] = 40
			order[122] = 423
			order[123] = 44
			order[124] = 99
			order[125] = 218
			order[126] = 220
			order[127] = 221
			order[128] = 222
			order[129] = 662
			order[130] = 663
			order[131] = 699
			order[132] = 761
			order[133] = 235
			order[134] = 236
			order[135] = 701
			order[136] = 696
			order[137] = 697
			order[138] = 698
			order[139] = 15
			order[140] = 376
			order[141] = 377
			order[142] = 23
			order[143] = 117
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
			order[155] = 582
			order[156] = 121
			order[157] = 120
			order[158] = 775
			order[159] = 58
			order[160] = 354
			order[161] = 355
			order[162] = 193
			order[163] = 192
			order[164] = 640
			order[165] = 77
			order[166] = 203
			order[167] = 210
			order[168] = 211
			order[169] = 835
			order[170] = 836
			order[171] = 837
			order[172] = 838
			order[173] = 840
			order[174] = 1094
			order[175] = 1096
			order[176] = 1097
			order[177] = 1098
			order[178] = 1099
			order[179] = 388
			order[180] = 389
			order[181] = 841
			order[182] = 842
			order[183] = 843
			order[184] = 844
			order[185] = 846
			order[186] = 847
			order[187] = 848
			order[188] = 849
			order[189] = 494
			order[190] = 957
			order[191] = 1089
			order[192] = 1090
			order[193] = 1082
			order[194] = 1083
			order[195] = 1084
			order[196] = 1085
			order[197] = 1086
			order[198] = 1087
			order[199] = 1088
			order[200] = 1138
			order[201] = 1092
			order[202] = 1100
			order[203] = 1101
			order[204] = 1102
			order[205] = 1103
			order[206] = 1104
			order[207] = 1105
			order[208] = 1106
			order[209] = 1107
			order[210] = 1108
			order[211] = 1109
			order[212] = 1110
			order[213] = 1111
			order[214] = 1112
			order[215] = 1113
			order[216] = 1114
			order[217] = 1080
			order[218] = 1081
			order[219] = 1091
			order[220] = 1133
			order[221] = 0
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

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoRateSources(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			fix.Group.__init__(self, 1445, 1446, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

class QuoteRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("R") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(142)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			order[117] = 62
			order[118] = 126
			order[119] = 60
			order[120] = 218
			order[121] = 220
			order[122] = 221
			order[123] = 222
			order[124] = 662
			order[125] = 663
			order[126] = 699
			order[127] = 761
			order[128] = 423
			order[129] = 44
			order[130] = 640
			order[131] = 235
			order[132] = 236
			order[133] = 701
			order[134] = 696
			order[135] = 697
			order[136] = 698
			order[137] = 453
			order[138] = 110
			order[139] = 120
			order[140] = 1445
			order[141] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(67)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 687
				order[54] = 690
				order[55] = 587
				order[56] = 588
				order[57] = 683
				order[58] = 539
				order[59] = 676
				order[60] = 677
				order[61] = 678
				order[62] = 679
				order[63] = 680
				order[64] = 685
				order[65] = 654
				order[66] = 0
				fix.Group.__init__(self, 555, 600, order)

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

		class NoRateSources(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				fix.Group.__init__(self, 1445, 1446, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(72)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 587
			order[56] = 588
			order[57] = 683
			order[58] = 539
			order[59] = 686
			order[60] = 681
			order[61] = 684
			order[62] = 676
			order[63] = 677
			order[64] = 678
			order[65] = 679
			order[66] = 680
			order[67] = 685
			order[68] = 654
			order[69] = 1067
			order[70] = 1068
			order[71] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoRateSources(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			fix.Group.__init__(self, 1445, 1446, order)

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
			order = fix.IntArray(90)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 711
			order[82] = 555
			order[83] = 15
			order[84] = 537
			order[85] = 63
			order[86] = 64
			order[87] = 271
			order[88] = 1500
			order[89] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 336
			order[1] = 625
			order[2] = 0
			fix.Group.__init__(self, 386, 336, order)

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

class MarketDataSnapshotFullRefresh(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("W") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoMDEntries(fix.Group):
		def __init__(self):
			order = fix.IntArray(75)
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
			order[69] = 120
			order[70] = 1445
			order[71] = 828
			order[72] = 1025
			order[73] = 31
			order[74] = 0
			fix.Group.__init__(self, 268, 269, order)

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

		class NoOfSecSizes(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 1178
				order[1] = 1179
				order[2] = 0
				fix.Group.__init__(self, 1177, 1178, order)

		class NoRateSources(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				fix.Group.__init__(self, 1445, 1446, order)

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
			order = fix.IntArray(172)
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
			order[73] = 1435
			order[74] = 1439
			order[75] = 1449
			order[76] = 1450
			order[77] = 1451
			order[78] = 1452
			order[79] = 1457
			order[80] = 1458
			order[81] = 1478
			order[82] = 1479
			order[83] = 1480
			order[84] = 1481
			order[85] = 1482
			order[86] = 711
			order[87] = 555
			order[88] = 291
			order[89] = 292
			order[90] = 270
			order[91] = 15
			order[92] = 271
			order[93] = 272
			order[94] = 273
			order[95] = 274
			order[96] = 275
			order[97] = 336
			order[98] = 625
			order[99] = 276
			order[100] = 277
			order[101] = 282
			order[102] = 283
			order[103] = 284
			order[104] = 286
			order[105] = 59
			order[106] = 432
			order[107] = 126
			order[108] = 110
			order[109] = 18
			order[110] = 287
			order[111] = 37
			order[112] = 299
			order[113] = 288
			order[114] = 289
			order[115] = 346
			order[116] = 290
			order[117] = 546
			order[118] = 811
			order[119] = 451
			order[120] = 58
			order[121] = 354
			order[122] = 355
			order[123] = 528
			order[124] = 1024
			order[125] = 332
			order[126] = 333
			order[127] = 1020
			order[128] = 63
			order[129] = 64
			order[130] = 1070
			order[131] = 83
			order[132] = 1048
			order[133] = 1026
			order[134] = 1027
			order[135] = 1023
			order[136] = 453
			order[137] = 198
			order[138] = 40
			order[139] = 1173
			order[140] = 264
			order[141] = 423
			order[142] = 235
			order[143] = 236
			order[144] = 701
			order[145] = 696
			order[146] = 697
			order[147] = 698
			order[148] = 218
			order[149] = 220
			order[150] = 221
			order[151] = 222
			order[152] = 662
			order[153] = 663
			order[154] = 699
			order[155] = 761
			order[156] = 1177
			order[157] = 1093
			order[158] = 326
			order[159] = 327
			order[160] = 828
			order[161] = 574
			order[162] = 1003
			order[163] = 483
			order[164] = 60
			order[165] = 1175
			order[166] = 120
			order[167] = 1445
			order[168] = 1025
			order[169] = 31
			order[170] = 1500
			order[171] = 0
			fix.Group.__init__(self, 268, 279, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

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

		class NoRateSources(fix.Group):
			def __init__(self):
				order = fix.IntArray(4)
				order[0] = 1446
				order[1] = 1447
				order[2] = 1448
				order[3] = 0
				fix.Group.__init__(self, 1445, 1446, order)

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

	class NoAltMDSource(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 817
			order[1] = 0
			fix.Group.__init__(self, 816, 817, order)

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
			order = fix.IntArray(93)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			fix.Group.__init__(self, 295, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

class QuoteStatusRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("a") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

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
			order = fix.IntArray(78)
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
			order[62] = 1437
			order[63] = 1441
			order[64] = 1453
			order[65] = 1454
			order[66] = 1455
			order[67] = 1456
			order[68] = 1459
			order[69] = 1460
			order[70] = 304
			order[71] = 893
			order[72] = 295
			order[73] = 1168
			order[74] = 1169
			order[75] = 1170
			order[76] = 367
			order[77] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(112)
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
				order[69] = 1435
				order[70] = 1439
				order[71] = 1449
				order[72] = 1450
				order[73] = 1451
				order[74] = 1452
				order[75] = 1457
				order[76] = 1458
				order[77] = 1478
				order[78] = 1479
				order[79] = 1480
				order[80] = 1481
				order[81] = 1482
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
				order[106] = 368
				order[107] = 1167
				order[108] = 775
				order[109] = 528
				order[110] = 529
				order[111] = 0
				fix.Group.__init__(self, 295, 299, order)

			class NoLegs(fix.Group):
				def __init__(self):
					order = fix.IntArray(54)
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
					order[51] = 1436
					order[52] = 1440
					order[53] = 0
					fix.Group.__init__(self, 555, 600, order)

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

class SecurityDefinitionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("c") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

class SecurityDefinition(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("d") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

class SecurityStatus(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("f") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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
			order = fix.IntArray(75)
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
			order[62] = 1437
			order[63] = 1441
			order[64] = 1453
			order[65] = 1454
			order[66] = 1455
			order[67] = 1456
			order[68] = 1459
			order[69] = 1460
			order[70] = 367
			order[71] = 304
			order[72] = 893
			order[73] = 295
			order[74] = 0
			fix.Group.__init__(self, 296, 302, order)

		class NoQuoteEntries(fix.Group):
			def __init__(self):
				order = fix.IntArray(110)
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
				order[69] = 1435
				order[70] = 1439
				order[71] = 1449
				order[72] = 1450
				order[73] = 1451
				order[74] = 1452
				order[75] = 1457
				order[76] = 1458
				order[77] = 1478
				order[78] = 1479
				order[79] = 1480
				order[80] = 1481
				order[81] = 1482
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
				fix.Group.__init__(self, 295, 299, order)

			class NoLegs(fix.Group):
				def __init__(self):
					order = fix.IntArray(54)
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
					order[51] = 1436
					order[52] = 1440
					order[53] = 0
					fix.Group.__init__(self, 555, 600, order)

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
			order = fix.IntArray(92)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			fix.Group.__init__(self, 428, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

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

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

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

	class NoNotAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			fix.Group.__init__(self, 1370, 1372, order)

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

class NewOrderCross(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("s") )

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(44)
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

class CrossOrderCancelReplaceRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("t") )

	class NoSides(fix.Group):
		def __init__(self):
			order = fix.IntArray(44)
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

class CrossOrderCancelRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("u") )

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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
			order = fix.IntArray(6)
			order[0] = 167
			order[1] = 762
			order[2] = 460
			order[3] = 461
			order[4] = 60
			order[5] = 0
			fix.Group.__init__(self, 558, 167, order)

class SecurityListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("x") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

class SecurityList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("y") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(116)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			order[92] = 711
			order[93] = 15
			order[94] = 232
			order[95] = 555
			order[96] = 218
			order[97] = 220
			order[98] = 221
			order[99] = 222
			order[100] = 662
			order[101] = 663
			order[102] = 699
			order[103] = 761
			order[104] = 235
			order[105] = 236
			order[106] = 701
			order[107] = 696
			order[108] = 697
			order[109] = 698
			order[110] = 58
			order[111] = 354
			order[112] = 355
			order[113] = 1201
			order[114] = 1504
			order[115] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 690
				order[54] = 587
				order[55] = 683
				order[56] = 676
				order[57] = 677
				order[58] = 678
				order[59] = 679
				order[60] = 680
				order[61] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

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

class DerivativeSecurityListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("z") )

class DerivativeSecurityList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AA") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(95)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 15
			order[82] = 668
			order[83] = 869
			order[84] = 555
			order[85] = 58
			order[86] = 354
			order[87] = 355
			order[88] = 1305
			order[89] = 1221
			order[90] = 1230
			order[91] = 1240
			order[92] = 292
			order[93] = 1504
			order[94] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(71)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 670
			order[57] = 564
			order[58] = 565
			order[59] = 539
			order[60] = 654
			order[61] = 587
			order[62] = 588
			order[63] = 685
			order[64] = 1366
			order[65] = 1379
			order[66] = 1381
			order[67] = 1383
			order[68] = 1384
			order[69] = 675
			order[70] = 0
			fix.Group.__init__(self, 555, 600, order)

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
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(71)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 670
			order[57] = 564
			order[58] = 565
			order[59] = 539
			order[60] = 654
			order[61] = 587
			order[62] = 588
			order[63] = 685
			order[64] = 1366
			order[65] = 1379
			order[66] = 1381
			order[67] = 1383
			order[68] = 1384
			order[69] = 675
			order[70] = 0
			fix.Group.__init__(self, 555, 600, order)

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
				order[2] = 673
				order[3] = 674
				order[4] = 1367
				order[5] = 756
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoDates(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 75
			order[1] = 60
			order[2] = 779
			order[3] = 0
			fix.Group.__init__(self, 580, 75, order)

class TradeCaptureReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AE") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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
			order = fix.IntArray(76)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 564
			order[57] = 565
			order[58] = 539
			order[59] = 654
			order[60] = 587
			order[61] = 588
			order[62] = 637
			order[63] = 990
			order[64] = 675
			order[65] = 1073
			order[66] = 1074
			order[67] = 1075
			order[68] = 1152
			order[69] = 1342
			order[70] = 1379
			order[71] = 1381
			order[72] = 1383
			order[73] = 1384
			order[74] = 1418
			order[75] = 0
			fix.Group.__init__(self, 555, 600, order)

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
			order = fix.IntArray(92)
			order[0] = 54
			order[1] = 453
			order[2] = 1
			order[3] = 660
			order[4] = 581
			order[5] = 81
			order[6] = 575
			order[7] = 576
			order[8] = 578
			order[9] = 579
			order[10] = 376
			order[11] = 377
			order[12] = 582
			order[13] = 336
			order[14] = 625
			order[15] = 943
			order[16] = 12
			order[17] = 13
			order[18] = 479
			order[19] = 497
			order[20] = 157
			order[21] = 230
			order[22] = 158
			order[23] = 159
			order[24] = 738
			order[25] = 920
			order[26] = 921
			order[27] = 922
			order[28] = 238
			order[29] = 237
			order[30] = 118
			order[31] = 119
			order[32] = 155
			order[33] = 156
			order[34] = 77
			order[35] = 58
			order[36] = 354
			order[37] = 355
			order[38] = 752
			order[39] = 518
			order[40] = 232
			order[41] = 136
			order[42] = 825
			order[43] = 826
			order[44] = 591
			order[45] = 70
			order[46] = 78
			order[47] = 1009
			order[48] = 1005
			order[49] = 1006
			order[50] = 1007
			order[51] = 83
			order[52] = 1008
			order[53] = 1016
			order[54] = 1072
			order[55] = 1057
			order[56] = 1139
			order[57] = 430
			order[58] = 1154
			order[59] = 1155
			order[60] = 1158
			order[61] = 1115
			order[62] = 37
			order[63] = 198
			order[64] = 11
			order[65] = 526
			order[66] = 66
			order[67] = 1080
			order[68] = 1081
			order[69] = 1431
			order[70] = 40
			order[71] = 44
			order[72] = 99
			order[73] = 18
			order[74] = 39
			order[75] = 151
			order[76] = 14
			order[77] = 59
			order[78] = 126
			order[79] = 528
			order[80] = 529
			order[81] = 1432
			order[82] = 821
			order[83] = 1093
			order[84] = 483
			order[85] = 586
			order[86] = 775
			order[87] = 1427
			order[88] = 1428
			order[89] = 1429
			order[90] = 1444
			order[91] = 0
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

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

class QuoteRequestReject(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AG") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(138)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			fix.Group.__init__(self, 146, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(67)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 687
				order[54] = 690
				order[55] = 587
				order[56] = 588
				order[57] = 683
				order[58] = 539
				order[59] = 676
				order[60] = 677
				order[61] = 678
				order[62] = 679
				order[63] = 680
				order[64] = 685
				order[65] = 654
				order[66] = 0
				fix.Group.__init__(self, 555, 600, order)

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

class RFQRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AH") )

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(89)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 711
			order[82] = 555
			order[83] = 140
			order[84] = 303
			order[85] = 537
			order[86] = 336
			order[87] = 625
			order[88] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(61)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 587
			order[56] = 588
			order[57] = 683
			order[58] = 539
			order[59] = 685
			order[60] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(72)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 587
			order[56] = 588
			order[57] = 683
			order[58] = 539
			order[59] = 686
			order[60] = 681
			order[61] = 684
			order[62] = 676
			order[63] = 677
			order[64] = 678
			order[65] = 679
			order[66] = 680
			order[67] = 685
			order[68] = 654
			order[69] = 1067
			order[70] = 1068
			order[71] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoCapacities(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 528
			order[1] = 529
			order[2] = 863
			order[3] = 0
			fix.Group.__init__(self, 862, 528, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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
			order[4] = 539
			order[5] = 976
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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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
			order[4] = 539
			order[5] = 976
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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(74)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 732
			order[70] = 733
			order[71] = 984
			order[72] = 1037
			order[73] = 0
			fix.Group.__init__(self, 711, 311, order)

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
			order[4] = 539
			order[5] = 976
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

class TradeCaptureReportAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("AR") )

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(76)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 687
			order[54] = 690
			order[55] = 683
			order[56] = 564
			order[57] = 565
			order[58] = 539
			order[59] = 654
			order[60] = 587
			order[61] = 588
			order[62] = 637
			order[63] = 990
			order[64] = 675
			order[65] = 1073
			order[66] = 1074
			order[67] = 1075
			order[68] = 1152
			order[69] = 1342
			order[70] = 1379
			order[71] = 1381
			order[72] = 1383
			order[73] = 1384
			order[74] = 1418
			order[75] = 0
			fix.Group.__init__(self, 555, 600, order)

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
			order = fix.IntArray(87)
			order[0] = 54
			order[1] = 453
			order[2] = 1
			order[3] = 660
			order[4] = 581
			order[5] = 81
			order[6] = 575
			order[7] = 576
			order[8] = 578
			order[9] = 579
			order[10] = 376
			order[11] = 377
			order[12] = 582
			order[13] = 336
			order[14] = 625
			order[15] = 943
			order[16] = 12
			order[17] = 13
			order[18] = 479
			order[19] = 497
			order[20] = 157
			order[21] = 230
			order[22] = 158
			order[23] = 159
			order[24] = 738
			order[25] = 920
			order[26] = 921
			order[27] = 922
			order[28] = 238
			order[29] = 237
			order[30] = 118
			order[31] = 119
			order[32] = 155
			order[33] = 156
			order[34] = 77
			order[35] = 752
			order[36] = 518
			order[37] = 232
			order[38] = 136
			order[39] = 825
			order[40] = 826
			order[41] = 591
			order[42] = 70
			order[43] = 78
			order[44] = 1072
			order[45] = 1057
			order[46] = 1009
			order[47] = 1005
			order[48] = 1006
			order[49] = 1007
			order[50] = 83
			order[51] = 1008
			order[52] = 1016
			order[53] = 430
			order[54] = 1154
			order[55] = 1155
			order[56] = 1158
			order[57] = 1427
			order[58] = 1428
			order[59] = 1429
			order[60] = 1115
			order[61] = 37
			order[62] = 198
			order[63] = 11
			order[64] = 526
			order[65] = 66
			order[66] = 1080
			order[67] = 1081
			order[68] = 1431
			order[69] = 40
			order[70] = 44
			order[71] = 99
			order[72] = 18
			order[73] = 39
			order[74] = 151
			order[75] = 14
			order[76] = 59
			order[77] = 126
			order[78] = 528
			order[79] = 529
			order[80] = 1432
			order[81] = 821
			order[82] = 1093
			order[83] = 483
			order[84] = 586
			order[85] = 775
			order[86] = 0
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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoTrdRepIndicators(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1388
			order[1] = 1389
			order[2] = 0
			fix.Group.__init__(self, 1387, 1388, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

	class NoPosAmt(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 707
			order[1] = 708
			order[2] = 1055
			order[3] = 0
			fix.Group.__init__(self, 753, 707, order)

	class NoRateSources(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1446
			order[1] = 1447
			order[2] = 1448
			order[3] = 0
			fix.Group.__init__(self, 1445, 1446, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoPositions(fix.Group):
		def __init__(self):
			order = fix.IntArray(7)
			order[0] = 703
			order[1] = 704
			order[2] = 705
			order[3] = 706
			order[4] = 539
			order[5] = 976
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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(71)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 944
			order[70] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(71)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 944
			order[70] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(71)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 944
			order[70] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

class SecurityDefinitionUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BP") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

	class NoStipulations(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 233
			order[1] = 234
			order[2] = 0
			fix.Group.__init__(self, 232, 233, order)

	class NoMarketSegments(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1301
			order[1] = 1300
			order[2] = 1201
			order[3] = 0
			fix.Group.__init__(self, 1310, 1301, order)

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
			order = fix.IntArray(117)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
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
			order[92] = 555
			order[93] = 218
			order[94] = 220
			order[95] = 221
			order[96] = 222
			order[97] = 662
			order[98] = 663
			order[99] = 699
			order[100] = 761
			order[101] = 235
			order[102] = 236
			order[103] = 701
			order[104] = 696
			order[105] = 697
			order[106] = 698
			order[107] = 58
			order[108] = 354
			order[109] = 355
			order[110] = 711
			order[111] = 15
			order[112] = 232
			order[113] = 1324
			order[114] = 1201
			order[115] = 1504
			order[116] = 0
			fix.Group.__init__(self, 146, 55, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(62)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 690
				order[54] = 587
				order[55] = 683
				order[56] = 676
				order[57] = 677
				order[58] = 678
				order[59] = 679
				order[60] = 680
				order[61] = 0
				fix.Group.__init__(self, 555, 600, order)

			class NoLegStipulations(fix.Group):
				def __init__(self):
					order = fix.IntArray(3)
					order[0] = 688
					order[1] = 689
					order[2] = 0
					fix.Group.__init__(self, 683, 688, order)

		class NoUnderlyings(fix.Group):
			def __init__(self):
				order = fix.IntArray(70)
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
				order[61] = 1437
				order[62] = 1441
				order[63] = 1453
				order[64] = 1454
				order[65] = 1455
				order[66] = 1456
				order[67] = 1459
				order[68] = 1460
				order[69] = 0
				fix.Group.__init__(self, 711, 311, order)

		class NoStipulations(fix.Group):
			def __init__(self):
				order = fix.IntArray(3)
				order[0] = 233
				order[1] = 234
				order[2] = 0
				fix.Group.__init__(self, 232, 233, order)

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
			order[4] = 539
			order[5] = 976
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
			order = fix.IntArray(82)
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
			order[68] = 1435
			order[69] = 1439
			order[70] = 1449
			order[71] = 1450
			order[72] = 1451
			order[73] = 1452
			order[74] = 1457
			order[75] = 1458
			order[76] = 1478
			order[77] = 1479
			order[78] = 1480
			order[79] = 1481
			order[80] = 1482
			order[81] = 0
			fix.Group.__init__(self, 146, 55, order)

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

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

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

class ExecutionAcknowledgement(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BN") )

	class NoUnderlyings(fix.Group):
		def __init__(self):
			order = fix.IntArray(70)
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
			order[61] = 1437
			order[62] = 1441
			order[63] = 1453
			order[64] = 1454
			order[65] = 1455
			order[66] = 1456
			order[67] = 1459
			order[68] = 1460
			order[69] = 0
			fix.Group.__init__(self, 711, 311, order)

	class NoLegs(fix.Group):
		def __init__(self):
			order = fix.IntArray(54)
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
			order[51] = 1436
			order[52] = 1440
			order[53] = 0
			fix.Group.__init__(self, 555, 600, order)

class TradingSessionList(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BJ") )

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(23)
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
			order[20] = 60
			order[21] = 1327
			order[22] = 0
			fix.Group.__init__(self, 386, 336, order)

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
			order = fix.IntArray(97)
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
			order[78] = 1435
			order[79] = 1439
			order[80] = 1449
			order[81] = 1450
			order[82] = 1451
			order[83] = 1452
			order[84] = 1457
			order[85] = 1458
			order[86] = 1478
			order[87] = 1479
			order[88] = 1480
			order[89] = 1481
			order[90] = 1482
			order[91] = 453
			order[92] = 168
			order[93] = 126
			order[94] = 779
			order[95] = 1158
			order[96] = 0
			fix.Group.__init__(self, 1165, 430, order)

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

	class NoRelatedSym(fix.Group):
		def __init__(self):
			order = fix.IntArray(96)
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
			order[69] = 1435
			order[70] = 1439
			order[71] = 1449
			order[72] = 1450
			order[73] = 1451
			order[74] = 1452
			order[75] = 1457
			order[76] = 1458
			order[77] = 1478
			order[78] = 1479
			order[79] = 1480
			order[80] = 1481
			order[81] = 1482
			order[82] = 668
			order[83] = 869
			order[84] = 1305
			order[85] = 1221
			order[86] = 1230
			order[87] = 1240
			order[88] = 15
			order[89] = 555
			order[90] = 58
			order[91] = 354
			order[92] = 355
			order[93] = 292
			order[94] = 1504
			order[95] = 0
			fix.Group.__init__(self, 146, 1324, order)

		class NoLegs(fix.Group):
			def __init__(self):
				order = fix.IntArray(54)
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
				order[51] = 1436
				order[52] = 1440
				order[53] = 0
				fix.Group.__init__(self, 555, 600, order)

class TradingSessionListUpdateReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BS") )

	class NoTradingSessions(fix.Group):
		def __init__(self):
			order = fix.IntArray(23)
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
			order[20] = 60
			order[21] = 1327
			order[22] = 0
			fix.Group.__init__(self, 386, 336, order)

class MarketDefinitionRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BT") )

class MarketDefinition(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BU") )

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
			order = fix.IntArray(6)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 539
			order[4] = 1433
			order[5] = 0
			fix.Group.__init__(self, 1351, 1355, order)

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

class ApplicationMessageRequestAck(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("BX") )

	class NoApplIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(8)
			order[0] = 1355
			order[1] = 1182
			order[2] = 1183
			order[3] = 1357
			order[4] = 1354
			order[5] = 539
			order[6] = 1433
			order[7] = 0
			fix.Group.__init__(self, 1351, 1355, order)

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

	class NoNotAffectedOrders(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 1372
			order[1] = 1371
			order[2] = 0
			fix.Group.__init__(self, 1370, 1372, order)

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

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

	class NoTargetPartyIDs(fix.Group):
		def __init__(self):
			order = fix.IntArray(4)
			order[0] = 1462
			order[1] = 1463
			order[2] = 1464
			order[3] = 0
			fix.Group.__init__(self, 1461, 1462, order)

class UserNotification(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CB") )

class StreamAssignmentRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CC") )

	class NoAsgnReqs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 453
			order[1] = 146
			order[2] = 0
			fix.Group.__init__(self, 1499, 453, order)

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
				order = fix.IntArray(85)
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
				order[68] = 1435
				order[69] = 1439
				order[70] = 1449
				order[71] = 1450
				order[72] = 1451
				order[73] = 1452
				order[74] = 1457
				order[75] = 1458
				order[76] = 1478
				order[77] = 1479
				order[78] = 1480
				order[79] = 1481
				order[80] = 1482
				order[81] = 63
				order[82] = 271
				order[83] = 1500
				order[84] = 0
				fix.Group.__init__(self, 146, 55, order)

class StreamAssignmentReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CD") )

	class NoAsgnReqs(fix.Group):
		def __init__(self):
			order = fix.IntArray(3)
			order[0] = 453
			order[1] = 146
			order[2] = 0
			fix.Group.__init__(self, 1499, 453, order)

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
				order = fix.IntArray(89)
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
				order[68] = 1435
				order[69] = 1439
				order[70] = 1449
				order[71] = 1450
				order[72] = 1451
				order[73] = 1452
				order[74] = 1457
				order[75] = 1458
				order[76] = 1478
				order[77] = 1479
				order[78] = 1480
				order[79] = 1481
				order[80] = 1482
				order[81] = 63
				order[82] = 1617
				order[83] = 1500
				order[84] = 1502
				order[85] = 58
				order[86] = 354
				order[87] = 355
				order[88] = 0
				fix.Group.__init__(self, 146, 55, order)

class StreamAssignmentReportACK(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CE") )

class PartyDetailsListRequest(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CF") )

	class NoPartyListResponseTypes(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 1507
			order[1] = 0
			fix.Group.__init__(self, 1506, 1507, order)

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

	class NoRequestedPartyRoles(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 1509
			order[1] = 0
			fix.Group.__init__(self, 1508, 1509, order)

	class NoPartyRelationships(fix.Group):
		def __init__(self):
			order = fix.IntArray(2)
			order[0] = 1515
			order[1] = 0
			fix.Group.__init__(self, 1514, 1515, order)

class PartyDetailsListReport(Message):
	def __init__(self):
		Message.__init__(self)
		self.getHeader().setField( fix.MsgType("CG") )

	class NoPartyList(fix.Group):
		def __init__(self):
			order = fix.IntArray(5)
			order[0] = 448
			order[1] = 447
			order[2] = 452
			order[3] = 1562
			order[4] = 0
			fix.Group.__init__(self, 1513, 448, order)

		class NoRelatedPartyIDs(fix.Group):
			def __init__(self):
				order = fix.IntArray(5)
				order[0] = 1563
				order[1] = 1564
				order[2] = 1565
				order[3] = 1514
				order[4] = 0
				fix.Group.__init__(self, 1562, 1563, order)

			class NoPartyRelationships(fix.Group):
				def __init__(self):
					order = fix.IntArray(2)
					order[0] = 1515
					order[1] = 0
					fix.Group.__init__(self, 1514, 1515, order)
