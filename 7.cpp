#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int f = 0, l = 0;
    while (n > 2)
    {
        f += 2;
        l = f / 2;
        n -= 2;
    }
    if (n % 2)
        cout << f;
    else
        cout << l;
    return 0;
}