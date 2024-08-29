#include <iostream>
using namespace std;
int main()
{
    char a[6], b[6], c[6];
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (tolower(a[i]) == 'a' || tolower(a[i]) == 'e' || tolower(a[i]) == 'i' || tolower(a[i]) == 'o' || tolower(a[i]) == 'u')
            a[i] = '*';
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (tolower(b[i]) == 'b' || tolower(b[i]) == 'c' || tolower(b[i]) == 'd' || tolower(b[i]) == 'f' || tolower(b[i]) == 'g' || tolower(b[i]) == 'h' || tolower(b[i]) == 'j' || tolower(b[i]) == 'k' || tolower(b[i]) == 'l' || tolower(b[i]) == 'm' || tolower(b[i]) == 'n' || tolower(b[i]) == 'p' || tolower(b[i]) == 'q' || tolower(b[i]) == 'r' || tolower(b[i]) == 's' || tolower(b[i]) == 't' || tolower(b[i]) == 'v' || tolower(b[i]) == 'w' || tolower(b[i]) == 'x' || tolower(b[i]) == 'y' || tolower(b[i]) == 'z')
            b[i] = '@';
    }
    for (int i = 0; c[i] != '\0'; i++)
    {
        c[i] = toupper(c[i]);
    }
    cout << a;
    cout << b;
    cout << c;
    return 0;
}