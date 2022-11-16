#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void heap_sort(int arr2[], int size2);

void heapify(int arr3[], int size3, int i3);

int count = 0;

int main()
{

    int size;	 cout << "Enter the size of the array : ";	cin >> size;
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

    heap_sort(arr, size);

    return 0;
}

void heap_sort(int arr2[], int size2)
{
    vector<int> sorted;
    for (int i = (size2 / 2); i >= 0; i--)
    {
        heapify(arr2, (size2), i);
    }

    for (int i = (size2 - 1); i >= 0; i--)
    {
        swap(arr2[i], arr2[0]);
        sorted.push_back(arr2[i]);

        heapify(arr2, i, 0);
    }

    cout << "The resulted array is: ";
    for (int z = 0; z < size2; z++)
    {
        cout << sorted[z];
    }
}

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = i * 2 + 1;
    int right = (i * 2) + 2;
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
        count++;
    }
    if (right < size && arr[right] > arr[largest])
    {
        largest = right;
        count++;
    }
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}