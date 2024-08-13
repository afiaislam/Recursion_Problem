#include <iostream>
using namespace std;

void printNum(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNum(n - 1);
}
int main()
{
    int n;
    cout << "Enter a value of N: ";
    cin >> n;
    printNum(n);

    return 0;
}