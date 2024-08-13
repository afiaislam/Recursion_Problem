#include <iostream>
using namespace std;

void moveX(string str, int idx, int count, string newstr)
{
    if (idx == str.length())
    {
        for (int i = 0; i < count; i++)
        {
            newstr += 'x';
        }
        cout << newstr;
        return;
    }
    char currchar = str[idx];
    if (currchar == 'X' || currchar == 'x')
    {
        count++;
    }
    else
    {
        newstr += currchar;
    }
    moveX(str, idx + 1, count, newstr);
}
int main()
{
    string str = "axbcxxduxw";
    moveX(str, 0, 0, " ");

    return 0;
}
