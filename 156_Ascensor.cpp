#include <iostream>
using namespace std;

int main()
{
  int pisoActual, pisoDestino, longitud;
  longitud = 0;

  cin >> pisoActual;
  while (pisoActual != -1)
  {
    cin >> pisoDestino;
    while (pisoDestino != -1)
    {
      longitud += abs(pisoActual - pisoDestino);
      pisoActual = pisoDestino;
      cin >> pisoDestino;
    }
    cout << longitud << "\n";
    longitud = 0;
    cin >> pisoActual;
  }

  return 0;
}

// #Veredicto Time limit exceeded (TLE)