#include<bits/stdc++.h>

using namespace std;

void countsort(int ar[],int size)
{
    int maxs=*max_element(ar,ar+size);
    vector<int>count(maxs+1,0);
    int result[size];

    for(int i=0;i<size;i++)
    {  
      count[ar[i]]++;
    }
     for(int i=0;i<=maxs;i++)
    {  
      count[i]+=count[i-1];
    }
    int x;
    for(int z=size-1;z<=0;z--)
    {
        x=count[ar[z]]-1;
        result[x]=ar[z];
    }
    for(int i=0;i<size;i++)
    {
        cout<<result[i]<<endl;
    }

}
int main(int argc, char const *argv[])
{
    
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    // vector<int> arr {5,4,3,21,1};
    int arr[size];
    cout<<"Enter the values into the array";
    int x;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    countsort(arr,size);
    for(int i=0;i<sizeof(arr);i++)
     {
         cout<<arr[i];
     }  
    return 0;
}
