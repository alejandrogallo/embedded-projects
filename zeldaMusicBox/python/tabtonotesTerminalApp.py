#! /usr/bin/env python

import terminalApp;
import tabToNotes as ttn;

class tabToNotesTerminalApp(terminalApp.TerminalApp):
	"""docstring for TerminalApp"""
	def __init__(self):
		super(tabToNotesTerminalApp, self).__init__()
		self.appName = "tabtonotes";
		self.version = "0.1";
		self.newSongFlag = "--new-song";
		self.playNoteStyleFlag = "--playNote";
		self.tabFlag = ["-t","--tab"];
		self.tabNumber = 0;

	def tabMode(self):
		if self.flagOn(self.tabFlag):
			tabNumber = int(self.getValueOfFlag(self.tabFlag));
			self.tabNumber = tabNumber;
			if self.verbatim:
				print("Entered tab mode with a value of %d"%tabNumber);
			return True;
		else:
			return False;
	def playNoteStyleMode(self):
		if self.flagOn(self.playNoteStyleFlag):
			if self.verbatim:
				print("Entered plat note style mode!");
			return True;
		else: 
			False;

	def newSongMode(self):
		if self.flagOn(self.newSongFlag):
			filePath = self.getValueOfFlag(self.newSongFlag);
			if self.verbatim:
				print("Entering in new song mode.");
				print("Creating a song in directory %s"%filePath);
			ttn.newSong(filePath,verbatim = self.verbatim);
		else:
			return False;

	def fileInMode(self):
		if self.flagOn(self.fileInFlag):
			filePath = self.getValueOfFlag(self.fileInFlag);
			if self.verbatim:
				print("Entered file %s to process"%filePath);
			self.tabMode();
 			playNoteStyle = self.playNoteStyleMode();
			ttn.convertTabFileToNotesFile(filePath, verbatim=self.verbatim,playNoteStyle=playNoteStyle,tab=self.tabNumber);
			return True;
		else:
			return False;


	def init(self):
		super(tabToNotesTerminalApp,self).init();
		self.newSongMode();
		self.fileInMode();


if __name__ == "__main__":
	app = tabToNotesTerminalApp();
	app.init();