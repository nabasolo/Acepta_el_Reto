#include <iostream>
using namespace std;

int main()
{
    clock_t start, stop;
    start = clock();
    stop = clock();
    cout << "time: " << stop - start;
    return 0;
}
