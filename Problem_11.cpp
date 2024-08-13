#include <iostream>
using namespace std;

bool isSorted(int arr[], int idx, int size)
{
    if (idx == arr[size - 1])
    {
        return true;
    }
    if (arr[idx] < arr[idx + 1])
    {
        return isSorted(arr, idx + 1, size);
    }
    else
    {
        return false;
    }
}
int main()
{
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Is the array is sorted? " << endl;
    cout << isSorted(arr, 0, size);

    return 0;
}