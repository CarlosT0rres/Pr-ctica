#include "scalar_functions.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;
double ScalarProduct (const vector <double>& a, const vector <double>& b){
	if (a.size() != b.size()){
		cerr << "Los vectores deben tener el mismo tamaño" << endl;
		exit (1);
	}
	double product = 0;
	for (size_t i = 0; i < a.size() ; i++){
		product += a[i] * b[i];
	}
	return product;
}
void CheckParameters (int argc, char* argv[]){
	if (argc != 3){
		cerr << "Introduce exactamente dos argumentos";
		exit (1);
	}
}
vector <double> ReadVector (string line){
	vector <double> vec;
	istringstream flujo (line);
	double number;
	while (flujo >> number){
		vec.push_back (number);
	}
	return vec;
}
	



	








	



