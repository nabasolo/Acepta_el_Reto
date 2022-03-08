#include <iostream>
using namespace std;

int main()
{
    int muestras, i;
    unsigned long int indicador, indicadorMax;
    cin >> muestras;

    while (muestras != 0)
    {
        indicadorMax = 0;
        for (i = 0; i < muestras; i++)
        {

            cin >> indicador;
            if (indicador <= indicadorMax)
            {
                cout << "NO\n";
                cin.ignore(muestras - (i + 1));
                break;
            }
            else
            {
                indicadorMax = indicador;
            }
        }
        cout << "SI\n";
        cin >> muestras;
    }
    return 0;
}
