#include <iostream>
using namespace std;

void printRev(string str, int idx)
{
    if (idx == 0)
    {
        cout << str[idx];
        return;
    }
    cout << str[idx];
    printRev(str, idx - 1);
}
int main()
{
    string str;
    cout << "Type a string: ";
    cin >> str;
    printRev(str, str.length() - 1);

    return 0;
}