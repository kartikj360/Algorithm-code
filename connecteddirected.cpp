
#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100];
vector<int> adj2[100];
vector<bool> visited;
stack<int> stacked1;
stack<int> stacked2;

void DFS(int src)
{
    visited[src] = true;
    stacked1.push(src);

    //  while(!q.empty())
    //  {
    //  src=q.front();
    //  cout<<src;
    //  q.pop_front();

    for (auto x : adj[src])
    {
        if (!visited[x])
        {
            visited[x] = true;
            DFS(x);
        }
    }
    //  }
}
int main(int argc, char const *argv[])
{
    int count = -1;
    int nodes;
    int edges;
    int source = 0;
    cout << "Enter the no of nodes in the graph";
    cin >> nodes;
    cin >> edges;

    cout << "Enter the adejacnet edge with this edge";
    for (int i = 0; i < edges; i++)
    {
        int ed, ver;
        cin >> ed;
        cin >> ver;
        adj[ver].push_back(ed);
        adj2[ed].push_back(ver);
    }
    
    for (int j = 0; j < nodes; j++)
    {
        if (!visited[j])
            DFS(j);
    }

    stacked2 = stacked1;
    while (!stacked2.empty())
    {
        int i = stacked2.top();
        if (visited[i])
            stacked2.pop();
        else
        {
            i = stacked2.top();
            stacked2.pop();
            DFS(i);
            count++;
        }
    }
    if (count >= 1)
        cout << "Disconnected graph";
    else
        cout << "Connected graph";

    return 0;
}
