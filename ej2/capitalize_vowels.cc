#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string CapitalizeVowels (string frase){
	istringstream flujo (frase);
	string alterada;
	char character;
	while (flujo >> character){
		if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
			character = character - 32;
		}
		else if (character > 'A' && character < 'Z' && character != 'E' && character != 'I' && character != 'O' && character != 'U'){
			character = character + 32;
		}
		alterada += character;
	}
	return alterada;
}
void CheckParameters (int argc, char* argv[]){
	if (argc != 2){
		cerr << "Introduce solo un argumento " << endl;
		exit (1);
	}
}
int main (int argc, char* argv[]){
	CheckParameters (argc, argv);
	string frase = argv[1];
  string alterada = CapitalizeVowels (frase);
	cout << alterada;
	return 0;
}

	
		


 
		



