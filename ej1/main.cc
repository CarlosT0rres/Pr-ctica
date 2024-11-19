#include "scalar_functions.cc"
#include <cstdlib>
using namespace std;
	
int main(int argc, char* argv[]){
	CheckParameters (argc, argv);
	string v1 = argv[1];
	string v2 = argv[2];
	vector <double> a = ReadVector (v1);
	vector <double> b = ReadVector (v2);
	double product = ScalarProduct(a, b);
	cout << "El producto escalar de los dos vectores introducidos (" << v1 <<") (" << v2 <<") es: "<< product << endl;
	return 0;
}


	








	



