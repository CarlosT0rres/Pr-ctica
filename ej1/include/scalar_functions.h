#ifndef SCALARFUNCTIONS_H
#define SCALARFUNCTIONS_H
#include <vector>
#include <string>
#include <sstream>
double ScalarProduct (const std::vector <double>& a, const std::vector <double>& b);
	
void CheckParameters (int argc, char* argv[]);
	
std::vector <double> ReadVector (std::string line);

#endif 

	








	



