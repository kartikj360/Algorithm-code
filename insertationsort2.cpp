
#include<bits/stdc++.h>
using namespace std;

void insertsort(int arr[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    { 
        j=i-1;
        int curr=arr[i];
        while(j>=0 && arr[j]>curr)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;

    
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

    insertsort(arr,n);

    return 0;
}
