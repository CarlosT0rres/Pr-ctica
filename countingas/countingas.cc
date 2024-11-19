/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperature.cc
  * @author Carlos Torres Castañeyra alu0101723358@ull.edu.es
  * @date Nov 19 2024
  * @brief counts a's on the input

  * @bug There are no known bugs
  * @see https://jutge.org/problems/ P97969
  * **/
#include <iostream>
using namespace std;
int main (){
	char letter;
	int count = 0;
	while (cin >> letter && letter != '.'){
		if (letter == 'a'){
			count ++;
		}
	}
	cout << count << endl;
	return 0;
}

