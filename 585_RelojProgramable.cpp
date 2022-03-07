#include <iostream>
#include <iomanip> //setfill, setw

using namespace std;

int solucion(double aguja1, double aguja2)
{
  double hour, minut;

  minut = aguja2 / 6;
  hour = (aguja1 - (minut / 2)) / 30;

  if (int(hour) == hour && int(minut) == minut)
  {
    cout << setfill('0') << setw(2) << hour << ":";
    cout << setfill('0') << setw(2) << minut << "\n";
    return 1;
  }

  return 0;
}

int main()
{
  int ncasos;
  double aguja1, aguja2;
  cin >> ncasos;

  for (int i = 0; i < ncasos; ++i)
  {
    cin >> aguja1 >> aguja2;

    if (!solucion(aguja1, aguja2))
    {
      if (!solucion(aguja2, aguja1))
      {
        cout << "ERROR\n";
      }
    }
  }

  return 0;
}
