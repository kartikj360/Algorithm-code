#include<bits/stdc++.h>

using namespace std;

bool sub(int num[],int sum,int n)
{
    int subset[n+1][sum+1];

    for(int i=0;i<=sum;i++)
    subset[i][0]=0;

    for(int i=0;i<=n;i++)
    subset[0][i]=0;

    for(int i=0;i<)


    if(sum==0)
        return true;
    else
    if(n==0)
        return false;



    if(num[n-1]>sum)
     sub(num,sum,n-1);


    return sub(num,sum,n-1) || sub(num,sum-num[n-2],n-1) ;


        

}

int main(int argc, char const *argv[])
{
    cout<<"Enter the sum set size";
    int n,sum=0;
    cin>>n;
    int num[n];
    for(int i=0;i<=n;i++)
     {
         cin>>num[i];

     }
     for(int i=0;i<n;i++)
     {
         cout<<num[i]<<endl;
     }
     cout<<"Enter the sum to be made";
     cin>>sum;
     bool flag=sub(num,sum,n);
     if(flag)
     {
         cout<<"true";

     }
     else
     {
         cout<<"Subset not exist";

     }
    return 0;
}
