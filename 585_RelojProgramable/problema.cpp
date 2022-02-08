#include <iostream>
using namespace std;

int main()
{
  int ncasos;
  float aguja1, aguja2;
  cin >> ncasos;

  cout << "hola!" << endl;

  for (int i = 0; i < ncasos; ++i)
  {
    cin >> aguja1;
    cin >> aguja2;

    cout << aguja1 / 30 << "\n";
  }

  return 0;
}