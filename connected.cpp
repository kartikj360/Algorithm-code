
#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<bool> visited;

void DFS(int src)
{ 
 visited[src]=true;

//  while(!q.empty())
//  {
    //  src=q.front();
    //  cout<<src;
    //  q.pop_front();

     for(auto x:adj[src])
     {
         if(!visited[x])
         {
             visited[x]=true;
             DFS(x);
             

         }
     }
//  }
 
}
int main(int argc, char const *argv[])
{
    int  count=-1;
    int nodes;
    int edges;
    int source =0;
    cout<<"Enter the no of nodes in the graph";
    cin>>nodes;
    cin>>edges;
    
    cout<<"Enter the adejacnet edge with this edge";
    for(int i=0;i<edges;i++)
    {
        int ed,ver;
        cin>>ed;
        cin>>ver;
        adj[ed].push_back(ver);
        adj[ver].push_back(ed);

    }

    for(int j=0;j<nodes;j++){
if(!visited[j])
     count++;
     DFS(j);
    }
    
    if(count>=1)
    cout<<"Disconnected graph";
    else
    cout<<"Connected graph";

    


    return 0;
}
