#include <iostream>
using namespace std;
int main()
{
    int n, pos = 3;
    cin >> n;
    int oddseries = 1, evenseries = 1;
    while (pos <= n)
    {
        if (pos % 2 != 0)
            evenseries *= 2;
        else
            oddseries *= 3;
        pos++;
    }
    if (n % 2 != 0)
        cout << evenseries;
    else
        cout << oddseries;
    return 0;
}