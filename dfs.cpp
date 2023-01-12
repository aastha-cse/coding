//dfs

#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &ans)
{
    ans.push_back(node);
    vis[node]=1;
    for(auto it: adj[node])
    {
        if(!vis[it])
        dfs(it,vis,adj,ans);
    }
}
vector<int> trav(int n,vector<int> adj[])
{
    vector<int> ans;
    vector<int> vis(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i,vis,adj,ans);
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> ans=trav(n,adj);
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
    return 0;
}
