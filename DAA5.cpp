//Counting sort done by Kartik Joshi 3932
#include <iostream>
using namespace std;

// To find the largest value in arr.
int findmax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countsort(int arr[], int size)
{
    int temp[size];
    int max = findmax(arr, size);

    // put zero for default
    int count[max + 1] = {0};

    // to store count
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    // storing cumalative
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }
    // putting elements in temp arr
    for (int i = size - 1; i >= 0; i--)
    {
        temp[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    // sorted to original array
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

// to display
void dispaly(int arr[], int size)
{
    cout << "Array after getting sorted is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// main code
int main()
{
    int size;
    cout << "Enter the size : ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements into the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    countsort(arr, size);
    dispaly(arr, size);
    return 0;
}
