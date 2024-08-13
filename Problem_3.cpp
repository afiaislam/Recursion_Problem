#include <iostream>
using namespace std;

void printSum(int i, int n, int sum)
{

    if (i == n)
    {
        sum += i;
        cout << sum;
        return;
    }
    sum += i;
    printSum(i + 1, n, sum);
}

int main()
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    printSum(1, n, 0);

    return 0;
}