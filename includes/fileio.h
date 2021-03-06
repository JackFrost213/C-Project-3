#ifndef FILEIO_H_
#define FILEIO_H_

#include "../includes/constants.h"

int loadData(const std::string filename, vector<process> &myProcesses);

int saveData(const std::string filename, vector<process> &myProcesses);

#endif /* FILEIO_H_ */
