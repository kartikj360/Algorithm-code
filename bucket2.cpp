#include <bits/stdc++.h>

using namespace std;

void bucketsort(float ar[], int n)
{
    int x;
    vector<int> bucket[n];
    vector<float> temp;
    for (int i = 0; i < n; i++)
    {
        x = n * ar[i];
        bucket[x].push_back(ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        int j;
        while (j<bucket[i].size())
        {
            temp.push_back(bucket[i][j]);
            j++;
            
        }
    }
    for (int z = 0; z < temp.size(); z++)
    {
        cout << temp[z];
    }
}
int main(int argc, char const *argv[])
{
    int size;
    cout << "Enter the size of array";
    cin >> size;
    float arr[size];
    cout << "Enter the values into the array";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    bucketsort(arr, size);

    return 0;
}
