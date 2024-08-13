#include <iostream>
using namespace std;

void printFib(int a, int b, int n)
{
    if (n == 0)
    {
        return;
    }
    int c = a + b;
    cout << c << " ";
    printFib(b, c, n - 1);
}
int main()
{
    int n;
    cout << "Enter the length: ";
    cin >> n;
    cout << "The Fibonacci sequence is: ";
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    printFib(a, b, n - 2);

    return 0;
}