#include <iostream>
using namespace std;

int calcFact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int fact_nm1 = calcFact(n - 1);
    int fact_n = n * fact_nm1;
    return fact_n;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = calcFact(n);
    cout << "The factorial of " << n << " is: " << ans;

    return 0;
}