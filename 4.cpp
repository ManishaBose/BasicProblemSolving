#include <iostream>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    if (word == "break" || word == " case" || word == "continue" || word == "default" || word == "defer" || word == "else" || word == "for" || word == "func" || word == "goto" || word == "if" || word == "map" || word == "range" || word == "return" || word == "struct" ||
        word == "type" || word == "var")
        cout << word << " is a keyword";
    else
        cout << word << " is not a keyword";
    return 0;
}