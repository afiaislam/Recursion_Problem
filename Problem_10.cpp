#include <iostream>
using namespace std;
static int first = -1;
static int last = -1;

void findOccurance(string str, int idx, char element)
{
    if (idx == str.length())
    {
        cout << first << " ";
        cout << last;
        return;
    }
    char currchar = str[idx];
    if (currchar == element)
    {
        if (first == -1)
        {
            first = idx;
        }
        else
        {
            last = idx;
        }
    }
    findOccurance(str, idx + 1, element);
}
int main()
{
    string str;
    cout << "Type a string: ";
    cin >> str;
    char element;
    cout << "Enter a character: ";
    cin >> element;
    findOccurance(str, 0, element);

    return 0;
}