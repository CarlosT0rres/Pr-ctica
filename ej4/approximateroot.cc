#include <iostream>
#include <cstdlib>
using namespace std;
double CalculateRoot (double number){
	const double Epsilon = 0.0001;
  double delta = 1.0, root = 1.0;
	while ((root * root) - number > Epsilon || number - (root * root) > Epsilon){
		if (delta >= 0){
			while (root * root < number){
				root += delta;
			}
		}
		else{
			while (root * root > number){
				root += delta;
			}
		}
		delta *= (- 0.5);
	}
	return root;
}
void CheckParamteres(int argc, char* argv[]){
	if (argc != 2){
		cerr << "Introduce tan solo un argumento";
		exit (1);
	}
}
int main(int argc, char* argv[]){
	double number = atof (argv[1]);
	cout << CalculateRoot (number) << endl;
	return 0;
}




	
