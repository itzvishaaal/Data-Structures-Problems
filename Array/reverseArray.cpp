/*

* reverse an array or string
* Time Complexity : O(n)

*/
#include <stdlib.h>
#include <iostream>
using namespace std;

void reverseArray(int arr[], int len)
{
    int start = 0, end = len - 1;
    for (int i = start; i < end; i++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }
}

void printArrray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    reverseArray(arr, len);
    printArrray(arr, len);
    return 0;
}
