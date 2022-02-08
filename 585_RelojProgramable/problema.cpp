#include <iostream>
using namespace std;

int main()
{
  int ncasos;
  float aguja1, aguja2;
  cin >> ncasos;

  for (int i = 0; i < ncasos; ++i)
  {
    cin >> aguja1;
    cin >> aguja2;

    cout << int(aguja1 / 30) << ":" << int(aguja2 / 6) << "\n";
  }

  return 0;
}