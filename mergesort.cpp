#include<bits/stdc++.h>

using namespace std;
void merge(vector<int>arr,int low,int middle,int high)
{
    vector<int>result;
    int i=0,i2=middle+1;
    while(i<=middle && i2<high)
    {
        if(arr[i]>arr[i2])
        {
            result.push_back(arr[i2]);
            i2++;
        }
        else{
            result.push_back(arr[i]);
            i++;
        }
    }
    while(i<middle){
        result.push_back(arr[i]);
        i++;


    }
    while(i2<high){
        result.push_back(arr[i]);
        i2++;

    }    
}
void mergesort(vector<int>ar,int start,int end)
{
    if(start>end){
        return;
    }
    else
    {
    int mid=(start+end)/2;
    mergesort(ar,start,mid);
    mergesort(ar,mid+1,end);
    merge(ar,start,mid,end);
    }
}
int main(int argc, char const *argv[])
{
    int size;
    // cout<<"Enter the size of array";
    // cin>>size;
    vector<int> arr {5,4,3,21,1};
    // cout<<"Enter the values into the array";
    // int x;
    // for(int i=0;i<size;i++)
    // {
    //     cin>>x;
    //     arr.push_back(x);
    // }
    mergesort(arr,0,4);
    for(int i=0;i<arr.size();i++)
     {
         cout<<arr[i];
     }  
    return 0;
}
