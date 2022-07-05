#include <iostream>
using namespace std;

int BinarySearchz(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size of the array ";
    cin>>n;
    int arr[n];
    cout<<"Enter matrix ";

    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Element key ";
    cin>>key;
    int ans = BinarySearchz(arr, n, key);
    cout << "Element found at index "<<ans+1 << endl;

    return 0;
}