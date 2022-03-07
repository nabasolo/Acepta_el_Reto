#include <iostream>
using namespace std;

int main()
{
  int ncasos;
  string programa;

  cin >> ncasos;
  for (int i = 0; i < ncasos; ++i)
  {
    cin >> programa;
    programa.resize(programa.size() - 2);
    cout << programa << "\n";
  }

  return 0;
}