#include <iostream>
using namespace std;

void printNum(int n, int a)
{
    if (a == n + 1)
    {
        return;
    }
    cout << a << " ";
    printNum(n, a + 1);
}
int main()
{
    int n;
    cout << "Enter a value of N: " ;
    cin >> n;
    int a = 1;
    printNum(n, a);

    return 0;
}