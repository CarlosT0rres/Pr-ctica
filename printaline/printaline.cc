/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperature.cc
  * @author Carlos Torres Castañeyra alu0101723358@ull.edu.es
  * @date Nov 19 2024
  * @brief  prints a line of s spaces followed by n characters c

  * @bug There are no known bugs
  * @see https://jutge.org/problems/ P99541
  * **/
#include <iostream>
using namespace std;
void print(int s, char c, int n){
  for (int i = 0; i < s; i++){
    cout << " ";
  }
  for (int i = 0; i < n; i++){
    cout << c;
  }
  cout << endl;
}
int main() {
  int s, n;
  char c;
  while (cin >> s >> c >> n) print(s, c, n);
  return 0;
}

