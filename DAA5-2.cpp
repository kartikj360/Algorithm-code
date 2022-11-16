// Radix sort Done by Kartik Joshi 3932
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

// Using counting sort
void countsort(int arr[], int size, int place)
{
    int output[size];
    int max = findmax(arr, size);

    // Initialize count arr with all zeros.
    int count[max + 1] = {0};

    // Calculate count of elements
    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    // Calculate cumulative count
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1];

    // Place the elements in sorted order
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

// Function of radix sort
void radixsort(int arr[], int size)
{
    // find max element
    int max = findmax(arr, size);

    // using counting sort to find the place of element
    for (int place = 1; max / place > 0; place *= 10)
        countsort(arr, size, place);
}

// Display the arr
void display(int arr[], int size)
{
    cout << "Array after getting sorted is : ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main code
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
    radixsort(arr, size);
    display(arr, size);
}