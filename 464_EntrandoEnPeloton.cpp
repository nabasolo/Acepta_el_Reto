#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main()
{
    unsigned int nCorredores, hh, mm, ss, i, segundos;
    char dosPuntos;
    vector<tuple<unsigned int, unsigned int>> corredores;

    while (cin >> nCorredores)
    {
        for (i = 0; i < nCorredores; i++)
        {
            cin >> hh >> dosPuntos >> mm >> dosPuntos >> ss;
            segundos = hh * 3600 + mm * 60 + ss;
            corredores.push_back(tuple<unsigned int, unsigned int>(i, segundos));
        }

        cout << "---\n";
    }

    return 0;
}