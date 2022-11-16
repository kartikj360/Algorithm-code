#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
void insertion_sort(int arr2[], int size2);
int main()
{

    int size;
    int arr[size];
    cout << "Enter the size of the array : ";
    cin >> size;
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

    insertion_sort(arr, size);

    return 0;
}
void insertion_sort(int arr2[], int size2)
{

    int key;
    int j,comp=0;
    for (int i = 1; i < size2; i++)
    {
        j = i - 1;
        key = arr2[i];
        while (j >= 0)
        { 
        comp++;
            if(key < arr2[j]){
            	
            arr2[j+1] = arr2[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr2[j+1] = key;
    }
    cout<<"  \n";
    
    for (int i = 0; i < size2; i++)
    {
        cout << arr2[i]<<endl;
    }
    cout<<"no . of comparisons :- "<<comp;
}
