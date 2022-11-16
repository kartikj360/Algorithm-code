
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        bool swaped=false;
        for(j=0;j<n-i-1;j++)
        {
            
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
            
        }
        if(swaped)
        break;
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

    bubblesort(arr,n);

    return 0;
}
