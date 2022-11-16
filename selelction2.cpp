
#include<bits/stdc++.h>
using namespace std;

void selectsort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            
            if(arr[j]<arr[min])
            {
                min=j;
            }
            
        }
       swap(arr[min],arr[i]);

    }

 for(int i =0;i<n;i++)
    {
        cout<<arr[i];


    }   
}


int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    cout<<"Enter the values in the values";

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];


    }

    selectsort(arr,n);

    return 0;
}
