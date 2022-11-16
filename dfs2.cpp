#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<bool> visited;

void DFS(int src)
{ 
 visited[src]=true;
 cout<<src;

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

    cout<<"Enter the source node";
    cin>>source;
    DFS(source);

    return 0;
}
