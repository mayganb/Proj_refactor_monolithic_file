#pragma once
#include <string>
#include <vector>
#include "../includes/constants.h"


int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);
