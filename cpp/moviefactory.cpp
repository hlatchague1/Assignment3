#include "moviefactory.h"

static Movie* CreateMovie(const string& commandLine) {
  char movieType = commandLine[0];
  if (movieType == 'C') {
    int numberOfCommands = 7;
    string lineOfCommand[numberOfCommands];
    stringstream ssin(commandLine);
    while (ssin.good() && i < numberOfCommands) {
      ssin >> lineOfCommand[i];
      ++i;
    }

    return new Classic();
  } 
  else if (movieType == 'F') {
	int numberOfCommands = 4;
    string lineOfCommand[numberOfCommands];
    stringstream ssin(commandLine);
    while (ssin.good() && i < numberOfCommands) {
      ssin >> lineOfCommand[i];
      ++i;
    }
  } 
  else if (movieType == 'D') {
    int numberOfCommands = 4;
    string lineOfCommand[numberOfCommands];
    stringstream ssin(commandLine);
    while (ssin.good() && i < numberOfCommands) {
      ssin >> lineOfCommand[i];
      ++i;
    }
  } 
  else
    cerr << "Movie type is incorrect!" << endl;



  string arr[4];
  int i = 0;
  stringstream ssin(line);
  while (ssin.good() && i < 4) {
    ssin >> arr[i];
    ++i;
  }
  for (i = 0; i < 4; i++) {
    cout << arr[i] << endl;
  }