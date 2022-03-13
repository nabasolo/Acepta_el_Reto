#include <iostream>
using namespace std;

int main()
{
  int pisoActual, pisoDestino;
  unsigned int longitud;
  longitud = 0;

  cin >> pisoActual;
  while (pisoActual != -1)
  {
    cin >> pisoDestino;
    while (pisoDestino != -1)
    {

      // a = (a < 0) ? -a : a;

      longitud = longitud + abs(pisoActual - pisoDestino);
      pisoActual = pisoDestino;
      cin >> pisoDestino;
    }
    cout << longitud << "\n";
    longitud = 0;
    cin >> pisoActual;
  }

  return 0;
}