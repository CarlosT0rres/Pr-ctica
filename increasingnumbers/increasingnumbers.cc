/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperature.cc
  * @author Carlos Torres Castañeyra alu0101723358@ull.edu.es
  * @date Nov 19 2024
  * @brief tells if a number is increasing

  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35537
  * **/
#include <iostream>
using namespace std;
bool is_increasing (int n){
	int prevdigit = 99;
	constexpr int kcondition = 0;
	while (n != kcondition){
		int digit = n % 10;
		n /= 10;;
		if (prevdigit < digit){
			return false;
		}
		prevdigit = digit;
	}
	return true;
}
int main()
{
    int n;
    while (cin >> n)
        cout << (is_increasing(n) ? "true" : "false") << endl;
    return 0;
}



		








