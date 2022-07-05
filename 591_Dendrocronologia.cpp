#include <iostream> // std::cout
using namespace std;

int main()
{
    int n, i, j, grosor;

    while (cin >> n)
    {
        for (i = 0, i < n, i++)
        {
            for (j = 0, j < n, j++)
            {
                cin >> grosor;
            }
        }
        cout << resolver(to_string(numero), 0) << "\n";
    }

    return 0;
}
