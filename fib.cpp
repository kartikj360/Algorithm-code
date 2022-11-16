#include<bits/stdc++.h>

using namespace std;

void fab(int tab[],int n){
    
    tab[0]=0;
    tab[1]=1;

    
    for(int i=2;i<=n;i++)
    {

       tab[i]=tab[i-1]+tab[i-2];


    }

    
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter nth till fib series is required";
    cin>>n;
    int tab[n];
    for(int i=0;i<=n;i++){
        tab[i]=-1;
    }
    /* code */
    fab(tab,n);
    for(int i=0;i<=n;i++)
    {
        cout<<tab[i];    }
    return 0;
}
