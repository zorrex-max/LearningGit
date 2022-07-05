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
    int even_arr[6] = {2, 4, 6, 8, 10, 12};
    int odd_arr[7] = {1, 3, 5, 7, 9, 11, 13};

    int ans = BinarySearchz(even_arr, 6, 8);
    cout << ans << endl;

    int ans2 = BinarySearchz(odd_arr, 7, 9);
    cout << ans2 << endl;

    return 0;
}