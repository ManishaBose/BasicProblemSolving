#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c = 0;
    while (n != 0)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
        n--;
    }
    return 0;
}