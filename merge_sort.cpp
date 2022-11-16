#include <iostream>
#include <stdio.h>
#include <vector>
int count =0;
using namespace std;
void merge(int arr3[],int f3,int mid3,int l3);
void divide(int arr2[],int f2,int l2);


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
        cout << arr[i]<<endl<<endl;
    };

    divide(arr,0,size-1);
    
    cout<<"Final result :";
    
    
    
    for(int z=0;z<size;z++)
    {
        
	    cout<<arr[z]<<endl<<endl;
    
    }
    
    cout<<"No. of comp: ";
    cout<<count;
    
    return 0;
}

void merge(int arr3[],int f3,int mid3,int l3)
{
    int merge[l3+f3];
    int i1=f3;
    int i2=mid3+1;
    int x=0;

    while(i1<=mid3 && i2<=l3)
    {
        count++;
        if(arr3[i1]<=arr3[i2])
        merge[x++]=arr3[i1++];
        else
        merge[x++]=arr3[i2++];
    }
    if(i1>mid3){
    while(i1<=l3)
    {
     merge[x++]=arr3[i1++];

    }
}
else{
    while(i2<=mid3)
    {
        merge[x++]=arr3[i2++];
    }
}
    for(int z=0;z<=(l3-f3+1);z++)
    {
        arr3[z]=merge[z];
    }

   

}


void divide(int arr2[],int f2,int l2)
{
if(f2>=l2){
    return ;
}

int mid=(f2+l2)/2;
divide(arr2,f2,mid);
divide(arr2,mid+1,l2);
merge(arr2,f2,mid,l2);
}
