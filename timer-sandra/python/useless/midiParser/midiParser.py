class MidiParser(object):
	"""docstring for MidiParser"""
	def __init__(self, filePath):
		super(MidiParser, self).__init__()
		self.filePath = filePath;
		self.fileObject="";

	def processHeaderChunk(self):
		self.fileObject = open(self.filePath,"rb");
		print("\n\n Processing header chunk");
		print("Reading header mark...");
		headerMark = self.fileObject.read(4);
		if headerMark=="MThd":
			print("Header mark succesfully read");
		else:
			print("File damaged");
			return 0;
		print("Reading length of the header chunk");
		print(self.fileObject.read(4));
		print("Reading format");
		print(self.fileObject.read(2));
		print("Reading number of track chunks that follow the header chunk");
		print(self.fileObject.read(2));
		print("Reading unit of time for Delta timing...");
		print(self.fileObject.read(2));
	def processTrackChunk(self):
		print("\n\n Processing track chunk");
		print("Reading track header");
		trackMark=self.fileObject.read(4);
		if trackMark=="MTrk":
			print("Track mark succesfully read");
		else:
			print("File damaged");
			return 0;
		print("Reading number of bytes in the track chunk");
		print(self.fileObject.read(400));


		self.fileObject.close();
	def init(self):
		self.processHeaderChunk();
		self.processTrackChunk();

if __name__=="__main__":
	midi = MidiParser("file.mid");
	midi.init();
