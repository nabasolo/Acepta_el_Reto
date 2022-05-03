#include <iostream>
using namespace std;

int main()
{
    unsigned int ncasos;
    unsigned int resistencia, resistenciaTotal;
    char unidad;
    cin >> ncasos;

    for (unsigned int i = 0; i < ncasos; ++i)
    {
        resistenciaTotal = 0;
        cin >> resistencia;
        while (resistencia != 0)
        {
            cin >> unidad;
            switch (unidad)
            {
            case 'd':
                resistencia = resistencia * 10;
                cin >> unidad;
                break;
            case 'h':
                resistencia = resistencia * 100;
                break;
            case 'k':
                resistencia = resistencia * 1000;
                break;
            case 'M':
                resistencia = resistencia * 1000000;
                break;
            case 'G':
                resistencia = resistencia * 1000000000;
                break;

            default:
                break;
            }

            resistenciaTotal = resistenciaTotal + resistencia;
            cin >> resistencia;
        }

        if (resistenciaTotal % 1000000000 == 0)
        {
            cout << resistenciaTotal / 1000000000 << " G\n";
        }
        else
        {
            if (resistenciaTotal % 1000000 == 0)
            {
                cout << resistenciaTotal / 1000000 << " M\n";
            }
            else
            {
                if (resistenciaTotal % 1000 == 0)
                {
                    cout << resistenciaTotal / 1000 << " k\n";
                }
                else
                {
                    if (resistenciaTotal % 100 == 0)
                    {
                        cout << resistenciaTotal / 100 << " h\n";
                    }
                    else
                    {
                        if (resistenciaTotal % 10 == 0)
                        {
                            cout << resistenciaTotal / 10 << " da\n";
                        }
                        else
                        {
                            cout << resistenciaTotal << " o\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}