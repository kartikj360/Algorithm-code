#include <bits/stdc++.h>

using namespace std;
void insertion_sort(int arr2[], int size2);
void bucket_sort(float arr[],int n);

int main()
{

    int size;
    float arr[size];
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

    bucket_sort(arr, size);

    return 0;
}
void bucket_sort(float arr[],int n)
{
    vector<float>k;
    vector<float>b[n];
    for(int i=0;i<n;i++)
    {
        int bi=n*arr[i];
        b[bi].push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sort(b[i].begin(),b[i].end());
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<b[i].size();j++)
        {
            k.push_back(b[i][j]);
        }
    }
    
    for(int i=0;i<k.size();i++)
    {
        cout<<k[i];
    }
}
