#include <iostream>
using namespace std;

int main() {
  string dummy, name;
  int casos;
  cin >> casos;
  for (int i = 0; i < casos; ++i){
	  cin >> dummy >> name;
	  cout << "Hola, " << name << ".\n";
  }
  return 0;
}