//Quick sort done by Kartik Joshi 3932

#include <iostream>
using namespace std;
// Prototype function
int findpivt(int, int, int *);

void quicksort(int start, int end, int *arr)
{
    if (start < end)
    {
        cout << "\n";
        for (int i = start; i <= end; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << "start - " << start << " end - " << end << endl;
        int part = findpivt(start, end, arr);
        quicksort(start, part - 1, arr);
        quicksort(part + 1, end, arr);
    }
}

int findpivt(int start, int end, int *arr)
{
    int key = arr[end], temp = 0;

    int i = start - 1, j = start;
    while (j <= end - 1)
    {
        if (arr[j] < key)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }
    temp = arr[i + 1];
    arr[i + 1] = key;
    arr[end] = temp;

    cout << "Pivot element - " << arr[i + 1] << " Pivot pos - " << i + 1;
    return i + 1;
}
int main()
{
    int n = 0;
    cout << "Enter the size  - ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "\nEnter numbers into aaray " << i << " - ";
        cin >> arr[i - 1];
    }

    quicksort(0, n - 1, arr);

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i - 1] << " ";
    }
    return 0;
}
