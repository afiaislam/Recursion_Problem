#include <iostream>
using namespace std;

static bool chr[26];

void removeDup(string str, int idx, string newstr)
{
    if (idx == str.length())
    {
        cout << newstr;
        return;
    }
    char currchar = str[idx];
    if (chr[currchar - 'a'])
    {
        removeDup(str, idx + 1, newstr);
    }
    else
    {
        newstr += currchar;
        chr[currchar - 'a'] = true;
        removeDup(str, idx + 1, newstr);
    }
}
int main()
{
    string str = "abccdaaheedf";
    removeDup(str, 0, "");

    return 0;
}
