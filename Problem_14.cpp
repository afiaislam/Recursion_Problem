#include <iostream>
using namespace std;

void subsequence(string str, int idx, string newstr)
{
    if (idx == str.length())
    {
        cout << newstr<<endl;
        return;
    }
    char currchar = str[idx];
    subsequence(str, idx + 1, newstr + currchar);
    subsequence(str, idx + 1, newstr);
}
int main()
{
    string str = "abc";
    subsequence(str, 0, "");

    return 0;
}
