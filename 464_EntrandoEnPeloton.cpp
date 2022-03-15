#include <iostream>
using namespace std;

int main()
{
    unsigned int corredores;
    int i;
    char tiempo[256];

    cin >> corredores;

    for (i = 0; i < corredores; i++)
    {
        cin.getline(tiempo, 256);
        cout << tiempo[0] << tiempo[1] << ", suma: " << tiempo[0] + tiempo[1] << endl;
    }

    cout << "---\n";

    return 0;
}