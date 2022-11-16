#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
void radix_sort(int arr[], int size);
void count(int arr[], int size, int div);
int counter = 0;
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
    radix_sort(arr, size);

    return 0;
}

void radix_sort(int arr[], int size2)
{
    int largest = 0;

    for (int i = 0; i < size2; i++)
    {
        largest = max(arr[i], arr[i + 1]);
    }
    for (int div = 1; largest / div > 0; div *= 10)
    {
        count(arr, size2, div);
    }
}
void count(int arr[], int size, int div)
{
    int output[size];
    int count1[10] = {0};
    for (int i = 0; i < size; i++)
    {
        count1[(arr[i] / div) % 10]++;
    }
    for (int i = 0; i < 10; i++)
    {
        count1[i] = count1[i] + count1[i - 1];
    }
    for (int i = size - 1; i >= 0; i--)
    {
        output[count1[((arr[i] / div) % 10)] - 1] = arr[i];
        count1[((arr[i]) / div) % 10]--;
    }
    for (int i = 0; i < size; i++)
        cout << output[i] << endl;
}
