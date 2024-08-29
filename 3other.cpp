#include <iostream>
using namespace std;
int main()
{
    char num[100];
    cin >> num;
    int pos = 1, odd = 0, even = 0;
    for (int i = strlen(num) - 1; i >= 0; i--)
    {
        if (pos % 2 != 0)
            odd += num[i] - '0';
        else
            even += num[i] - '0';
        pos++;
    }
    cout << abs(odd - even);
    return 0;
}