#include <iostream>
using namespace std;

int main()
{
    int muestras, i;
    unsigned long int indicador, indicadorMax;
    string line, saleDeCrisis;
    cin >> muestras;

    while (muestras != 0)
    {
        saleDeCrisis = "SI\n";
        indicadorMax = 0;
        for (i = 0; i < muestras; i++)
        {

            cin >> indicador;
            if (indicador <= indicadorMax)
            {
                saleDeCrisis = "NO\n";
                getline(cin, line);
                break;
            }
            else
            {
                indicadorMax = indicador;
            }
        }
        cout << saleDeCrisis;
        cin >> muestras;
    }
    return 0;
}
