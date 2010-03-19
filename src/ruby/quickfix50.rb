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
			order = Quickfix::IntArray.new(56)
			order[0] = 311
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
			order[55] = 0
			super(711, 311, order)
		end
