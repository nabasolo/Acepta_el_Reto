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
    cout << programa[0] << "\n";
  }

  return 0;
}