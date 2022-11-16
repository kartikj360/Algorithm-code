#include <bits/stdc++.h>

using namespace std;

int knapsack(int wt[], int w, int v[], int n)
{
    vector<vector<int> > k(n + 1, vector<int>(w + 1));
    for (int i = 0; i <= n; i++)
    {
        for (int z = 0; z <= w; z++)
        {
            if (i == 0 || z == 0)
            {
                k[i][z] = 0;
                //  if(w==0||n==0)
                //  return 0;
            }
            else if (wt[i - 1] <= z) //  if(wt[n-1]>w)
            {
                k[i][z] = max(v[i - 1] + k[i - 1][z - wt[i - 1]], k[i - 1][z]);
                //  return max(v[n-1]+knapsack(wt,w-wt[n-1],v,n-1),knapsack(wt,w,v,n-2));
            }
            else //  else
            {
                k[i][z] = k[i - 1][z];
                //  return knapsack(wt,w,v,n-1);
            }
           
        }
    }
    return k[n][w];
}

int main(int argc, char const *argv[])
{
    int n;
    int w;
    cout << "enter the size of the array";
    cin >> n;
    cout << "Enter the weigth of the array";
    cin >> w;
    int v[n];
    int wt[n];
    cout << "Enter the value and weight one by one of each element ";
    for (int i = 0; i < n; i++)
    {
        cout << "enter " << i << "value : ";
        cin >> v[i];
        cout << "enter" << i << "weight";
        cin >> wt[i];
    }

    cout << knapsack(wt, w, v, n);
    return 0;
}
