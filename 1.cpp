#include <iostream>
using namespace std;
int main()
{
    int turns;
    cin >> turns;
    char c = '1';
    int x = 0, y = 0, num = 10;
    while (turns)
    {
        switch (c)
        {
        case '1':
            x = x + num;
            num += 10;
            c = '2';
            break;
        case '2':
            y = y + num;
            num += 10;
            c = '3';
            break;
        case '3':
            x = x - num;
            num += 10;
            c = '4';
            break;
        case '4':
            y = y - num;
            num += 10;
            c = '5';
            break;
        case '5':
            x = x + num;
            num += 10;
            c = '1';
            break;
        default:
            break;
        }
        turns--;
    }
    cout << x << " " << y;
    return 0;
}
