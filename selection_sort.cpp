#include <bits/stdc++.h>

using namespace std;
void selection_sort(int arr[],int size);

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
        cout << arr[i]<<endl;
    };
   cout<<endl<<endl;
    selection_sort(arr, size);

    return 0;
}

void selection_sort(int arr[],int size)
{
    int min=0;
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
           if(arr[min]>arr[j])
           min=j;
        }
        swap(arr[min],arr[i]);

    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}