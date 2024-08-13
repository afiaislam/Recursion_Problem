#include <iostream>
using namespace std;

void towerOfHanoi(int n, string s, string h, string d)
{
    if (n == 1)
    {
        cout << "Transfer disk " << n << " from " << s << " to " << d << endl;
        return;
    }
    towerOfHanoi(n - 1, s, d, h) ;
    cout << "Transfer disk " << n << " from " << s << " to " << d << endl;
    towerOfHanoi(n - 1, h, s, d);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    towerOfHanoi(n, "S", "H", "D");

    return 0;
}