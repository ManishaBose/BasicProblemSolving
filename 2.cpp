#include <iostream>
using namespace std;
int main()
{
    string s;
    int a;
    int num = 0;
    int power = 0;
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        switch (s[i])
        {
        case 'A':
            a = 10;
            break;
        case 'B':
            a = 11;
            break;
        case 'C':
            a = 12;
            break;
        case 'D':
            a = 13;
            break;
        case 'E':
            a = 14;
            break;
        case 'F':
            a = 15;
            break;
        case 'G':
            a = 16;
            break;
        default:
            a = s[i] - '0';
        }

        num += a * pow(17, power++);
    }
    cout << num;
}