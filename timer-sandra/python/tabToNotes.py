#! /usr/bin/env python


import sys;


def convertTabFileToNotesFile(filePath,delimiter="\t",verbatim=True,varType="const uint64_t",commentMark="#",playNoteStyle=False,tab=0):
	tabbing = "\t"*tab;
	fileNameWithExtension = filePath.split("/")[-1];
	fileName = fileNameWithExtension.split(".")[0];
	path = filePath.replace(fileNameWithExtension,"");
	if playNoteStyle:
		outFilePath = path+fileName+"PlayNote.c";
	else:
		outFilePath = path+fileName+".h";
	f = open(filePath,"r");
	h = open(outFilePath,"w+");
	elementCounter=0;
	if not playNoteStyle:
		h.write("{");
	for line in f:
		if commentMark in line:
			#here we would have put a comment in that line 
			continue;
		if (len(line)=="") or (line=="\n") or (len(line.replace(" ",""))==0):
			continue;
		noteList = line.replace("(","").replace(")","").replace("\n","").split(delimiter);
		if len(noteList)!=3:
			print("Error: Format of the note %s should be (int , int , time)"%line);
			return False;
		note = (int(noteList[0]),int(noteList[1]),noteList[2].replace(" ",""));
		noteTuple = noteFromTabElement(note,verbatim=verbatim);
		if noteTuple!= "":
			elementCounter+=1;
			if playNoteStyle:
				noteString = tabbing+"playNote("+noteTuple[0]+","+noteTuple[1]+");\n";
				h.write(noteString);
			else:	
				noteString = tabbing+"{"+noteTuple[0]+","+noteTuple[1]+"}";
				if elementCounter==1:
					h.write(noteString);
				else:
					h.write(","+noteString);
			if verbatim:
				print fileName;
				print noteString;
	if not playNoteStyle:
		h.write("};\n");
		h.seek(0);
		hContent = h.read();
		h.seek(0);
		#h.write("#define SONG_LENGTH=%d;\n"%elementCounter);
		h.write(varType+" song[%d][2]="%elementCounter);
		h.write(hContent);
	h.close();
	f.close();




def noteFromTabElement(tabElement,verbatim=True):
	notes = ["C","Cx","D","Dx","E","F","Fx","G","Gx","A","Ax","B"];
	mainNotes = {"E6":(6,0),"A6":(5,0),"D7":(4,0),"G7":(3,0),"B7":(2,0),"E8":(1,0)};
	times = ["T1","T2","T4","T8","T16","T32","T64"];
	silenceName="SILENCE";
	noteTime = tabElement[2];
	if not (noteTime in times):
		print("Error in note (%d,%d,%s)\n Times can be only: "%(tabElement));
		print(times);
		return ""; 
	notesNumber = len(notes);
	string = tabElement[0];
	frett = tabElement[1];
	octaveIncrement=0;
	#Detect SILENCE
	if string==0:
		return (silenceName,noteTime);

	for noteName in mainNotes:
		noteNameString = mainNotes[noteName][0];
		noteNamePure = noteName[:-1];
		noteNameOctave = int(noteName[-1]);
		if noteNameString==string:
			index = notes.index(noteNamePure);
			distance=index+frett;	
			octaveIncrement = int(distance/notesNumber);
			noteIndex = distance%notesNumber;
			newNote = notes[noteIndex]+str(noteNameOctave+octaveIncrement);
			if verbatim:
				print "Input\t (string = %d, frett = %d, time = %s)"%(tabElement);
				print "Note of the 0th frett:\t %s. \tOctave = %s, Note name = %s"%(noteName,noteNameOctave,noteNamePure);
				print "Note distance between C and %dth frett: \t %d (with harmonics)"%(frett,distance);
				print "Pure distance between C and %dth frett: \t %d (without harmonics)"%(frett, noteIndex);
				print "New note: \t %s, Octave: \t %d"%(notes[noteIndex],noteNameOctave+octaveIncrement);
				print "Octave incremented on %d"%octaveIncrement;
				print "0th Frett:\t %s, Output: \t %s "%(noteName,newNote);
			return (newNote,noteTime);



def newSong(filePath,verbatim=False):
	f = open(filePath,"w");
	f.write("#Tablature for tabToNotes.py by Alejandro Gallo (cc)\n");
	f.write("#Tablature Source:\t\n");
	f.write("#Compass:\t\n");
	f.write("#string\tfrett\ttime\n");
	f.write("#\n#\n#\n#\n#\n#\n#");
	f.close();
	if verbatim:
		print("File\t"+filePath+"\tcreated.")




if __name__=="__main__":
	terminalModeRun();