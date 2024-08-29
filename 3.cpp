#include <iostream>
using namespace std;
int main()
{
    long long int num;
    cin >> num;
    int pos = 1;
    int odd = 0, even = 0;
    while (num != 0)
    {
        if (pos % 2 != 0)
            odd += num % 10;
        else
            even += num % 10;
        pos++;
        num /= 10;
    }
    cout << abs(odd - even);
    return 0;
}