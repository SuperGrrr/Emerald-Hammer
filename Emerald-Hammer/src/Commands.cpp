#pragma once
#include "Emerald_Hammer.h"

namespace Emerald_Hammer{

	int initialize_Server() {
		Config conf;

	}

	//int save() {
	//	// TODO
	// 	// call server command: "save hold"
	//  //
	// 	// loop query command: "save query" When it returns a success it will return a file list (with lengths for each file) of the files you need to copy. 
	//  // The server will not pause while this is happening, so some files can be modified while the backup is taking place. 
	//  // As long as you only copy the files in the given file list and truncate the copied files to the specified lengths, 
	//  // then the backup should be valid.
	//  //
	//  // Copy / compress files and push them to an archive directory count of history shall be defined in config file.
	// 	// 
	// 	// When you’re finished with copying the files you should call "save resume" this to tell the server that it’s okay to remove old files again.
	// 	//
	//	return 0;
	//}

	//int exit() {
	//	//TODO
	//	return 0;
	//}


}