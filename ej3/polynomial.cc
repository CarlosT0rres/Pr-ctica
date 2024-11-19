#include <iostream>
#include <vector>
#include <cstdlib>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int Power (int number, int exponente){
  int resultado = 1;
	for (int i = 0; i < exponente; i++){
		resultado *= number;
	}
	return resultado;
}
		
int Polynom (vector <int> coefficients, int value){
	size_t i = 0;
	int result = 0;
	int e = coefficients.size() - 1;
	while (i < coefficients.size()){
		result += coefficients [i] * Power(value, e);
		i++;
		e--;
	}
	return result;
}
void CheckParameters(int argc, char* argv[]){
	if (argc != 3){
		cerr << "Introduce dos parámetros " << endl;
		exit (1);
	}
}
vector<int> ReadVector (string coefficients){
	istringstream flujo (coefficients);
	vector<int> vec;
	int number;
	while (flujo >> number){
		vec.push_back (number);
	}
	return vec;
}
int main(int argc, char* argv[]){
	CheckParameters(argc, argv);
	string coefficients = argv[1];
	int value = atoi (argv[2]);
	vector<int> coef = ReadVector(coefficients);
	int result= Polynom(coef, value);
	cout << result << endl;
	return 0;
}











