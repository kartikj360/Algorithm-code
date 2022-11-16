void Graph():bfs(int s)
{
    bool*visited=   new bool[v];
    for (int i=0;i<v;i++)
    {
        visited[i]=false;

    }
    list <int>queue;
    visited(s)=true;
    queue.push_back(s);

    while(!queue.empty())
    {
        s=queue.front();
        cout<<s;
        queue.pop_front();

        for(i=adj[s].begin();i<adj[s].end(),i++)
        {
            if(!visited[i])
            {
                visited[i]=true;
                queue.push_back(i)
            }
        }

    }


}