#include <bits/stdc++.h>

using namespace std;
int median_sort(int arr[], int top, int last, int k);
int randompartation(int arr[], int top, int last);

int main()
{

    int size;

    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array :  ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    };

    cout << "Your array is :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    };
    cout << endl
         << endl;
    cout << "Enter the K for  Kth minimum element in the array:";
    int k;
    cin >> k;
    int x = median_sort(arr, 0, size - 1, k);
    cout << "The Kth element is  " << x;

    return 0;
}

int median_sort(int arr[], int top, int last, int k)
{
    if (top = last)
    {
        return k;
    }
    else
    {
        int r;
        r = randompartation(arr, top, last);
        int rank = r - last + 1;
        if (k == rank)
            return arr[r];
        else if (k < rank)
            median_sort(arr, top, rank - 1,k);
        else
            median_sort(arr, rank + 1, last,k-rank);
    }
}
